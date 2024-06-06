// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: obs.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "obs.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace comm {
namespace obs {
namespace proto {

namespace {

const ::google::protobuf::Descriptor* ObsPacket_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  ObsPacket_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_obs_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_obs_2eproto() {
  protobuf_AddDesc_obs_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "obs.proto");
  GOOGLE_CHECK(file != NULL);
  ObsPacket_descriptor_ = file->message_type(0);
  static const int ObsPacket_offsets_[4] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObsPacket, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObsPacket, timestamp_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObsPacket, pose_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObsPacket, stable_laser_points_),
  };
  ObsPacket_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      ObsPacket_descriptor_,
      ObsPacket::internal_default_instance(),
      ObsPacket_offsets_,
      -1,
      -1,
      -1,
      sizeof(ObsPacket),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(ObsPacket, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_obs_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      ObsPacket_descriptor_, ObsPacket::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_obs_2eproto() {
  ObsPacket_default_instance_.Shutdown();
  delete ObsPacket_reflection_;
}

void protobuf_InitDefaults_obs_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::comm::pose::proto::protobuf_InitDefaults_pose_2eproto();
  ObsPacket_default_instance_.DefaultConstruct();
  ObsPacket_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_obs_2eproto_once_);
void protobuf_InitDefaults_obs_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_obs_2eproto_once_,
                 &protobuf_InitDefaults_obs_2eproto_impl);
}
void protobuf_AddDesc_obs_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_obs_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\tobs.proto\022\016comm.obs.proto\032\npose.proto\""
    "r\n\tObsPacket\022\014\n\004type\030\001 \001(\r\022\021\n\ttimestamp\030"
    "\002 \001(\001\022\014\n\004pose\030\003 \003(\001\0226\n\023stable_laser_poin"
    "ts\030\004 \003(\0132\031.comm.pose.proto.Vector2fb\006pro"
    "to3", 163);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "obs.proto", &protobuf_RegisterTypes);
  ::comm::pose::proto::protobuf_AddDesc_pose_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_obs_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_obs_2eproto_once_);
void protobuf_AddDesc_obs_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_obs_2eproto_once_,
                 &protobuf_AddDesc_obs_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_obs_2eproto {
  StaticDescriptorInitializer_obs_2eproto() {
    protobuf_AddDesc_obs_2eproto();
  }
} static_descriptor_initializer_obs_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int ObsPacket::kTypeFieldNumber;
const int ObsPacket::kTimestampFieldNumber;
const int ObsPacket::kPoseFieldNumber;
const int ObsPacket::kStableLaserPointsFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

ObsPacket::ObsPacket()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_obs_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:comm.obs.proto.ObsPacket)
}

void ObsPacket::InitAsDefaultInstance() {
}

ObsPacket::ObsPacket(const ObsPacket& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:comm.obs.proto.ObsPacket)
}

void ObsPacket::SharedCtor() {
  ::memset(&timestamp_, 0, reinterpret_cast<char*>(&type_) -
    reinterpret_cast<char*>(&timestamp_) + sizeof(type_));
  _cached_size_ = 0;
}

ObsPacket::~ObsPacket() {
  // @@protoc_insertion_point(destructor:comm.obs.proto.ObsPacket)
  SharedDtor();
}

void ObsPacket::SharedDtor() {
}

void ObsPacket::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* ObsPacket::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return ObsPacket_descriptor_;
}

const ObsPacket& ObsPacket::default_instance() {
  protobuf_InitDefaults_obs_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<ObsPacket> ObsPacket_default_instance_;

ObsPacket* ObsPacket::New(::google::protobuf::Arena* arena) const {
  ObsPacket* n = new ObsPacket;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void ObsPacket::Clear() {
// @@protoc_insertion_point(message_clear_start:comm.obs.proto.ObsPacket)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(ObsPacket, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<ObsPacket*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(timestamp_, type_);

#undef ZR_HELPER_
#undef ZR_

  pose_.Clear();
  stable_laser_points_.Clear();
}

bool ObsPacket::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:comm.obs.proto.ObsPacket)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 type = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &type_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(17)) goto parse_timestamp;
        break;
      }

      // optional double timestamp = 2;
      case 2: {
        if (tag == 17) {
         parse_timestamp:

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, &timestamp_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(26)) goto parse_pose;
        break;
      }

      // repeated double pose = 3;
      case 3: {
        if (tag == 26) {
         parse_pose:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPackedPrimitive<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 input, this->mutable_pose())));
        } else if (tag == 25) {
          DO_((::google::protobuf::internal::WireFormatLite::ReadRepeatedPrimitiveNoInline<
                   double, ::google::protobuf::internal::WireFormatLite::TYPE_DOUBLE>(
                 1, 26, input, this->mutable_pose())));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_stable_laser_points;
        break;
      }

      // repeated .comm.pose.proto.Vector2f stable_laser_points = 4;
      case 4: {
        if (tag == 34) {
         parse_stable_laser_points:
          DO_(input->IncrementRecursionDepth());
         parse_loop_stable_laser_points:
          DO_(::google::protobuf::internal::WireFormatLite::ReadMessageNoVirtualNoRecursionDepth(
                input, add_stable_laser_points()));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(34)) goto parse_loop_stable_laser_points;
        input->UnsafeDecrementRecursionDepth();
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:comm.obs.proto.ObsPacket)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:comm.obs.proto.ObsPacket)
  return false;
