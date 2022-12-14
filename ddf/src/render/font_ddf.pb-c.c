/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: render/font_ddf.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "render/font_ddf.pb-c.h"
void   dm_render_ddf__font_desc__init
                     (DmRenderDDF__FontDesc         *message)
{
  static const DmRenderDDF__FontDesc init_value = DM_RENDER_DDF__FONT_DESC__INIT;
  *message = init_value;
}
size_t dm_render_ddf__font_desc__get_packed_size
                     (const DmRenderDDF__FontDesc *message)
{
  assert(message->base.descriptor == &dm_render_ddf__font_desc__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__font_desc__pack
                     (const DmRenderDDF__FontDesc *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__font_desc__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__font_desc__pack_to_buffer
                     (const DmRenderDDF__FontDesc *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__font_desc__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__FontDesc *
       dm_render_ddf__font_desc__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__FontDesc *)
     protobuf_c_message_unpack (&dm_render_ddf__font_desc__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__font_desc__free_unpacked
                     (DmRenderDDF__FontDesc *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__font_desc__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_render_ddf__font_map__glyph__init
                     (DmRenderDDF__FontMap__Glyph         *message)
{
  static const DmRenderDDF__FontMap__Glyph init_value = DM_RENDER_DDF__FONT_MAP__GLYPH__INIT;
  *message = init_value;
}
void   dm_render_ddf__font_map__init
                     (DmRenderDDF__FontMap         *message)
{
  static const DmRenderDDF__FontMap init_value = DM_RENDER_DDF__FONT_MAP__INIT;
  *message = init_value;
}
size_t dm_render_ddf__font_map__get_packed_size
                     (const DmRenderDDF__FontMap *message)
{
  assert(message->base.descriptor == &dm_render_ddf__font_map__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_render_ddf__font_map__pack
                     (const DmRenderDDF__FontMap *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_render_ddf__font_map__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_render_ddf__font_map__pack_to_buffer
                     (const DmRenderDDF__FontMap *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_render_ddf__font_map__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmRenderDDF__FontMap *
       dm_render_ddf__font_map__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmRenderDDF__FontMap *)
     protobuf_c_message_unpack (&dm_render_ddf__font_map__descriptor,
                                allocator, len, data);
}
void   dm_render_ddf__font_map__free_unpacked
                     (DmRenderDDF__FontMap *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_render_ddf__font_map__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
char dm_render_ddf__font_desc__extra_characters__default_value[] = "";
static const uint32_t dm_render_ddf__font_desc__antialias__default_value = 1u;
static const float dm_render_ddf__font_desc__alpha__default_value = 1;
static const float dm_render_ddf__font_desc__outline_alpha__default_value = 0;
static const float dm_render_ddf__font_desc__outline_width__default_value = 0;
static const float dm_render_ddf__font_desc__shadow_alpha__default_value = 0;
static const uint32_t dm_render_ddf__font_desc__shadow_blur__default_value = 0u;
static const float dm_render_ddf__font_desc__shadow_x__default_value = 0;
static const float dm_render_ddf__font_desc__shadow_y__default_value = 0;
static const DmRenderDDF__FontTextureFormat dm_render_ddf__font_desc__output_format__default_value = DM_RENDER_DDF__FONT_TEXTURE_FORMAT__TYPE_BITMAP;
static const protobuf_c_boolean dm_render_ddf__font_desc__all_chars__default_value = 0;
static const uint32_t dm_render_ddf__font_desc__cache_width__default_value = 0u;
static const uint32_t dm_render_ddf__font_desc__cache_height__default_value = 0u;
static const DmRenderDDF__FontRenderMode dm_render_ddf__font_desc__render_mode__default_value = DM_RENDER_DDF__FONT_RENDER_MODE__MODE_SINGLE_LAYER;
static const ProtobufCFieldDescriptor dm_render_ddf__font_desc__field_descriptors[17] =
{
  {
    "font",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__FontDesc, font),
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
    offsetof(DmRenderDDF__FontDesc, material),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "size",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__FontDesc, size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "antialias",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontDesc, has_antialias),
    offsetof(DmRenderDDF__FontDesc, antialias),
    NULL,
    &dm_render_ddf__font_desc__antialias__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "alpha",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontDesc, has_alpha),
    offsetof(DmRenderDDF__FontDesc, alpha),
    NULL,
    &dm_render_ddf__font_desc__alpha__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "outline_alpha",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontDesc, has_outline_alpha),
    offsetof(DmRenderDDF__FontDesc, outline_alpha),
    NULL,
    &dm_render_ddf__font_desc__outline_alpha__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "outline_width",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontDesc, has_outline_width),
    offsetof(DmRenderDDF__FontDesc, outline_width),
    NULL,
    &dm_render_ddf__font_desc__outline_width__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "shadow_alpha",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontDesc, has_shadow_alpha),
    offsetof(DmRenderDDF__FontDesc, shadow_alpha),
    NULL,
    &dm_render_ddf__font_desc__shadow_alpha__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "shadow_blur",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontDesc, has_shadow_blur),
    offsetof(DmRenderDDF__FontDesc, shadow_blur),
    NULL,
    &dm_render_ddf__font_desc__shadow_blur__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "shadow_x",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontDesc, has_shadow_x),
    offsetof(DmRenderDDF__FontDesc, shadow_x),
    NULL,
    &dm_render_ddf__font_desc__shadow_x__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "shadow_y",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontDesc, has_shadow_y),
    offsetof(DmRenderDDF__FontDesc, shadow_y),
    NULL,
    &dm_render_ddf__font_desc__shadow_y__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "extra_characters",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__FontDesc, extra_characters),
    NULL,
    &dm_render_ddf__font_desc__extra_characters__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "output_format",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(DmRenderDDF__FontDesc, has_output_format),
    offsetof(DmRenderDDF__FontDesc, output_format),
    &dm_render_ddf__font_texture_format__descriptor,
    &dm_render_ddf__font_desc__output_format__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "all_chars",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(DmRenderDDF__FontDesc, has_all_chars),
    offsetof(DmRenderDDF__FontDesc, all_chars),
    NULL,
    &dm_render_ddf__font_desc__all_chars__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cache_width",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontDesc, has_cache_width),
    offsetof(DmRenderDDF__FontDesc, cache_width),
    NULL,
    &dm_render_ddf__font_desc__cache_width__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cache_height",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontDesc, has_cache_height),
    offsetof(DmRenderDDF__FontDesc, cache_height),
    NULL,
    &dm_render_ddf__font_desc__cache_height__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "render_mode",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(DmRenderDDF__FontDesc, has_render_mode),
    offsetof(DmRenderDDF__FontDesc, render_mode),
    &dm_render_ddf__font_render_mode__descriptor,
    &dm_render_ddf__font_desc__render_mode__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__font_desc__field_indices_by_name[] = {
  13,   /* field[13] = all_chars */
  4,   /* field[4] = alpha */
  3,   /* field[3] = antialias */
  15,   /* field[15] = cache_height */
  14,   /* field[14] = cache_width */
  11,   /* field[11] = extra_characters */
  0,   /* field[0] = font */
  1,   /* field[1] = material */
  5,   /* field[5] = outline_alpha */
  6,   /* field[6] = outline_width */
  12,   /* field[12] = output_format */
  16,   /* field[16] = render_mode */
  7,   /* field[7] = shadow_alpha */
  8,   /* field[8] = shadow_blur */
  9,   /* field[9] = shadow_x */
  10,   /* field[10] = shadow_y */
  2,   /* field[2] = size */
};
static const ProtobufCIntRange dm_render_ddf__font_desc__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 17 }
};
const ProtobufCMessageDescriptor dm_render_ddf__font_desc__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.FontDesc",
  "FontDesc",
  "DmRenderDDF__FontDesc",
  "dmRenderDDF",
  sizeof(DmRenderDDF__FontDesc),
  17,
  dm_render_ddf__font_desc__field_descriptors,
  dm_render_ddf__font_desc__field_indices_by_name,
  1,  dm_render_ddf__font_desc__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__font_desc__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const uint32_t dm_render_ddf__font_map__glyph__width__default_value = 0u;
