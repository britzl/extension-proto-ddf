/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: script/http_ddf.proto */

#ifndef PROTOBUF_C_script_2fhttp_5fddf_2eproto__INCLUDED
#define PROTOBUF_C_script_2fhttp_5fddf_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "ddf/ddf_extensions.pb-c.h"

typedef struct DmHttpDDF__StopHttp DmHttpDDF__StopHttp;
typedef struct DmHttpDDF__HttpRequest DmHttpDDF__HttpRequest;
typedef struct DmHttpDDF__HttpResponse DmHttpDDF__HttpResponse;


/* --- enums --- */


/* --- messages --- */

struct  DmHttpDDF__StopHttp
{
  ProtobufCMessage base;
};
#define DM_HTTP_DDF__STOP_HTTP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_http_ddf__stop_http__descriptor) \
     }


struct  DmHttpDDF__HttpRequest
{
  ProtobufCMessage base;
  char *method;
  char *url;
  /*
   * pointer to headers in the format
   * ATTRIBUTE:VALUE\n
   * ...
   * the receiver is responsible for deallocating the memory
   */
  uint64_t headers;
  uint64_t headers_length;
  /*
   * pointer to data
   */
  uint64_t request;
  uint32_t request_length;
  protobuf_c_boolean has_timeout;
  uint64_t timeout;
  char *path;
  /*
   * Explicitly ignore the http cache.
   * It's for 304 requests where we just want to confirm the 304 (e.g. for liveupdate).
   */
  protobuf_c_boolean has_ignore_cache;
  protobuf_c_boolean ignore_cache;
  /*
   * Use chunked transfer encoding
   */
  protobuf_c_boolean has_chunked_transfer;
  protobuf_c_boolean chunked_transfer;
};
#define DM_HTTP_DDF__HTTP_REQUEST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_http_ddf__http_request__descriptor) \
    , NULL, NULL, 0, 0, 0, 0, 0, 0, NULL, 0, 0, 0, 1 }


struct  DmHttpDDF__HttpResponse
{
  ProtobufCMessage base;
  int32_t status;
  /*
   * pointer to headers in the format
   * ATTRIBUTE:VALUE\n
   * ...
   * uint64 for portability
   * for responder is responsible to free
   * the memory
   */
  uint64_t headers;
  uint32_t headers_length;
  /*
   * pointer to data. uint64 for portability
   * the responder is responsible for deallocating
   * the memory
   */
  uint64_t response;
  uint32_t response_length;
  char *path;
};
#define DM_HTTP_DDF__HTTP_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_http_ddf__http_response__descriptor) \
    , 0, 0, 0, 0, 0, NULL }


/* DmHttpDDF__StopHttp methods */
void   dm_http_ddf__stop_http__init
                     (DmHttpDDF__StopHttp         *message);
size_t dm_http_ddf__stop_http__get_packed_size
                     (const DmHttpDDF__StopHttp   *message);
size_t dm_http_ddf__stop_http__pack
                     (const DmHttpDDF__StopHttp   *message,
                      uint8_t             *out);
size_t dm_http_ddf__stop_http__pack_to_buffer
                     (const DmHttpDDF__StopHttp   *message,
                      ProtobufCBuffer     *buffer);
DmHttpDDF__StopHttp *
       dm_http_ddf__stop_http__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_http_ddf__stop_http__free_unpacked
                     (DmHttpDDF__StopHttp *message,
                      ProtobufCAllocator *allocator);
/* DmHttpDDF__HttpRequest methods */
void   dm_http_ddf__http_request__init
                     (DmHttpDDF__HttpRequest         *message);
size_t dm_http_ddf__http_request__get_packed_size
                     (const DmHttpDDF__HttpRequest   *message);
size_t dm_http_ddf__http_request__pack
                     (const DmHttpDDF__HttpRequest   *message,
                      uint8_t             *out);
size_t dm_http_ddf__http_request__pack_to_buffer
                     (const DmHttpDDF__HttpRequest   *message,
                      ProtobufCBuffer     *buffer);
DmHttpDDF__HttpRequest *
       dm_http_ddf__http_request__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_http_ddf__http_request__free_unpacked
                     (DmHttpDDF__HttpRequest *message,
                      ProtobufCAllocator *allocator);
/* DmHttpDDF__HttpResponse methods */
void   dm_http_ddf__http_response__init
                     (DmHttpDDF__HttpResponse         *message);
size_t dm_http_ddf__http_response__get_packed_size
                     (const DmHttpDDF__HttpResponse   *message);
size_t dm_http_ddf__http_response__pack
                     (const DmHttpDDF__HttpResponse   *message,
                      uint8_t             *out);
size_t dm_http_ddf__http_response__pack_to_buffer
                     (const DmHttpDDF__HttpResponse   *message,
                      ProtobufCBuffer     *buffer);
DmHttpDDF__HttpResponse *
       dm_http_ddf__http_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_http_ddf__http_response__free_unpacked
                     (DmHttpDDF__HttpResponse *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*DmHttpDDF__StopHttp_Closure)
                 (const DmHttpDDF__StopHttp *message,
                  void *closure_data);
typedef void (*DmHttpDDF__HttpRequest_Closure)
                 (const DmHttpDDF__HttpRequest *message,
                  void *closure_data);
typedef void (*DmHttpDDF__HttpResponse_Closure)
                 (const DmHttpDDF__HttpResponse *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor dm_http_ddf__stop_http__descriptor;
extern const ProtobufCMessageDescriptor dm_http_ddf__http_request__descriptor;
extern const ProtobufCMessageDescriptor dm_http_ddf__http_response__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_script_2fhttp_5fddf_2eproto__INCLUDED */
