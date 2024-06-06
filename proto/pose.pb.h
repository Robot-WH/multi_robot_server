// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: pose.proto

#ifndef PROTOBUF_pose_2eproto__INCLUDED
#define PROTOBUF_pose_2eproto__INCLUDED

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
namespace pose {
namespace proto {

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_pose_2eproto();
void protobuf_InitDefaults_pose_2eproto();
void protobuf_AssignDesc_pose_2eproto();
void protobuf_ShutdownFile_pose_2eproto();

class Transform2d;
class Transform2f;
class Vector2d;
class Vector2f;

// ===================================================================

class Vector2d : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:comm.pose.proto.Vector2d) */ {
 public:
  Vector2d();
  virtual ~Vector2d();

  Vector2d(const Vector2d& from);

  inline Vector2d& operator=(const Vector2d& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Vector2d& default_instance();

  static const Vector2d* internal_default_instance();

  void Swap(Vector2d* other);

  // implements Message ----------------------------------------------

  inline Vector2d* New() const { return New(NULL); }

  Vector2d* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Vector2d& from);
  void MergeFrom(const Vector2d& from);
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
  void InternalSwap(Vector2d* other);
  void UnsafeMergeFrom(const Vector2d& from);
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

  // optional double x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  double x() const;
  void set_x(double value);

  // optional double y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  double y() const;
  void set_y(double value);

  // @@protoc_insertion_point(class_scope:comm.pose.proto.Vector2d)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_pose_2eproto_impl();
  friend void  protobuf_AddDesc_pose_2eproto_impl();
  friend void protobuf_AssignDesc_pose_2eproto();
  friend void protobuf_ShutdownFile_pose_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Vector2d> Vector2d_default_instance_;

// -------------------------------------------------------------------

class Vector2f : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:comm.pose.proto.Vector2f) */ {
 public:
  Vector2f();
  virtual ~Vector2f();

  Vector2f(const Vector2f& from);

  inline Vector2f& operator=(const Vector2f& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Vector2f& default_instance();

  static const Vector2f* internal_default_instance();

  void Swap(Vector2f* other);

  // implements Message ----------------------------------------------

  inline Vector2f* New() const { return New(NULL); }

  Vector2f* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Vector2f& from);
  void MergeFrom(const Vector2f& from);
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
  void InternalSwap(Vector2f* other);
  void UnsafeMergeFrom(const Vector2f& from);
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

  // optional float x = 1;
  void clear_x();
  static const int kXFieldNumber = 1;
  float x() const;
  void set_x(float value);

  // optional float y = 2;
  void clear_y();
  static const int kYFieldNumber = 2;
  float y() const;
  void set_y(float value);

  // @@protoc_insertion_point(class_scope:comm.pose.proto.Vector2f)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  float x_;
  float y_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_pose_2eproto_impl();
  friend void  protobuf_AddDesc_pose_2eproto_impl();
  friend void protobuf_AssignDesc_pose_2eproto();
  friend void protobuf_ShutdownFile_pose_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Vector2f> Vector2f_default_instance_;

// -------------------------------------------------------------------

class Transform2f : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:comm.pose.proto.Transform2f) */ {
 public:
  Transform2f();
  virtual ~Transform2f();

  Transform2f(const Transform2f& from);

  inline Transform2f& operator=(const Transform2f& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Transform2f& default_instance();

  static const Transform2f* internal_default_instance();

  void Swap(Transform2f* other);

  // implements Message ----------------------------------------------

  inline Transform2f* New() const { return New(NULL); }

  Transform2f* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Transform2f& from);
  void MergeFrom(const Transform2f& from);
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
  void InternalSwap(Transform2f* other);
  void UnsafeMergeFrom(const Transform2f& from);
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

  // optional .comm.pose.proto.Vector2f translation = 1;
  bool has_translation() const;
  void clear_translation();
  static const int kTranslationFieldNumber = 1;
  const ::comm::pose::proto::Vector2f& translation() const;
  ::comm::pose::proto::Vector2f* mutable_translation();
  ::comm::pose::proto::Vector2f* release_translation();
  void set_allocated_translation(::comm::pose::proto::Vector2f* translation);

  // optional float rotation = 2;
  void clear_rotation();
  static const int kRotationFieldNumber = 2;
  float rotation() const;
  void set_rotation(float value);

