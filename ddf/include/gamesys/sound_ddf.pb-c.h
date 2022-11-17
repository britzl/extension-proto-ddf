/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: gamesys/sound_ddf.proto */

#ifndef PROTOBUF_C_gamesys_2fsound_5fddf_2eproto__INCLUDED
#define PROTOBUF_C_gamesys_2fsound_5fddf_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "ddf/ddf_extensions.pb-c.h"
#include "ddf/ddf_math.pb-c.h"

typedef struct DmSoundDDF__SoundDesc DmSoundDDF__SoundDesc;


/* --- enums --- */


/* --- messages --- */

struct  DmSoundDDF__SoundDesc
{
  ProtobufCMessage base;
  char *sound;
  protobuf_c_boolean has_looping;
  int32_t looping;
  char *group;
  protobuf_c_boolean has_gain;
  float gain;
  protobuf_c_boolean has_pan;
  float pan;
  protobuf_c_boolean has_speed;
  float speed;
  protobuf_c_boolean has_loopcount;
  int32_t loopcount;
};
extern char dm_sound_ddf__sound_desc__group__default_value[];
#define DM_SOUND_DDF__SOUND_DESC__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_sound_ddf__sound_desc__descriptor) \
    , NULL, 0, 0, dm_sound_ddf__sound_desc__group__default_value, 0, 1, 0, 0, 0, 1, 0, 0 }


/* DmSoundDDF__SoundDesc methods */
void   dm_sound_ddf__sound_desc__init
                     (DmSoundDDF__SoundDesc         *message);
size_t dm_sound_ddf__sound_desc__get_packed_size
                     (const DmSoundDDF__SoundDesc   *message);
size_t dm_sound_ddf__sound_desc__pack
                     (const DmSoundDDF__SoundDesc   *message,
                      uint8_t             *out);
size_t dm_sound_ddf__sound_desc__pack_to_buffer
                     (const DmSoundDDF__SoundDesc   *message,
                      ProtobufCBuffer     *buffer);
DmSoundDDF__SoundDesc *
       dm_sound_ddf__sound_desc__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_sound_ddf__sound_desc__free_unpacked
                     (DmSoundDDF__SoundDesc *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*DmSoundDDF__SoundDesc_Closure)
                 (const DmSoundDDF__SoundDesc *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCMessageDescriptor dm_sound_ddf__sound_desc__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_gamesys_2fsound_5fddf_2eproto__INCLUDED */