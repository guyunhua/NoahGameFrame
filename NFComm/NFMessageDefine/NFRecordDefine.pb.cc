// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: NFRecordDefine.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "NFRecordDefine.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace NFMsg {

namespace {

const ::google::protobuf::EnumDescriptor* BuildingList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* BuildingProduce_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GuildBoss_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GuildMemberList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GuildEvent_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GuildHouse_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* GuildSkill_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* PosList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* PlayerViewItem_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* CommPropertyValue_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* BagItemList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* EctypeList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* DropItemList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* SkillTable_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* TaskMonsterList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* TaskList_RecordColType_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* PVPList_RecordColType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_NFRecordDefine_2eproto() {
  protobuf_AddDesc_NFRecordDefine_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "NFRecordDefine.proto");
  GOOGLE_CHECK(file != NULL);
  BuildingList_RecordColType_descriptor_ = file->enum_type(0);
  BuildingProduce_RecordColType_descriptor_ = file->enum_type(1);
  GuildBoss_RecordColType_descriptor_ = file->enum_type(2);
  GuildMemberList_RecordColType_descriptor_ = file->enum_type(3);
  GuildEvent_RecordColType_descriptor_ = file->enum_type(4);
  GuildHouse_RecordColType_descriptor_ = file->enum_type(5);
  GuildSkill_RecordColType_descriptor_ = file->enum_type(6);
  PosList_RecordColType_descriptor_ = file->enum_type(7);
  PlayerViewItem_RecordColType_descriptor_ = file->enum_type(8);
  CommPropertyValue_RecordColType_descriptor_ = file->enum_type(9);
  BagItemList_RecordColType_descriptor_ = file->enum_type(10);
  EctypeList_RecordColType_descriptor_ = file->enum_type(11);
  DropItemList_RecordColType_descriptor_ = file->enum_type(12);
  SkillTable_RecordColType_descriptor_ = file->enum_type(13);
  TaskMonsterList_RecordColType_descriptor_ = file->enum_type(14);
  TaskList_RecordColType_descriptor_ = file->enum_type(15);
  PVPList_RecordColType_descriptor_ = file->enum_type(16);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_NFRecordDefine_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
}

}  // namespace

void protobuf_ShutdownFile_NFRecordDefine_2eproto() {
}

