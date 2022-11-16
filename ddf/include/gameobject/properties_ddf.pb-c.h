/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: gameobject/properties_ddf.proto */

#ifndef PROTOBUF_C_gameobject_2fproperties_5fddf_2eproto__INCLUDED
#define PROTOBUF_C_gameobject_2fproperties_5fddf_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "ddf/ddf_extensions.pb-c.h"
#include "ddf/ddf_math.pb-c.h"

typedef struct DmPropertiesDDF__PropertyDeclarationEntry DmPropertiesDDF__PropertyDeclarationEntry;
typedef struct DmPropertiesDDF__PropertyDeclarations DmPropertiesDDF__PropertyDeclarations;


/* --- enums --- */


/* --- messages --- */

struct  DmPropertiesDDF__PropertyDeclarationEntry
{
  ProtobufCMessage base;
  char *key;
  uint64_t id;
  uint32_t index;
  size_t n_element_ids;
  uint64_t *element_ids;
};
#define DM_PROPERTIES_DDF__PROPERTY_DECLARATION_ENTRY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_properties_ddf__property_declaration_entry__descriptor) \
    , NULL, 0, 0, 0,NULL }


struct  DmPropertiesDDF__PropertyDeclarations
{
  ProtobufCMessage base;
  size_t n_number_entries;
  DmPropertiesDDF__PropertyDeclarationEntry **number_entries;
  size_t n_hash_entries;
  DmPropertiesDDF__PropertyDeclarationEntry **hash_entries;
  size_t n_url_entries;
  DmPropertiesDDF__PropertyDeclarationEntry **url_entries;
  size_t n_vector3_entries;
  DmPropertiesDDF__PropertyDeclarationEntry **vector3_entries;
  size_t n_vector4_entries;
  DmPropertiesDDF__PropertyDeclarationEntry **vector4_entries;
  size_t n_quat_entries;
  DmPropertiesDDF__PropertyDeclarationEntry **quat_entries;
  size_t n_bool_entries;
  DmPropertiesDDF__PropertyDeclarationEntry **bool_entries;
  size_t n_float_values;
  float *float_values;
  size_t n_hash_values;
  uint64_t *hash_values;
  size_t n_string_values;
  char **string_values;
};
#define DM_PROPERTIES_DDF__PROPERTY_DECLARATIONS__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_properties_ddf__property_declarations__descriptor) \
    , 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL, 0,NULL }


/* DmPropertiesDDF__PropertyDeclarationEntry methods */
void   dm_properties_ddf__property_declaration_entry__init
                     (DmPropertiesDDF__PropertyDeclarationEntry         *message);
size_t dm_properties_ddf__property_declaration_entry__get_packed_size
                     (const DmPropertiesDDF__PropertyDeclarationEntry   *message);
size_t dm_properties_ddf__property_declaration_entry__pack
                     (const DmPropertiesDDF__PropertyDeclarationEntry   *message,
                      uint8_t             *out);
size_t dm_properties_ddf__property_declaration_entry__pack_to_buffer
                     (const DmPropertiesDDF__PropertyDeclarationEntry   *message,
                      ProtobufCBuffer     *buffer);
DmPropertiesDDF__PropertyDeclarationEntry *
       dm_properties_ddf__property_declaration_entry__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_properties_ddf__property_declaration_entry__free_unpacked
                     (DmPropertiesDDF__PropertyDeclarationEntry *message,
                      ProtobufCAllocator *allocator);
/* DmPropertiesDDF__PropertyDeclarations methods */
void   dm_properties_ddf__property_declarations__init
                     (DmPropertiesDDF__PropertyDeclarations         *message);
size_t dm_properties_ddf__property_declarations__get_packed_size
                     (const DmPropertiesDDF__PropertyDeclarations   *message);
size_t dm_properties_ddf__property_declarations__pack
                     (const DmPropertiesDDF__PropertyDeclarations   *message,
                      uint8_t             *out);
size_t dm_properties_ddf__property_declarations__pack_to_buffer
                     (const DmPropertiesDDF__PropertyDeclarations   *message,
                      ProtobufCBuffer     *buffer);
DmPropertiesDDF__PropertyDeclarations *
       dm_properties_ddf__property_declarations__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_properties_ddf__property_declarations__free_unpacked
                     (DmPropertiesDDF__PropertyDeclarations *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*DmPropertiesDDF__PropertyDeclarationEntry_Closure)
                 (const DmPropertiesDDF__PropertyDeclarationEntry *message,
                  void *closure_data);
typedef void (*DmPropertiesDDF__PropertyDeclarations_Closure)
                 (const DmPropertiesDDF__PropertyDeclarations *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor dm_properties_ddf__property_declaration_entry__descriptor;
extern const ProtobufCMessageDescriptor dm_properties_ddf__property_declarations__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_gameobject_2fproperties_5fddf_2eproto__INCLUDED */
