/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: gamesys/gamesys_ddf.proto */

#ifndef PROTOBUF_C_gamesys_2fgamesys_5fddf_2eproto__INCLUDED
#define PROTOBUF_C_gamesys_2fgamesys_5fddf_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "ddf/ddf_extensions.pb-c.h"
#include "ddf/ddf_math.pb-c.h"

typedef struct DmGameSystemDDF__FactoryDesc DmGameSystemDDF__FactoryDesc;
typedef struct DmGameSystemDDF__CollectionFactoryDesc DmGameSystemDDF__CollectionFactoryDesc;
typedef struct DmGameSystemDDF__Create DmGameSystemDDF__Create;
typedef struct DmGameSystemDDF__CollectionProxyDesc DmGameSystemDDF__CollectionProxyDesc;
typedef struct DmGameSystemDDF__SetTimeStep DmGameSystemDDF__SetTimeStep;
typedef struct DmGameSystemDDF__LightDesc DmGameSystemDDF__LightDesc;
typedef struct DmGameSystemDDF__SetLight DmGameSystemDDF__SetLight;
typedef struct DmGameSystemDDF__SetViewProjection DmGameSystemDDF__SetViewProjection;
typedef struct DmGameSystemDDF__PlaySound DmGameSystemDDF__PlaySound;
typedef struct DmGameSystemDDF__StopSound DmGameSystemDDF__StopSound;
typedef struct DmGameSystemDDF__PauseSound DmGameSystemDDF__PauseSound;
typedef struct DmGameSystemDDF__SoundDone DmGameSystemDDF__SoundDone;
typedef struct DmGameSystemDDF__SetGain DmGameSystemDDF__SetGain;
typedef struct DmGameSystemDDF__SetPan DmGameSystemDDF__SetPan;
typedef struct DmGameSystemDDF__SetSpeed DmGameSystemDDF__SetSpeed;
typedef struct DmGameSystemDDF__PlayParticleFX DmGameSystemDDF__PlayParticleFX;
typedef struct DmGameSystemDDF__StopParticleFX DmGameSystemDDF__StopParticleFX;
typedef struct DmGameSystemDDF__SetConstantParticleFX DmGameSystemDDF__SetConstantParticleFX;
typedef struct DmGameSystemDDF__ResetConstantParticleFX DmGameSystemDDF__ResetConstantParticleFX;
typedef struct DmGameSystemDDF__SetConstant DmGameSystemDDF__SetConstant;
typedef struct DmGameSystemDDF__ResetConstant DmGameSystemDDF__ResetConstant;
typedef struct DmGameSystemDDF__SetScale DmGameSystemDDF__SetScale;


/* --- enums --- */

typedef enum _DmGameSystemDDF__TimeStepMode {
  DM_GAME_SYSTEM_DDF__TIME_STEP_MODE__TIME_STEP_MODE_CONTINUOUS = 0,
  DM_GAME_SYSTEM_DDF__TIME_STEP_MODE__TIME_STEP_MODE_DISCRETE = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DM_GAME_SYSTEM_DDF__TIME_STEP_MODE)
} DmGameSystemDDF__TimeStepMode;
typedef enum _DmGameSystemDDF__LightType {
  DM_GAME_SYSTEM_DDF__LIGHT_TYPE__POINT = 0,
  DM_GAME_SYSTEM_DDF__LIGHT_TYPE__SPOT = 1
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DM_GAME_SYSTEM_DDF__LIGHT_TYPE)
} DmGameSystemDDF__LightType;

/* --- messages --- */

struct  DmGameSystemDDF__FactoryDesc
{
  ProtobufCMessage base;
  char *prototype;
  protobuf_c_boolean has_load_dynamically;
  protobuf_c_boolean load_dynamically;
};
#define DM_GAME_SYSTEM_DDF__FACTORY_DESC__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__factory_desc__descriptor) \
    , NULL, 0, 0 }


struct  DmGameSystemDDF__CollectionFactoryDesc
{
  ProtobufCMessage base;
  char *prototype;
  protobuf_c_boolean has_load_dynamically;
  protobuf_c_boolean load_dynamically;
};
#define DM_GAME_SYSTEM_DDF__COLLECTION_FACTORY_DESC__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__collection_factory_desc__descriptor) \
    , NULL, 0, 0 }


