/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: gamesys/model_ddf.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "gamesys/model_ddf.pb-c.h"
void   dm_model_ddf__model_desc__init
                     (DmModelDDF__ModelDesc         *message)
{
  static const DmModelDDF__ModelDesc init_value = DM_MODEL_DDF__MODEL_DESC__INIT;
  *message = init_value;
}
size_t dm_model_ddf__model_desc__get_packed_size
                     (const DmModelDDF__ModelDesc *message)
{
  assert(message->base.descriptor == &dm_model_ddf__model_desc__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_model_ddf__model_desc__pack
                     (const DmModelDDF__ModelDesc *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_model_ddf__model_desc__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_model_ddf__model_desc__pack_to_buffer
                     (const DmModelDDF__ModelDesc *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_model_ddf__model_desc__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmModelDDF__ModelDesc *
       dm_model_ddf__model_desc__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmModelDDF__ModelDesc *)
     protobuf_c_message_unpack (&dm_model_ddf__model_desc__descriptor,
                                allocator, len, data);
}
void   dm_model_ddf__model_desc__free_unpacked
                     (DmModelDDF__ModelDesc *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_model_ddf__model_desc__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_model_ddf__model__init
                     (DmModelDDF__Model         *message)
{
  static const DmModelDDF__Model init_value = DM_MODEL_DDF__MODEL__INIT;
  *message = init_value;
}
size_t dm_model_ddf__model__get_packed_size
                     (const DmModelDDF__Model *message)
{
  assert(message->base.descriptor == &dm_model_ddf__model__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_model_ddf__model__pack
                     (const DmModelDDF__Model *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_model_ddf__model__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_model_ddf__model__pack_to_buffer
                     (const DmModelDDF__Model *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_model_ddf__model__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmModelDDF__Model *
       dm_model_ddf__model__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmModelDDF__Model *)
     protobuf_c_message_unpack (&dm_model_ddf__model__descriptor,
                                allocator, len, data);
}
void   dm_model_ddf__model__free_unpacked
                     (DmModelDDF__Model *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_model_ddf__model__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_model_ddf__reset_constant__init
                     (DmModelDDF__ResetConstant         *message)
{
  static const DmModelDDF__ResetConstant init_value = DM_MODEL_DDF__RESET_CONSTANT__INIT;
  *message = init_value;
}
size_t dm_model_ddf__reset_constant__get_packed_size
                     (const DmModelDDF__ResetConstant *message)
{
  assert(message->base.descriptor == &dm_model_ddf__reset_constant__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_model_ddf__reset_constant__pack
                     (const DmModelDDF__ResetConstant *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_model_ddf__reset_constant__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_model_ddf__reset_constant__pack_to_buffer
                     (const DmModelDDF__ResetConstant *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_model_ddf__reset_constant__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmModelDDF__ResetConstant *
       dm_model_ddf__reset_constant__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmModelDDF__ResetConstant *)
     protobuf_c_message_unpack (&dm_model_ddf__reset_constant__descriptor,
                                allocator, len, data);
}
void   dm_model_ddf__reset_constant__free_unpacked
                     (DmModelDDF__ResetConstant *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_model_ddf__reset_constant__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_model_ddf__set_texture__init
                     (DmModelDDF__SetTexture         *message)
{
  static const DmModelDDF__SetTexture init_value = DM_MODEL_DDF__SET_TEXTURE__INIT;
  *message = init_value;
}
size_t dm_model_ddf__set_texture__get_packed_size
                     (const DmModelDDF__SetTexture *message)
{
  assert(message->base.descriptor == &dm_model_ddf__set_texture__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_model_ddf__set_texture__pack
                     (const DmModelDDF__SetTexture *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_model_ddf__set_texture__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_model_ddf__set_texture__pack_to_buffer
                     (const DmModelDDF__SetTexture *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_model_ddf__set_texture__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmModelDDF__SetTexture *
       dm_model_ddf__set_texture__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmModelDDF__SetTexture *)
     protobuf_c_message_unpack (&dm_model_ddf__set_texture__descriptor,
                                allocator, len, data);
}
void   dm_model_ddf__set_texture__free_unpacked
                     (DmModelDDF__SetTexture *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_model_ddf__set_texture__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_model_ddf__model_play_animation__init
                     (DmModelDDF__ModelPlayAnimation         *message)
{
  static const DmModelDDF__ModelPlayAnimation init_value = DM_MODEL_DDF__MODEL_PLAY_ANIMATION__INIT;
  *message = init_value;
}
size_t dm_model_ddf__model_play_animation__get_packed_size
                     (const DmModelDDF__ModelPlayAnimation *message)
{
  assert(message->base.descriptor == &dm_model_ddf__model_play_animation__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_model_ddf__model_play_animation__pack
                     (const DmModelDDF__ModelPlayAnimation *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_model_ddf__model_play_animation__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_model_ddf__model_play_animation__pack_to_buffer
                     (const DmModelDDF__ModelPlayAnimation *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_model_ddf__model_play_animation__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmModelDDF__ModelPlayAnimation *
       dm_model_ddf__model_play_animation__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmModelDDF__ModelPlayAnimation *)
     protobuf_c_message_unpack (&dm_model_ddf__model_play_animation__descriptor,
                                allocator, len, data);
}
void   dm_model_ddf__model_play_animation__free_unpacked
                     (DmModelDDF__ModelPlayAnimation *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_model_ddf__model_play_animation__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_model_ddf__model_cancel_animation__init
                     (DmModelDDF__ModelCancelAnimation         *message)
{
  static const DmModelDDF__ModelCancelAnimation init_value = DM_MODEL_DDF__MODEL_CANCEL_ANIMATION__INIT;
  *message = init_value;
}
size_t dm_model_ddf__model_cancel_animation__get_packed_size
                     (const DmModelDDF__ModelCancelAnimation *message)
{
  assert(message->base.descriptor == &dm_model_ddf__model_cancel_animation__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_model_ddf__model_cancel_animation__pack
                     (const DmModelDDF__ModelCancelAnimation *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_model_ddf__model_cancel_animation__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_model_ddf__model_cancel_animation__pack_to_buffer
                     (const DmModelDDF__ModelCancelAnimation *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_model_ddf__model_cancel_animation__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmModelDDF__ModelCancelAnimation *
       dm_model_ddf__model_cancel_animation__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmModelDDF__ModelCancelAnimation *)
     protobuf_c_message_unpack (&dm_model_ddf__model_cancel_animation__descriptor,
                                allocator, len, data);
}
void   dm_model_ddf__model_cancel_animation__free_unpacked
                     (DmModelDDF__ModelCancelAnimation *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_model_ddf__model_cancel_animation__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_model_ddf__model_animation_done__init
                     (DmModelDDF__ModelAnimationDone         *message)
{
  static const DmModelDDF__ModelAnimationDone init_value = DM_MODEL_DDF__MODEL_ANIMATION_DONE__INIT;
  *message = init_value;
}
size_t dm_model_ddf__model_animation_done__get_packed_size
                     (const DmModelDDF__ModelAnimationDone *message)
{
  assert(message->base.descriptor == &dm_model_ddf__model_animation_done__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_model_ddf__model_animation_done__pack
                     (const DmModelDDF__ModelAnimationDone *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_model_ddf__model_animation_done__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_model_ddf__model_animation_done__pack_to_buffer
                     (const DmModelDDF__ModelAnimationDone *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_model_ddf__model_animation_done__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmModelDDF__ModelAnimationDone *
       dm_model_ddf__model_animation_done__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmModelDDF__ModelAnimationDone *)
     protobuf_c_message_unpack (&dm_model_ddf__model_animation_done__descriptor,
                                allocator, len, data);
}
void   dm_model_ddf__model_animation_done__free_unpacked
                     (DmModelDDF__ModelAnimationDone *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_model_ddf__model_animation_done__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor dm_model_ddf__model_desc__field_descriptors[7] =
{
  {
    "mesh",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__ModelDesc, mesh),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "material",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__ModelDesc, material),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "textures",
    4,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(DmModelDDF__ModelDesc, n_textures),
    offsetof(DmModelDDF__ModelDesc, textures),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "skeleton",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__ModelDesc, skeleton),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "animations",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__ModelDesc, animations),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "default_animation",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__ModelDesc, default_animation),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "name",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__ModelDesc, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_model_ddf__model_desc__field_indices_by_name[] = {
  4,   /* field[4] = animations */
  5,   /* field[5] = default_animation */
  1,   /* field[1] = material */
  0,   /* field[0] = mesh */
  6,   /* field[6] = name */
  3,   /* field[3] = skeleton */
  2,   /* field[2] = textures */
};
static const ProtobufCIntRange dm_model_ddf__model_desc__number_ranges[2 + 1] =
{
  { 2, 0 },
  { 10, 6 },
  { 0, 7 }
};
const ProtobufCMessageDescriptor dm_model_ddf__model_desc__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmModelDDF.ModelDesc",
  "ModelDesc",
  "DmModelDDF__ModelDesc",
  "dmModelDDF",
  sizeof(DmModelDDF__ModelDesc),
  7,
  dm_model_ddf__model_desc__field_descriptors,
  dm_model_ddf__model_desc__field_indices_by_name,
  2,  dm_model_ddf__model_desc__number_ranges,
  (ProtobufCMessageInit) dm_model_ddf__model_desc__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_model_ddf__model__field_descriptors[4] =
{
  {
    "rig_scene",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__Model, rig_scene),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "material",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__Model, material),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "textures",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(DmModelDDF__Model, n_textures),
    offsetof(DmModelDDF__Model, textures),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "default_animation",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__Model, default_animation),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_model_ddf__model__field_indices_by_name[] = {
  3,   /* field[3] = default_animation */
  1,   /* field[1] = material */
  0,   /* field[0] = rig_scene */
  2,   /* field[2] = textures */
};
static const ProtobufCIntRange dm_model_ddf__model__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 4 }
};
const ProtobufCMessageDescriptor dm_model_ddf__model__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmModelDDF.Model",
  "Model",
  "DmModelDDF__Model",
  "dmModelDDF",
  sizeof(DmModelDDF__Model),
  4,
  dm_model_ddf__model__field_descriptors,
  dm_model_ddf__model__field_indices_by_name,
  1,  dm_model_ddf__model__number_ranges,
  (ProtobufCMessageInit) dm_model_ddf__model__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_model_ddf__reset_constant__field_descriptors[1] =
{
  {
    "name_hash",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__ResetConstant, name_hash),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_model_ddf__reset_constant__field_indices_by_name[] = {
  0,   /* field[0] = name_hash */
};
static const ProtobufCIntRange dm_model_ddf__reset_constant__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor dm_model_ddf__reset_constant__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmModelDDF.ResetConstant",
  "ResetConstant",
  "DmModelDDF__ResetConstant",
  "dmModelDDF",
  sizeof(DmModelDDF__ResetConstant),
  1,
  dm_model_ddf__reset_constant__field_descriptors,
  dm_model_ddf__reset_constant__field_indices_by_name,
  1,  dm_model_ddf__reset_constant__number_ranges,
  (ProtobufCMessageInit) dm_model_ddf__reset_constant__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_model_ddf__set_texture__field_descriptors[2] =
{
  {
    "texture_hash",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__SetTexture, texture_hash),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "texture_unit",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__SetTexture, texture_unit),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_model_ddf__set_texture__field_indices_by_name[] = {
  0,   /* field[0] = texture_hash */
  1,   /* field[1] = texture_unit */
};
static const ProtobufCIntRange dm_model_ddf__set_texture__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor dm_model_ddf__set_texture__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmModelDDF.SetTexture",
  "SetTexture",
  "DmModelDDF__SetTexture",
  "dmModelDDF",
  sizeof(DmModelDDF__SetTexture),
  2,
  dm_model_ddf__set_texture__field_descriptors,
  dm_model_ddf__set_texture__field_indices_by_name,
  1,  dm_model_ddf__set_texture__number_ranges,
  (ProtobufCMessageInit) dm_model_ddf__set_texture__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const float dm_model_ddf__model_play_animation__blend_duration__default_value = 0;
static const float dm_model_ddf__model_play_animation__offset__default_value = 0;
static const float dm_model_ddf__model_play_animation__playback_rate__default_value = 1;
static const ProtobufCFieldDescriptor dm_model_ddf__model_play_animation__field_descriptors[5] =
{
  {
    "animation_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__ModelPlayAnimation, animation_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "playback",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__ModelPlayAnimation, playback),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "blend_duration",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmModelDDF__ModelPlayAnimation, has_blend_duration),
    offsetof(DmModelDDF__ModelPlayAnimation, blend_duration),
    NULL,
    &dm_model_ddf__model_play_animation__blend_duration__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "offset",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmModelDDF__ModelPlayAnimation, has_offset),
    offsetof(DmModelDDF__ModelPlayAnimation, offset),
    NULL,
    &dm_model_ddf__model_play_animation__offset__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "playback_rate",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmModelDDF__ModelPlayAnimation, has_playback_rate),
    offsetof(DmModelDDF__ModelPlayAnimation, playback_rate),
    NULL,
    &dm_model_ddf__model_play_animation__playback_rate__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_model_ddf__model_play_animation__field_indices_by_name[] = {
  0,   /* field[0] = animation_id */
  2,   /* field[2] = blend_duration */
  3,   /* field[3] = offset */
  1,   /* field[1] = playback */
  4,   /* field[4] = playback_rate */
};
static const ProtobufCIntRange dm_model_ddf__model_play_animation__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 5 }
};
const ProtobufCMessageDescriptor dm_model_ddf__model_play_animation__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmModelDDF.ModelPlayAnimation",
  "ModelPlayAnimation",
  "DmModelDDF__ModelPlayAnimation",
  "dmModelDDF",
  sizeof(DmModelDDF__ModelPlayAnimation),
  5,
  dm_model_ddf__model_play_animation__field_descriptors,
  dm_model_ddf__model_play_animation__field_indices_by_name,
  1,  dm_model_ddf__model_play_animation__number_ranges,
  (ProtobufCMessageInit) dm_model_ddf__model_play_animation__init,
  NULL,NULL,NULL    /* reserved[123] */
};
#define dm_model_ddf__model_cancel_animation__field_descriptors NULL
#define dm_model_ddf__model_cancel_animation__field_indices_by_name NULL
#define dm_model_ddf__model_cancel_animation__number_ranges NULL
const ProtobufCMessageDescriptor dm_model_ddf__model_cancel_animation__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmModelDDF.ModelCancelAnimation",
  "ModelCancelAnimation",
  "DmModelDDF__ModelCancelAnimation",
  "dmModelDDF",
  sizeof(DmModelDDF__ModelCancelAnimation),
  0,
  dm_model_ddf__model_cancel_animation__field_descriptors,
  dm_model_ddf__model_cancel_animation__field_indices_by_name,
  0,  dm_model_ddf__model_cancel_animation__number_ranges,
  (ProtobufCMessageInit) dm_model_ddf__model_cancel_animation__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_model_ddf__model_animation_done__field_descriptors[2] =
{
  {
    "animation_id",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__ModelAnimationDone, animation_id),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "playback",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmModelDDF__ModelAnimationDone, playback),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_model_ddf__model_animation_done__field_indices_by_name[] = {
  0,   /* field[0] = animation_id */
  1,   /* field[1] = playback */
};
static const ProtobufCIntRange dm_model_ddf__model_animation_done__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor dm_model_ddf__model_animation_done__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmModelDDF.ModelAnimationDone",
  "ModelAnimationDone",
  "DmModelDDF__ModelAnimationDone",
  "dmModelDDF",
  sizeof(DmModelDDF__ModelAnimationDone),
  2,
  dm_model_ddf__model_animation_done__field_descriptors,
  dm_model_ddf__model_animation_done__field_indices_by_name,
  1,  dm_model_ddf__model_animation_done__number_ranges,
  (ProtobufCMessageInit) dm_model_ddf__model_animation_done__init,
  NULL,NULL,NULL    /* reserved[123] */
};