#undef DO_
}

void ObsPacket::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:comm.obs.proto.ObsPacket)
  // optional uint32 type = 1;
  if (this->type() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->type(), output);
  }

  // optional double timestamp = 2;
  if (this->timestamp() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteDouble(2, this->timestamp(), output);
  }

  // repeated double pose = 3;
  if (this->pose_size() > 0) {
    ::google::protobuf::internal::WireFormatLite::WriteTag(3, ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED, output);
    output->WriteVarint32(_pose_cached_byte_size_);
  }
  for (int i = 0; i < this->pose_size(); i++) {
    ::google::protobuf::internal::WireFormatLite::WriteDoubleNoTag(
      this->pose(i), output);
  }

  // repeated .comm.pose.proto.Vector2f stable_laser_points = 4;
  for (unsigned int i = 0, n = this->stable_laser_points_size(); i < n; i++) {
    ::google::protobuf::internal::WireFormatLite::WriteMessageMaybeToArray(
      4, this->stable_laser_points(i), output);
  }

  // @@protoc_insertion_point(serialize_end:comm.obs.proto.ObsPacket)
}

::google::protobuf::uint8* ObsPacket::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:comm.obs.proto.ObsPacket)
  // optional uint32 type = 1;
  if (this->type() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->type(), target);
  }

  // optional double timestamp = 2;
  if (this->timestamp() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteDoubleToArray(2, this->timestamp(), target);
  }

  // repeated double pose = 3;
  if (this->pose_size() > 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteTagToArray(
      3,
      ::google::protobuf::internal::WireFormatLite::WIRETYPE_LENGTH_DELIMITED,
      target);
    target = ::google::protobuf::io::CodedOutputStream::WriteVarint32ToArray(
      _pose_cached_byte_size_, target);
  }
  for (int i = 0; i < this->pose_size(); i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      WriteDoubleNoTagToArray(this->pose(i), target);
  }

  // repeated .comm.pose.proto.Vector2f stable_laser_points = 4;
  for (unsigned int i = 0, n = this->stable_laser_points_size(); i < n; i++) {
    target = ::google::protobuf::internal::WireFormatLite::
      InternalWriteMessageNoVirtualToArray(
        4, this->stable_laser_points(i), false, target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:comm.obs.proto.ObsPacket)
  return target;
}

size_t ObsPacket::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:comm.obs.proto.ObsPacket)
  size_t total_size = 0;

  // optional uint32 type = 1;
  if (this->type() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->type());
  }

  // optional double timestamp = 2;
  if (this->timestamp() != 0) {
    total_size += 1 + 8;
  }

  // repeated double pose = 3;
  {
    size_t data_size = 0;
    unsigned int count = this->pose_size();
    data_size = 8UL * count;
    if (data_size > 0) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(data_size);
    }
    int cached_size = ::google::protobuf::internal::ToCachedSize(data_size);
    GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
    _pose_cached_byte_size_ = cached_size;
    GOOGLE_SAFE_CONCURRENT_WRITES_END();
    total_size += data_size;
  }

  // repeated .comm.pose.proto.Vector2f stable_laser_points = 4;
  {
    unsigned int count = this->stable_laser_points_size();
    total_size += 1UL * count;
    for (unsigned int i = 0; i < count; i++) {
      total_size +=
        ::google::protobuf::internal::WireFormatLite::MessageSizeNoVirtual(
          this->stable_laser_points(i));
    }
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void ObsPacket::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:comm.obs.proto.ObsPacket)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const ObsPacket* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const ObsPacket>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:comm.obs.proto.ObsPacket)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:comm.obs.proto.ObsPacket)
    UnsafeMergeFrom(*source);
  }
}

void ObsPacket::MergeFrom(const ObsPacket& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:comm.obs.proto.ObsPacket)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void ObsPacket::UnsafeMergeFrom(const ObsPacket& from) {
  GOOGLE_DCHECK(&from != this);
  pose_.UnsafeMergeFrom(from.pose_);
  stable_laser_points_.MergeFrom(from.stable_laser_points_);
  if (from.type() != 0) {
    set_type(from.type());
  }
  if (from.timestamp() != 0) {
    set_timestamp(from.timestamp());
  }
}