struct  DmGameSystemDDF__Create
{
  ProtobufCMessage base;
  DmMath__Point3 *position;
  DmMath__Quat *rotation;
  protobuf_c_boolean has_id;
  uint64_t id;
  protobuf_c_boolean has_scale;
  float scale;
  /*
   * if zero, 'scale' is used instead
   */
  DmMath__Vector3 *scale3;
  /*
   * Must be same as dmGameObject::INVALID_INSTANCE_POOL_INDEX.
   */
  protobuf_c_boolean has_index;
  uint32_t index;
};
#define DM_GAME_SYSTEM_DDF__CREATE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__create__descriptor) \
    , NULL, NULL, 0, 0ull, 0, 1, NULL, 0, 4294967295u }


struct  DmGameSystemDDF__CollectionProxyDesc
{
  ProtobufCMessage base;
  char *collection;
  protobuf_c_boolean has_exclude;
  protobuf_c_boolean exclude;
};
#define DM_GAME_SYSTEM_DDF__COLLECTION_PROXY_DESC__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__collection_proxy_desc__descriptor) \
    , NULL, 0, 0 }


/*
 * Documented in comp_collecion_proxy.cpp 
 */
struct  DmGameSystemDDF__SetTimeStep
{
  ProtobufCMessage base;
  float factor;
  DmGameSystemDDF__TimeStepMode mode;
};
#define DM_GAME_SYSTEM_DDF__SET_TIME_STEP__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__set_time_step__descriptor) \
    , 0, DM_GAME_SYSTEM_DDF__TIME_STEP_MODE__TIME_STEP_MODE_CONTINUOUS }


struct  DmGameSystemDDF__LightDesc
{
  ProtobufCMessage base;
  char *id;
  DmGameSystemDDF__LightType type;
  float intensity;
  DmMath__Vector3 *color;
  float range;
  float decay;
  /*
   * Only applicable for spot-lights
   */
  protobuf_c_boolean has_cone_angle;
  float cone_angle;
  protobuf_c_boolean has_penumbra_angle;
  float penumbra_angle;
  protobuf_c_boolean has_drop_off;
  float drop_off;
};
#define DM_GAME_SYSTEM_DDF__LIGHT_DESC__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__light_desc__descriptor) \
    , NULL, DM_GAME_SYSTEM_DDF__LIGHT_TYPE__POINT, 0, NULL, 0, 0, 0, 0, 0, 0, 0, 0 }


struct  DmGameSystemDDF__SetLight
{
  ProtobufCMessage base;
  DmMath__Point3 *position;
  DmMath__Quat *rotation;
  DmGameSystemDDF__LightDesc *light;
};
#define DM_GAME_SYSTEM_DDF__SET_LIGHT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__set_light__descriptor) \
    , NULL, NULL, NULL }


struct  DmGameSystemDDF__SetViewProjection
{
  ProtobufCMessage base;
  uint64_t id;
  DmMath__Matrix4 *view;
  DmMath__Matrix4 *projection;
};
#define DM_GAME_SYSTEM_DDF__SET_VIEW_PROJECTION__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__set_view_projection__descriptor) \
    , 0, NULL, NULL }


/*
 * Documented in comp_sound.cpp 
 */
struct  DmGameSystemDDF__PlaySound
{
  ProtobufCMessage base;
  protobuf_c_boolean has_delay;
  float delay;
  protobuf_c_boolean has_gain;
  float gain;
  protobuf_c_boolean has_pan;
  float pan;
  protobuf_c_boolean has_speed;
  float speed;
  /*
   * Must be same as dmSound::INVALID_PLAY_ID
   */
  protobuf_c_boolean has_play_id;
  uint32_t play_id;
};
#define DM_GAME_SYSTEM_DDF__PLAY_SOUND__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__play_sound__descriptor) \
    , 0, 0, 0, 1, 0, 0, 0, 1, 0, 4294967295u }


struct  DmGameSystemDDF__StopSound
{
  ProtobufCMessage base;
};
#define DM_GAME_SYSTEM_DDF__STOP_SOUND__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__stop_sound__descriptor) \
     }


struct  DmGameSystemDDF__PauseSound
{
  ProtobufCMessage base;
  protobuf_c_boolean has_pause;
  protobuf_c_boolean pause;
};
#define DM_GAME_SYSTEM_DDF__PAUSE_SOUND__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__pause_sound__descriptor) \
    , 0, 1 }


