// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: cs_notify.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "cs_notify.pb.h"

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

namespace ProtoCs {

namespace {

const ::google::protobuf::Descriptor* RoleInfoNtf_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RoleInfoNtf_reflection_ = NULL;
const ::google::protobuf::Descriptor* CityInfo_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CityInfo_reflection_ = NULL;
const ::google::protobuf::Descriptor* CityListNtf_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  CityListNtf_reflection_ = NULL;
const ::google::protobuf::Descriptor* ServerKickOffNtf_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ServerKickOffNtf_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_cs_5fnotify_2eproto() {
  protobuf_AddDesc_cs_5fnotify_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "cs_notify.proto");
  GOOGLE_CHECK(file != NULL);
  RoleInfoNtf_descriptor_ = file->message_type(0);
  static const int RoleInfoNtf_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RoleInfoNtf, money_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RoleInfoNtf, level_),
  };
  RoleInfoNtf_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      RoleInfoNtf_descriptor_,
      RoleInfoNtf::default_instance_,
      RoleInfoNtf_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RoleInfoNtf, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RoleInfoNtf, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(RoleInfoNtf));
  CityInfo_descriptor_ = file->message_type(1);
  static const int CityInfo_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CityInfo, id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CityInfo, population_),
  };
  CityInfo_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CityInfo_descriptor_,
      CityInfo::default_instance_,
      CityInfo_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CityInfo, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CityInfo, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CityInfo));
  CityListNtf_descriptor_ = file->message_type(2);
  static const int CityListNtf_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CityListNtf, city_list_),
  };
  CityListNtf_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      CityListNtf_descriptor_,
      CityListNtf::default_instance_,
      CityListNtf_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CityListNtf, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(CityListNtf, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(CityListNtf));
  ServerKickOffNtf_descriptor_ = file->message_type(3);
  static const int ServerKickOffNtf_offsets_[1] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerKickOffNtf, type_),
  };
  ServerKickOffNtf_reflection_ =
    new ::google::protobuf::internal::GeneratedMessageReflection(
      ServerKickOffNtf_descriptor_,
      ServerKickOffNtf::default_instance_,
      ServerKickOffNtf_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerKickOffNtf, _has_bits_[0]),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ServerKickOffNtf, _unknown_fields_),
      -1,
      ::google::protobuf::DescriptorPool::generated_pool(),
      ::google::protobuf::MessageFactory::generated_factory(),
      sizeof(ServerKickOffNtf));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_cs_5fnotify_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    RoleInfoNtf_descriptor_, &RoleInfoNtf::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CityInfo_descriptor_, &CityInfo::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    CityListNtf_descriptor_, &CityListNtf::default_instance());
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
    ServerKickOffNtf_descriptor_, &ServerKickOffNtf::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_cs_5fnotify_2eproto() {
  delete RoleInfoNtf::default_instance_;
  delete RoleInfoNtf_reflection_;
  delete CityInfo::default_instance_;
  delete CityInfo_reflection_;
  delete CityListNtf::default_instance_;
  delete CityListNtf_reflection_;
  delete ServerKickOffNtf::default_instance_;
  delete ServerKickOffNtf_reflection_;
}

void protobuf_AddDesc_cs_5fnotify_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\017cs_notify.proto\022\007ProtoCs\"+\n\013RoleInfoNt"
    "f\022\r\n\005money\030\001 \001(\005\022\r\n\005level\030\002 \001(\005\"*\n\010CityI"
    "nfo\022\n\n\002id\030\001 \001(\005\022\022\n\npopulation\030\002 \001(\005\"3\n\013C"
    "ityListNtf\022$\n\tcity_list\030\001 \003(\0132\021.ProtoCs."
    "CityInfo\" \n\020ServerKickOffNtf\022\014\n\004type\030\001 \001"
    "(\005", 202);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "cs_notify.proto", &protobuf_RegisterTypes);
  RoleInfoNtf::default_instance_ = new RoleInfoNtf();
  CityInfo::default_instance_ = new CityInfo();
  CityListNtf::default_instance_ = new CityListNtf();
  ServerKickOffNtf::default_instance_ = new ServerKickOffNtf();
  RoleInfoNtf::default_instance_->InitAsDefaultInstance();
  CityInfo::default_instance_->InitAsDefaultInstance();
  CityListNtf::default_instance_->InitAsDefaultInstance();
  ServerKickOffNtf::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_cs_5fnotify_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_cs_5fnotify_2eproto {
  StaticDescriptorInitializer_cs_5fnotify_2eproto() {
    protobuf_AddDesc_cs_5fnotify_2eproto();
  }
} static_descriptor_initializer_cs_5fnotify_2eproto_;