void protobuf_AddDesc_NFRecordDefine_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\024NFRecordDefine.proto\022\005NFMsg*\365\001\n\032Buildi"
    "ngList_RecordColType\022\033\n\027BuildingList_Bui"
    "ldingID\020\000\022\035\n\031BuildingList_BuildingGUID\020\001"
    "\022\026\n\022BuildingList_State\020\002\022\025\n\021BuildingList"
    "_PosX\020\003\022\025\n\021BuildingList_PosY\020\004\022\025\n\021Buildi"
    "ngList_PosZ\020\005\022\037\n\033BuildingList_StateStart"
    "Time\020\006\022\035\n\031BuildingList_StateEndTime\020\007*\275\001"
    "\n\035BuildingProduce_RecordColType\022 \n\034Build"
    "ingProduce_BuildingGUID\020\000\022\032\n\026BuildingPro"
    "duce_ItemID\020\001\022\035\n\031BuildingProduce_LeftCou"
    "nt\020\002\022\034\n\030BuildingProduce_OnceTime\020\003\022!\n\035Bu"
    "ildingProduce_OnceStartTime\020\004*\300\001\n\027GuildB"
    "oss_RecordColType\022\022\n\016GuildBoss_GUID\020\000\022\022\n"
    "\016GuildBoss_Name\020\001\022\023\n\017GuildBoss_Level\020\002\022\021"
    "\n\rGuildBoss_Job\020\003\022\026\n\022GuildBoss_Donation\020"
    "\004\022\021\n\rGuildBoss_VIP\020\005\022\025\n\021GuildBoss_Offlin"
    "e\020\006\022\023\n\017GuildBoss_Power\020\007*\221\002\n\035GuildMember"
    "List_RecordColType\022\030\n\024GuildMemberList_GU"
    "ID\020\000\022\030\n\024GuildMemberList_Name\020\001\022\031\n\025GuildM"
    "emberList_Level\020\002\022\027\n\023GuildMemberList_Job"
    "\020\003\022\034\n\030GuildMemberList_Donation\020\004\022\027\n\023Guil"
    "dMemberList_VIP\020\005\022\033\n\027GuildMemberList_Off"
    "line\020\006\022\031\n\025GuildMemberList_Power\020\007\022\031\n\025Gui"
    "ldMemberList_Title\020\010*\311\001\n\030GuildEvent_Reco"
    "rdColType\022\023\n\017GuildEvent_GUID\020\000\022\023\n\017GuildE"
    "vent_Name\020\001\022\024\n\020GuildEvent_Level\020\002\022\022\n\016Gui"
    "ldEvent_Job\020\003\022\027\n\023GuildEvent_Donation\020\004\022\022"
    "\n\016GuildEvent_VIP\020\005\022\026\n\022GuildEvent_Offline"
    "\020\006\022\024\n\020GuildEvent_Power\020\007*\311\001\n\030GuildHouse_"
    "RecordColType\022\023\n\017GuildHouse_GUID\020\000\022\023\n\017Gu"
    "ildHouse_Name\020\001\022\024\n\020GuildHouse_Level\020\002\022\022\n"
    "\016GuildHouse_Job\020\003\022\027\n\023GuildHouse_Donation"
    "\020\004\022\022\n\016GuildHouse_VIP\020\005\022\026\n\022GuildHouse_Off"
    "line\020\006\022\024\n\020GuildHouse_Power\020\007*\311\001\n\030GuildSk"
    "ill_RecordColType\022\023\n\017GuildSkill_GUID\020\000\022\023"
    "\n\017GuildSkill_Name\020\001\022\024\n\020GuildSkill_Level\020"
    "\002\022\022\n\016GuildSkill_Job\020\003\022\027\n\023GuildSkill_Dona"
    "tion\020\004\022\022\n\016GuildSkill_VIP\020\005\022\026\n\022GuildSkill"
    "_Offline\020\006\022\024\n\020GuildSkill_Power\020\007*Z\n\025PosL"
    "ist_RecordColType\022\r\n\tPosList_X\020\000\022\r\n\tPosL"
    "ist_Y\020\001\022\r\n\tPosList_Z\020\002\022\024\n\020PosList_StayTi"
    "me\020\003*\236\001\n\034PlayerViewItem_RecordColType\022\033\n"
    "\027PlayerViewItem_ConfigID\020\000\022\037\n\033PlayerView"
    "Item_EnhanceLevel\020\001\022\035\n\031PlayerViewItem_In"
    "layStone\020\002\022!\n\035PlayerViewItem_SagecraftLe"
    "vel\020\003*\253\006\n\037CommPropertyValue_RecordColTyp"
    "e\022\033\n\027CommPropertyValue_MAXHP\020\000\022\033\n\027CommPr"
    "opertyValue_MAXMP\020\001\022\033\n\027CommPropertyValue"
    "_MAXSP\020\002\022\035\n\031CommPropertyValue_HPREGEN\020\003\022"
    "\035\n\031CommPropertyValue_SPREGEN\020\004\022\035\n\031CommPr"
    "opertyValue_MPREGEN\020\005\022\037\n\033CommPropertyVal"
    "ue_ATK_VALUE\020\006\022\037\n\033CommPropertyValue_DEF_"
    "VALUE\020\007\022 \n\034CommPropertyValue_MOVE_SPEED\020"
    "\010\022\037\n\033CommPropertyValue_ATK_SPEED\020\t\022\036\n\032Co"
    "mmPropertyValue_ATK_FIRE\020\n\022\037\n\033CommProper"
    "tyValue_ATK_LIGHT\020\013\022\035\n\031CommPropertyValue"
    "_ATK_ICE\020\014\022 \n\034CommPropertyValue_ATK_POIS"
    "ON\020\r\022\036\n\032CommPropertyValue_DEF_FIRE\020\016\022\037\n\033"
    "CommPropertyValue_DEF_LIGHT\020\017\022\035\n\031CommPro"
    "pertyValue_DEF_ICE\020\020\022 \n\034CommPropertyValu"
    "e_DEF_POISON\020\021\022 \n\034CommPropertyValue_DIZZ"
    "Y_GATE\020\022\022\037\n\033CommPropertyValue_MOVE_GATE\020"
    "\023\022 \n\034CommPropertyValue_SKILL_GATE\020\024\022#\n\037C"
    "ommPropertyValue_PHYSICAL_GATE\020\025\022 \n\034Comm"
    "PropertyValue_MAGIC_GATE\020\026\022\037\n\033CommProper"
    "tyValue_BUFF_GATE\020\027*\224\004\n\031BagItemList_Reco"
    "rdColType\022\024\n\020BagItemList_GUID\020\000\022\030\n\024BagIt"
    "emList_ConfigID\020\001\022\031\n\025BagItemList_ItemCou"
    "nt\020\002\022\025\n\021BagItemList_Bound\020\003\022\033\n\027BagItemLi"
    "st_ExpiredType\020\004\022\031\n\025BagItemList_SlotCoun"
    "t\020\005\022\033\n\027BagItemList_InlayStone1\020\006\022\033\n\027BagI"
    "temList_InlayStone2\020\007\022\033\n\027BagItemList_Inl"
    "ayStone3\020\010\022\033\n\027BagItemList_InlayStone4\020\t\022"
    "\033\n\027BagItemList_InlayStone5\020\n\022\033\n\027BagItemL"
    "ist_InlayStone6\020\013\022\035\n\031BagItemList_Enhance"
    "dLevel\020\014\022\036\n\032BagItemList_SagecraftLevel\020\r"
    "\022\036\n\032BagItemList_SagecraftStone\020\016\022\034\n\030BagI"
    "temList_RandProperty\020\017\022\024\n\020BagItemList_Da"
    "te\020\020\022\034\n\030BagItemList_BaseProperty\020\021*_\n\030Ec"
    "typeList_RecordColType\022\027\n\023EctypeList_Ect"
    "ypeID\020\000\022\025\n\021EctypeList_IsPass\020\001\022\023\n\017Ectype"
    "List_Star\020\002*\211\001\n\032DropItemList_RecordColTy"
    "pe\022\032\n\026DropItemList_MonsterID\020\000\022\027\n\023DropIt"
    "emList_ItemID\020\001\022\032\n\026DropItemList_ItemCoun"
    "t\020\002\022\032\n\026DropItemList_DrawState\020\003*\207\001\n\030Skil"
    "lTable_RecordColType\022\026\n\022SkillTable_Skill"
    "ID\020\000\022\031\n\025SkillTable_SkillLevel\020\001\022\031\n\025Skill"
    "Table_SkillStone\020\002\022\035\n\031SkillTable_SkillSo"
    "ulLevel\020\003*\246\001\n\035TaskMonsterList_RecordColT"
    "ype\022\035\n\031TaskMonsterList_MonsterID\020\000\022$\n Ta"
    "skMonsterList_CurrentKillCount\020\001\022$\n Task"
    "MonsterList_RequireKillCount\020\002\022\032\n\026TaskMo"
    "nsterList_TaskID\020\003*F\n\026TaskList_RecordCol"
    "Type\022\023\n\017TaskList_TaskID\020\000\022\027\n\023TaskList_Ta"
    "skStatus\020\001*L\n\025PVPList_RecordColType\022\016\n\nP"
    "VPList_ID\020\000\022\020\n\014PVPList_Name\020\001\022\021\n\rPVPList"
    "_Level\020\002", 3848);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "NFRecordDefine.proto", &protobuf_RegisterTypes);
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_NFRecordDefine_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_NFRecordDefine_2eproto {
  StaticDescriptorInitializer_NFRecordDefine_2eproto() {
    protobuf_AddDesc_NFRecordDefine_2eproto();
  }
} static_descriptor_initializer_NFRecordDefine_2eproto_;
const ::google::protobuf::EnumDescriptor* BuildingList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BuildingList_RecordColType_descriptor_;
}
bool BuildingList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* BuildingProduce_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BuildingProduce_RecordColType_descriptor_;
}
bool BuildingProduce_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GuildBoss_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GuildBoss_RecordColType_descriptor_;
}
bool GuildBoss_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GuildMemberList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GuildMemberList_RecordColType_descriptor_;
}
bool GuildMemberList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GuildEvent_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GuildEvent_RecordColType_descriptor_;
}
bool GuildEvent_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GuildHouse_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GuildHouse_RecordColType_descriptor_;
}
bool GuildHouse_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* GuildSkill_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return GuildSkill_RecordColType_descriptor_;
}
bool GuildSkill_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* PosList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PosList_RecordColType_descriptor_;
}
bool PosList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* PlayerViewItem_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PlayerViewItem_RecordColType_descriptor_;
}
bool PlayerViewItem_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* CommPropertyValue_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CommPropertyValue_RecordColType_descriptor_;
}
bool CommPropertyValue_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* BagItemList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return BagItemList_RecordColType_descriptor_;
}
bool BagItemList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* EctypeList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return EctypeList_RecordColType_descriptor_;
}
bool EctypeList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* DropItemList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return DropItemList_RecordColType_descriptor_;
}
bool DropItemList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* SkillTable_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SkillTable_RecordColType_descriptor_;
}
bool SkillTable_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* TaskMonsterList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskMonsterList_RecordColType_descriptor_;
}
bool TaskMonsterList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* TaskList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return TaskList_RecordColType_descriptor_;
}
bool TaskList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

const ::google::protobuf::EnumDescriptor* PVPList_RecordColType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return PVPList_RecordColType_descriptor_;
}
bool PVPList_RecordColType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
      return true;
    default:
      return false;
  }
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace NFMsg

// @@protoc_insertion_point(global_scope)