  // @@protoc_insertion_point(class_scope:comm.pose.proto.Transform2f)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::comm::pose::proto::Vector2f* translation_;
  float rotation_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_pose_2eproto_impl();
  friend void  protobuf_AddDesc_pose_2eproto_impl();
  friend void protobuf_AssignDesc_pose_2eproto();
  friend void protobuf_ShutdownFile_pose_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Transform2f> Transform2f_default_instance_;

// -------------------------------------------------------------------

class Transform2d : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:comm.pose.proto.Transform2d) */ {
 public:
  Transform2d();
  virtual ~Transform2d();

  Transform2d(const Transform2d& from);

  inline Transform2d& operator=(const Transform2d& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const Transform2d& default_instance();

  static const Transform2d* internal_default_instance();

  void Swap(Transform2d* other);

  // implements Message ----------------------------------------------

  inline Transform2d* New() const { return New(NULL); }

  Transform2d* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const Transform2d& from);
  void MergeFrom(const Transform2d& from);
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
  void InternalSwap(Transform2d* other);
  void UnsafeMergeFrom(const Transform2d& from);
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

  // optional .comm.pose.proto.Vector2d translation = 1;
  bool has_translation() const;
  void clear_translation();
  static const int kTranslationFieldNumber = 1;
  const ::comm::pose::proto::Vector2d& translation() const;
  ::comm::pose::proto::Vector2d* mutable_translation();
  ::comm::pose::proto::Vector2d* release_translation();
  void set_allocated_translation(::comm::pose::proto::Vector2d* translation);

  // optional double rotation = 2;
  void clear_rotation();
  static const int kRotationFieldNumber = 2;
  double rotation() const;
  void set_rotation(double value);

  // @@protoc_insertion_point(class_scope:comm.pose.proto.Transform2d)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  ::comm::pose::proto::Vector2d* translation_;
  double rotation_;
  mutable int _cached_size_;
  friend void  protobuf_InitDefaults_pose_2eproto_impl();
  friend void  protobuf_AddDesc_pose_2eproto_impl();
  friend void protobuf_AssignDesc_pose_2eproto();
  friend void protobuf_ShutdownFile_pose_2eproto();

  void InitAsDefaultInstance();
};
extern ::google::protobuf::internal::ExplicitlyConstructed<Transform2d> Transform2d_default_instance_;

// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// Vector2d

// optional double x = 1;
inline void Vector2d::clear_x() {
  x_ = 0;
}
inline double Vector2d::x() const {
  // @@protoc_insertion_point(field_get:comm.pose.proto.Vector2d.x)
  return x_;
}
inline void Vector2d::set_x(double value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:comm.pose.proto.Vector2d.x)
}

// optional double y = 2;
inline void Vector2d::clear_y() {
  y_ = 0;
}
inline double Vector2d::y() const {
  // @@protoc_insertion_point(field_get:comm.pose.proto.Vector2d.y)
  return y_;
}
inline void Vector2d::set_y(double value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:comm.pose.proto.Vector2d.y)
}

inline const Vector2d* Vector2d::internal_default_instance() {
  return &Vector2d_default_instance_.get();
}
// -------------------------------------------------------------------

// Vector2f

// optional float x = 1;
inline void Vector2f::clear_x() {
  x_ = 0;
}
inline float Vector2f::x() const {
  // @@protoc_insertion_point(field_get:comm.pose.proto.Vector2f.x)
  return x_;
}
inline void Vector2f::set_x(float value) {
  
  x_ = value;
  // @@protoc_insertion_point(field_set:comm.pose.proto.Vector2f.x)
}

// optional float y = 2;
inline void Vector2f::clear_y() {
  y_ = 0;
}
inline float Vector2f::y() const {
  // @@protoc_insertion_point(field_get:comm.pose.proto.Vector2f.y)
  return y_;
}
inline void Vector2f::set_y(float value) {
  
  y_ = value;
  // @@protoc_insertion_point(field_set:comm.pose.proto.Vector2f.y)
}

inline const Vector2f* Vector2f::internal_default_instance() {
  return &Vector2f_default_instance_.get();
}
// -------------------------------------------------------------------

// Transform2f

