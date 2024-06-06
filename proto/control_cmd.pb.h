// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: control_cmd.proto

#ifndef PROTOBUF_control_5fcmd_2eproto__INCLUDED
#define PROTOBUF_control_5fcmd_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3001000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3001000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

namespace comm {
namespace cmd {
namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_control_5fcmd_2eproto();
void protobuf_InitDefaults_control_5fcmd_2eproto();
void protobuf_AssignDesc_control_5fcmd_2eproto();
void protobuf_ShutdownFile_control_5fcmd_2eproto();

class ControlCmd;

// ===================================================================

class ControlCmd : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:comm.cmd.proto.ControlCmd) */ {
 public:
  ControlCmd();
  virtual ~ControlCmd();

  ControlCmd(const ControlCmd& from);

  inline ControlCmd& operator=(const ControlCmd& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ControlCmd& default_instance();

  static const ControlCmd* internal_default_instance();

  void Swap(ControlCmd* other);

  // implements Message ----------------------------------------------

  inline ControlCmd* New() const { return New(NULL); }

  ControlCmd* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ControlCmd& from);
  void MergeFrom(const ControlCmd& from);
  void Clear();
  bool IsInitialized() const;

  size_t ByteSizeLong() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(ControlCmd* other);
  void UnsafeMergeFrom(const ControlCmd& from);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional string cmd = 1;
  void clear_cmd();
  static const int kCmdFieldNumber = 1;
  const ::std::string& cmd() const;
  void set_cmd(const ::std::string& value);
  void set_cmd(const char* value);
  void set_cmd(const char* value, size_t size);
  ::std::string* mutable_cmd();
  ::std::string* release_cmd();
  void set_allocated_cmd(::std::string* cmd);

  // repeated float linear_v = 2;
  int linear_v_size() const;
  void clear_linear_v();
  static const int kLinearVFieldNumber = 2;
  float linear_v(int index) const;
  void set_linear_v(int index, float value);
  void add_linear_v(float value);
  const ::google::protobuf::RepeatedField< float >&
      linear_v() const;
  ::google::protobuf::RepeatedField< float >*
      mutable_linear_v();

  // optional float rotation_v = 3;
  void clear_rotation_v();
  static const int kRotationVFieldNumber = 3;
  float rotation_v() const;
  void set_rotation_v(float value);

  // @@protoc_insertion_point(class_scope:comm.cmd.proto.ControlCmd)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::google::protobuf::RepeatedField< float > linear_v_;
  mutable int _linear_v_cached_byte_size_;
  ::google::protobuf::internal::ArenaStringPtr cmd_;
  float rotation_v_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_control_5fcmd_2eproto_impl();
  friend void  protobuf_AddDesc_control_5fcmd_2eproto_impl();
  friend void protobuf_AssignDesc_control_5fcmd_2eproto();
  friend void protobuf_ShutdownFile_control_5fcmd_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<ControlCmd> ControlCmd_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ControlCmd

// optional string cmd = 1;
inline void ControlCmd::clear_cmd() {
  cmd_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline const ::std::string& ControlCmd::cmd() const {
  // @@protoc_insertion_point(field_get:comm.cmd.proto.ControlCmd.cmd)
  return cmd_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ControlCmd::set_cmd(const ::std::string& value) {
  
  cmd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:comm.cmd.proto.ControlCmd.cmd)
}
inline void ControlCmd::set_cmd(const char* value) {
  
  cmd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:comm.cmd.proto.ControlCmd.cmd)
}
inline void ControlCmd::set_cmd(const char* value, size_t size) {
  
  cmd_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:comm.cmd.proto.ControlCmd.cmd)
}
inline ::std::string* ControlCmd::mutable_cmd() {
  
  // @@protoc_insertion_point(field_mutable:comm.cmd.proto.ControlCmd.cmd)
  return cmd_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline ::std::string* ControlCmd::release_cmd() {
  // @@protoc_insertion_point(field_release:comm.cmd.proto.ControlCmd.cmd)
  
  return cmd_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
inline void ControlCmd::set_allocated_cmd(::std::string* cmd) {
  if (cmd != NULL) {
    
  } else {
    
  }
  cmd_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), cmd);
  // @@protoc_insertion_point(field_set_allocated:comm.cmd.proto.ControlCmd.cmd)
}

// repeated float linear_v = 2;
inline int ControlCmd::linear_v_size() const {
  return linear_v_.size();
}
inline void ControlCmd::clear_linear_v() {
  linear_v_.Clear();
}
inline float ControlCmd::linear_v(int index) const {
  // @@protoc_insertion_point(field_get:comm.cmd.proto.ControlCmd.linear_v)
  return linear_v_.Get(index);
}
inline void ControlCmd::set_linear_v(int index, float value) {
  linear_v_.Set(index, value);
  // @@protoc_insertion_point(field_set:comm.cmd.proto.ControlCmd.linear_v)
}
inline void ControlCmd::add_linear_v(float value) {
  linear_v_.Add(value);
  // @@protoc_insertion_point(field_add:comm.cmd.proto.ControlCmd.linear_v)
}
inline const ::google::protobuf::RepeatedField< float >&
ControlCmd::linear_v() const {
  // @@protoc_insertion_point(field_list:comm.cmd.proto.ControlCmd.linear_v)
  return linear_v_;
}
inline ::google::protobuf::RepeatedField< float >*
ControlCmd::mutable_linear_v() {
  // @@protoc_insertion_point(field_mutable_list:comm.cmd.proto.ControlCmd.linear_v)
  return &linear_v_;
}

// optional float rotation_v = 3;
inline void ControlCmd::clear_rotation_v() {
  rotation_v_ = 0;
}
inline float ControlCmd::rotation_v() const {
  // @@protoc_insertion_point(field_get:comm.cmd.proto.ControlCmd.rotation_v)
  return rotation_v_;
}
inline void ControlCmd::set_rotation_v(float value) {
  
  rotation_v_ = value;
  // @@protoc_insertion_point(field_set:comm.cmd.proto.ControlCmd.rotation_v)
}

inline const ControlCmd* ControlCmd::internal_default_instance() {
  return &ControlCmd_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace cmd
}  // namespace comm

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_control_5fcmd_2eproto__INCLUDED