struct  DmGameSystemDDF__SoundDone
{
  ProtobufCMessage base;
  protobuf_c_boolean has_play_id;
  int32_t play_id;
};
#define DM_GAME_SYSTEM_DDF__SOUND_DONE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__sound_done__descriptor) \
    , 0, 0 }


struct  DmGameSystemDDF__SetGain
{
  ProtobufCMessage base;
  protobuf_c_boolean has_gain;
  float gain;
};
#define DM_GAME_SYSTEM_DDF__SET_GAIN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__set_gain__descriptor) \
    , 0, 1 }


struct  DmGameSystemDDF__SetPan
{
  ProtobufCMessage base;
  protobuf_c_boolean has_pan;
  float pan;
};
#define DM_GAME_SYSTEM_DDF__SET_PAN__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__set_pan__descriptor) \
    , 0, 0 }


struct  DmGameSystemDDF__SetSpeed
{
  ProtobufCMessage base;
  protobuf_c_boolean has_speed;
  float speed;
};
#define DM_GAME_SYSTEM_DDF__SET_SPEED__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__set_speed__descriptor) \
    , 0, 1 }


/*
 * Documented in scripts/script_particlefx.cpp 
 */
struct  DmGameSystemDDF__PlayParticleFX
{
  ProtobufCMessage base;
};
#define DM_GAME_SYSTEM_DDF__PLAY_PARTICLE_FX__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__play_particle_fx__descriptor) \
     }


struct  DmGameSystemDDF__StopParticleFX
{
  ProtobufCMessage base;
  protobuf_c_boolean has_clear_particles;
  protobuf_c_boolean clear_particles;
};
#define DM_GAME_SYSTEM_DDF__STOP_PARTICLE_FX__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__stop_particle_fx__descriptor) \
    , 0, 0 }


struct  DmGameSystemDDF__SetConstantParticleFX
{
  ProtobufCMessage base;
  uint64_t emitter_id;
  uint64_t name_hash;
  DmMath__Matrix4 *value;
  protobuf_c_boolean has_is_matrix4;
  protobuf_c_boolean is_matrix4;
};
#define DM_GAME_SYSTEM_DDF__SET_CONSTANT_PARTICLE_FX__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__set_constant_particle_fx__descriptor) \
    , 0, 0, NULL, 0, 0 }


struct  DmGameSystemDDF__ResetConstantParticleFX
{
  ProtobufCMessage base;
  uint64_t emitter_id;
  uint64_t name_hash;
};
#define DM_GAME_SYSTEM_DDF__RESET_CONSTANT_PARTICLE_FX__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__reset_constant_particle_fx__descriptor) \
    , 0, 0 }


/*
 * Function wrapper documented in gamesys_script.cpp 
 */
struct  DmGameSystemDDF__SetConstant
{
  ProtobufCMessage base;
  uint64_t name_hash;
  DmMath__Vector4 *value;
  protobuf_c_boolean has_index;
  int32_t index;
};
#define DM_GAME_SYSTEM_DDF__SET_CONSTANT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__set_constant__descriptor) \
    , 0, NULL, 0, 0 }


/*
 * Function wrapper documented in gamesys_script.cpp 
 */
struct  DmGameSystemDDF__ResetConstant
{
  ProtobufCMessage base;
  uint64_t name_hash;
};
#define DM_GAME_SYSTEM_DDF__RESET_CONSTANT__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__reset_constant__descriptor) \
    , 0 }


/*
 * Function wrapper documented in gamesys_script.cpp 
 */
struct  DmGameSystemDDF__SetScale
{
  ProtobufCMessage base;
  DmMath__Vector3 *scale;
};
#define DM_GAME_SYSTEM_DDF__SET_SCALE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_game_system_ddf__set_scale__descriptor) \
    , NULL }


/* DmGameSystemDDF__FactoryDesc methods */
void   dm_game_system_ddf__factory_desc__init
                     (DmGameSystemDDF__FactoryDesc         *message);
size_t dm_game_system_ddf__factory_desc__get_packed_size
                     (const DmGameSystemDDF__FactoryDesc   *message);
