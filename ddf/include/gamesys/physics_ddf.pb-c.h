/* Generated by the protocol buffer compiler.  DO NOT EDIT! */
/* Generated from: gamesys/physics_ddf.proto */

#ifndef PROTOBUF_C_gamesys_2fphysics_5fddf_2eproto__INCLUDED
#define PROTOBUF_C_gamesys_2fphysics_5fddf_2eproto__INCLUDED

#include <protobuf-c/protobuf-c.h>

PROTOBUF_C__BEGIN_DECLS

#if PROTOBUF_C_VERSION_NUMBER < 1000000
# error This file was generated by a newer version of protoc-c which is incompatible with your libprotobuf-c headers. Please update your headers.
#elif 1004001 < PROTOBUF_C_MIN_COMPILER_VERSION
# error This file was generated by an older version of protoc-c which is incompatible with your libprotobuf-c headers. Please regenerate this file with a newer version of protoc-c.
#endif

#include "ddf/ddf_extensions.pb-c.h"
#include "ddf/ddf_math.pb-c.h"

typedef struct DmPhysicsDDF__ConvexShape DmPhysicsDDF__ConvexShape;
typedef struct DmPhysicsDDF__CollisionShape DmPhysicsDDF__CollisionShape;
typedef struct DmPhysicsDDF__CollisionShape__Shape DmPhysicsDDF__CollisionShape__Shape;
typedef struct DmPhysicsDDF__CollisionObjectDesc DmPhysicsDDF__CollisionObjectDesc;
typedef struct DmPhysicsDDF__ApplyForce DmPhysicsDDF__ApplyForce;
typedef struct DmPhysicsDDF__CollisionResponse DmPhysicsDDF__CollisionResponse;
typedef struct DmPhysicsDDF__ContactPointResponse DmPhysicsDDF__ContactPointResponse;
typedef struct DmPhysicsDDF__TriggerResponse DmPhysicsDDF__TriggerResponse;
typedef struct DmPhysicsDDF__RequestRayCast DmPhysicsDDF__RequestRayCast;
typedef struct DmPhysicsDDF__RayCastResponse DmPhysicsDDF__RayCastResponse;
typedef struct DmPhysicsDDF__RayCastMissed DmPhysicsDDF__RayCastMissed;
typedef struct DmPhysicsDDF__RequestVelocity DmPhysicsDDF__RequestVelocity;
typedef struct DmPhysicsDDF__VelocityResponse DmPhysicsDDF__VelocityResponse;
typedef struct DmPhysicsDDF__SetGridShapeHull DmPhysicsDDF__SetGridShapeHull;
typedef struct DmPhysicsDDF__EnableGridShapeLayer DmPhysicsDDF__EnableGridShapeLayer;


/* --- enums --- */

/*
 * NOTE: These values must match CollisionShape.Type below 
 */
typedef enum _DmPhysicsDDF__ConvexShape__Type {
  DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE__TYPE_SPHERE = 0,
  DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE__TYPE_BOX = 1,
  DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE__TYPE_CAPSULE = 2,
  DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE__TYPE_HULL = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE)
} DmPhysicsDDF__ConvexShape__Type;
/*
 * NOTE: These values must match ConvexShape.Type above 
 */
typedef enum _DmPhysicsDDF__CollisionShape__Type {
  DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE__TYPE_SPHERE = 0,
  DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE__TYPE_BOX = 1,
  DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE__TYPE_CAPSULE = 2,
  DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE__TYPE_HULL = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE)
} DmPhysicsDDF__CollisionShape__Type;
/*
 * This should coincide with CollisionObjectType in physics-lib 
 */
typedef enum _DmPhysicsDDF__CollisionObjectType {
  DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE__COLLISION_OBJECT_TYPE_DYNAMIC = 0,
  DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE__COLLISION_OBJECT_TYPE_KINEMATIC = 1,
  DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE__COLLISION_OBJECT_TYPE_STATIC = 2,
  DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE__COLLISION_OBJECT_TYPE_TRIGGER = 3
    PROTOBUF_C__FORCE_ENUM_TO_BE_INT_SIZE(DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE)
} DmPhysicsDDF__CollisionObjectType;

/* --- messages --- */

