/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: render/render_ddf.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "render/render_ddf.pb-c.h"
void   dm_render_ddf__render_prototype_desc__material_desc__init
                     (DmRenderDDF__RenderPrototypeDesc__MaterialDesc         *message)
{
  static const DmRenderDDF__RenderPrototypeDesc__MaterialDesc init_value = DM_RENDER_DDF__RENDER_PROTOTYPE_DESC__MATERIAL_DESC__INIT;
  *message = init_value;
}
void   dm_render_ddf__render_prototype_desc__init
                     (DmRenderDDF__RenderPrototypeDesc         *message)
{
  static const DmRenderDDF__RenderPrototypeDesc init_value = DM_RENDER_DDF__RENDER_PROTOTYPE_DESC__INIT;
  *message = init_value;
}
size_t dm_render_ddf__render_prototype_desc__get_packed_size
                     (const DmRenderDDF__RenderPrototypeDesc *message)
{
  assert(message->base.descriptor == &dm_render_ddf__render_prototype_desc__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__render_prototype_desc__pack
                     (const DmRenderDDF__RenderPrototypeDesc *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__render_prototype_desc__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__render_prototype_desc__pack_to_buffer
                     (const DmRenderDDF__RenderPrototypeDesc *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__render_prototype_desc__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__RenderPrototypeDesc *
       dm_render_ddf__render_prototype_desc__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__RenderPrototypeDesc *)
     protobuf_c_message_unpack (&dm_render_ddf__render_prototype_desc__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__render_prototype_desc__free_unpacked
                     (DmRenderDDF__RenderPrototypeDesc *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__render_prototype_desc__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_render_ddf__draw_text__init
                     (DmRenderDDF__DrawText         *message)
{
  static const DmRenderDDF__DrawText init_value = DM_RENDER_DDF__DRAW_TEXT__INIT;
  *message = init_value;
}
size_t dm_render_ddf__draw_text__get_packed_size
                     (const DmRenderDDF__DrawText *message)
{
  assert(message->base.descriptor == &dm_render_ddf__draw_text__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__draw_text__pack
                     (const DmRenderDDF__DrawText *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__draw_text__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__draw_text__pack_to_buffer
                     (const DmRenderDDF__DrawText *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__draw_text__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__DrawText *
       dm_render_ddf__draw_text__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__DrawText *)
     protobuf_c_message_unpack (&dm_render_ddf__draw_text__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__draw_text__free_unpacked
                     (DmRenderDDF__DrawText *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__draw_text__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_render_ddf__draw_debug_text__init
                     (DmRenderDDF__DrawDebugText         *message)
{
  static const DmRenderDDF__DrawDebugText init_value = DM_RENDER_DDF__DRAW_DEBUG_TEXT__INIT;
  *message = init_value;
}
size_t dm_render_ddf__draw_debug_text__get_packed_size
                     (const DmRenderDDF__DrawDebugText *message)
{
  assert(message->base.descriptor == &dm_render_ddf__draw_debug_text__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__draw_debug_text__pack
                     (const DmRenderDDF__DrawDebugText *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__draw_debug_text__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__draw_debug_text__pack_to_buffer
                     (const DmRenderDDF__DrawDebugText *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__draw_debug_text__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__DrawDebugText *
       dm_render_ddf__draw_debug_text__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__DrawDebugText *)
     protobuf_c_message_unpack (&dm_render_ddf__draw_debug_text__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__draw_debug_text__free_unpacked
                     (DmRenderDDF__DrawDebugText *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__draw_debug_text__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_render_ddf__draw_line__init
                     (DmRenderDDF__DrawLine         *message)
{
  static const DmRenderDDF__DrawLine init_value = DM_RENDER_DDF__DRAW_LINE__INIT;
  *message = init_value;
}
size_t dm_render_ddf__draw_line__get_packed_size
                     (const DmRenderDDF__DrawLine *message)
{
  assert(message->base.descriptor == &dm_render_ddf__draw_line__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__draw_line__pack
                     (const DmRenderDDF__DrawLine *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__draw_line__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__draw_line__pack_to_buffer
                     (const DmRenderDDF__DrawLine *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__draw_line__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__DrawLine *
       dm_render_ddf__draw_line__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__DrawLine *)
     protobuf_c_message_unpack (&dm_render_ddf__draw_line__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__draw_line__free_unpacked
                     (DmRenderDDF__DrawLine *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__draw_line__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_render_ddf__window_resized__init
                     (DmRenderDDF__WindowResized         *message)
{
  static const DmRenderDDF__WindowResized init_value = DM_RENDER_DDF__WINDOW_RESIZED__INIT;
  *message = init_value;
}
size_t dm_render_ddf__window_resized__get_packed_size
                     (const DmRenderDDF__WindowResized *message)
{
  assert(message->base.descriptor == &dm_render_ddf__window_resized__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__window_resized__pack
                     (const DmRenderDDF__WindowResized *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__window_resized__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__window_resized__pack_to_buffer
                     (const DmRenderDDF__WindowResized *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__window_resized__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__WindowResized *
       dm_render_ddf__window_resized__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__WindowResized *)
     protobuf_c_message_unpack (&dm_render_ddf__window_resized__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__window_resized__free_unpacked
                     (DmRenderDDF__WindowResized *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__window_resized__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_render_ddf__resize__init
                     (DmRenderDDF__Resize         *message)
{
  static const DmRenderDDF__Resize init_value = DM_RENDER_DDF__RESIZE__INIT;
  *message = init_value;
}
size_t dm_render_ddf__resize__get_packed_size
                     (const DmRenderDDF__Resize *message)
{
  assert(message->base.descriptor == &dm_render_ddf__resize__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__resize__pack
                     (const DmRenderDDF__Resize *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__resize__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__resize__pack_to_buffer
                     (const DmRenderDDF__Resize *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__resize__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__Resize *
       dm_render_ddf__resize__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__Resize *)
     protobuf_c_message_unpack (&dm_render_ddf__resize__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__resize__free_unpacked
                     (DmRenderDDF__Resize *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__resize__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_render_ddf__clear_color__init
                     (DmRenderDDF__ClearColor         *message)
{
  static const DmRenderDDF__ClearColor init_value = DM_RENDER_DDF__CLEAR_COLOR__INIT;
  *message = init_value;
}
size_t dm_render_ddf__clear_color__get_packed_size
                     (const DmRenderDDF__ClearColor *message)
{
  assert(message->base.descriptor == &dm_render_ddf__clear_color__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__clear_color__pack
                     (const DmRenderDDF__ClearColor *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__clear_color__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__clear_color__pack_to_buffer
                     (const DmRenderDDF__ClearColor *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__clear_color__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__ClearColor *
       dm_render_ddf__clear_color__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__ClearColor *)
     protobuf_c_message_unpack (&dm_render_ddf__clear_color__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__clear_color__free_unpacked
                     (DmRenderDDF__ClearColor *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__clear_color__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_render_ddf__display_profile_qualifier__init
                     (DmRenderDDF__DisplayProfileQualifier         *message)
{
  static const DmRenderDDF__DisplayProfileQualifier init_value = DM_RENDER_DDF__DISPLAY_PROFILE_QUALIFIER__INIT;
  *message = init_value;
}
size_t dm_render_ddf__display_profile_qualifier__get_packed_size
                     (const DmRenderDDF__DisplayProfileQualifier *message)
{
  assert(message->base.descriptor == &dm_render_ddf__display_profile_qualifier__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__display_profile_qualifier__pack
                     (const DmRenderDDF__DisplayProfileQualifier *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__display_profile_qualifier__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__display_profile_qualifier__pack_to_buffer
                     (const DmRenderDDF__DisplayProfileQualifier *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__display_profile_qualifier__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__DisplayProfileQualifier *
       dm_render_ddf__display_profile_qualifier__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__DisplayProfileQualifier *)
     protobuf_c_message_unpack (&dm_render_ddf__display_profile_qualifier__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__display_profile_qualifier__free_unpacked
                     (DmRenderDDF__DisplayProfileQualifier *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__display_profile_qualifier__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_render_ddf__display_profile__init
                     (DmRenderDDF__DisplayProfile         *message)
{
  static const DmRenderDDF__DisplayProfile init_value = DM_RENDER_DDF__DISPLAY_PROFILE__INIT;
  *message = init_value;
}
size_t dm_render_ddf__display_profile__get_packed_size
                     (const DmRenderDDF__DisplayProfile *message)
{
  assert(message->base.descriptor == &dm_render_ddf__display_profile__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__display_profile__pack
                     (const DmRenderDDF__DisplayProfile *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__display_profile__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__display_profile__pack_to_buffer
                     (const DmRenderDDF__DisplayProfile *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__display_profile__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__DisplayProfile *
       dm_render_ddf__display_profile__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__DisplayProfile *)
     protobuf_c_message_unpack (&dm_render_ddf__display_profile__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__display_profile__free_unpacked
                     (DmRenderDDF__DisplayProfile *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__display_profile__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_render_ddf__display_profiles__init
                     (DmRenderDDF__DisplayProfiles         *message)
{
  static const DmRenderDDF__DisplayProfiles init_value = DM_RENDER_DDF__DISPLAY_PROFILES__INIT;
  *message = init_value;
}
size_t dm_render_ddf__display_profiles__get_packed_size
                     (const DmRenderDDF__DisplayProfiles *message)
{
  assert(message->base.descriptor == &dm_render_ddf__display_profiles__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__display_profiles__pack
                     (const DmRenderDDF__DisplayProfiles *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__display_profiles__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__display_profiles__pack_to_buffer
                     (const DmRenderDDF__DisplayProfiles *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__display_profiles__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__DisplayProfiles *
       dm_render_ddf__display_profiles__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__DisplayProfiles *)
     protobuf_c_message_unpack (&dm_render_ddf__display_profiles__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__display_profiles__free_unpacked
                     (DmRenderDDF__DisplayProfiles *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__display_profiles__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
static const ProtobufCFieldDescriptor dm_render_ddf__render_prototype_desc__material_desc__field_descriptors[2] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__RenderPrototypeDesc__MaterialDesc, name),
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
    offsetof(DmRenderDDF__RenderPrototypeDesc__MaterialDesc, material),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__render_prototype_desc__material_desc__field_indices_by_name[] = {
  1,   /* field[1] = material */
  0,   /* field[0] = name */
};
static const ProtobufCIntRange dm_render_ddf__render_prototype_desc__material_desc__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor dm_render_ddf__render_prototype_desc__material_desc__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.RenderPrototypeDesc.MaterialDesc",
  "MaterialDesc",
  "DmRenderDDF__RenderPrototypeDesc__MaterialDesc",
  "dmRenderDDF",
  sizeof(DmRenderDDF__RenderPrototypeDesc__MaterialDesc),
  2,
  dm_render_ddf__render_prototype_desc__material_desc__field_descriptors,
  dm_render_ddf__render_prototype_desc__material_desc__field_indices_by_name,
  1,  dm_render_ddf__render_prototype_desc__material_desc__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__render_prototype_desc__material_desc__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_render_ddf__render_prototype_desc__field_descriptors[2] =
{
  {
    "script",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__RenderPrototypeDesc, script),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "materials",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(DmRenderDDF__RenderPrototypeDesc, n_materials),
    offsetof(DmRenderDDF__RenderPrototypeDesc, materials),
    &dm_render_ddf__render_prototype_desc__material_desc__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__render_prototype_desc__field_indices_by_name[] = {
  1,   /* field[1] = materials */
  0,   /* field[0] = script */
};
static const ProtobufCIntRange dm_render_ddf__render_prototype_desc__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor dm_render_ddf__render_prototype_desc__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.RenderPrototypeDesc",
  "RenderPrototypeDesc",
  "DmRenderDDF__RenderPrototypeDesc",
  "dmRenderDDF",
  sizeof(DmRenderDDF__RenderPrototypeDesc),
  2,
  dm_render_ddf__render_prototype_desc__field_descriptors,
  dm_render_ddf__render_prototype_desc__field_indices_by_name,
  1,  dm_render_ddf__render_prototype_desc__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__render_prototype_desc__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_render_ddf__draw_text__field_descriptors[2] =
{
  {
    "position",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__DrawText, position),
    &dm_math__point3__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "text",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__DrawText, text),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__draw_text__field_indices_by_name[] = {
  0,   /* field[0] = position */
  1,   /* field[1] = text */
};
static const ProtobufCIntRange dm_render_ddf__draw_text__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor dm_render_ddf__draw_text__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.DrawText",
  "DrawText",
  "DmRenderDDF__DrawText",
  "dmRenderDDF",
  sizeof(DmRenderDDF__DrawText),
  2,
  dm_render_ddf__draw_text__field_descriptors,
  dm_render_ddf__draw_text__field_indices_by_name,
  1,  dm_render_ddf__draw_text__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__draw_text__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_render_ddf__draw_debug_text__field_descriptors[3] =
{
  {
    "position",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__DrawDebugText, position),
    &dm_math__point3__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "text",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__DrawDebugText, text),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "color",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__DrawDebugText, color),
    &dm_math__vector4__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__draw_debug_text__field_indices_by_name[] = {
  2,   /* field[2] = color */
  0,   /* field[0] = position */
  1,   /* field[1] = text */
};
static const ProtobufCIntRange dm_render_ddf__draw_debug_text__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor dm_render_ddf__draw_debug_text__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.DrawDebugText",
  "DrawDebugText",
  "DmRenderDDF__DrawDebugText",
  "dmRenderDDF",
  sizeof(DmRenderDDF__DrawDebugText),
  3,
  dm_render_ddf__draw_debug_text__field_descriptors,
  dm_render_ddf__draw_debug_text__field_indices_by_name,
  1,  dm_render_ddf__draw_debug_text__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__draw_debug_text__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_render_ddf__draw_line__field_descriptors[3] =
{
  {
    "start_point",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__DrawLine, start_point),
    &dm_math__point3__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "end_point",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__DrawLine, end_point),
    &dm_math__point3__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "color",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__DrawLine, color),
    &dm_math__vector4__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__draw_line__field_indices_by_name[] = {
  2,   /* field[2] = color */
  1,   /* field[1] = end_point */
  0,   /* field[0] = start_point */
};
static const ProtobufCIntRange dm_render_ddf__draw_line__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor dm_render_ddf__draw_line__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.DrawLine",
  "DrawLine",
  "DmRenderDDF__DrawLine",
  "dmRenderDDF",
  sizeof(DmRenderDDF__DrawLine),
  3,
  dm_render_ddf__draw_line__field_descriptors,
  dm_render_ddf__draw_line__field_indices_by_name,
  1,  dm_render_ddf__draw_line__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__draw_line__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_render_ddf__window_resized__field_descriptors[2] =
{
  {
    "width",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__WindowResized, width),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "height",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__WindowResized, height),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__window_resized__field_indices_by_name[] = {
  1,   /* field[1] = height */
  0,   /* field[0] = width */
};
static const ProtobufCIntRange dm_render_ddf__window_resized__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor dm_render_ddf__window_resized__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.WindowResized",
  "WindowResized",
  "DmRenderDDF__WindowResized",
  "dmRenderDDF",
  sizeof(DmRenderDDF__WindowResized),
  2,
  dm_render_ddf__window_resized__field_descriptors,
  dm_render_ddf__window_resized__field_indices_by_name,
  1,  dm_render_ddf__window_resized__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__window_resized__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_render_ddf__resize__field_descriptors[2] =
{
  {
    "width",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__Resize, width),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "height",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__Resize, height),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__resize__field_indices_by_name[] = {
  1,   /* field[1] = height */
  0,   /* field[0] = width */
};
static const ProtobufCIntRange dm_render_ddf__resize__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor dm_render_ddf__resize__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.Resize",
  "Resize",
  "DmRenderDDF__Resize",
  "dmRenderDDF",
  sizeof(DmRenderDDF__Resize),
  2,
  dm_render_ddf__resize__field_descriptors,
  dm_render_ddf__resize__field_indices_by_name,
  1,  dm_render_ddf__resize__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__resize__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_render_ddf__clear_color__field_descriptors[1] =
{
  {
    "color",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_MESSAGE,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__ClearColor, color),
    &dm_math__vector4__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__clear_color__field_indices_by_name[] = {
  0,   /* field[0] = color */
};
static const ProtobufCIntRange dm_render_ddf__clear_color__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor dm_render_ddf__clear_color__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.ClearColor",
  "ClearColor",
  "DmRenderDDF__ClearColor",
  "dmRenderDDF",
  sizeof(DmRenderDDF__ClearColor),
  1,
  dm_render_ddf__clear_color__field_descriptors,
  dm_render_ddf__clear_color__field_indices_by_name,
  1,  dm_render_ddf__clear_color__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__clear_color__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_render_ddf__display_profile_qualifier__field_descriptors[3] =
{
  {
    "width",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__DisplayProfileQualifier, width),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "height",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__DisplayProfileQualifier, height),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "device_models",
    3,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_STRING,
    offsetof(DmRenderDDF__DisplayProfileQualifier, n_device_models),
    offsetof(DmRenderDDF__DisplayProfileQualifier, device_models),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__display_profile_qualifier__field_indices_by_name[] = {
  2,   /* field[2] = device_models */
  1,   /* field[1] = height */
  0,   /* field[0] = width */
};
static const ProtobufCIntRange dm_render_ddf__display_profile_qualifier__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 3 }
};
const ProtobufCMessageDescriptor dm_render_ddf__display_profile_qualifier__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.DisplayProfileQualifier",
  "DisplayProfileQualifier",
  "DmRenderDDF__DisplayProfileQualifier",
  "dmRenderDDF",
  sizeof(DmRenderDDF__DisplayProfileQualifier),
  3,
  dm_render_ddf__display_profile_qualifier__field_descriptors,
  dm_render_ddf__display_profile_qualifier__field_indices_by_name,
  1,  dm_render_ddf__display_profile_qualifier__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__display_profile_qualifier__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_render_ddf__display_profile__field_descriptors[2] =
{
  {
    "name",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__DisplayProfile, name),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "qualifiers",
    2,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(DmRenderDDF__DisplayProfile, n_qualifiers),
    offsetof(DmRenderDDF__DisplayProfile, qualifiers),
    &dm_render_ddf__display_profile_qualifier__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__display_profile__field_indices_by_name[] = {
  0,   /* field[0] = name */
  1,   /* field[1] = qualifiers */
};
static const ProtobufCIntRange dm_render_ddf__display_profile__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 2 }
};
const ProtobufCMessageDescriptor dm_render_ddf__display_profile__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.DisplayProfile",
  "DisplayProfile",
  "DmRenderDDF__DisplayProfile",
  "dmRenderDDF",
  sizeof(DmRenderDDF__DisplayProfile),
  2,
  dm_render_ddf__display_profile__field_descriptors,
  dm_render_ddf__display_profile__field_indices_by_name,
  1,  dm_render_ddf__display_profile__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__display_profile__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_render_ddf__display_profiles__field_descriptors[1] =
{
  {
    "profiles",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(DmRenderDDF__DisplayProfiles, n_profiles),
    offsetof(DmRenderDDF__DisplayProfiles, profiles),
    &dm_render_ddf__display_profile__descriptor,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__display_profiles__field_indices_by_name[] = {
  0,   /* field[0] = profiles */
};
static const ProtobufCIntRange dm_render_ddf__display_profiles__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 1 }
};
const ProtobufCMessageDescriptor dm_render_ddf__display_profiles__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.DisplayProfiles",
  "DisplayProfiles",
  "DmRenderDDF__DisplayProfiles",
  "dmRenderDDF",
  sizeof(DmRenderDDF__DisplayProfiles),
  1,
  dm_render_ddf__display_profiles__field_descriptors,
  dm_render_ddf__display_profiles__field_indices_by_name,
  1,  dm_render_ddf__display_profiles__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__display_profiles__init,
  NULL,NULL,NULL    /* reserved[123] */
};