static const float dm_render_ddf__font_map__glyph__advance__default_value = 0;
static const float dm_render_ddf__font_map__glyph__left_bearing__default_value = 0;
static const uint32_t dm_render_ddf__font_map__glyph__ascent__default_value = 0u;
static const uint32_t dm_render_ddf__font_map__glyph__descent__default_value = 0u;
static const int32_t dm_render_ddf__font_map__glyph__x__default_value = 0;
static const int32_t dm_render_ddf__font_map__glyph__y__default_value = 0;
static const ProtobufCFieldDescriptor dm_render_ddf__font_map__glyph__field_descriptors[10] =
{
  {
    "character",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__FontMap__Glyph, character),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "width",
    2,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontMap__Glyph, has_width),
    offsetof(DmRenderDDF__FontMap__Glyph, width),
    NULL,
    &dm_render_ddf__font_map__glyph__width__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "advance",
    3,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontMap__Glyph, has_advance),
    offsetof(DmRenderDDF__FontMap__Glyph, advance),
    NULL,
    &dm_render_ddf__font_map__glyph__advance__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "left_bearing",
    4,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontMap__Glyph, has_left_bearing),
    offsetof(DmRenderDDF__FontMap__Glyph, left_bearing),
    NULL,
    &dm_render_ddf__font_map__glyph__left_bearing__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ascent",
    5,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontMap__Glyph, has_ascent),
    offsetof(DmRenderDDF__FontMap__Glyph, ascent),
    NULL,
    &dm_render_ddf__font_map__glyph__ascent__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "descent",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontMap__Glyph, has_descent),
    offsetof(DmRenderDDF__FontMap__Glyph, descent),
    NULL,
    &dm_render_ddf__font_map__glyph__descent__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "x",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(DmRenderDDF__FontMap__Glyph, has_x),
    offsetof(DmRenderDDF__FontMap__Glyph, x),
    NULL,
    &dm_render_ddf__font_map__glyph__x__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "y",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_INT32,
    offsetof(DmRenderDDF__FontMap__Glyph, has_y),
    offsetof(DmRenderDDF__FontMap__Glyph, y),
    NULL,
    &dm_render_ddf__font_map__glyph__y__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "glyph_data_offset",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(DmRenderDDF__FontMap__Glyph, has_glyph_data_offset),
    offsetof(DmRenderDDF__FontMap__Glyph, glyph_data_offset),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "glyph_data_size",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(DmRenderDDF__FontMap__Glyph, has_glyph_data_size),
    offsetof(DmRenderDDF__FontMap__Glyph, glyph_data_size),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__font_map__glyph__field_indices_by_name[] = {
  2,   /* field[2] = advance */
  4,   /* field[4] = ascent */
  0,   /* field[0] = character */
  5,   /* field[5] = descent */
  8,   /* field[8] = glyph_data_offset */
  9,   /* field[9] = glyph_data_size */
  3,   /* field[3] = left_bearing */
  1,   /* field[1] = width */
  6,   /* field[6] = x */
  7,   /* field[7] = y */
};
static const ProtobufCIntRange dm_render_ddf__font_map__glyph__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 10 }
};
const ProtobufCMessageDescriptor dm_render_ddf__font_map__glyph__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.FontMap.Glyph",
  "Glyph",
  "DmRenderDDF__FontMap__Glyph",
  "dmRenderDDF",
  sizeof(DmRenderDDF__FontMap__Glyph),
  10,
  dm_render_ddf__font_map__glyph__field_descriptors,
  dm_render_ddf__font_map__glyph__field_indices_by_name,
  1,  dm_render_ddf__font_map__glyph__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__font_map__glyph__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const DmRenderDDF__FontTextureFormat dm_render_ddf__font_map__image_format__default_value = DM_RENDER_DDF__FONT_TEXTURE_FORMAT__TYPE_BITMAP;