struct  DmPhysicsDDF__ConvexShape
{
  ProtobufCMessage base;
  DmPhysicsDDF__ConvexShape__Type shape_type;
  /*
   *ShapeType == SPHERE
   *Data = [radius]
   *ShapeType == BOX
   *Data = [ext_x, ext_y, ext_z]
   *ShapeType == CAPSULE
   *Data = [radius, height]
   *ShapeType == HULL
   *Data = [x0, y0, z0, x1, ...]
   */
  size_t n_data;
  float *data;
};
#define DM_PHYSICS_DDF__CONVEX_SHAPE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__convex_shape__descriptor) \
    , DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE__TYPE_SPHERE, 0,NULL }


struct  DmPhysicsDDF__CollisionShape__Shape
{
  ProtobufCMessage base;
  DmPhysicsDDF__CollisionShape__Type shape_type;
  DmMath__Point3 *position;
  DmMath__Quat *rotation;
  uint32_t index;
  uint32_t count;
};
#define DM_PHYSICS_DDF__COLLISION_SHAPE__SHAPE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__collision_shape__shape__descriptor) \
    , DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE__TYPE_SPHERE, NULL, NULL, 0, 0 }


struct  DmPhysicsDDF__CollisionShape
{
  ProtobufCMessage base;
  size_t n_shapes;
  DmPhysicsDDF__CollisionShape__Shape **shapes;
  size_t n_data;
  float *data;
};
#define DM_PHYSICS_DDF__COLLISION_SHAPE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__collision_shape__descriptor) \
    , 0,NULL, 0,NULL }


struct  DmPhysicsDDF__CollisionObjectDesc
{
  ProtobufCMessage base;
  char *collision_shape;
  DmPhysicsDDF__CollisionObjectType type;
  float mass;
  float friction;
  float restitution;
  char *group;
  size_t n_mask;
  char **mask;
  DmPhysicsDDF__CollisionShape *embedded_collision_shape;
  protobuf_c_boolean has_linear_damping;
  float linear_damping;
  protobuf_c_boolean has_angular_damping;
  float angular_damping;
  protobuf_c_boolean has_locked_rotation;
  protobuf_c_boolean locked_rotation;
  protobuf_c_boolean has_bullet;
  protobuf_c_boolean bullet;
};
#define DM_PHYSICS_DDF__COLLISION_OBJECT_DESC__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__collision_object_desc__descriptor) \
    , NULL, DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE__COLLISION_OBJECT_TYPE_DYNAMIC, 0, 0, 0, NULL, 0,NULL, NULL, 0, 0, 0, 0, 0, 0, 0, 0 }


/*
 *# applies a force on a collision object
 * Post this message to a collision-object-component to apply the specified force on the collision object.
 * The collision object must be dynamic.
 * @message
 * @name apply_force
 * @param force [type:vector3] the force to be applied on the collision object, measured in Newton
 * @param position [type:vector3] the position where the force should be applied
 * @examples
 * Assuming the instance of the script has a collision-object-component with id "co":
 * ```lua
 * -- apply a force of 1 Newton towards world-x at the center of the game object instance
 * msg.post("#co", "apply_force", {force = vmath.vector3(1, 0, 0), position = go.get_world_position()})
 * ```
 */
struct  DmPhysicsDDF__ApplyForce
{
  ProtobufCMessage base;
  DmMath__Vector3 *force;
  DmMath__Point3 *position;
};
#define DM_PHYSICS_DDF__APPLY_FORCE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__apply_force__descriptor) \
    , NULL, NULL }


/*
 *# reports a collision between two collision objects
 * This message is broadcasted to every component of an instance that has a collision object,
 * when the collision object collides with another collision object. For a script to take action
 * when such a collision happens, it should check for this message in its `on_message` callback
 * function.
 * This message only reports that a collision actually happened and will only be sent once per
 * colliding pair and frame.
 * To retrieve more detailed information, check for the `contact_point_response` instead.
 * @message
 * @name collision_response
 * @param other_id [type:hash] the id of the instance the collision object collided with
 * @param other_position [type:vector3] the world position of the instance the collision object collided with
 * @param other_group [type:hash] the collision group of the other collision object (hash)
 * @param own_group [type:hash] the collision group of the own collision object (hash)
 * @examples
 * How to take action when a collision occurs:
 * ```lua
 * function on_message(self, message_id, message, sender)
 *     -- check for the message
 *     if message_id == hash("collision_response") then
 *         -- take action
 *     end
 * end
 * ```
 */