size_t dm_game_system_ddf__factory_desc__pack
                     (const DmGameSystemDDF__FactoryDesc   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__factory_desc__pack_to_buffer
                     (const DmGameSystemDDF__FactoryDesc   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__FactoryDesc *
       dm_game_system_ddf__factory_desc__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__factory_desc__free_unpacked
                     (DmGameSystemDDF__FactoryDesc *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__CollectionFactoryDesc methods */
void   dm_game_system_ddf__collection_factory_desc__init
                     (DmGameSystemDDF__CollectionFactoryDesc         *message);
size_t dm_game_system_ddf__collection_factory_desc__get_packed_size
                     (const DmGameSystemDDF__CollectionFactoryDesc   *message);
size_t dm_game_system_ddf__collection_factory_desc__pack
                     (const DmGameSystemDDF__CollectionFactoryDesc   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__collection_factory_desc__pack_to_buffer
                     (const DmGameSystemDDF__CollectionFactoryDesc   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__CollectionFactoryDesc *
       dm_game_system_ddf__collection_factory_desc__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__collection_factory_desc__free_unpacked
                     (DmGameSystemDDF__CollectionFactoryDesc *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__Create methods */
void   dm_game_system_ddf__create__init
                     (DmGameSystemDDF__Create         *message);
size_t dm_game_system_ddf__create__get_packed_size
                     (const DmGameSystemDDF__Create   *message);
size_t dm_game_system_ddf__create__pack
                     (const DmGameSystemDDF__Create   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__create__pack_to_buffer
                     (const DmGameSystemDDF__Create   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__Create *
       dm_game_system_ddf__create__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__create__free_unpacked
                     (DmGameSystemDDF__Create *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__CollectionProxyDesc methods */
void   dm_game_system_ddf__collection_proxy_desc__init
                     (DmGameSystemDDF__CollectionProxyDesc         *message);
size_t dm_game_system_ddf__collection_proxy_desc__get_packed_size
                     (const DmGameSystemDDF__CollectionProxyDesc   *message);
size_t dm_game_system_ddf__collection_proxy_desc__pack
                     (const DmGameSystemDDF__CollectionProxyDesc   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__collection_proxy_desc__pack_to_buffer
                     (const DmGameSystemDDF__CollectionProxyDesc   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__CollectionProxyDesc *
       dm_game_system_ddf__collection_proxy_desc__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__collection_proxy_desc__free_unpacked
                     (DmGameSystemDDF__CollectionProxyDesc *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__SetTimeStep methods */
void   dm_game_system_ddf__set_time_step__init
                     (DmGameSystemDDF__SetTimeStep         *message);
size_t dm_game_system_ddf__set_time_step__get_packed_size
                     (const DmGameSystemDDF__SetTimeStep   *message);
size_t dm_game_system_ddf__set_time_step__pack
                     (const DmGameSystemDDF__SetTimeStep   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__set_time_step__pack_to_buffer
                     (const DmGameSystemDDF__SetTimeStep   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__SetTimeStep *
       dm_game_system_ddf__set_time_step__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__set_time_step__free_unpacked
                     (DmGameSystemDDF__SetTimeStep *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__LightDesc methods */
void   dm_game_system_ddf__light_desc__init
                     (DmGameSystemDDF__LightDesc         *message);
size_t dm_game_system_ddf__light_desc__get_packed_size
                     (const DmGameSystemDDF__LightDesc   *message);
size_t dm_game_system_ddf__light_desc__pack
                     (const DmGameSystemDDF__LightDesc   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__light_desc__pack_to_buffer
                     (const DmGameSystemDDF__LightDesc   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__LightDesc *
       dm_game_system_ddf__light_desc__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__light_desc__free_unpacked
                     (DmGameSystemDDF__LightDesc *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__SetLight methods */
void   dm_game_system_ddf__set_light__init
                     (DmGameSystemDDF__SetLight         *message);
size_t dm_game_system_ddf__set_light__get_packed_size
                     (const DmGameSystemDDF__SetLight   *message);
size_t dm_game_system_ddf__set_light__pack
                     (const DmGameSystemDDF__SetLight   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__set_light__pack_to_buffer
                     (const DmGameSystemDDF__SetLight   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__SetLight *
       dm_game_system_ddf__set_light__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__set_light__free_unpacked
                     (DmGameSystemDDF__SetLight *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__SetViewProjection methods */
void   dm_game_system_ddf__set_view_projection__init
                     (DmGameSystemDDF__SetViewProjection         *message);
size_t dm_game_system_ddf__set_view_projection__get_packed_size
                     (const DmGameSystemDDF__SetViewProjection   *message);
size_t dm_game_system_ddf__set_view_projection__pack
                     (const DmGameSystemDDF__SetViewProjection   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__set_view_projection__pack_to_buffer
                     (const DmGameSystemDDF__SetViewProjection   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__SetViewProjection *
       dm_game_system_ddf__set_view_projection__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__set_view_projection__free_unpacked
                     (DmGameSystemDDF__SetViewProjection *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__PlaySound methods */
void   dm_game_system_ddf__play_sound__init
                     (DmGameSystemDDF__PlaySound         *message);
size_t dm_game_system_ddf__play_sound__get_packed_size
                     (const DmGameSystemDDF__PlaySound   *message);
size_t dm_game_system_ddf__play_sound__pack
                     (const DmGameSystemDDF__PlaySound   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__play_sound__pack_to_buffer
                     (const DmGameSystemDDF__PlaySound   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__PlaySound *
       dm_game_system_ddf__play_sound__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__play_sound__free_unpacked
                     (DmGameSystemDDF__PlaySound *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__StopSound methods */
void   dm_game_system_ddf__stop_sound__init
                     (DmGameSystemDDF__StopSound         *message);
size_t dm_game_system_ddf__stop_sound__get_packed_size
                     (const DmGameSystemDDF__StopSound   *message);
size_t dm_game_system_ddf__stop_sound__pack
                     (const DmGameSystemDDF__StopSound   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__stop_sound__pack_to_buffer
                     (const DmGameSystemDDF__StopSound   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__StopSound *
       dm_game_system_ddf__stop_sound__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__stop_sound__free_unpacked
                     (DmGameSystemDDF__StopSound *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__PauseSound methods */
void   dm_game_system_ddf__pause_sound__init
                     (DmGameSystemDDF__PauseSound         *message);
size_t dm_game_system_ddf__pause_sound__get_packed_size
                     (const DmGameSystemDDF__PauseSound   *message);
size_t dm_game_system_ddf__pause_sound__pack
                     (const DmGameSystemDDF__PauseSound   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__pause_sound__pack_to_buffer
                     (const DmGameSystemDDF__PauseSound   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__PauseSound *
       dm_game_system_ddf__pause_sound__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__pause_sound__free_unpacked
                     (DmGameSystemDDF__PauseSound *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__SoundDone methods */
void   dm_game_system_ddf__sound_done__init
                     (DmGameSystemDDF__SoundDone         *message);
size_t dm_game_system_ddf__sound_done__get_packed_size
                     (const DmGameSystemDDF__SoundDone   *message);
size_t dm_game_system_ddf__sound_done__pack
                     (const DmGameSystemDDF__SoundDone   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__sound_done__pack_to_buffer
                     (const DmGameSystemDDF__SoundDone   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__SoundDone *
       dm_game_system_ddf__sound_done__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__sound_done__free_unpacked
                     (DmGameSystemDDF__SoundDone *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__SetGain methods */
void   dm_game_system_ddf__set_gain__init
                     (DmGameSystemDDF__SetGain         *message);
size_t dm_game_system_ddf__set_gain__get_packed_size
                     (const DmGameSystemDDF__SetGain   *message);
size_t dm_game_system_ddf__set_gain__pack
                     (const DmGameSystemDDF__SetGain   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__set_gain__pack_to_buffer
                     (const DmGameSystemDDF__SetGain   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__SetGain *
       dm_game_system_ddf__set_gain__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__set_gain__free_unpacked
                     (DmGameSystemDDF__SetGain *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__SetPan methods */
void   dm_game_system_ddf__set_pan__init
                     (DmGameSystemDDF__SetPan         *message);
size_t dm_game_system_ddf__set_pan__get_packed_size
                     (const DmGameSystemDDF__SetPan   *message);
size_t dm_game_system_ddf__set_pan__pack
                     (const DmGameSystemDDF__SetPan   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__set_pan__pack_to_buffer
                     (const DmGameSystemDDF__SetPan   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__SetPan *
       dm_game_system_ddf__set_pan__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__set_pan__free_unpacked
                     (DmGameSystemDDF__SetPan *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__SetSpeed methods */
void   dm_game_system_ddf__set_speed__init
                     (DmGameSystemDDF__SetSpeed         *message);
size_t dm_game_system_ddf__set_speed__get_packed_size
                     (const DmGameSystemDDF__SetSpeed   *message);
size_t dm_game_system_ddf__set_speed__pack
                     (const DmGameSystemDDF__SetSpeed   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__set_speed__pack_to_buffer
                     (const DmGameSystemDDF__SetSpeed   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__SetSpeed *
       dm_game_system_ddf__set_speed__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__set_speed__free_unpacked
                     (DmGameSystemDDF__SetSpeed *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__PlayParticleFX methods */
void   dm_game_system_ddf__play_particle_fx__init
                     (DmGameSystemDDF__PlayParticleFX         *message);
size_t dm_game_system_ddf__play_particle_fx__get_packed_size
                     (const DmGameSystemDDF__PlayParticleFX   *message);
size_t dm_game_system_ddf__play_particle_fx__pack
                     (const DmGameSystemDDF__PlayParticleFX   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__play_particle_fx__pack_to_buffer
                     (const DmGameSystemDDF__PlayParticleFX   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__PlayParticleFX *
       dm_game_system_ddf__play_particle_fx__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__play_particle_fx__free_unpacked
                     (DmGameSystemDDF__PlayParticleFX *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__StopParticleFX methods */
void   dm_game_system_ddf__stop_particle_fx__init
                     (DmGameSystemDDF__StopParticleFX         *message);
size_t dm_game_system_ddf__stop_particle_fx__get_packed_size
                     (const DmGameSystemDDF__StopParticleFX   *message);
size_t dm_game_system_ddf__stop_particle_fx__pack
                     (const DmGameSystemDDF__StopParticleFX   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__stop_particle_fx__pack_to_buffer
                     (const DmGameSystemDDF__StopParticleFX   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__StopParticleFX *
       dm_game_system_ddf__stop_particle_fx__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__stop_particle_fx__free_unpacked
                     (DmGameSystemDDF__StopParticleFX *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__SetConstantParticleFX methods */
void   dm_game_system_ddf__set_constant_particle_fx__init
                     (DmGameSystemDDF__SetConstantParticleFX         *message);
size_t dm_game_system_ddf__set_constant_particle_fx__get_packed_size
                     (const DmGameSystemDDF__SetConstantParticleFX   *message);
size_t dm_game_system_ddf__set_constant_particle_fx__pack
                     (const DmGameSystemDDF__SetConstantParticleFX   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__set_constant_particle_fx__pack_to_buffer
                     (const DmGameSystemDDF__SetConstantParticleFX   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__SetConstantParticleFX *
       dm_game_system_ddf__set_constant_particle_fx__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__set_constant_particle_fx__free_unpacked
                     (DmGameSystemDDF__SetConstantParticleFX *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__ResetConstantParticleFX methods */
void   dm_game_system_ddf__reset_constant_particle_fx__init
                     (DmGameSystemDDF__ResetConstantParticleFX         *message);
size_t dm_game_system_ddf__reset_constant_particle_fx__get_packed_size
                     (const DmGameSystemDDF__ResetConstantParticleFX   *message);
size_t dm_game_system_ddf__reset_constant_particle_fx__pack
                     (const DmGameSystemDDF__ResetConstantParticleFX   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__reset_constant_particle_fx__pack_to_buffer
                     (const DmGameSystemDDF__ResetConstantParticleFX   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__ResetConstantParticleFX *
       dm_game_system_ddf__reset_constant_particle_fx__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__reset_constant_particle_fx__free_unpacked
                     (DmGameSystemDDF__ResetConstantParticleFX *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__SetConstant methods */
void   dm_game_system_ddf__set_constant__init
                     (DmGameSystemDDF__SetConstant         *message);
size_t dm_game_system_ddf__set_constant__get_packed_size
                     (const DmGameSystemDDF__SetConstant   *message);
size_t dm_game_system_ddf__set_constant__pack
                     (const DmGameSystemDDF__SetConstant   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__set_constant__pack_to_buffer
                     (const DmGameSystemDDF__SetConstant   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__SetConstant *
       dm_game_system_ddf__set_constant__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__set_constant__free_unpacked
                     (DmGameSystemDDF__SetConstant *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__ResetConstant methods */
void   dm_game_system_ddf__reset_constant__init
                     (DmGameSystemDDF__ResetConstant         *message);
size_t dm_game_system_ddf__reset_constant__get_packed_size
                     (const DmGameSystemDDF__ResetConstant   *message);
size_t dm_game_system_ddf__reset_constant__pack
                     (const DmGameSystemDDF__ResetConstant   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__reset_constant__pack_to_buffer
                     (const DmGameSystemDDF__ResetConstant   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__ResetConstant *
       dm_game_system_ddf__reset_constant__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__reset_constant__free_unpacked
                     (DmGameSystemDDF__ResetConstant *message,
                      ProtobufCAllocator *allocator);
/* DmGameSystemDDF__SetScale methods */
void   dm_game_system_ddf__set_scale__init
                     (DmGameSystemDDF__SetScale         *message);
size_t dm_game_system_ddf__set_scale__get_packed_size
                     (const DmGameSystemDDF__SetScale   *message);
size_t dm_game_system_ddf__set_scale__pack
                     (const DmGameSystemDDF__SetScale   *message,
                      uint8_t             *out);
size_t dm_game_system_ddf__set_scale__pack_to_buffer
                     (const DmGameSystemDDF__SetScale   *message,
                      ProtobufCBuffer     *buffer);
DmGameSystemDDF__SetScale *
       dm_game_system_ddf__set_scale__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_game_system_ddf__set_scale__free_unpacked
                     (DmGameSystemDDF__SetScale *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*DmGameSystemDDF__FactoryDesc_Closure)
                 (const DmGameSystemDDF__FactoryDesc *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__CollectionFactoryDesc_Closure)
                 (const DmGameSystemDDF__CollectionFactoryDesc *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__Create_Closure)
                 (const DmGameSystemDDF__Create *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__CollectionProxyDesc_Closure)
                 (const DmGameSystemDDF__CollectionProxyDesc *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__SetTimeStep_Closure)
                 (const DmGameSystemDDF__SetTimeStep *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__LightDesc_Closure)
                 (const DmGameSystemDDF__LightDesc *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__SetLight_Closure)
                 (const DmGameSystemDDF__SetLight *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__SetViewProjection_Closure)
                 (const DmGameSystemDDF__SetViewProjection *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__PlaySound_Closure)
                 (const DmGameSystemDDF__PlaySound *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__StopSound_Closure)
                 (const DmGameSystemDDF__StopSound *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__PauseSound_Closure)
                 (const DmGameSystemDDF__PauseSound *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__SoundDone_Closure)
                 (const DmGameSystemDDF__SoundDone *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__SetGain_Closure)
                 (const DmGameSystemDDF__SetGain *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__SetPan_Closure)
                 (const DmGameSystemDDF__SetPan *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__SetSpeed_Closure)
                 (const DmGameSystemDDF__SetSpeed *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__PlayParticleFX_Closure)
                 (const DmGameSystemDDF__PlayParticleFX *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__StopParticleFX_Closure)
                 (const DmGameSystemDDF__StopParticleFX *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__SetConstantParticleFX_Closure)
                 (const DmGameSystemDDF__SetConstantParticleFX *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__ResetConstantParticleFX_Closure)
                 (const DmGameSystemDDF__ResetConstantParticleFX *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__SetConstant_Closure)
                 (const DmGameSystemDDF__SetConstant *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__ResetConstant_Closure)
                 (const DmGameSystemDDF__ResetConstant *message,
                  void *closure_data);
typedef void (*DmGameSystemDDF__SetScale_Closure)
                 (const DmGameSystemDDF__SetScale *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    dm_game_system_ddf__time_step_mode__descriptor;
extern const ProtobufCEnumDescriptor    dm_game_system_ddf__light_type__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__factory_desc__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__collection_factory_desc__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__create__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__collection_proxy_desc__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__set_time_step__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__light_desc__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__set_light__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__set_view_projection__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__play_sound__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__stop_sound__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__pause_sound__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__sound_done__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__set_gain__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__set_pan__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__set_speed__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__play_particle_fx__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__stop_particle_fx__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__set_constant_particle_fx__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__reset_constant_particle_fx__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__set_constant__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__reset_constant__descriptor;
extern const ProtobufCMessageDescriptor dm_game_system_ddf__set_scale__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_gamesys_2fgamesys_5fddf_2eproto__INCLUDED */