void ObsPacket::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:comm.obs.proto.ObsPacket)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void ObsPacket::CopyFrom(const ObsPacket& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:comm.obs.proto.ObsPacket)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool ObsPacket::IsInitialized() const {

  return true;
}

void ObsPacket::Swap(ObsPacket* other) {
  if (other == this) return;
  InternalSwap(other);
}
void ObsPacket::InternalSwap(ObsPacket* other) {
  std::swap(type_, other->type_);
  std::swap(timestamp_, other->timestamp_);
  pose_.UnsafeArenaSwap(&other->pose_);
  stable_laser_points_.UnsafeArenaSwap(&other->stable_laser_points_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata ObsPacket::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = ObsPacket_descriptor_;
  metadata.reflection = ObsPacket_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// ObsPacket

// optional uint32 type = 1;
void ObsPacket::clear_type() {
  type_ = 0u;
}
::google::protobuf::uint32 ObsPacket::type() const {
  // @@protoc_insertion_point(field_get:comm.obs.proto.ObsPacket.type)
  return type_;
}
void ObsPacket::set_type(::google::protobuf::uint32 value) {
  
  type_ = value;
  // @@protoc_insertion_point(field_set:comm.obs.proto.ObsPacket.type)
}

// optional double timestamp = 2;
void ObsPacket::clear_timestamp() {
  timestamp_ = 0;
}
double ObsPacket::timestamp() const {
  // @@protoc_insertion_point(field_get:comm.obs.proto.ObsPacket.timestamp)
  return timestamp_;
}
void ObsPacket::set_timestamp(double value) {
  
  timestamp_ = value;
  // @@protoc_insertion_point(field_set:comm.obs.proto.ObsPacket.timestamp)
}

// repeated double pose = 3;
int ObsPacket::pose_size() const {
  return pose_.size();
}
void ObsPacket::clear_pose() {
  pose_.Clear();
}
double ObsPacket::pose(int index) const {
  // @@protoc_insertion_point(field_get:comm.obs.proto.ObsPacket.pose)
  return pose_.Get(index);
}
void ObsPacket::set_pose(int index, double value) {
  pose_.Set(index, value);
  // @@protoc_insertion_point(field_set:comm.obs.proto.ObsPacket.pose)
}
void ObsPacket::add_pose(double value) {
  pose_.Add(value);
  // @@protoc_insertion_point(field_add:comm.obs.proto.ObsPacket.pose)
}
const ::google::protobuf::RepeatedField< double >&
ObsPacket::pose() const {
  // @@protoc_insertion_point(field_list:comm.obs.proto.ObsPacket.pose)
  return pose_;
}
::google::protobuf::RepeatedField< double >*
ObsPacket::mutable_pose() {
  // @@protoc_insertion_point(field_mutable_list:comm.obs.proto.ObsPacket.pose)
  return &pose_;
}

// repeated .comm.pose.proto.Vector2f stable_laser_points = 4;
int ObsPacket::stable_laser_points_size() const {
  return stable_laser_points_.size();
}
void ObsPacket::clear_stable_laser_points() {
  stable_laser_points_.Clear();
}
const ::comm::pose::proto::Vector2f& ObsPacket::stable_laser_points(int index) const {
  // @@protoc_insertion_point(field_get:comm.obs.proto.ObsPacket.stable_laser_points)
  return stable_laser_points_.Get(index);
}
::comm::pose::proto::Vector2f* ObsPacket::mutable_stable_laser_points(int index) {
  // @@protoc_insertion_point(field_mutable:comm.obs.proto.ObsPacket.stable_laser_points)
  return stable_laser_points_.Mutable(index);
}
::comm::pose::proto::Vector2f* ObsPacket::add_stable_laser_points() {
  // @@protoc_insertion_point(field_add:comm.obs.proto.ObsPacket.stable_laser_points)
  return stable_laser_points_.Add();
}
::google::protobuf::RepeatedPtrField< ::comm::pose::proto::Vector2f >*
ObsPacket::mutable_stable_laser_points() {
  // @@protoc_insertion_point(field_mutable_list:comm.obs.proto.ObsPacket.stable_laser_points)
  return &stable_laser_points_;
}
const ::google::protobuf::RepeatedPtrField< ::comm::pose::proto::Vector2f >&
ObsPacket::stable_laser_points() const {
  // @@protoc_insertion_point(field_list:comm.obs.proto.ObsPacket.stable_laser_points)
  return stable_laser_points_;
}

inline const ObsPacket* ObsPacket::internal_default_instance() {
  return &ObsPacket_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace obs
}  // namespace comm

// @@protoc_insertion_point(global_scope)