struct  DmPhysicsDDF__CollisionResponse
{
  ProtobufCMessage base;
  uint64_t other_id;
  uint64_t group;
  DmMath__Point3 *other_position;
  uint64_t other_group;
  uint64_t own_group;
};
#define DM_PHYSICS_DDF__COLLISION_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__collision_response__descriptor) \
    , 0, 0, NULL, 0, 0 }


/*
 *# reports a contact point between two collision objects
 * This message is broadcasted to every component of an instance that has a collision object,
 * when the collision object has contact points with respect to another collision object.
 * For a script to take action when such contact points occur, it should check for this message
 * in its `on_message` callback function.
 * Since multiple contact points can occur for two colliding objects, this message can be sent
 * multiple times in the same frame for the same two colliding objects. To only be notified once
 * when the collision occurs, check for the `collision_response` message instead.
 * @message
 * @name contact_point_response
 * @param position [type:vector3] world position of the contact point
 * @param normal [type:vector3] normal in world space of the contact point, which points from the other object towards the current object
 * @param relative_velocity [type:vector3] the relative velocity of the collision object as observed from the other object
 * @param distance [type:number] the penetration distance between the objects, which is always positive
 * @param applied_impulse [type:number] the impulse the contact resulted in
 * @param life_time [type:number] life time of the contact, **not currently used**
 * @param mass [type:number] the mass of the current collision object in kg
 * @param other_mass [type:number] the mass of the other collision object in kg
 * @param other_id [type:hash] the id of the instance the collision object is in contact with
 * @param other_position [type:vector3] the world position of the other collision object
 * @param other_group [type:hash] the collision group of the other collision object (hash)
 * @param own_group [type:hash] the collision group of the own collision object (hash)
 * @examples
 * How to take action when a contact point occurs:
 * ```lua
 * function on_message(self, message_id, message, sender)
 *     -- check for the message
 *     if message_id == hash("contact_point_response") then
 *         -- take action
 *     end
 * end
 * ```
 */
struct  DmPhysicsDDF__ContactPointResponse
{
  ProtobufCMessage base;
  DmMath__Point3 *position;
  DmMath__Vector3 *normal;
  DmMath__Vector3 *relative_velocity;
  float distance;
  float applied_impulse;
  float life_time;
  float mass;
  float other_mass;
  uint64_t other_id;
  DmMath__Point3 *other_position;
  uint64_t group;
  uint64_t other_group;
  uint64_t own_group;
};
#define DM_PHYSICS_DDF__CONTACT_POINT_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__contact_point_response__descriptor) \
    , NULL, NULL, NULL, 0, 0, 0, 0, 0, 0, NULL, 0, 0, 0 }


/*
 *# reports interaction (enter/exit) between a trigger collision object and another collision object
 * This message is broadcasted to every component of an instance that has a collision object,
 * when the collision object interacts with another collision object and one of them is a trigger.
 * For a script to take action when such an interaction happens, it should check for this message
 * in its `on_message` callback function.
 * This message only reports that an interaction actually happened and will only be sent once per
 * colliding pair and frame. To retrieve more detailed information, check for the
 * `contact_point_response` instead.
 * @message
 * @name trigger_response
 * @param other_id [type:hash] the id of the instance the collision object collided with (hash)
 * @param enter [type:boolean] if the interaction was an entry or not
 * @param other_group [type:hash] the collision group of the triggering collision object (hash)
 * @param own_group [type:hash] the collision group of the own collision object (hash)
 * @examples
 * How to take action when a trigger interaction occurs:
 * ```lua
 * function on_message(self, message_id, message, sender)
 *     -- check for the message
 *     if message_id == hash("trigger_response") then
 *         if message.enter then
 *             -- take action for entry
 *         else
 *             -- take action for exit
 *         end
 *     end
 * end
 * ```
 */