// ===================================================================

#ifndef _MSC_VER
const int RoleInfoNtf::kMoneyFieldNumber;
const int RoleInfoNtf::kLevelFieldNumber;
#endif  // !_MSC_VER

RoleInfoNtf::RoleInfoNtf()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void RoleInfoNtf::InitAsDefaultInstance() {
}

RoleInfoNtf::RoleInfoNtf(const RoleInfoNtf& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void RoleInfoNtf::SharedCtor() {
  _cached_size_ = 0;
  money_ = 0;
  level_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RoleInfoNtf::~RoleInfoNtf() {
  SharedDtor();
}

void RoleInfoNtf::SharedDtor() {
  if (this != default_instance_) {
  }
}

void RoleInfoNtf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RoleInfoNtf::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RoleInfoNtf_descriptor_;
}

const RoleInfoNtf& RoleInfoNtf::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cs_5fnotify_2eproto();
  return *default_instance_;
}

RoleInfoNtf* RoleInfoNtf::default_instance_ = NULL;

RoleInfoNtf* RoleInfoNtf::New() const {
  return new RoleInfoNtf;
}

void RoleInfoNtf::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    money_ = 0;
    level_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool RoleInfoNtf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 money = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &money_)));
          set_has_money();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_level;
        break;
      }

      // optional int32 level = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_level:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &level_)));
          set_has_level();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void RoleInfoNtf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 money = 1;
  if (has_money()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->money(), output);
  }

  // optional int32 level = 2;
  if (has_level()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->level(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* RoleInfoNtf::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 money = 1;
  if (has_money()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->money(), target);
  }

  // optional int32 level = 2;
  if (has_level()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->level(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int RoleInfoNtf::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 money = 1;
    if (has_money()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->money());
    }

    // optional int32 level = 2;
    if (has_level()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->level());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void RoleInfoNtf::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const RoleInfoNtf* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const RoleInfoNtf*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void RoleInfoNtf::MergeFrom(const RoleInfoNtf& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_money()) {
      set_money(from.money());
    }
    if (from.has_level()) {
      set_level(from.level());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void RoleInfoNtf::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RoleInfoNtf::CopyFrom(const RoleInfoNtf& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RoleInfoNtf::IsInitialized() const {

  return true;
}

void RoleInfoNtf::Swap(RoleInfoNtf* other) {
  if (other != this) {
    std::swap(money_, other->money_);
    std::swap(level_, other->level_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata RoleInfoNtf::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RoleInfoNtf_descriptor_;
  metadata.reflection = RoleInfoNtf_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CityInfo::kIdFieldNumber;
const int CityInfo::kPopulationFieldNumber;
#endif  // !_MSC_VER

CityInfo::CityInfo()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CityInfo::InitAsDefaultInstance() {
}

CityInfo::CityInfo(const CityInfo& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CityInfo::SharedCtor() {
  _cached_size_ = 0;
  id_ = 0;
  population_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CityInfo::~CityInfo() {
  SharedDtor();
}

void CityInfo::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CityInfo::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CityInfo::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CityInfo_descriptor_;
}

const CityInfo& CityInfo::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cs_5fnotify_2eproto();
  return *default_instance_;
}

CityInfo* CityInfo::default_instance_ = NULL;

CityInfo* CityInfo::New() const {
  return new CityInfo;
}

void CityInfo::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    id_ = 0;
    population_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CityInfo::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 id = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &id_)));
          set_has_id();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(16)) goto parse_population;
        break;
      }

      // optional int32 population = 2;
      case 2: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
         parse_population:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &population_)));
          set_has_population();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CityInfo::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 id = 1;
  if (has_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->id(), output);
  }

  // optional int32 population = 2;
  if (has_population()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(2, this->population(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CityInfo::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 id = 1;
  if (has_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->id(), target);
  }

  // optional int32 population = 2;
  if (has_population()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(2, this->population(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CityInfo::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 id = 1;
    if (has_id()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->id());
    }

    // optional int32 population = 2;
    if (has_population()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->population());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CityInfo::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CityInfo* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CityInfo*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CityInfo::MergeFrom(const CityInfo& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_id()) {
      set_id(from.id());
    }
    if (from.has_population()) {
      set_population(from.population());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CityInfo::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CityInfo::CopyFrom(const CityInfo& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CityInfo::IsInitialized() const {

  return true;
}

void CityInfo::Swap(CityInfo* other) {
  if (other != this) {
    std::swap(id_, other->id_);
    std::swap(population_, other->population_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CityInfo::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CityInfo_descriptor_;
  metadata.reflection = CityInfo_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int CityListNtf::kCityListFieldNumber;
#endif  // !_MSC_VER

CityListNtf::CityListNtf()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void CityListNtf::InitAsDefaultInstance() {
}

CityListNtf::CityListNtf(const CityListNtf& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void CityListNtf::SharedCtor() {
  _cached_size_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

CityListNtf::~CityListNtf() {
  SharedDtor();
}

void CityListNtf::SharedDtor() {
  if (this != default_instance_) {
  }
}

void CityListNtf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* CityListNtf::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return CityListNtf_descriptor_;
}

const CityListNtf& CityListNtf::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cs_5fnotify_2eproto();
  return *default_instance_;
}

CityListNtf* CityListNtf::default_instance_ = NULL;

CityListNtf* CityListNtf::New() const {
  return new CityListNtf;
}

void CityListNtf::Clear() {
  city_list_.Clear();
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool CityListNtf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // repeated .ProtoCs.CityInfo city_list = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED) {
         parse_city_list:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtual(
                input, add_city_list()));
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectTag(10)) goto parse_city_list;
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void CityListNtf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // repeated .ProtoCs.CityInfo city_list = 1;
  for (int i = 0; i < this->city_list_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      1, this->city_list(i), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* CityListNtf::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // repeated .ProtoCs.CityInfo city_list = 1;
  for (int i = 0; i < this->city_list_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteMessageNoVirtualToArray(
        1, this->city_list(i), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int CityListNtf::ByteSize() const {
  int total_size = 0;

  // repeated .ProtoCs.CityInfo city_list = 1;
  total_size += 1 * this->city_list_size();
  for (int i = 0; i < this->city_list_size(); i++) {
    total_size +=
      ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
        this->city_list(i));
  }

  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void CityListNtf::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const CityListNtf* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const CityListNtf*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void CityListNtf::MergeFrom(const CityListNtf& from) {
  GOOGLE_CHECK_NE(&from, this);
  city_list_.MergeFrom(from.city_list_);
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void CityListNtf::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void CityListNtf::CopyFrom(const CityListNtf& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool CityListNtf::IsInitialized() const {

  return true;
}

void CityListNtf::Swap(CityListNtf* other) {
  if (other != this) {
    city_list_.Swap(&other->city_list_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata CityListNtf::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = CityListNtf_descriptor_;
  metadata.reflection = CityListNtf_reflection_;
  return metadata;
}


// ===================================================================

#ifndef _MSC_VER
const int ServerKickOffNtf::kTypeFieldNumber;
#endif  // !_MSC_VER

ServerKickOffNtf::ServerKickOffNtf()
  : ::google::protobuf::Message() {
  SharedCtor();
}

void ServerKickOffNtf::InitAsDefaultInstance() {
}

ServerKickOffNtf::ServerKickOffNtf(const ServerKickOffNtf& from)
  : ::google::protobuf::Message() {
  SharedCtor();
  MergeFrom(from);
}

void ServerKickOffNtf::SharedCtor() {
  _cached_size_ = 0;
  type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

ServerKickOffNtf::~ServerKickOffNtf() {
  SharedDtor();
}

void ServerKickOffNtf::SharedDtor() {
  if (this != default_instance_) {
  }
}

void ServerKickOffNtf::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ServerKickOffNtf::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ServerKickOffNtf_descriptor_;
}

const ServerKickOffNtf& ServerKickOffNtf::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_cs_5fnotify_2eproto();
  return *default_instance_;
}

ServerKickOffNtf* ServerKickOffNtf::default_instance_ = NULL;

ServerKickOffNtf* ServerKickOffNtf::New() const {
  return new ServerKickOffNtf;
}

void ServerKickOffNtf::Clear() {
  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    type_ = 0;
  }
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  mutable_unknown_fields()->Clear();
}

bool ServerKickOffNtf::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!(EXPRESSION)) return false
  ::google::protobuf::uint32 tag;
  while ((tag = input->ReadTag()) != 0) {
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional int32 type = 1;
      case 1: {
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_VARINT) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &type_)));
          set_has_type();
        } else {
          goto handle_uninterpreted;
        }
        if (input->ExpectAtEnd()) return true;
        break;
      }

      default: {
      handle_uninterpreted:
        if (::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          return true;
        }
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
  return true;
#undef DO_
}

void ServerKickOffNtf::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // optional int32 type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(1, this->type(), output);
  }

  if (!unknown_fields().empty()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
}

::google::protobuf::uint8* ServerKickOffNtf::SerializeWithCachedSizesToArray(
    ::google::protobuf::uint8* target) const {
  // optional int32 type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(1, this->type(), target);
  }

  if (!unknown_fields().empty()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  return target;
}

int ServerKickOffNtf::ByteSize() const {
  int total_size = 0;

  if (_has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    // optional int32 type = 1;
    if (has_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->type());
    }

  }
  if (!unknown_fields().empty()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ServerKickOffNtf::MergeFrom(const ::google::protobuf::Message& from) {
  GOOGLE_CHECK_NE(&from, this);
  const ServerKickOffNtf* source =
    ::google::protobuf::internal::dynamic_cast_if_available<const ServerKickOffNtf*>(
      &from);
  if (source == NULL) {
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
    MergeFrom(*source);
  }
}

void ServerKickOffNtf::MergeFrom(const ServerKickOffNtf& from) {
  GOOGLE_CHECK_NE(&from, this);
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
  }
  mutable_unknown_fields()->MergeFrom(from.unknown_fields());
}

void ServerKickOffNtf::CopyFrom(const ::google::protobuf::Message& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ServerKickOffNtf::CopyFrom(const ServerKickOffNtf& from) {
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ServerKickOffNtf::IsInitialized() const {

  return true;
}

void ServerKickOffNtf::Swap(ServerKickOffNtf* other) {
  if (other != this) {
    std::swap(type_, other->type_);
    std::swap(_has_bits_[0], other->_has_bits_[0]);
    _unknown_fields_.Swap(&other->_unknown_fields_);
    std::swap(_cached_size_, other->_cached_size_);
  }
}

::google::protobuf::Metadata ServerKickOffNtf::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ServerKickOffNtf_descriptor_;
  metadata.reflection = ServerKickOffNtf_reflection_;
  return metadata;
}


// @@protoc_insertion_point(namespace_scope)

}  // namespace ProtoCs

// @@protoc_insertion_point(global_scope)
