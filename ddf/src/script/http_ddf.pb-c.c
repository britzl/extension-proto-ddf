/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: script/http_ddf.proto */

/* Do not generate deprecated warnings for self */
#ifndef PROTOBUF_C__NO_DEPRECATED
#define PROTOBUF_C__NO_DEPRECATED
#endif

#include "script/http_ddf.pb-c.h"
void   dm_http_ddf__stop_http__init
                     (DmHttpDDF__StopHttp         *message)
{
  static const DmHttpDDF__StopHttp init_value = DM_HTTP_DDF__STOP_HTTP__INIT;
  *message = init_value;
}
size_t dm_http_ddf__stop_http__get_packed_size
                     (const DmHttpDDF__StopHttp *message)
{
  assert(message->base.descriptor == &dm_http_ddf__stop_http__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_http_ddf__stop_http__pack
                     (const DmHttpDDF__StopHttp *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_http_ddf__stop_http__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_http_ddf__stop_http__pack_to_buffer
                     (const DmHttpDDF__StopHttp *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_http_ddf__stop_http__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmHttpDDF__StopHttp *
       dm_http_ddf__stop_http__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmHttpDDF__StopHttp *)
     protobuf_c_message_unpack (&dm_http_ddf__stop_http__descriptor,
                                allocator, len, data);
}
void   dm_http_ddf__stop_http__free_unpacked
                     (DmHttpDDF__StopHttp *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_http_ddf__stop_http__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_http_ddf__http_request__init
                     (DmHttpDDF__HttpRequest         *message)
{
  static const DmHttpDDF__HttpRequest init_value = DM_HTTP_DDF__HTTP_REQUEST__INIT;
  *message = init_value;
}
size_t dm_http_ddf__http_request__get_packed_size
                     (const DmHttpDDF__HttpRequest *message)
{
  assert(message->base.descriptor == &dm_http_ddf__http_request__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_http_ddf__http_request__pack
                     (const DmHttpDDF__HttpRequest *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_http_ddf__http_request__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_http_ddf__http_request__pack_to_buffer
                     (const DmHttpDDF__HttpRequest *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_http_ddf__http_request__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmHttpDDF__HttpRequest *
       dm_http_ddf__http_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmHttpDDF__HttpRequest *)
     protobuf_c_message_unpack (&dm_http_ddf__http_request__descriptor,
                                allocator, len, data);
}
void   dm_http_ddf__http_request__free_unpacked
                     (DmHttpDDF__HttpRequest *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_http_ddf__http_request__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
void   dm_http_ddf__http_response__init
                     (DmHttpDDF__HttpResponse         *message)
{
  static const DmHttpDDF__HttpResponse init_value = DM_HTTP_DDF__HTTP_RESPONSE__INIT;
  *message = init_value;
}
size_t dm_http_ddf__http_response__get_packed_size
                     (const DmHttpDDF__HttpResponse *message)
{
  assert(message->base.descriptor == &dm_http_ddf__http_response__descriptor);
  return protobuf_c_message_get_packed_size ((const ProtobufCMessage*)(message));
}
size_t dm_http_ddf__http_response__pack
                     (const DmHttpDDF__HttpResponse *message,
                      uint8_t       *out)
{
  assert(message->base.descriptor == &dm_http_ddf__http_response__descriptor);
  return protobuf_c_message_pack ((const ProtobufCMessage*)message, out);
}
size_t dm_http_ddf__http_response__pack_to_buffer
                     (const DmHttpDDF__HttpResponse *message,
                      ProtobufCBuffer *buffer)
{
  assert(message->base.descriptor == &dm_http_ddf__http_response__descriptor);
  return protobuf_c_message_pack_to_buffer ((const ProtobufCMessage*)message, buffer);
}
DmHttpDDF__HttpResponse *
       dm_http_ddf__http_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data)
{
  return (DmHttpDDF__HttpResponse *)
     protobuf_c_message_unpack (&dm_http_ddf__http_response__descriptor,
                                allocator, len, data);
}
void   dm_http_ddf__http_response__free_unpacked
                     (DmHttpDDF__HttpResponse *message,
                      ProtobufCAllocator *allocator)
{
  if(!message)
    return;
  assert(message->base.descriptor == &dm_http_ddf__http_response__descriptor);
  protobuf_c_message_free_unpacked ((ProtobufCMessage*)message, allocator);
}
#define dm_http_ddf__stop_http__field_descriptors NULL
#define dm_http_ddf__stop_http__field_indices_by_name NULL
#define dm_http_ddf__stop_http__number_ranges NULL
const ProtobufCMessageDescriptor dm_http_ddf__stop_http__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmHttpDDF.StopHttp",
  "StopHttp",
  "DmHttpDDF__StopHttp",
  "dmHttpDDF",
  sizeof(DmHttpDDF__StopHttp),
  0,
  dm_http_ddf__stop_http__field_descriptors,
  dm_http_ddf__stop_http__field_indices_by_name,
  0,  dm_http_ddf__stop_http__number_ranges,
  (ProtobufCMessageInit) dm_http_ddf__stop_http__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const protobuf_c_boolean dm_http_ddf__http_request__chunked_transfer__default_value = 1;
static const ProtobufCFieldDescriptor dm_http_ddf__http_request__field_descriptors[10] =
{
  {
    "method",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpRequest, method),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "url",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpRequest, url),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "headers",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpRequest, headers),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "headers_length",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpRequest, headers_length),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "request",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpRequest, request),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "request_length",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpRequest, request_length),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "timeout",
    7,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_UINT64,
    offsetof(DmHttpDDF__HttpRequest, has_timeout),
    offsetof(DmHttpDDF__HttpRequest, timeout),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "path",
    8,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpRequest, path),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "ignore_cache",
    9,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(DmHttpDDF__HttpRequest, has_ignore_cache),
    offsetof(DmHttpDDF__HttpRequest, ignore_cache),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "chunked_transfer",
    10,
    PROTOBUF_C_LABEL_OPTIONAL,
    PROTOBUF_C_TYPE_BOOL,
    offsetof(DmHttpDDF__HttpRequest, has_chunked_transfer),
    offsetof(DmHttpDDF__HttpRequest, chunked_transfer),
    NULL,
    &dm_http_ddf__http_request__chunked_transfer__default_value,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_http_ddf__http_request__field_indices_by_name[] = {
  9,   /* field[9] = chunked_transfer */
  2,   /* field[2] = headers */
  3,   /* field[3] = headers_length */
  8,   /* field[8] = ignore_cache */
  0,   /* field[0] = method */
  7,   /* field[7] = path */
  4,   /* field[4] = request */
  5,   /* field[5] = request_length */
  6,   /* field[6] = timeout */
  1,   /* field[1] = url */
};
static const ProtobufCIntRange dm_http_ddf__http_request__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 10 }
};
const ProtobufCMessageDescriptor dm_http_ddf__http_request__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmHttpDDF.HttpRequest",
  "HttpRequest",
  "DmHttpDDF__HttpRequest",
  "dmHttpDDF",
  sizeof(DmHttpDDF__HttpRequest),
  10,
  dm_http_ddf__http_request__field_descriptors,
  dm_http_ddf__http_request__field_indices_by_name,
  1,  dm_http_ddf__http_request__number_ranges,
  (ProtobufCMessageInit) dm_http_ddf__http_request__init,
  NULL,NULL,NULL    /* reserved[123] */
};
static const ProtobufCFieldDescriptor dm_http_ddf__http_response__field_descriptors[6] =
{
  {
    "status",
    1,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_INT32,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpResponse, status),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "headers",
    2,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpResponse, headers),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "headers_length",
    3,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpResponse, headers_length),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "response",
    4,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT64,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpResponse, response),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "response_length",
    5,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_UINT32,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpResponse, response_length),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
  {
    "path",
    6,
    PROTOBUF_C_LABEL_REQUIRED,
    PROTOBUF_C_TYPE_STRING,
    0,   /* quantifier_offset */
    offsetof(DmHttpDDF__HttpResponse, path),
    NULL,
    NULL,
    0,             /* flags */
    0,NULL,NULL    /* reserved1,reserved2, etc */
  },
};
static const unsigned dm_http_ddf__http_response__field_indices_by_name[] = {
  1,   /* field[1] = headers */
  2,   /* field[2] = headers_length */
  5,   /* field[5] = path */
  3,   /* field[3] = response */
  4,   /* field[4] = response_length */
  0,   /* field[0] = status */
};
static const ProtobufCIntRange dm_http_ddf__http_response__number_ranges[1 + 1] =
{
  { 1, 0 },
  { 0, 6 }
};
const ProtobufCMessageDescriptor dm_http_ddf__http_response__descriptor =
{
  PROTOBUF_C__MESSAGE_DESCRIPTOR_MAGIC,
  "dmHttpDDF.HttpResponse",
  "HttpResponse",
  "DmHttpDDF__HttpResponse",
  "dmHttpDDF",
  sizeof(DmHttpDDF__HttpResponse),
  6,
  dm_http_ddf__http_response__field_descriptors,
  dm_http_ddf__http_response__field_indices_by_name,
  1,  dm_http_ddf__http_response__number_ranges,
  (ProtobufCMessageInit) dm_http_ddf__http_response__init,
  NULL,NULL,NULL    /* reserved[123] */
};
