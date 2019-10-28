// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: maths.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_maths_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_maths_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_maths_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_maths_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[4]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_maths_2eproto;
namespace messages {
class Empty;
class EmptyDefaultTypeInternal;
extern EmptyDefaultTypeInternal _Empty_default_instance_;
class vec2;
class vec2DefaultTypeInternal;
extern vec2DefaultTypeInternal _vec2_default_instance_;
class vec3;
class vec3DefaultTypeInternal;
extern vec3DefaultTypeInternal _vec3_default_instance_;
class vec4;
class vec4DefaultTypeInternal;
extern vec4DefaultTypeInternal _vec4_default_instance_;
}  // namespace messages
PROTOBUF_NAMESPACE_OPEN
template<> ::messages::Empty* Arena::CreateMaybeMessage<::messages::Empty>(Arena*);
template<> ::messages::vec2* Arena::CreateMaybeMessage<::messages::vec2>(Arena*);
template<> ::messages::vec3* Arena::CreateMaybeMessage<::messages::vec3>(Arena*);
template<> ::messages::vec4* Arena::CreateMaybeMessage<::messages::vec4>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace messages {

// ===================================================================

class Empty :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:messages.Empty) */ {
 public:
  Empty();
  virtual ~Empty();

  Empty(const Empty& from);
  Empty(Empty&& from) noexcept
    : Empty() {
    *this = ::std::move(from);
  }

  inline Empty& operator=(const Empty& from) {
    CopyFrom(from);
    return *this;
  }
  inline Empty& operator=(Empty&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Empty& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Empty* internal_default_instance() {
    return reinterpret_cast<const Empty*>(
               &_Empty_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Empty& a, Empty& b) {
    a.Swap(&b);
  }
  inline void Swap(Empty* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Empty* New() const final {
    return CreateMaybeMessage<Empty>(nullptr);
  }

  Empty* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Empty>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Empty& from);
  void MergeFrom(const Empty& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Empty* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "messages.Empty";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_maths_2eproto);
    return ::descriptor_table_maths_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // @@protoc_insertion_point(class_scope:messages.Empty)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_maths_2eproto;
};
// -------------------------------------------------------------------

class vec2 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:messages.vec2) */ {
 public:
  vec2();
  virtual ~vec2();

  vec2(const vec2& from);
  vec2(vec2&& from) noexcept
    : vec2() {
    *this = ::std::move(from);
  }

