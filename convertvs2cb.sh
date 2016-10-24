
install4cbfromvs()
{

project_vs="$1.vcxproj"
project_cbp="$1.cbp"
project_cbp_temp="$1"
project_cbp_temp_file=""
cbp_begin=0
cbp_end=0
#"" ".cbp.temp"
#cat NFComm/NFCore/NFCore.cbp | awk 'BEGIN{ print "Start" } {for(i=0;i<NF;i++) {printf $0; printf "\n"  }} END{print cbp_begin}'
#cat NFComm/NFCore/NFCore.cbp | awk 'BEGIN{} {cbp_begin=NR; printf $1; printf "\n" } END{print cbp_begin}'
cat $project_cbp | awk 'BEGIN{}
{
    project_cbp_temp_file= "'$project_cbp_temp'" ""  ".cbp.temp";

    if($1=="<Unit") 
    {
        if (cbp_begin<=0)
        {
            cbp_begin=NR;
        }
    }
    else
    {
        if (cbp_begin>0 && cbp_end<=0)
        {
            cbp_end=NR; 
        }
    }

    if (cbp_begin<=0)
    {
        print $0 > project_cbp_temp_file
    }
} 
END{
}'

#var_line=“<Unit filename=” + substr($0, 19, length($0) - 19);
#cat NFComm/NFCore/NFCore.vcxproj | awk 'BEGIN{} { print $0 >> "1.log"} END{}'
cat $project_vs | awk 'BEGIN{} 
{ 
    project_cbp_temp_file= "'$project_cbp_temp'" ""  ".cbp.temp";
    if($1=="<ClInclude" || $1=="<ClCompile") 
    {
        info=$0;
        
        start=index(info, "=");
        data="<Unit filename" "" substr(info, start, length($0) - start + 1);
        print data >> project_cbp_temp_file
    }
} END{}'

cat $project_cbp | awk 'BEGIN{}
{
    project_cbp_temp_file= "'$project_cbp_temp'" ""  ".cbp.temp";
    if($1=="<Unit") 
    {
        if (cbp_begin<=0)
        {
            cbp_begin=NR;
        }
    }
    else
    {
        if (cbp_begin>0 && cbp_end<=0)
        {
            cbp_end=NR; 
        }
    }

    if (cbp_end>0 && NR>=cbp_end)
    {
        print $0 >> project_cbp_temp_file
    }
} 
END{
}'

project_cbp_old="$1.cbp.old"
project_cbp_temp_file="$1.cbp.temp"

rm -f $project_cbp_old
mv $project_cbp $project_cbp_old
mv $project_cbp_temp_file $project_cbp

echo "Converted file: $project_vs to $project_cbp !!"

}


array_name=(
FComm/NFCore/NFCore
FComm/NFKernelPlugin/NFKernelPlugin
FComm/NFConfigPlugin/NFConfigPlugin
FComm/NFLogPlugin/NFLogPlugin
FComm/NFMessageDefine/NFMessageDefine
FComm/NFNet/NFNet
FComm/NFPluginLoader/NFPluginLoader
FServer/NFGameServerNet_ClientPlugin/NFGameServerNet_ClientPlugin
FServer/NFGameServerNet_ServerPlugin/NFGameServerNet_ServerPlugin
FServer/NFGameServerPlugin/NFGameServerPlugin
FServer/NFLoginNet_ClientPlugin/NFLoginNet_ClientPlugin
FServer/NFLoginNet_ServerPlugin/NFLoginNet_ServerPlugin
FServer/NFMasterNet_ServerPlugin/NFMasterNet_ServerPlugin
FServer/NFMasterServerPlugin/NFMasterServerPlugin
FServer/NFProxyLogicPlugin/NFProxyLogicPlugin
NFServer/NFProxyServerNet_ClientPlugin/NFProxyServerNet_ClientPlugin
NFServer/NFProxyServerNet_ServerPlugin/NFProxyServerNet_ServerPlugin
NFServer/NFWorldLogicPlugin/NFWorldLogicPlugin
NFServer/NFWorldNet_ClientPlugin/NFWorldNet_ClientPlugin
NFServer/NFWorldNet_ServerPlugin/NFWorldNet_ServerPlugin
NFTools/NFFileProcess/NFFileProcess
)


array_index=0
array_step=1
for data in ${array_name[@]}  
do
    #echo ${array_name[$array_index]}

    install4cbfromvs ${array_name[$array_index]}

    array_index=`expr $array_index + $array_step`
    
done 
