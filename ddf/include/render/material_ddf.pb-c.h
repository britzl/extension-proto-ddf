/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: render/material_ddf.proto */

#ifndef PROTOBUF_C_render_2fmaterial_5fddf_2eproto__INCLUDED
#define PROTOBUF_C_render_2fmaterial_5fddf_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "ddf/ddf_extensions.pb-c.h"
#include "ddf/ddf_math.pb-c.h"

typedef struct DmRenderDDF__MaterialDesc DmRenderDDF__MaterialDesc;
typedef struct DmRenderDDF__MaterialDesc__Constant DmRenderDDF__MaterialDesc__Constant;
typedef struct DmRenderDDF__MaterialDesc__Sampler DmRenderDDF__MaterialDesc__Sampler;


/* --- enums --- */

typedef enum _DmRenderDDF__MaterialDesc__ConstantType {
  DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_USER = 0,
  DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_VIEWPROJ = 1,
  DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_WORLD = 2,
  DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_TEXTURE = 3,
  DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_VIEW = 4,
  DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_PROJECTION = 5,
  DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_NORMAL = 6,
  DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_WORLDVIEW = 7,
  DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_WORLDVIEWPROJ = 8,
  DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_USER_MATRIX4 = 9
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE)
} DmRenderDDF__MaterialDesc__ConstantType;
typedef enum _DmRenderDDF__MaterialDesc__VertexSpace {
  DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE__VERTEX_SPACE_WORLD = 0,
  DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE__VERTEX_SPACE_LOCAL = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE)
} DmRenderDDF__MaterialDesc__VertexSpace;
typedef enum _DmRenderDDF__MaterialDesc__WrapMode {
  DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE__WRAP_MODE_REPEAT = 0,
  DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE__WRAP_MODE_MIRRORED_REPEAT = 1,
  DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE__WRAP_MODE_CLAMP_TO_EDGE = 2
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE)
} DmRenderDDF__MaterialDesc__WrapMode;
typedef enum _DmRenderDDF__MaterialDesc__FilterModeMin {
  DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_NEAREST = 0,
  DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_LINEAR = 1,
  DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_NEAREST_MIPMAP_NEAREST = 2,
  DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_NEAREST_MIPMAP_LINEAR = 3,
  DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_LINEAR_MIPMAP_NEAREST = 4,
  DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_LINEAR_MIPMAP_LINEAR = 5
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN)
} DmRenderDDF__MaterialDesc__FilterModeMin;
typedef enum _DmRenderDDF__MaterialDesc__FilterModeMag {
  DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG__FILTER_MODE_MAG_NEAREST = 0,
  DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG__FILTER_MODE_MAG_LINEAR = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG)
} DmRenderDDF__MaterialDesc__FilterModeMag;

/* --- messages --- */

struct  DmRenderDDF__MaterialDesc__Constant
{
  ProtobufCMessage base;
  char *name;
  DmRenderDDF__MaterialDesc__ConstantType type;
  size_t n_value;
  DmMath__Vector4 **value;
};
#define DM_RENDER_DDF__MATERIAL_DESC__CONSTANT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_render_ddf__material_desc__constant__descriptor) \
    , NULL, DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_USER, 0,NULL }


struct  DmRenderDDF__MaterialDesc__Sampler
{
  ProtobufCMessage base;
  /*
   * uniform name
   */
  char *name;
  DmRenderDDF__MaterialDesc__WrapMode wrap_u;
  DmRenderDDF__MaterialDesc__WrapMode wrap_v;
  DmRenderDDF__MaterialDesc__FilterModeMin filter_min;
  DmRenderDDF__MaterialDesc__FilterModeMag filter_mag;
  protobuf_c_boolean has_max_anisotropy;
  float max_anisotropy;
};
#define DM_RENDER_DDF__MATERIAL_DESC__SAMPLER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_render_ddf__material_desc__sampler__descriptor) \
    , NULL, DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE__WRAP_MODE_REPEAT, DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE__WRAP_MODE_REPEAT, DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_NEAREST, DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG__FILTER_MODE_MAG_NEAREST, 0, 1 }


struct  DmRenderDDF__MaterialDesc
{
  ProtobufCMessage base;
  char *name;
  size_t n_tags;
  char **tags;
  char *vertex_program;
  char *fragment_program;
  protobuf_c_boolean has_vertex_space;
  DmRenderDDF__MaterialDesc__VertexSpace vertex_space;
  size_t n_vertex_constants;
  DmRenderDDF__MaterialDesc__Constant **vertex_constants;
  size_t n_fragment_constants;
  DmRenderDDF__MaterialDesc__Constant **fragment_constants;
  size_t n_textures;
  char **textures;
  size_t n_samplers;
  DmRenderDDF__MaterialDesc__Sampler **samplers;
};
#define DM_RENDER_DDF__MATERIAL_DESC__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_render_ddf__material_desc__descriptor) \
    , NULL, 0,NULL, NULL, NULL, 0, DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE__VERTEX_SPACE_WORLD, 0,NULL, 0,NULL, 0,NULL, 0,NULL }


/* DmRenderDDF__MaterialDesc__Constant methods */
void   dm_render_ddf__material_desc__constant__init
                     (DmRenderDDF__MaterialDesc__Constant         *message);
/* DmRenderDDF__MaterialDesc__Sampler methods */
void   dm_render_ddf__material_desc__sampler__init
                     (DmRenderDDF__MaterialDesc__Sampler         *message);
/* DmRenderDDF__MaterialDesc methods */
void   dm_render_ddf__material_desc__init
                     (DmRenderDDF__MaterialDesc         *message);
size_t dm_render_ddf__material_desc__get_packed_size
                     (const DmRenderDDF__MaterialDesc   *message);
size_t dm_render_ddf__material_desc__pack
                     (const DmRenderDDF__MaterialDesc   *message,
                      uint8_t             *out);
size_t dm_render_ddf__material_desc__pack_to_buffer
                     (const DmRenderDDF__MaterialDesc   *message,
                      ProtobufCBuffer     *buffer);
DmRenderDDF__MaterialDesc *
       dm_render_ddf__material_desc__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_render_ddf__material_desc__free_unpacked
                     (DmRenderDDF__MaterialDesc *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*DmRenderDDF__MaterialDesc__Constant_Closure)
                 (const DmRenderDDF__MaterialDesc__Constant *message,
                  void *closure_data);
typedef void (*DmRenderDDF__MaterialDesc__Sampler_Closure)
                 (const DmRenderDDF__MaterialDesc__Sampler *message,
                  void *closure_data);
typedef void (*DmRenderDDF__MaterialDesc_Closure)
                 (const DmRenderDDF__MaterialDesc *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor dm_render_ddf__material_desc__descriptor;
extern const ProtobufCMessageDescriptor dm_render_ddf__material_desc__constant__descriptor;
extern const ProtobufCMessageDescriptor dm_render_ddf__material_desc__sampler__descriptor;
extern const ProtobufCEnumDescriptor    dm_render_ddf__material_desc__constant_type__descriptor;
extern const ProtobufCEnumDescriptor    dm_render_ddf__material_desc__vertex_space__descriptor;
extern const ProtobufCEnumDescriptor    dm_render_ddf__material_desc__wrap_mode__descriptor;
extern const ProtobufCEnumDescriptor    dm_render_ddf__material_desc__filter_mode_min__descriptor;
extern const ProtobufCEnumDescriptor    dm_render_ddf__material_desc__filter_mode_mag__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_render_2fmaterial_5fddf_2eproto__INCLUDED */