struct  DmPhysicsDDF__TriggerResponse
{
  ProtobufCMessage base;
  uint64_t other_id;
  protobuf_c_boolean enter;
  uint64_t group;
  uint64_t other_group;
  uint64_t own_group;
};
#define DM_PHYSICS_DDF__TRIGGER_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__trigger_response__descriptor) \
    , 0, 0, 0, 0, 0 }


struct  DmPhysicsDDF__RequestRayCast
{
  ProtobufCMessage base;
  DmMath__Point3 *from;
  DmMath__Point3 *to;
  uint32_t mask;
  uint32_t request_id;
};
#define DM_PHYSICS_DDF__REQUEST_RAY_CAST__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__request_ray_cast__descriptor) \
    , NULL, NULL, 0, 0 }


/*
 *# reports a ray cast hit
 * This message is sent back to the sender of a `ray_cast_request`, if the ray hit a
 * collision object. See `physics.raycast_async` for examples of how to use it.
 * @message
 * @name ray_cast_response
 * @param fraction [type:number] the fraction of the hit measured along the ray, where 0 is the start of the ray and 1 is the end
 * @param position [type:vector3] the world position of the hit
 * @param normal [type:vector3] the normal of the surface of the collision object where it was hit
 * @param id [type:hash] the instance id of the hit collision object
 * @param group [type:hash] the collision group of the hit collision object as a hashed name
 * @param request_id [type:number] id supplied when the ray cast was requested
 */
struct  DmPhysicsDDF__RayCastResponse
{
  ProtobufCMessage base;
  float fraction;
  DmMath__Point3 *position;
  DmMath__Vector3 *normal;
  uint64_t id;
  uint64_t group;
  uint32_t request_id;
};
#define DM_PHYSICS_DDF__RAY_CAST_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__ray_cast_response__descriptor) \
    , 0, NULL, NULL, 0, 0, 0 }


/*
 *# reports a ray cast miss
 * This message is sent back to the sender of a `ray_cast_request`, if the ray didn't hit any
 * collision object. See `physics.raycast_async` for examples of how to use it.
 * @message
 * @name ray_cast_missed
 * @param request_id [type:number] id supplied when the ray cast was requested
 */
struct  DmPhysicsDDF__RayCastMissed
{
  ProtobufCMessage base;
  uint32_t request_id;
};
#define DM_PHYSICS_DDF__RAY_CAST_MISSED__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__ray_cast_missed__descriptor) \
    , 0 }


struct  DmPhysicsDDF__RequestVelocity
{
  ProtobufCMessage base;
};
#define DM_PHYSICS_DDF__REQUEST_VELOCITY__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__request_velocity__descriptor) \
     }


struct  DmPhysicsDDF__VelocityResponse
{
  ProtobufCMessage base;
  DmMath__Vector3 *linear_velocity;
  DmMath__Vector3 *angular_velocity;
};
#define DM_PHYSICS_DDF__VELOCITY_RESPONSE__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__velocity_response__descriptor) \
    , NULL, NULL }


/*
 * System message (TileGrid=>CollisionObject)
 */
struct  DmPhysicsDDF__SetGridShapeHull
{
  ProtobufCMessage base;
  uint32_t shape;
  uint32_t row;
  uint32_t column;
  uint32_t hull;
  uint32_t flip_horizontal;
  uint32_t flip_vertical;
  uint32_t rotate90;
};
#define DM_PHYSICS_DDF__SET_GRID_SHAPE_HULL__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__set_grid_shape_hull__descriptor) \
    , 0, 0, 0, 0, 0, 0, 0 }


/*
 * System message (TileGrid=>CollisionObject)
 */
struct  DmPhysicsDDF__EnableGridShapeLayer
{
  ProtobufCMessage base;
  uint32_t shape;
  uint32_t enable;
};
#define DM_PHYSICS_DDF__ENABLE_GRID_SHAPE_LAYER__INIT \
 { PROTOBUF_C_MESSAGE_INIT (&dm_physics_ddf__enable_grid_shape_layer__descriptor) \
    , 0, 0 }


/* DmPhysicsDDF__ConvexShape methods */
void   dm_physics_ddf__convex_shape__init
                     (DmPhysicsDDF__ConvexShape         *message);
size_t dm_physics_ddf__convex_shape__get_packed_size
                     (const DmPhysicsDDF__ConvexShape   *message);