static const float dm_render_ddf__font_map__sdf_spread__default_value = 1;
static const float dm_render_ddf__font_map__sdf_offset__default_value = 0;
static const float dm_render_ddf__font_map__sdf_outline__default_value = 0;
static const float dm_render_ddf__font_map__sdf_shadow__default_value = 0;
static const uint32_t dm_render_ddf__font_map__cache_width__default_value = 0u;
static const uint32_t dm_render_ddf__font_map__cache_height__default_value = 0u;
static const float dm_render_ddf__font_map__alpha__default_value = 1;
static const float dm_render_ddf__font_map__outline_alpha__default_value = 1;
static const float dm_render_ddf__font_map__shadow_alpha__default_value = 1;
static const uint32_t dm_render_ddf__font_map__layer_mask__default_value = 1u;
static const ProtobufCFieldDescriptor dm_render_ddf__font_map__field_descriptors[23] =
{
  {
    "glyphs",
    1,
    PROTOBUF_C_LABEL_REPEATED,
    PROTOBUF_C_TYPE_MESSAGE,
    offsetof(DmRenderDDF__FontMap, n_glyphs),
    offsetof(DmRenderDDF__FontMap, glyphs),
    &dm_render_ddf__font_map__glyph__descriptor,
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
    offsetof(DmRenderDDF__FontMap, material),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "shadow_x",
    6,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontMap, has_shadow_x),
    offsetof(DmRenderDDF__FontMap, shadow_x),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "shadow_y",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontMap, has_shadow_y),
    offsetof(DmRenderDDF__FontMap, shadow_y),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "max_ascent",
    8,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_FLOAT,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__FontMap, max_ascent),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "max_descent",
    9,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_FLOAT,
    0,   /* quantifier_offset */
    offsetof(DmRenderDDF__FontMap, max_descent),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "image_format",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_ENUM,
    offsetof(DmRenderDDF__FontMap, has_image_format),
    offsetof(DmRenderDDF__FontMap, image_format),
    &dm_render_ddf__font_texture_format__descriptor,
    &dm_render_ddf__font_map__image_format__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sdf_spread",
    11,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontMap, has_sdf_spread),
    offsetof(DmRenderDDF__FontMap, sdf_spread),
    NULL,
    &dm_render_ddf__font_map__sdf_spread__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sdf_offset",
    12,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontMap, has_sdf_offset),
    offsetof(DmRenderDDF__FontMap, sdf_offset),
    NULL,
    &dm_render_ddf__font_map__sdf_offset__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sdf_outline",
    13,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontMap, has_sdf_outline),
    offsetof(DmRenderDDF__FontMap, sdf_outline),
    NULL,
    &dm_render_ddf__font_map__sdf_outline__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "sdf_shadow",
    14,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontMap, has_sdf_shadow),
    offsetof(DmRenderDDF__FontMap, sdf_shadow),
    NULL,
    &dm_render_ddf__font_map__sdf_shadow__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cache_width",
    15,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontMap, has_cache_width),
    offsetof(DmRenderDDF__FontMap, cache_width),
    NULL,
    &dm_render_ddf__font_map__cache_width__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cache_height",
    16,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontMap, has_cache_height),
    offsetof(DmRenderDDF__FontMap, cache_height),
    NULL,
    &dm_render_ddf__font_map__cache_height__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "glyph_padding",
    17,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(DmRenderDDF__FontMap, has_glyph_padding),
    offsetof(DmRenderDDF__FontMap, glyph_padding),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cache_cell_width",
    18,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontMap, has_cache_cell_width),
    offsetof(DmRenderDDF__FontMap, cache_cell_width),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cache_cell_height",
    19,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontMap, has_cache_cell_height),
    offsetof(DmRenderDDF__FontMap, cache_cell_height),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "glyph_channels",
    20,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontMap, has_glyph_channels),
    offsetof(DmRenderDDF__FontMap, glyph_channels),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "glyph_data",
    21,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BYTES,
    offsetof(DmRenderDDF__FontMap, has_glyph_data),
    offsetof(DmRenderDDF__FontMap, glyph_data),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "alpha",
    22,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontMap, has_alpha),
    offsetof(DmRenderDDF__FontMap, alpha),
    NULL,
    &dm_render_ddf__font_map__alpha__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "outline_alpha",
    23,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontMap, has_outline_alpha),
    offsetof(DmRenderDDF__FontMap, outline_alpha),
    NULL,
    &dm_render_ddf__font_map__outline_alpha__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "shadow_alpha",
    24,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_FLOAT,
    offsetof(DmRenderDDF__FontMap, has_shadow_alpha),
    offsetof(DmRenderDDF__FontMap, shadow_alpha),
    NULL,
    &dm_render_ddf__font_map__shadow_alpha__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "cache_cell_max_ascent",
    25,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontMap, has_cache_cell_max_ascent),
    offsetof(DmRenderDDF__FontMap, cache_cell_max_ascent),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "layer_mask",
    26,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT32,
    offsetof(DmRenderDDF__FontMap, has_layer_mask),
    offsetof(DmRenderDDF__FontMap, layer_mask),
    NULL,
    &dm_render_ddf__font_map__layer_mask__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_render_ddf__font_map__field_indices_by_name[] = {
  18,   /* field[18] = alpha */
  15,   /* field[15] = cache_cell_height */
  21,   /* field[21] = cache_cell_max_ascent */
  14,   /* field[14] = cache_cell_width */
  12,   /* field[12] = cache_height */
  11,   /* field[11] = cache_width */
  16,   /* field[16] = glyph_channels */
  17,   /* field[17] = glyph_data */
  13,   /* field[13] = glyph_padding */
  0,   /* field[0] = glyphs */
  6,   /* field[6] = image_format */
  22,   /* field[22] = layer_mask */
  1,   /* field[1] = material */
  4,   /* field[4] = max_ascent */
  5,   /* field[5] = max_descent */
  19,   /* field[19] = outline_alpha */
  8,   /* field[8] = sdf_offset */
  9,   /* field[9] = sdf_outline */
  10,   /* field[10] = sdf_shadow */
  7,   /* field[7] = sdf_spread */
  20,   /* field[20] = shadow_alpha */
  2,   /* field[2] = shadow_x */
  3,   /* field[3] = shadow_y */
};
static const ProtobufCIntRange dm_render_ddf__font_map__number_ranges[2 + 1] =
{
  { 1, 0 },
  { 6, 2 },
  { 0, 23 }
};
const ProtobufCMessageDescriptor dm_render_ddf__font_map__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmRenderDDF.FontMap",
  "FontMap",
  "DmRenderDDF__FontMap",
  "dmRenderDDF",
  sizeof(DmRenderDDF__FontMap),
  23,
  dm_render_ddf__font_map__field_descriptors,
  dm_render_ddf__font_map__field_indices_by_name,
  2,  dm_render_ddf__font_map__number_ranges,
  (ProtobufCMessageInit) dm_render_ddf__font_map__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCEnumValue dm_render_ddf__font_texture_format__enum_values_by_number[2] =
{
  { "TYPE_BITMAP", "DM_RENDER_DDF__FONT_TEXTURE_FORMAT__TYPE_BITMAP", 0 },
  { "TYPE_DISTANCE_FIELD", "DM_RENDER_DDF__FONT_TEXTURE_FORMAT__TYPE_DISTANCE_FIELD", 1 },
};
static const ProtobufCIntRange dm_render_ddf__font_texture_format__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex dm_render_ddf__font_texture_format__enum_values_by_name[2] =
{
  { "TYPE_BITMAP", 0 },
  { "TYPE_DISTANCE_FIELD", 1 },
};
const ProtobufCEnumDescriptor dm_render_ddf__font_texture_format__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "dmRenderDDF.FontTextureFormat",
  "FontTextureFormat",
  "DmRenderDDF__FontTextureFormat",
  "dmRenderDDF",
  2,
  dm_render_ddf__font_texture_format__enum_values_by_number,
  2,
  dm_render_ddf__font_texture_format__enum_values_by_name,
  1,
  dm_render_ddf__font_texture_format__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