// optional .comm.pose.proto.Vector2f translation = 1;
inline bool Transform2f::has_translation() const {
  return this != internal_default_instance() && translation_ != NULL;
}
inline void Transform2f::clear_translation() {
  if (GetArenaNoVirtual() == NULL && translation_ != NULL) delete translation_;
  translation_ = NULL;
}
inline const ::comm::pose::proto::Vector2f& Transform2f::translation() const {
  // @@protoc_insertion_point(field_get:comm.pose.proto.Transform2f.translation)
  return translation_ != NULL ? *translation_
                         : *::comm::pose::proto::Vector2f::internal_default_instance();
}
inline ::comm::pose::proto::Vector2f* Transform2f::mutable_translation() {
  
  if (translation_ == NULL) {
    translation_ = new ::comm::pose::proto::Vector2f;
  }
  // @@protoc_insertion_point(field_mutable:comm.pose.proto.Transform2f.translation)
  return translation_;
}
inline ::comm::pose::proto::Vector2f* Transform2f::release_translation() {
  // @@protoc_insertion_point(field_release:comm.pose.proto.Transform2f.translation)
  
  ::comm::pose::proto::Vector2f* temp = translation_;
  translation_ = NULL;
  return temp;
}
inline void Transform2f::set_allocated_translation(::comm::pose::proto::Vector2f* translation) {
  delete translation_;
  translation_ = translation;
  if (translation) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:comm.pose.proto.Transform2f.translation)
}

// optional float rotation = 2;
inline void Transform2f::clear_rotation() {
  rotation_ = 0;
}
inline float Transform2f::rotation() const {
  // @@protoc_insertion_point(field_get:comm.pose.proto.Transform2f.rotation)
  return rotation_;
}
inline void Transform2f::set_rotation(float value) {
  
  rotation_ = value;
  // @@protoc_insertion_point(field_set:comm.pose.proto.Transform2f.rotation)
}

inline const Transform2f* Transform2f::internal_default_instance() {
  return &Transform2f_default_instance_.get();
}
// -------------------------------------------------------------------

// Transform2d

// optional .comm.pose.proto.Vector2d translation = 1;
inline bool Transform2d::has_translation() const {
  return this != internal_default_instance() && translation_ != NULL;
}
inline void Transform2d::clear_translation() {
  if (GetArenaNoVirtual() == NULL && translation_ != NULL) delete translation_;
  translation_ = NULL;
}
inline const ::comm::pose::proto::Vector2d& Transform2d::translation() const {
  // @@protoc_insertion_point(field_get:comm.pose.proto.Transform2d.translation)
  return translation_ != NULL ? *translation_
                         : *::comm::pose::proto::Vector2d::internal_default_instance();
}
inline ::comm::pose::proto::Vector2d* Transform2d::mutable_translation() {
  
  if (translation_ == NULL) {
    translation_ = new ::comm::pose::proto::Vector2d;
  }
  // @@protoc_insertion_point(field_mutable:comm.pose.proto.Transform2d.translation)
  return translation_;
}
inline ::comm::pose::proto::Vector2d* Transform2d::release_translation() {
  // @@protoc_insertion_point(field_release:comm.pose.proto.Transform2d.translation)
  
  ::comm::pose::proto::Vector2d* temp = translation_;
  translation_ = NULL;
  return temp;
}
inline void Transform2d::set_allocated_translation(::comm::pose::proto::Vector2d* translation) {
  delete translation_;
  translation_ = translation;
  if (translation) {
    
  } else {
    
  }
  // @@protoc_insertion_point(field_set_allocated:comm.pose.proto.Transform2d.translation)
}

// optional double rotation = 2;
inline void Transform2d::clear_rotation() {
  rotation_ = 0;
}
inline double Transform2d::rotation() const {
  // @@protoc_insertion_point(field_get:comm.pose.proto.Transform2d.rotation)
  return rotation_;
}
inline void Transform2d::set_rotation(double value) {
  
  rotation_ = value;
  // @@protoc_insertion_point(field_set:comm.pose.proto.Transform2d.rotation)
}

inline const Transform2d* Transform2d::internal_default_instance() {
  return &Transform2d_default_instance_.get();
}
#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace proto
}  // namespace pose
}  // namespace comm

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_pose_2eproto__INCLUDED