size_t dm_physics_ddf__convex_shape__pack
                     (const DmPhysicsDDF__ConvexShape   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__convex_shape__pack_to_buffer
                     (const DmPhysicsDDF__ConvexShape   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__ConvexShape *
       dm_physics_ddf__convex_shape__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__convex_shape__free_unpacked
                     (DmPhysicsDDF__ConvexShape *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__CollisionShape__Shape methods */
void   dm_physics_ddf__collision_shape__shape__init
                     (DmPhysicsDDF__CollisionShape__Shape         *message);
/* DmPhysicsDDF__CollisionShape methods */
void   dm_physics_ddf__collision_shape__init
                     (DmPhysicsDDF__CollisionShape         *message);
size_t dm_physics_ddf__collision_shape__get_packed_size
                     (const DmPhysicsDDF__CollisionShape   *message);
size_t dm_physics_ddf__collision_shape__pack
                     (const DmPhysicsDDF__CollisionShape   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__collision_shape__pack_to_buffer
                     (const DmPhysicsDDF__CollisionShape   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__CollisionShape *
       dm_physics_ddf__collision_shape__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__collision_shape__free_unpacked
                     (DmPhysicsDDF__CollisionShape *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__CollisionObjectDesc methods */
void   dm_physics_ddf__collision_object_desc__init
                     (DmPhysicsDDF__CollisionObjectDesc         *message);
size_t dm_physics_ddf__collision_object_desc__get_packed_size
                     (const DmPhysicsDDF__CollisionObjectDesc   *message);
size_t dm_physics_ddf__collision_object_desc__pack
                     (const DmPhysicsDDF__CollisionObjectDesc   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__collision_object_desc__pack_to_buffer
                     (const DmPhysicsDDF__CollisionObjectDesc   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__CollisionObjectDesc *
       dm_physics_ddf__collision_object_desc__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__collision_object_desc__free_unpacked
                     (DmPhysicsDDF__CollisionObjectDesc *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__ApplyForce methods */
void   dm_physics_ddf__apply_force__init
                     (DmPhysicsDDF__ApplyForce         *message);
size_t dm_physics_ddf__apply_force__get_packed_size
                     (const DmPhysicsDDF__ApplyForce   *message);
size_t dm_physics_ddf__apply_force__pack
                     (const DmPhysicsDDF__ApplyForce   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__apply_force__pack_to_buffer
                     (const DmPhysicsDDF__ApplyForce   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__ApplyForce *
       dm_physics_ddf__apply_force__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__apply_force__free_unpacked
                     (DmPhysicsDDF__ApplyForce *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__CollisionResponse methods */
void   dm_physics_ddf__collision_response__init
                     (DmPhysicsDDF__CollisionResponse         *message);
size_t dm_physics_ddf__collision_response__get_packed_size
                     (const DmPhysicsDDF__CollisionResponse   *message);
size_t dm_physics_ddf__collision_response__pack
                     (const DmPhysicsDDF__CollisionResponse   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__collision_response__pack_to_buffer
                     (const DmPhysicsDDF__CollisionResponse   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__CollisionResponse *
       dm_physics_ddf__collision_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__collision_response__free_unpacked
                     (DmPhysicsDDF__CollisionResponse *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__ContactPointResponse methods */
void   dm_physics_ddf__contact_point_response__init
                     (DmPhysicsDDF__ContactPointResponse         *message);
size_t dm_physics_ddf__contact_point_response__get_packed_size
                     (const DmPhysicsDDF__ContactPointResponse   *message);
size_t dm_physics_ddf__contact_point_response__pack
                     (const DmPhysicsDDF__ContactPointResponse   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__contact_point_response__pack_to_buffer
                     (const DmPhysicsDDF__ContactPointResponse   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__ContactPointResponse *
       dm_physics_ddf__contact_point_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__contact_point_response__free_unpacked
                     (DmPhysicsDDF__ContactPointResponse *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__TriggerResponse methods */
void   dm_physics_ddf__trigger_response__init
                     (DmPhysicsDDF__TriggerResponse         *message);
size_t dm_physics_ddf__trigger_response__get_packed_size
                     (const DmPhysicsDDF__TriggerResponse   *message);
size_t dm_physics_ddf__trigger_response__pack
                     (const DmPhysicsDDF__TriggerResponse   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__trigger_response__pack_to_buffer
                     (const DmPhysicsDDF__TriggerResponse   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__TriggerResponse *
       dm_physics_ddf__trigger_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__trigger_response__free_unpacked
                     (DmPhysicsDDF__TriggerResponse *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__RequestRayCast methods */
void   dm_physics_ddf__request_ray_cast__init
                     (DmPhysicsDDF__RequestRayCast         *message);
size_t dm_physics_ddf__request_ray_cast__get_packed_size
                     (const DmPhysicsDDF__RequestRayCast   *message);
size_t dm_physics_ddf__request_ray_cast__pack
                     (const DmPhysicsDDF__RequestRayCast   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__request_ray_cast__pack_to_buffer
                     (const DmPhysicsDDF__RequestRayCast   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__RequestRayCast *
       dm_physics_ddf__request_ray_cast__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__request_ray_cast__free_unpacked
                     (DmPhysicsDDF__RequestRayCast *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__RayCastResponse methods */
void   dm_physics_ddf__ray_cast_response__init
                     (DmPhysicsDDF__RayCastResponse         *message);
size_t dm_physics_ddf__ray_cast_response__get_packed_size
                     (const DmPhysicsDDF__RayCastResponse   *message);
size_t dm_physics_ddf__ray_cast_response__pack
                     (const DmPhysicsDDF__RayCastResponse   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__ray_cast_response__pack_to_buffer
                     (const DmPhysicsDDF__RayCastResponse   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__RayCastResponse *
       dm_physics_ddf__ray_cast_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__ray_cast_response__free_unpacked
                     (DmPhysicsDDF__RayCastResponse *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__RayCastMissed methods */
void   dm_physics_ddf__ray_cast_missed__init
                     (DmPhysicsDDF__RayCastMissed         *message);
size_t dm_physics_ddf__ray_cast_missed__get_packed_size
                     (const DmPhysicsDDF__RayCastMissed   *message);
size_t dm_physics_ddf__ray_cast_missed__pack
                     (const DmPhysicsDDF__RayCastMissed   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__ray_cast_missed__pack_to_buffer
                     (const DmPhysicsDDF__RayCastMissed   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__RayCastMissed *
       dm_physics_ddf__ray_cast_missed__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__ray_cast_missed__free_unpacked
                     (DmPhysicsDDF__RayCastMissed *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__RequestVelocity methods */
void   dm_physics_ddf__request_velocity__init
                     (DmPhysicsDDF__RequestVelocity         *message);
size_t dm_physics_ddf__request_velocity__get_packed_size
                     (const DmPhysicsDDF__RequestVelocity   *message);
size_t dm_physics_ddf__request_velocity__pack
                     (const DmPhysicsDDF__RequestVelocity   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__request_velocity__pack_to_buffer
                     (const DmPhysicsDDF__RequestVelocity   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__RequestVelocity *
       dm_physics_ddf__request_velocity__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__request_velocity__free_unpacked
                     (DmPhysicsDDF__RequestVelocity *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__VelocityResponse methods */
void   dm_physics_ddf__velocity_response__init
                     (DmPhysicsDDF__VelocityResponse         *message);
size_t dm_physics_ddf__velocity_response__get_packed_size
                     (const DmPhysicsDDF__VelocityResponse   *message);
size_t dm_physics_ddf__velocity_response__pack
                     (const DmPhysicsDDF__VelocityResponse   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__velocity_response__pack_to_buffer
                     (const DmPhysicsDDF__VelocityResponse   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__VelocityResponse *
       dm_physics_ddf__velocity_response__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__velocity_response__free_unpacked
                     (DmPhysicsDDF__VelocityResponse *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__SetGridShapeHull methods */
void   dm_physics_ddf__set_grid_shape_hull__init
                     (DmPhysicsDDF__SetGridShapeHull         *message);
size_t dm_physics_ddf__set_grid_shape_hull__get_packed_size
                     (const DmPhysicsDDF__SetGridShapeHull   *message);
size_t dm_physics_ddf__set_grid_shape_hull__pack
                     (const DmPhysicsDDF__SetGridShapeHull   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__set_grid_shape_hull__pack_to_buffer
                     (const DmPhysicsDDF__SetGridShapeHull   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__SetGridShapeHull *
       dm_physics_ddf__set_grid_shape_hull__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__set_grid_shape_hull__free_unpacked
                     (DmPhysicsDDF__SetGridShapeHull *message,
                      ProtobufCAllocator *allocator);
/* DmPhysicsDDF__EnableGridShapeLayer methods */
void   dm_physics_ddf__enable_grid_shape_layer__init
                     (DmPhysicsDDF__EnableGridShapeLayer         *message);
size_t dm_physics_ddf__enable_grid_shape_layer__get_packed_size
                     (const DmPhysicsDDF__EnableGridShapeLayer   *message);
size_t dm_physics_ddf__enable_grid_shape_layer__pack
                     (const DmPhysicsDDF__EnableGridShapeLayer   *message,
                      uint8_t             *out);
size_t dm_physics_ddf__enable_grid_shape_layer__pack_to_buffer
                     (const DmPhysicsDDF__EnableGridShapeLayer   *message,
                      ProtobufCBuffer     *buffer);
DmPhysicsDDF__EnableGridShapeLayer *
       dm_physics_ddf__enable_grid_shape_layer__unpack
                     (ProtobufCAllocator  *allocator,
                      size_t               len,
                      const uint8_t       *data);
void   dm_physics_ddf__enable_grid_shape_layer__free_unpacked
                     (DmPhysicsDDF__EnableGridShapeLayer *message,
                      ProtobufCAllocator *allocator);
/* --- per-message closures --- */

typedef void (*DmPhysicsDDF__ConvexShape_Closure)
                 (const DmPhysicsDDF__ConvexShape *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__CollisionShape__Shape_Closure)
                 (const DmPhysicsDDF__CollisionShape__Shape *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__CollisionShape_Closure)
                 (const DmPhysicsDDF__CollisionShape *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__CollisionObjectDesc_Closure)
                 (const DmPhysicsDDF__CollisionObjectDesc *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__ApplyForce_Closure)
                 (const DmPhysicsDDF__ApplyForce *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__CollisionResponse_Closure)
                 (const DmPhysicsDDF__CollisionResponse *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__ContactPointResponse_Closure)
                 (const DmPhysicsDDF__ContactPointResponse *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__TriggerResponse_Closure)
                 (const DmPhysicsDDF__TriggerResponse *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__RequestRayCast_Closure)
                 (const DmPhysicsDDF__RequestRayCast *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__RayCastResponse_Closure)
                 (const DmPhysicsDDF__RayCastResponse *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__RayCastMissed_Closure)
                 (const DmPhysicsDDF__RayCastMissed *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__RequestVelocity_Closure)
                 (const DmPhysicsDDF__RequestVelocity *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__VelocityResponse_Closure)
                 (const DmPhysicsDDF__VelocityResponse *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__SetGridShapeHull_Closure)
                 (const DmPhysicsDDF__SetGridShapeHull *message,
                  void *closure_data);
typedef void (*DmPhysicsDDF__EnableGridShapeLayer_Closure)
                 (const DmPhysicsDDF__EnableGridShapeLayer *message,
                  void *closure_data);

/* --- services --- */


/* --- descriptors --- */

extern const ProtobufCEnumDescriptor    dm_physics_ddf__collision_object_type__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__convex_shape__descriptor;
extern const ProtobufCEnumDescriptor    dm_physics_ddf__convex_shape__type__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__collision_shape__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__collision_shape__shape__descriptor;
extern const ProtobufCEnumDescriptor    dm_physics_ddf__collision_shape__type__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__collision_object_desc__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__apply_force__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__collision_response__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__contact_point_response__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__trigger_response__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__request_ray_cast__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__ray_cast_response__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__ray_cast_missed__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__request_velocity__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__velocity_response__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__set_grid_shape_hull__descriptor;
extern const ProtobufCMessageDescriptor dm_physics_ddf__enable_grid_shape_layer__descriptor;

PROTOBUF_C__END_DECLS


#endif  /* PROTOBUF_C_gamesys_2fphysics_5fddf_2eproto__INCLUDED */