static const ProtobufCEnumValue dm_render_ddf__font_render_mode__enum_values_by_number[2] =
{
  { "MODE_SINGLE_LAYER", "DM_RENDER_DDF__FONT_RENDER_MODE__MODE_SINGLE_LAYER", 0 },
  { "MODE_MULTI_LAYER", "DM_RENDER_DDF__FONT_RENDER_MODE__MODE_MULTI_LAYER", 1 },
};
static const ProtobufCIntRange dm_render_ddf__font_render_mode__value_ranges[] = {
{0, 0},{0, 2}
};
static const ProtobufCEnumValueIndex dm_render_ddf__font_render_mode__enum_values_by_name[2] =
{
  { "MODE_MULTI_LAYER", 1 },
  { "MODE_SINGLE_LAYER", 0 },
};
const ProtobufCEnumDescriptor dm_render_ddf__font_render_mode__descriptor =
{
  PROTOBUF_C__ENUM_DESCRIPTOR_MAGIC,
  "dmRenderDDF.FontRenderMode",
  "FontRenderMode",
  "DmRenderDDF__FontRenderMode",
  "dmRenderDDF",
  2,
  dm_render_ddf__font_render_mode__enum_values_by_number,
  2,
  dm_render_ddf__font_render_mode__enum_values_by_name,
  1,
  dm_render_ddf__font_render_mode__value_ranges,
  NULL,NULL,NULL,NULL   /* reserved[1234] */
};