  inline vec2& operator=(const vec2& from) {
    CopyFrom(from);
    return *this;
  }
  inline vec2& operator=(vec2&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const vec2& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const vec2* internal_default_instance() {
    return reinterpret_cast<const vec2*>(
               &_vec2_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(vec2& a, vec2& b) {
    a.Swap(&b);
  }
  inline void Swap(vec2* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline vec2* New() const final {
    return CreateMaybeMessage<vec2>(nullptr);
  }

  vec2* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<vec2>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const vec2& from);
  void MergeFrom(const vec2& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(vec2* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "messages.vec2";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_maths_2eproto);
    return ::descriptor_table_maths_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // @@protoc_insertion_point(class_scope:messages.vec2)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_maths_2eproto;
};
// -------------------------------------------------------------------

class vec3 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:messages.vec3) */ {
 public:
  vec3();
  virtual ~vec3();

  vec3(const vec3& from);
  vec3(vec3&& from) noexcept
    : vec3() {
    *this = ::std::move(from);
  }

  inline vec3& operator=(const vec3& from) {
    CopyFrom(from);
    return *this;
  }
  inline vec3& operator=(vec3&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const vec3& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const vec3* internal_default_instance() {
    return reinterpret_cast<const vec3*>(
               &_vec3_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    2;

  friend void swap(vec3& a, vec3& b) {
    a.Swap(&b);
  }
  inline void Swap(vec3* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline vec3* New() const final {
    return CreateMaybeMessage<vec3>(nullptr);
  }

  vec3* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<vec3>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const vec3& from);
  void MergeFrom(const vec3& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(vec3* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "messages.vec3";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_maths_2eproto);
    return ::descriptor_table_maths_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // double z = 3;
  void clear_z();
  double z() const;
  void set_z(double value);
  private:
  double _internal_z() const;
  void _internal_set_z(double value);
  public:

  // @@protoc_insertion_point(class_scope:messages.vec3)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  double z_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_maths_2eproto;
};
// -------------------------------------------------------------------

class vec4 :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:messages.vec4) */ {
 public:
  vec4();
  virtual ~vec4();

  vec4(const vec4& from);
  vec4(vec4&& from) noexcept
    : vec4() {
    *this = ::std::move(from);
  }

  inline vec4& operator=(const vec4& from) {
    CopyFrom(from);
    return *this;
  }
  inline vec4& operator=(vec4&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const vec4& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const vec4* internal_default_instance() {
    return reinterpret_cast<const vec4*>(
               &_vec4_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    3;

  friend void swap(vec4& a, vec4& b) {
    a.Swap(&b);
  }
  inline void Swap(vec4* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline vec4* New() const final {
    return CreateMaybeMessage<vec4>(nullptr);
  }

  vec4* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<vec4>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const vec4& from);
  void MergeFrom(const vec4& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(vec4* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "messages.vec4";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_maths_2eproto);
    return ::descriptor_table_maths_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kXFieldNumber = 1,
    kYFieldNumber = 2,
    kZFieldNumber = 3,
    kWFieldNumber = 4,
  };
  // double x = 1;
  void clear_x();
  double x() const;
  void set_x(double value);
  private:
  double _internal_x() const;
  void _internal_set_x(double value);
  public:

  // double y = 2;
  void clear_y();
  double y() const;
  void set_y(double value);
  private:
  double _internal_y() const;
  void _internal_set_y(double value);
  public:

  // double z = 3;
  void clear_z();
  double z() const;
  void set_z(double value);
  private:
  double _internal_z() const;
  void _internal_set_z(double value);
  public:

  // double w = 4;
  void clear_w();
  double w() const;
  void set_w(double value);
  private:
  double _internal_w() const;
  void _internal_set_w(double value);
  public:

  // @@protoc_insertion_point(class_scope:messages.vec4)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  double x_;
  double y_;
  double z_;
  double w_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_maths_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Empty

// -------------------------------------------------------------------

// vec2

// double x = 1;
inline void vec2::clear_x() {
  x_ = 0;
}
inline double vec2::_internal_x() const {
  return x_;
}
inline double vec2::x() const {
  // @@protoc_insertion_point(field_get:messages.vec2.x)
  return _internal_x();
}
inline void vec2::_internal_set_x(double value) {
  
  x_ = value;
}
inline void vec2::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:messages.vec2.x)
}

// double y = 2;
inline void vec2::clear_y() {
  y_ = 0;
}
inline double vec2::_internal_y() const {
  return y_;
}
inline double vec2::y() const {
  // @@protoc_insertion_point(field_get:messages.vec2.y)
  return _internal_y();
}
inline void vec2::_internal_set_y(double value) {
  
  y_ = value;
}
inline void vec2::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:messages.vec2.y)
}

// -------------------------------------------------------------------

// vec3

// double x = 1;
inline void vec3::clear_x() {
  x_ = 0;
}
inline double vec3::_internal_x() const {
  return x_;
}
inline double vec3::x() const {
  // @@protoc_insertion_point(field_get:messages.vec3.x)
  return _internal_x();
}
inline void vec3::_internal_set_x(double value) {
  
  x_ = value;
}
inline void vec3::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:messages.vec3.x)
}

// double y = 2;
inline void vec3::clear_y() {
  y_ = 0;
}
inline double vec3::_internal_y() const {
  return y_;
}
inline double vec3::y() const {
  // @@protoc_insertion_point(field_get:messages.vec3.y)
  return _internal_y();
}
inline void vec3::_internal_set_y(double value) {
  
  y_ = value;
}
inline void vec3::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:messages.vec3.y)
}

// double z = 3;
inline void vec3::clear_z() {
  z_ = 0;
}
inline double vec3::_internal_z() const {
  return z_;
}
inline double vec3::z() const {
  // @@protoc_insertion_point(field_get:messages.vec3.z)
  return _internal_z();
}
inline void vec3::_internal_set_z(double value) {
  
  z_ = value;
}
inline void vec3::set_z(double value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:messages.vec3.z)
}

// -------------------------------------------------------------------

// vec4

// double x = 1;
inline void vec4::clear_x() {
  x_ = 0;
}
inline double vec4::_internal_x() const {
  return x_;
}
inline double vec4::x() const {
  // @@protoc_insertion_point(field_get:messages.vec4.x)
  return _internal_x();
}
inline void vec4::_internal_set_x(double value) {
  
  x_ = value;
}
inline void vec4::set_x(double value) {
  _internal_set_x(value);
  // @@protoc_insertion_point(field_set:messages.vec4.x)
}

// double y = 2;
inline void vec4::clear_y() {
  y_ = 0;
}
inline double vec4::_internal_y() const {
  return y_;
}
inline double vec4::y() const {
  // @@protoc_insertion_point(field_get:messages.vec4.y)
  return _internal_y();
}
inline void vec4::_internal_set_y(double value) {
  
  y_ = value;
}
inline void vec4::set_y(double value) {
  _internal_set_y(value);
  // @@protoc_insertion_point(field_set:messages.vec4.y)
}

// double z = 3;
inline void vec4::clear_z() {
  z_ = 0;
}
inline double vec4::_internal_z() const {
  return z_;
}
inline double vec4::z() const {
  // @@protoc_insertion_point(field_get:messages.vec4.z)
  return _internal_z();
}
inline void vec4::_internal_set_z(double value) {
  
  z_ = value;
}
inline void vec4::set_z(double value) {
  _internal_set_z(value);
  // @@protoc_insertion_point(field_set:messages.vec4.z)
}

// double w = 4;
inline void vec4::clear_w() {
  w_ = 0;
}
inline double vec4::_internal_w() const {
  return w_;
}
inline double vec4::w() const {
  // @@protoc_insertion_point(field_get:messages.vec4.w)
  return _internal_w();
}
inline void vec4::_internal_set_w(double value) {
  
  w_ = value;
}
inline void vec4::set_w(double value) {
  _internal_set_w(value);
  // @@protoc_insertion_point(field_set:messages.vec4.w)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace messages

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_maths_2eproto
