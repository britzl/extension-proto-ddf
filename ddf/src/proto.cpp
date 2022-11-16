#define EXTENSION_NAME DDF
#define LIB_NAME "DDF"
#define MODULE_NAME "ddf"

#define DLIB_LOG_DOMAIN LIB_NAME
#include <dmsdk/sdk.h>
#include <stdlib.h>


#include "google/protobuf/descriptor.pb-c.h"
#include "ddf/ddf_extensions.pb-c.h"
#include "ddf/ddf_math.pb-c.h"
#include "input/input_ddf.pb-c.h"
#include "render/render_ddf.pb-c.h"
#include "render/font_ddf.pb-c.h"
#include "render/material_ddf.pb-c.h"
#include "script/ddf_script.pb-c.h"
#include "script/sys_ddf.pb-c.h"
#include "script/script_doc_ddf.pb-c.h"
#include "script/http_ddf.pb-c.h"
#include "script/lua_source_ddf.pb-c.h"
#include "rig/rig_ddf.pb-c.h"
#include "gamesys/model_ddf.pb-c.h"
#include "gamesys/mesh_ddf.pb-c.h"
#include "gamesys/label_ddf.pb-c.h"
#include "gamesys/tile_ddf.pb-c.h"
#include "gamesys/atlas_ddf.pb-c.h"
#include "gamesys/buffer_ddf.pb-c.h"
#include "gamesys/sound_ddf.pb-c.h"
#include "gamesys/camera_ddf.pb-c.h"
#include "gamesys/sprite_ddf.pb-c.h"
#include "gamesys/texture_set_ddf.pb-c.h"
#include "gamesys/physics_ddf.pb-c.h"
#include "gamesys/gamesys_ddf.pb-c.h"
#include "gamesys/gui_ddf.pb-c.h"
#include "resource/liveupdate_ddf.pb-c.h"
#include "resource/resource_ddf.pb-c.h"
#include "graphics/graphics_ddf.pb-c.h"
#include "gameobject/properties_ddf.pb-c.h"
#include "gameobject/gameobject_ddf.pb-c.h"
#include "gameobject/lua_ddf.pb-c.h"
#include "engine/engine_ddf.pb-c.h"
#include "particle/particle_ddf.pb-c.h"



/******************************************************************************
 * PUSH
 ******************************************************************************/

static void lua_pushdm_math__point3(lua_State* L, DmMath__Point3 *msg);
static void lua_pushdm_math__vector3(lua_State* L, DmMath__Vector3 *msg);
static void lua_pushdm_math__vector4(lua_State* L, DmMath__Vector4 *msg);
static void lua_pushdm_math__quat(lua_State* L, DmMath__Quat *msg);
static void lua_pushdm_math__transform(lua_State* L, DmMath__Transform *msg);
static void lua_pushdm_math__matrix4(lua_State* L, DmMath__Matrix4 *msg);
static void lua_pushdm_input_ddf__gamepad_modifier_t(lua_State* L, DmInputDDF__GamepadModifierT *msg);
static void lua_pushdm_input_ddf__gamepad_map_entry(lua_State* L, DmInputDDF__GamepadMapEntry *msg);
static void lua_pushdm_input_ddf__gamepad_map(lua_State* L, DmInputDDF__GamepadMap *msg);
static void lua_pushdm_input_ddf__gamepad_maps(lua_State* L, DmInputDDF__GamepadMaps *msg);
static void lua_pushdm_input_ddf__key_trigger(lua_State* L, DmInputDDF__KeyTrigger *msg);
static void lua_pushdm_input_ddf__mouse_trigger(lua_State* L, DmInputDDF__MouseTrigger *msg);
static void lua_pushdm_input_ddf__gamepad_trigger(lua_State* L, DmInputDDF__GamepadTrigger *msg);
static void lua_pushdm_input_ddf__touch_trigger(lua_State* L, DmInputDDF__TouchTrigger *msg);
static void lua_pushdm_input_ddf__text_trigger(lua_State* L, DmInputDDF__TextTrigger *msg);
static void lua_pushdm_input_ddf__input_binding(lua_State* L, DmInputDDF__InputBinding *msg);
static void lua_pushdm_render_ddf__render_prototype_desc(lua_State* L, DmRenderDDF__RenderPrototypeDesc *msg);
static void lua_pushdm_render_ddf__render_prototype_desc__material_desc(lua_State* L, DmRenderDDF__RenderPrototypeDesc__MaterialDesc *msg);
static void lua_pushdm_render_ddf__draw_text(lua_State* L, DmRenderDDF__DrawText *msg);
static void lua_pushdm_render_ddf__draw_debug_text(lua_State* L, DmRenderDDF__DrawDebugText *msg);
static void lua_pushdm_render_ddf__draw_line(lua_State* L, DmRenderDDF__DrawLine *msg);
static void lua_pushdm_render_ddf__window_resized(lua_State* L, DmRenderDDF__WindowResized *msg);
static void lua_pushdm_render_ddf__resize(lua_State* L, DmRenderDDF__Resize *msg);
static void lua_pushdm_render_ddf__clear_color(lua_State* L, DmRenderDDF__ClearColor *msg);
static void lua_pushdm_render_ddf__display_profile_qualifier(lua_State* L, DmRenderDDF__DisplayProfileQualifier *msg);
static void lua_pushdm_render_ddf__display_profile(lua_State* L, DmRenderDDF__DisplayProfile *msg);
static void lua_pushdm_render_ddf__display_profiles(lua_State* L, DmRenderDDF__DisplayProfiles *msg);
static void lua_pushdm_render_ddf__font_desc(lua_State* L, DmRenderDDF__FontDesc *msg);
static void lua_pushdm_render_ddf__font_map(lua_State* L, DmRenderDDF__FontMap *msg);
static void lua_pushdm_render_ddf__font_map__glyph(lua_State* L, DmRenderDDF__FontMap__Glyph *msg);
static void lua_pushdm_render_ddf__material_desc(lua_State* L, DmRenderDDF__MaterialDesc *msg);
static void lua_pushdm_render_ddf__material_desc__constant(lua_State* L, DmRenderDDF__MaterialDesc__Constant *msg);
static void lua_pushdm_render_ddf__material_desc__sampler(lua_State* L, DmRenderDDF__MaterialDesc__Sampler *msg);
static void lua_pushdm_script_ddf__lua_ref(lua_State* L, DmScriptDDF__LuaRef *msg);
static void lua_pushdm_system_ddf__exit(lua_State* L, DmSystemDDF__Exit *msg);
static void lua_pushdm_system_ddf__toggle_profile(lua_State* L, DmSystemDDF__ToggleProfile *msg);
static void lua_pushdm_system_ddf__toggle_physics_debug(lua_State* L, DmSystemDDF__TogglePhysicsDebug *msg);
static void lua_pushdm_system_ddf__start_record(lua_State* L, DmSystemDDF__StartRecord *msg);
static void lua_pushdm_system_ddf__stop_record(lua_State* L, DmSystemDDF__StopRecord *msg);
static void lua_pushdm_system_ddf__reboot(lua_State* L, DmSystemDDF__Reboot *msg);
static void lua_pushdm_system_ddf__set_vsync(lua_State* L, DmSystemDDF__SetVsync *msg);
static void lua_pushdm_system_ddf__set_update_frequency(lua_State* L, DmSystemDDF__SetUpdateFrequency *msg);
static void lua_pushdm_script_doc__parameter(lua_State* L, DmScriptDoc__Parameter *msg);
static void lua_pushdm_script_doc__member(lua_State* L, DmScriptDoc__Member *msg);
static void lua_pushdm_script_doc__return_value(lua_State* L, DmScriptDoc__ReturnValue *msg);
static void lua_pushdm_script_doc__element(lua_State* L, DmScriptDoc__Element *msg);
static void lua_pushdm_script_doc__info(lua_State* L, DmScriptDoc__Info *msg);
static void lua_pushdm_script_doc__document(lua_State* L, DmScriptDoc__Document *msg);
static void lua_pushdm_http_ddf__stop_http(lua_State* L, DmHttpDDF__StopHttp *msg);
static void lua_pushdm_http_ddf__http_request(lua_State* L, DmHttpDDF__HttpRequest *msg);
static void lua_pushdm_http_ddf__http_response(lua_State* L, DmHttpDDF__HttpResponse *msg);
static void lua_pushdm_lua_ddf__lua_source(lua_State* L, DmLuaDDF__LuaSource *msg);
static void lua_pushdm_rig_ddf__bone(lua_State* L, DmRigDDF__Bone *msg);
static void lua_pushdm_rig_ddf__ik(lua_State* L, DmRigDDF__IK *msg);
static void lua_pushdm_rig_ddf__skeleton(lua_State* L, DmRigDDF__Skeleton *msg);
static void lua_pushdm_rig_ddf__animation_track(lua_State* L, DmRigDDF__AnimationTrack *msg);
static void lua_pushdm_rig_ddf__event_key(lua_State* L, DmRigDDF__EventKey *msg);
static void lua_pushdm_rig_ddf__event_track(lua_State* L, DmRigDDF__EventTrack *msg);
static void lua_pushdm_rig_ddf__rig_animation(lua_State* L, DmRigDDF__RigAnimation *msg);
static void lua_pushdm_rig_ddf__animation_set(lua_State* L, DmRigDDF__AnimationSet *msg);
static void lua_pushdm_rig_ddf__animation_instance_desc(lua_State* L, DmRigDDF__AnimationInstanceDesc *msg);
static void lua_pushdm_rig_ddf__animation_set_desc(lua_State* L, DmRigDDF__AnimationSetDesc *msg);
static void lua_pushdm_rig_ddf__mesh(lua_State* L, DmRigDDF__Mesh *msg);
static void lua_pushdm_rig_ddf__model(lua_State* L, DmRigDDF__Model *msg);
static void lua_pushdm_rig_ddf__mesh_set(lua_State* L, DmRigDDF__MeshSet *msg);
static void lua_pushdm_rig_ddf__rig_scene(lua_State* L, DmRigDDF__RigScene *msg);
static void lua_pushdm_model_ddf__model_desc(lua_State* L, DmModelDDF__ModelDesc *msg);
static void lua_pushdm_model_ddf__model(lua_State* L, DmModelDDF__Model *msg);
static void lua_pushdm_model_ddf__reset_constant(lua_State* L, DmModelDDF__ResetConstant *msg);
static void lua_pushdm_model_ddf__set_texture(lua_State* L, DmModelDDF__SetTexture *msg);
static void lua_pushdm_model_ddf__model_play_animation(lua_State* L, DmModelDDF__ModelPlayAnimation *msg);
static void lua_pushdm_model_ddf__model_cancel_animation(lua_State* L, DmModelDDF__ModelCancelAnimation *msg);
static void lua_pushdm_model_ddf__model_animation_done(lua_State* L, DmModelDDF__ModelAnimationDone *msg);
static void lua_pushdm_mesh_ddf__mesh_desc(lua_State* L, DmMeshDDF__MeshDesc *msg);
static void lua_pushdm_game_system_ddf__label_desc(lua_State* L, DmGameSystemDDF__LabelDesc *msg);
static void lua_pushdm_game_system_ddf__set_text(lua_State* L, DmGameSystemDDF__SetText *msg);
static void lua_pushdm_game_system_ddf__convex_hull(lua_State* L, DmGameSystemDDF__ConvexHull *msg);
static void lua_pushdm_game_system_ddf__cue(lua_State* L, DmGameSystemDDF__Cue *msg);
static void lua_pushdm_game_system_ddf__animation(lua_State* L, DmGameSystemDDF__Animation *msg);
static void lua_pushdm_game_system_ddf__tile_set(lua_State* L, DmGameSystemDDF__TileSet *msg);
static void lua_pushdm_game_system_ddf__tile_cell(lua_State* L, DmGameSystemDDF__TileCell *msg);
static void lua_pushdm_game_system_ddf__tile_layer(lua_State* L, DmGameSystemDDF__TileLayer *msg);
static void lua_pushdm_game_system_ddf__tile_grid(lua_State* L, DmGameSystemDDF__TileGrid *msg);
static void lua_pushdm_game_system_ddf__set_tile(lua_State* L, DmGameSystemDDF__SetTile *msg);
static void lua_pushdm_game_system_ddf__set_constant_tile_map(lua_State* L, DmGameSystemDDF__SetConstantTileMap *msg);
static void lua_pushdm_game_system_ddf__reset_constant_tile_map(lua_State* L, DmGameSystemDDF__ResetConstantTileMap *msg);
static void lua_pushdm_game_system_ddf__atlas_image(lua_State* L, DmGameSystemDDF__AtlasImage *msg);
static void lua_pushdm_game_system_ddf__atlas_animation(lua_State* L, DmGameSystemDDF__AtlasAnimation *msg);
static void lua_pushdm_game_system_ddf__atlas(lua_State* L, DmGameSystemDDF__Atlas *msg);
static void lua_pushdm_buffer_ddf__stream_desc(lua_State* L, DmBufferDDF__StreamDesc *msg);
static void lua_pushdm_buffer_ddf__buffer_desc(lua_State* L, DmBufferDDF__BufferDesc *msg);
static void lua_pushdm_sound_ddf__sound_desc(lua_State* L, DmSoundDDF__SoundDesc *msg);
static void lua_pushdm_gamesys_ddf__camera_desc(lua_State* L, DmGamesysDDF__CameraDesc *msg);
static void lua_pushdm_gamesys_ddf__set_camera(lua_State* L, DmGamesysDDF__SetCamera *msg);
static void lua_pushdm_gamesys_ddf__acquire_camera_focus(lua_State* L, DmGamesysDDF__AcquireCameraFocus *msg);
static void lua_pushdm_gamesys_ddf__release_camera_focus(lua_State* L, DmGamesysDDF__ReleaseCameraFocus *msg);
static void lua_pushdm_game_system_ddf__sprite_desc(lua_State* L, DmGameSystemDDF__SpriteDesc *msg);
static void lua_pushdm_game_system_ddf__play_animation(lua_State* L, DmGameSystemDDF__PlayAnimation *msg);
static void lua_pushdm_game_system_ddf__animation_done(lua_State* L, DmGameSystemDDF__AnimationDone *msg);
static void lua_pushdm_game_system_ddf__set_flip_horizontal(lua_State* L, DmGameSystemDDF__SetFlipHorizontal *msg);
static void lua_pushdm_game_system_ddf__set_flip_vertical(lua_State* L, DmGameSystemDDF__SetFlipVertical *msg);
static void lua_pushdm_game_system_ddf__texture_set_animation(lua_State* L, DmGameSystemDDF__TextureSetAnimation *msg);
static void lua_pushdm_game_system_ddf__sprite_geometry(lua_State* L, DmGameSystemDDF__SpriteGeometry *msg);
static void lua_pushdm_game_system_ddf__texture_set(lua_State* L, DmGameSystemDDF__TextureSet *msg);
static void lua_pushdm_physics_ddf__convex_shape(lua_State* L, DmPhysicsDDF__ConvexShape *msg);
static void lua_pushdm_physics_ddf__collision_shape(lua_State* L, DmPhysicsDDF__CollisionShape *msg);
static void lua_pushdm_physics_ddf__collision_shape__shape(lua_State* L, DmPhysicsDDF__CollisionShape__Shape *msg);
static void lua_pushdm_physics_ddf__collision_object_desc(lua_State* L, DmPhysicsDDF__CollisionObjectDesc *msg);
static void lua_pushdm_physics_ddf__apply_force(lua_State* L, DmPhysicsDDF__ApplyForce *msg);
static void lua_pushdm_physics_ddf__collision_response(lua_State* L, DmPhysicsDDF__CollisionResponse *msg);
static void lua_pushdm_physics_ddf__contact_point_response(lua_State* L, DmPhysicsDDF__ContactPointResponse *msg);
static void lua_pushdm_physics_ddf__trigger_response(lua_State* L, DmPhysicsDDF__TriggerResponse *msg);
static void lua_pushdm_physics_ddf__request_ray_cast(lua_State* L, DmPhysicsDDF__RequestRayCast *msg);
static void lua_pushdm_physics_ddf__ray_cast_response(lua_State* L, DmPhysicsDDF__RayCastResponse *msg);
static void lua_pushdm_physics_ddf__ray_cast_missed(lua_State* L, DmPhysicsDDF__RayCastMissed *msg);
static void lua_pushdm_physics_ddf__request_velocity(lua_State* L, DmPhysicsDDF__RequestVelocity *msg);
static void lua_pushdm_physics_ddf__velocity_response(lua_State* L, DmPhysicsDDF__VelocityResponse *msg);
static void lua_pushdm_physics_ddf__set_grid_shape_hull(lua_State* L, DmPhysicsDDF__SetGridShapeHull *msg);
static void lua_pushdm_physics_ddf__enable_grid_shape_layer(lua_State* L, DmPhysicsDDF__EnableGridShapeLayer *msg);
static void lua_pushdm_game_system_ddf__factory_desc(lua_State* L, DmGameSystemDDF__FactoryDesc *msg);
static void lua_pushdm_game_system_ddf__collection_factory_desc(lua_State* L, DmGameSystemDDF__CollectionFactoryDesc *msg);
static void lua_pushdm_game_system_ddf__create(lua_State* L, DmGameSystemDDF__Create *msg);
static void lua_pushdm_game_system_ddf__collection_proxy_desc(lua_State* L, DmGameSystemDDF__CollectionProxyDesc *msg);
static void lua_pushdm_game_system_ddf__set_time_step(lua_State* L, DmGameSystemDDF__SetTimeStep *msg);
static void lua_pushdm_game_system_ddf__light_desc(lua_State* L, DmGameSystemDDF__LightDesc *msg);
static void lua_pushdm_game_system_ddf__set_light(lua_State* L, DmGameSystemDDF__SetLight *msg);
static void lua_pushdm_game_system_ddf__set_view_projection(lua_State* L, DmGameSystemDDF__SetViewProjection *msg);
static void lua_pushdm_game_system_ddf__play_sound(lua_State* L, DmGameSystemDDF__PlaySound *msg);
static void lua_pushdm_game_system_ddf__stop_sound(lua_State* L, DmGameSystemDDF__StopSound *msg);
static void lua_pushdm_game_system_ddf__pause_sound(lua_State* L, DmGameSystemDDF__PauseSound *msg);
static void lua_pushdm_game_system_ddf__sound_done(lua_State* L, DmGameSystemDDF__SoundDone *msg);
static void lua_pushdm_game_system_ddf__set_gain(lua_State* L, DmGameSystemDDF__SetGain *msg);
static void lua_pushdm_game_system_ddf__set_pan(lua_State* L, DmGameSystemDDF__SetPan *msg);
static void lua_pushdm_game_system_ddf__set_speed(lua_State* L, DmGameSystemDDF__SetSpeed *msg);
static void lua_pushdm_game_system_ddf__play_particle_fx(lua_State* L, DmGameSystemDDF__PlayParticleFX *msg);
static void lua_pushdm_game_system_ddf__stop_particle_fx(lua_State* L, DmGameSystemDDF__StopParticleFX *msg);
static void lua_pushdm_game_system_ddf__set_constant_particle_fx(lua_State* L, DmGameSystemDDF__SetConstantParticleFX *msg);
static void lua_pushdm_game_system_ddf__reset_constant_particle_fx(lua_State* L, DmGameSystemDDF__ResetConstantParticleFX *msg);
static void lua_pushdm_game_system_ddf__set_constant(lua_State* L, DmGameSystemDDF__SetConstant *msg);
static void lua_pushdm_game_system_ddf__reset_constant(lua_State* L, DmGameSystemDDF__ResetConstant *msg);
static void lua_pushdm_game_system_ddf__set_scale(lua_State* L, DmGameSystemDDF__SetScale *msg);
static void lua_pushdm_gui_ddf__node_desc(lua_State* L, DmGuiDDF__NodeDesc *msg);
static void lua_pushdm_gui_ddf__scene_desc(lua_State* L, DmGuiDDF__SceneDesc *msg);
static void lua_pushdm_gui_ddf__scene_desc__font_desc(lua_State* L, DmGuiDDF__SceneDesc__FontDesc *msg);
static void lua_pushdm_gui_ddf__scene_desc__texture_desc(lua_State* L, DmGuiDDF__SceneDesc__TextureDesc *msg);
static void lua_pushdm_gui_ddf__scene_desc__layer_desc(lua_State* L, DmGuiDDF__SceneDesc__LayerDesc *msg);
static void lua_pushdm_gui_ddf__scene_desc__layout_desc(lua_State* L, DmGuiDDF__SceneDesc__LayoutDesc *msg);
static void lua_pushdm_gui_ddf__scene_desc__spine_scene_desc(lua_State* L, DmGuiDDF__SceneDesc__SpineSceneDesc *msg);
static void lua_pushdm_gui_ddf__scene_desc__resource_desc(lua_State* L, DmGuiDDF__SceneDesc__ResourceDesc *msg);
static void lua_pushdm_gui_ddf__scene_desc__particle_fxdesc(lua_State* L, DmGuiDDF__SceneDesc__ParticleFXDesc *msg);
static void lua_pushdm_gui_ddf__layout_changed(lua_State* L, DmGuiDDF__LayoutChanged *msg);
static void lua_pushdm_live_update_ddf__hash_digest(lua_State* L, DmLiveUpdateDDF__HashDigest *msg);
static void lua_pushdm_live_update_ddf__manifest_header(lua_State* L, DmLiveUpdateDDF__ManifestHeader *msg);
static void lua_pushdm_live_update_ddf__resource_entry(lua_State* L, DmLiveUpdateDDF__ResourceEntry *msg);
static void lua_pushdm_live_update_ddf__manifest_data(lua_State* L, DmLiveUpdateDDF__ManifestData *msg);
static void lua_pushdm_live_update_ddf__manifest_file(lua_State* L, DmLiveUpdateDDF__ManifestFile *msg);
static void lua_pushdm_resource_ddf__reload(lua_State* L, DmResourceDDF__Reload *msg);
static void lua_pushdm_graphics__cubemap(lua_State* L, DmGraphics__Cubemap *msg);
static void lua_pushdm_graphics__texture_image(lua_State* L, DmGraphics__TextureImage *msg);
static void lua_pushdm_graphics__texture_image__image(lua_State* L, DmGraphics__TextureImage__Image *msg);
static void lua_pushdm_graphics__texture_format_alternative(lua_State* L, DmGraphics__TextureFormatAlternative *msg);
static void lua_pushdm_graphics__path_settings(lua_State* L, DmGraphics__PathSettings *msg);
static void lua_pushdm_graphics__platform_profile(lua_State* L, DmGraphics__PlatformProfile *msg);
static void lua_pushdm_graphics__texture_profile(lua_State* L, DmGraphics__TextureProfile *msg);
static void lua_pushdm_graphics__texture_profiles(lua_State* L, DmGraphics__TextureProfiles *msg);
static void lua_pushdm_graphics__shader_desc(lua_State* L, DmGraphics__ShaderDesc *msg);
static void lua_pushdm_graphics__shader_desc__resource_binding(lua_State* L, DmGraphics__ShaderDesc__ResourceBinding *msg);
static void lua_pushdm_graphics__shader_desc__shader(lua_State* L, DmGraphics__ShaderDesc__Shader *msg);
static void lua_pushdm_properties_ddf__property_declaration_entry(lua_State* L, DmPropertiesDDF__PropertyDeclarationEntry *msg);
static void lua_pushdm_properties_ddf__property_declarations(lua_State* L, DmPropertiesDDF__PropertyDeclarations *msg);
static void lua_pushdm_game_object_ddf__property_desc(lua_State* L, DmGameObjectDDF__PropertyDesc *msg);
static void lua_pushdm_game_object_ddf__component_desc(lua_State* L, DmGameObjectDDF__ComponentDesc *msg);
static void lua_pushdm_game_object_ddf__embedded_component_desc(lua_State* L, DmGameObjectDDF__EmbeddedComponentDesc *msg);
static void lua_pushdm_game_object_ddf__prototype_desc(lua_State* L, DmGameObjectDDF__PrototypeDesc *msg);
static void lua_pushdm_game_object_ddf__component_property_desc(lua_State* L, DmGameObjectDDF__ComponentPropertyDesc *msg);
static void lua_pushdm_game_object_ddf__componen_type_desc(lua_State* L, DmGameObjectDDF__ComponenTypeDesc *msg);
static void lua_pushdm_game_object_ddf__instance_desc(lua_State* L, DmGameObjectDDF__InstanceDesc *msg);
static void lua_pushdm_game_object_ddf__embedded_instance_desc(lua_State* L, DmGameObjectDDF__EmbeddedInstanceDesc *msg);
static void lua_pushdm_game_object_ddf__instance_property_desc(lua_State* L, DmGameObjectDDF__InstancePropertyDesc *msg);
static void lua_pushdm_game_object_ddf__collection_instance_desc(lua_State* L, DmGameObjectDDF__CollectionInstanceDesc *msg);
static void lua_pushdm_game_object_ddf__collection_desc(lua_State* L, DmGameObjectDDF__CollectionDesc *msg);
static void lua_pushdm_game_object_ddf__acquire_input_focus(lua_State* L, DmGameObjectDDF__AcquireInputFocus *msg);
static void lua_pushdm_game_object_ddf__release_input_focus(lua_State* L, DmGameObjectDDF__ReleaseInputFocus *msg);
static void lua_pushdm_game_object_ddf__request_transform(lua_State* L, DmGameObjectDDF__RequestTransform *msg);
static void lua_pushdm_game_object_ddf__transform_response(lua_State* L, DmGameObjectDDF__TransformResponse *msg);
static void lua_pushdm_game_object_ddf__set_parent(lua_State* L, DmGameObjectDDF__SetParent *msg);
static void lua_pushdm_game_object_ddf__enable(lua_State* L, DmGameObjectDDF__Enable *msg);
static void lua_pushdm_game_object_ddf__disable(lua_State* L, DmGameObjectDDF__Disable *msg);
static void lua_pushdm_game_object_ddf__script_message(lua_State* L, DmGameObjectDDF__ScriptMessage *msg);
static void lua_pushdm_lua_ddf__lua_module(lua_State* L, DmLuaDDF__LuaModule *msg);
static void lua_pushdm_engine_ddf__hide_app(lua_State* L, DmEngineDDF__HideApp *msg);
static void lua_pushdm_engine_ddf__run_script(lua_State* L, DmEngineDDF__RunScript *msg);
static void lua_pushdm_particle_ddf__spline_point(lua_State* L, DmParticleDDF__SplinePoint *msg);
static void lua_pushdm_particle_ddf__modifier(lua_State* L, DmParticleDDF__Modifier *msg);
static void lua_pushdm_particle_ddf__modifier__property(lua_State* L, DmParticleDDF__Modifier__Property *msg);
static void lua_pushdm_particle_ddf__emitter(lua_State* L, DmParticleDDF__Emitter *msg);
static void lua_pushdm_particle_ddf__emitter__property(lua_State* L, DmParticleDDF__Emitter__Property *msg);
static void lua_pushdm_particle_ddf__emitter__particle_property(lua_State* L, DmParticleDDF__Emitter__ParticleProperty *msg);
static void lua_pushdm_particle_ddf__particle_fx(lua_State* L, DmParticleDDF__ParticleFX *msg);

static void lua_pushProtobufCBinaryData(lua_State* L, ProtobufCBinaryData binarydata)
{
    lua_pushlstring(L, (const char*)binarydata.data, binarydata.len);
}

static bool has_ProtobufCBinaryData(ProtobufCBinaryData binarydata) { return binarydata.data != 0; }
static bool has_string(char* s) { return s != 0; }
static bool has_dm_math__point3(DmMath__Point3 *p) { return p != 0; }
static bool has_dm_math__vector3(DmMath__Vector3 *p) { return p != 0; }
static bool has_dm_math__vector4(DmMath__Vector4 *p) { return p != 0; }
static bool has_dm_math__quat(DmMath__Quat *p) { return p != 0; }
static bool has_dm_math__transform(DmMath__Transform *p) { return p != 0; }
static bool has_dm_math__matrix4(DmMath__Matrix4 *p) { return p != 0; }
static bool has_dm_input_ddf__gamepad_modifier_t(DmInputDDF__GamepadModifierT *p) { return p != 0; }
static bool has_dm_input_ddf__gamepad_map_entry(DmInputDDF__GamepadMapEntry *p) { return p != 0; }
static bool has_dm_input_ddf__gamepad_map(DmInputDDF__GamepadMap *p) { return p != 0; }
static bool has_dm_input_ddf__gamepad_maps(DmInputDDF__GamepadMaps *p) { return p != 0; }
static bool has_dm_input_ddf__key_trigger(DmInputDDF__KeyTrigger *p) { return p != 0; }
static bool has_dm_input_ddf__mouse_trigger(DmInputDDF__MouseTrigger *p) { return p != 0; }
static bool has_dm_input_ddf__gamepad_trigger(DmInputDDF__GamepadTrigger *p) { return p != 0; }
static bool has_dm_input_ddf__touch_trigger(DmInputDDF__TouchTrigger *p) { return p != 0; }
static bool has_dm_input_ddf__text_trigger(DmInputDDF__TextTrigger *p) { return p != 0; }
static bool has_dm_input_ddf__input_binding(DmInputDDF__InputBinding *p) { return p != 0; }
static bool has_dm_render_ddf__render_prototype_desc(DmRenderDDF__RenderPrototypeDesc *p) { return p != 0; }
static bool has_dm_render_ddf__render_prototype_desc__material_desc(DmRenderDDF__RenderPrototypeDesc__MaterialDesc *p) { return p != 0; }
static bool has_dm_render_ddf__draw_text(DmRenderDDF__DrawText *p) { return p != 0; }
static bool has_dm_render_ddf__draw_debug_text(DmRenderDDF__DrawDebugText *p) { return p != 0; }
static bool has_dm_render_ddf__draw_line(DmRenderDDF__DrawLine *p) { return p != 0; }
static bool has_dm_render_ddf__window_resized(DmRenderDDF__WindowResized *p) { return p != 0; }
static bool has_dm_render_ddf__resize(DmRenderDDF__Resize *p) { return p != 0; }
static bool has_dm_render_ddf__clear_color(DmRenderDDF__ClearColor *p) { return p != 0; }
static bool has_dm_render_ddf__display_profile_qualifier(DmRenderDDF__DisplayProfileQualifier *p) { return p != 0; }
static bool has_dm_render_ddf__display_profile(DmRenderDDF__DisplayProfile *p) { return p != 0; }
static bool has_dm_render_ddf__display_profiles(DmRenderDDF__DisplayProfiles *p) { return p != 0; }
static bool has_dm_render_ddf__font_desc(DmRenderDDF__FontDesc *p) { return p != 0; }
static bool has_dm_render_ddf__font_map(DmRenderDDF__FontMap *p) { return p != 0; }
static bool has_dm_render_ddf__font_map__glyph(DmRenderDDF__FontMap__Glyph *p) { return p != 0; }
static bool has_dm_render_ddf__material_desc(DmRenderDDF__MaterialDesc *p) { return p != 0; }
static bool has_dm_render_ddf__material_desc__constant(DmRenderDDF__MaterialDesc__Constant *p) { return p != 0; }
static bool has_dm_render_ddf__material_desc__sampler(DmRenderDDF__MaterialDesc__Sampler *p) { return p != 0; }
static bool has_dm_script_ddf__lua_ref(DmScriptDDF__LuaRef *p) { return p != 0; }
static bool has_dm_system_ddf__exit(DmSystemDDF__Exit *p) { return p != 0; }
static bool has_dm_system_ddf__toggle_profile(DmSystemDDF__ToggleProfile *p) { return p != 0; }
static bool has_dm_system_ddf__toggle_physics_debug(DmSystemDDF__TogglePhysicsDebug *p) { return p != 0; }
static bool has_dm_system_ddf__start_record(DmSystemDDF__StartRecord *p) { return p != 0; }
static bool has_dm_system_ddf__stop_record(DmSystemDDF__StopRecord *p) { return p != 0; }
static bool has_dm_system_ddf__reboot(DmSystemDDF__Reboot *p) { return p != 0; }
static bool has_dm_system_ddf__set_vsync(DmSystemDDF__SetVsync *p) { return p != 0; }
static bool has_dm_system_ddf__set_update_frequency(DmSystemDDF__SetUpdateFrequency *p) { return p != 0; }
static bool has_dm_script_doc__parameter(DmScriptDoc__Parameter *p) { return p != 0; }
static bool has_dm_script_doc__member(DmScriptDoc__Member *p) { return p != 0; }
static bool has_dm_script_doc__return_value(DmScriptDoc__ReturnValue *p) { return p != 0; }
static bool has_dm_script_doc__element(DmScriptDoc__Element *p) { return p != 0; }
static bool has_dm_script_doc__info(DmScriptDoc__Info *p) { return p != 0; }
static bool has_dm_script_doc__document(DmScriptDoc__Document *p) { return p != 0; }
static bool has_dm_http_ddf__stop_http(DmHttpDDF__StopHttp *p) { return p != 0; }
static bool has_dm_http_ddf__http_request(DmHttpDDF__HttpRequest *p) { return p != 0; }
static bool has_dm_http_ddf__http_response(DmHttpDDF__HttpResponse *p) { return p != 0; }
static bool has_dm_lua_ddf__lua_source(DmLuaDDF__LuaSource *p) { return p != 0; }
static bool has_dm_rig_ddf__bone(DmRigDDF__Bone *p) { return p != 0; }
static bool has_dm_rig_ddf__ik(DmRigDDF__IK *p) { return p != 0; }
static bool has_dm_rig_ddf__skeleton(DmRigDDF__Skeleton *p) { return p != 0; }
static bool has_dm_rig_ddf__animation_track(DmRigDDF__AnimationTrack *p) { return p != 0; }
static bool has_dm_rig_ddf__event_key(DmRigDDF__EventKey *p) { return p != 0; }
static bool has_dm_rig_ddf__event_track(DmRigDDF__EventTrack *p) { return p != 0; }
static bool has_dm_rig_ddf__rig_animation(DmRigDDF__RigAnimation *p) { return p != 0; }
static bool has_dm_rig_ddf__animation_set(DmRigDDF__AnimationSet *p) { return p != 0; }
static bool has_dm_rig_ddf__animation_instance_desc(DmRigDDF__AnimationInstanceDesc *p) { return p != 0; }
static bool has_dm_rig_ddf__animation_set_desc(DmRigDDF__AnimationSetDesc *p) { return p != 0; }
static bool has_dm_rig_ddf__mesh(DmRigDDF__Mesh *p) { return p != 0; }
static bool has_dm_rig_ddf__model(DmRigDDF__Model *p) { return p != 0; }
static bool has_dm_rig_ddf__mesh_set(DmRigDDF__MeshSet *p) { return p != 0; }
static bool has_dm_rig_ddf__rig_scene(DmRigDDF__RigScene *p) { return p != 0; }
static bool has_dm_model_ddf__model_desc(DmModelDDF__ModelDesc *p) { return p != 0; }
static bool has_dm_model_ddf__model(DmModelDDF__Model *p) { return p != 0; }
static bool has_dm_model_ddf__reset_constant(DmModelDDF__ResetConstant *p) { return p != 0; }
static bool has_dm_model_ddf__set_texture(DmModelDDF__SetTexture *p) { return p != 0; }
static bool has_dm_model_ddf__model_play_animation(DmModelDDF__ModelPlayAnimation *p) { return p != 0; }
static bool has_dm_model_ddf__model_cancel_animation(DmModelDDF__ModelCancelAnimation *p) { return p != 0; }
static bool has_dm_model_ddf__model_animation_done(DmModelDDF__ModelAnimationDone *p) { return p != 0; }
static bool has_dm_mesh_ddf__mesh_desc(DmMeshDDF__MeshDesc *p) { return p != 0; }
static bool has_dm_game_system_ddf__label_desc(DmGameSystemDDF__LabelDesc *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_text(DmGameSystemDDF__SetText *p) { return p != 0; }
static bool has_dm_game_system_ddf__convex_hull(DmGameSystemDDF__ConvexHull *p) { return p != 0; }
static bool has_dm_game_system_ddf__cue(DmGameSystemDDF__Cue *p) { return p != 0; }
static bool has_dm_game_system_ddf__animation(DmGameSystemDDF__Animation *p) { return p != 0; }
static bool has_dm_game_system_ddf__tile_set(DmGameSystemDDF__TileSet *p) { return p != 0; }
static bool has_dm_game_system_ddf__tile_cell(DmGameSystemDDF__TileCell *p) { return p != 0; }
static bool has_dm_game_system_ddf__tile_layer(DmGameSystemDDF__TileLayer *p) { return p != 0; }
static bool has_dm_game_system_ddf__tile_grid(DmGameSystemDDF__TileGrid *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_tile(DmGameSystemDDF__SetTile *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_constant_tile_map(DmGameSystemDDF__SetConstantTileMap *p) { return p != 0; }
static bool has_dm_game_system_ddf__reset_constant_tile_map(DmGameSystemDDF__ResetConstantTileMap *p) { return p != 0; }
static bool has_dm_game_system_ddf__atlas_image(DmGameSystemDDF__AtlasImage *p) { return p != 0; }
static bool has_dm_game_system_ddf__atlas_animation(DmGameSystemDDF__AtlasAnimation *p) { return p != 0; }
static bool has_dm_game_system_ddf__atlas(DmGameSystemDDF__Atlas *p) { return p != 0; }
static bool has_dm_buffer_ddf__stream_desc(DmBufferDDF__StreamDesc *p) { return p != 0; }
static bool has_dm_buffer_ddf__buffer_desc(DmBufferDDF__BufferDesc *p) { return p != 0; }
static bool has_dm_sound_ddf__sound_desc(DmSoundDDF__SoundDesc *p) { return p != 0; }
static bool has_dm_gamesys_ddf__camera_desc(DmGamesysDDF__CameraDesc *p) { return p != 0; }
static bool has_dm_gamesys_ddf__set_camera(DmGamesysDDF__SetCamera *p) { return p != 0; }
static bool has_dm_gamesys_ddf__acquire_camera_focus(DmGamesysDDF__AcquireCameraFocus *p) { return p != 0; }
static bool has_dm_gamesys_ddf__release_camera_focus(DmGamesysDDF__ReleaseCameraFocus *p) { return p != 0; }
static bool has_dm_game_system_ddf__sprite_desc(DmGameSystemDDF__SpriteDesc *p) { return p != 0; }
static bool has_dm_game_system_ddf__play_animation(DmGameSystemDDF__PlayAnimation *p) { return p != 0; }
static bool has_dm_game_system_ddf__animation_done(DmGameSystemDDF__AnimationDone *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_flip_horizontal(DmGameSystemDDF__SetFlipHorizontal *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_flip_vertical(DmGameSystemDDF__SetFlipVertical *p) { return p != 0; }
static bool has_dm_game_system_ddf__texture_set_animation(DmGameSystemDDF__TextureSetAnimation *p) { return p != 0; }
static bool has_dm_game_system_ddf__sprite_geometry(DmGameSystemDDF__SpriteGeometry *p) { return p != 0; }
static bool has_dm_game_system_ddf__texture_set(DmGameSystemDDF__TextureSet *p) { return p != 0; }
static bool has_dm_physics_ddf__convex_shape(DmPhysicsDDF__ConvexShape *p) { return p != 0; }
static bool has_dm_physics_ddf__collision_shape(DmPhysicsDDF__CollisionShape *p) { return p != 0; }
static bool has_dm_physics_ddf__collision_shape__shape(DmPhysicsDDF__CollisionShape__Shape *p) { return p != 0; }
static bool has_dm_physics_ddf__collision_object_desc(DmPhysicsDDF__CollisionObjectDesc *p) { return p != 0; }
static bool has_dm_physics_ddf__apply_force(DmPhysicsDDF__ApplyForce *p) { return p != 0; }
static bool has_dm_physics_ddf__collision_response(DmPhysicsDDF__CollisionResponse *p) { return p != 0; }
static bool has_dm_physics_ddf__contact_point_response(DmPhysicsDDF__ContactPointResponse *p) { return p != 0; }
static bool has_dm_physics_ddf__trigger_response(DmPhysicsDDF__TriggerResponse *p) { return p != 0; }
static bool has_dm_physics_ddf__request_ray_cast(DmPhysicsDDF__RequestRayCast *p) { return p != 0; }
static bool has_dm_physics_ddf__ray_cast_response(DmPhysicsDDF__RayCastResponse *p) { return p != 0; }
static bool has_dm_physics_ddf__ray_cast_missed(DmPhysicsDDF__RayCastMissed *p) { return p != 0; }
static bool has_dm_physics_ddf__request_velocity(DmPhysicsDDF__RequestVelocity *p) { return p != 0; }
static bool has_dm_physics_ddf__velocity_response(DmPhysicsDDF__VelocityResponse *p) { return p != 0; }
static bool has_dm_physics_ddf__set_grid_shape_hull(DmPhysicsDDF__SetGridShapeHull *p) { return p != 0; }
static bool has_dm_physics_ddf__enable_grid_shape_layer(DmPhysicsDDF__EnableGridShapeLayer *p) { return p != 0; }
static bool has_dm_game_system_ddf__factory_desc(DmGameSystemDDF__FactoryDesc *p) { return p != 0; }
static bool has_dm_game_system_ddf__collection_factory_desc(DmGameSystemDDF__CollectionFactoryDesc *p) { return p != 0; }
static bool has_dm_game_system_ddf__create(DmGameSystemDDF__Create *p) { return p != 0; }
static bool has_dm_game_system_ddf__collection_proxy_desc(DmGameSystemDDF__CollectionProxyDesc *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_time_step(DmGameSystemDDF__SetTimeStep *p) { return p != 0; }
static bool has_dm_game_system_ddf__light_desc(DmGameSystemDDF__LightDesc *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_light(DmGameSystemDDF__SetLight *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_view_projection(DmGameSystemDDF__SetViewProjection *p) { return p != 0; }
static bool has_dm_game_system_ddf__play_sound(DmGameSystemDDF__PlaySound *p) { return p != 0; }
static bool has_dm_game_system_ddf__stop_sound(DmGameSystemDDF__StopSound *p) { return p != 0; }
static bool has_dm_game_system_ddf__pause_sound(DmGameSystemDDF__PauseSound *p) { return p != 0; }
static bool has_dm_game_system_ddf__sound_done(DmGameSystemDDF__SoundDone *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_gain(DmGameSystemDDF__SetGain *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_pan(DmGameSystemDDF__SetPan *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_speed(DmGameSystemDDF__SetSpeed *p) { return p != 0; }
static bool has_dm_game_system_ddf__play_particle_fx(DmGameSystemDDF__PlayParticleFX *p) { return p != 0; }
static bool has_dm_game_system_ddf__stop_particle_fx(DmGameSystemDDF__StopParticleFX *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_constant_particle_fx(DmGameSystemDDF__SetConstantParticleFX *p) { return p != 0; }
static bool has_dm_game_system_ddf__reset_constant_particle_fx(DmGameSystemDDF__ResetConstantParticleFX *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_constant(DmGameSystemDDF__SetConstant *p) { return p != 0; }
static bool has_dm_game_system_ddf__reset_constant(DmGameSystemDDF__ResetConstant *p) { return p != 0; }
static bool has_dm_game_system_ddf__set_scale(DmGameSystemDDF__SetScale *p) { return p != 0; }
static bool has_dm_gui_ddf__node_desc(DmGuiDDF__NodeDesc *p) { return p != 0; }
static bool has_dm_gui_ddf__scene_desc(DmGuiDDF__SceneDesc *p) { return p != 0; }
static bool has_dm_gui_ddf__scene_desc__font_desc(DmGuiDDF__SceneDesc__FontDesc *p) { return p != 0; }
static bool has_dm_gui_ddf__scene_desc__texture_desc(DmGuiDDF__SceneDesc__TextureDesc *p) { return p != 0; }
static bool has_dm_gui_ddf__scene_desc__layer_desc(DmGuiDDF__SceneDesc__LayerDesc *p) { return p != 0; }
static bool has_dm_gui_ddf__scene_desc__layout_desc(DmGuiDDF__SceneDesc__LayoutDesc *p) { return p != 0; }
static bool has_dm_gui_ddf__scene_desc__spine_scene_desc(DmGuiDDF__SceneDesc__SpineSceneDesc *p) { return p != 0; }
static bool has_dm_gui_ddf__scene_desc__resource_desc(DmGuiDDF__SceneDesc__ResourceDesc *p) { return p != 0; }
static bool has_dm_gui_ddf__scene_desc__particle_fxdesc(DmGuiDDF__SceneDesc__ParticleFXDesc *p) { return p != 0; }
static bool has_dm_gui_ddf__layout_changed(DmGuiDDF__LayoutChanged *p) { return p != 0; }
static bool has_dm_live_update_ddf__hash_digest(DmLiveUpdateDDF__HashDigest *p) { return p != 0; }
static bool has_dm_live_update_ddf__manifest_header(DmLiveUpdateDDF__ManifestHeader *p) { return p != 0; }
static bool has_dm_live_update_ddf__resource_entry(DmLiveUpdateDDF__ResourceEntry *p) { return p != 0; }
static bool has_dm_live_update_ddf__manifest_data(DmLiveUpdateDDF__ManifestData *p) { return p != 0; }
static bool has_dm_live_update_ddf__manifest_file(DmLiveUpdateDDF__ManifestFile *p) { return p != 0; }
static bool has_dm_resource_ddf__reload(DmResourceDDF__Reload *p) { return p != 0; }
static bool has_dm_graphics__cubemap(DmGraphics__Cubemap *p) { return p != 0; }
static bool has_dm_graphics__texture_image(DmGraphics__TextureImage *p) { return p != 0; }
static bool has_dm_graphics__texture_image__image(DmGraphics__TextureImage__Image *p) { return p != 0; }
static bool has_dm_graphics__texture_format_alternative(DmGraphics__TextureFormatAlternative *p) { return p != 0; }
static bool has_dm_graphics__path_settings(DmGraphics__PathSettings *p) { return p != 0; }
static bool has_dm_graphics__platform_profile(DmGraphics__PlatformProfile *p) { return p != 0; }
static bool has_dm_graphics__texture_profile(DmGraphics__TextureProfile *p) { return p != 0; }
static bool has_dm_graphics__texture_profiles(DmGraphics__TextureProfiles *p) { return p != 0; }
static bool has_dm_graphics__shader_desc(DmGraphics__ShaderDesc *p) { return p != 0; }
static bool has_dm_graphics__shader_desc__resource_binding(DmGraphics__ShaderDesc__ResourceBinding *p) { return p != 0; }
static bool has_dm_graphics__shader_desc__shader(DmGraphics__ShaderDesc__Shader *p) { return p != 0; }
static bool has_dm_properties_ddf__property_declaration_entry(DmPropertiesDDF__PropertyDeclarationEntry *p) { return p != 0; }
static bool has_dm_properties_ddf__property_declarations(DmPropertiesDDF__PropertyDeclarations *p) { return p != 0; }
static bool has_dm_game_object_ddf__property_desc(DmGameObjectDDF__PropertyDesc *p) { return p != 0; }
static bool has_dm_game_object_ddf__component_desc(DmGameObjectDDF__ComponentDesc *p) { return p != 0; }
static bool has_dm_game_object_ddf__embedded_component_desc(DmGameObjectDDF__EmbeddedComponentDesc *p) { return p != 0; }
static bool has_dm_game_object_ddf__prototype_desc(DmGameObjectDDF__PrototypeDesc *p) { return p != 0; }
static bool has_dm_game_object_ddf__component_property_desc(DmGameObjectDDF__ComponentPropertyDesc *p) { return p != 0; }
static bool has_dm_game_object_ddf__componen_type_desc(DmGameObjectDDF__ComponenTypeDesc *p) { return p != 0; }
static bool has_dm_game_object_ddf__instance_desc(DmGameObjectDDF__InstanceDesc *p) { return p != 0; }
static bool has_dm_game_object_ddf__embedded_instance_desc(DmGameObjectDDF__EmbeddedInstanceDesc *p) { return p != 0; }
static bool has_dm_game_object_ddf__instance_property_desc(DmGameObjectDDF__InstancePropertyDesc *p) { return p != 0; }
static bool has_dm_game_object_ddf__collection_instance_desc(DmGameObjectDDF__CollectionInstanceDesc *p) { return p != 0; }
static bool has_dm_game_object_ddf__collection_desc(DmGameObjectDDF__CollectionDesc *p) { return p != 0; }
static bool has_dm_game_object_ddf__acquire_input_focus(DmGameObjectDDF__AcquireInputFocus *p) { return p != 0; }
static bool has_dm_game_object_ddf__release_input_focus(DmGameObjectDDF__ReleaseInputFocus *p) { return p != 0; }
static bool has_dm_game_object_ddf__request_transform(DmGameObjectDDF__RequestTransform *p) { return p != 0; }
static bool has_dm_game_object_ddf__transform_response(DmGameObjectDDF__TransformResponse *p) { return p != 0; }
static bool has_dm_game_object_ddf__set_parent(DmGameObjectDDF__SetParent *p) { return p != 0; }
static bool has_dm_game_object_ddf__enable(DmGameObjectDDF__Enable *p) { return p != 0; }
static bool has_dm_game_object_ddf__disable(DmGameObjectDDF__Disable *p) { return p != 0; }
static bool has_dm_game_object_ddf__script_message(DmGameObjectDDF__ScriptMessage *p) { return p != 0; }
static bool has_dm_lua_ddf__lua_module(DmLuaDDF__LuaModule *p) { return p != 0; }
static bool has_dm_engine_ddf__hide_app(DmEngineDDF__HideApp *p) { return p != 0; }
static bool has_dm_engine_ddf__run_script(DmEngineDDF__RunScript *p) { return p != 0; }
static bool has_dm_particle_ddf__spline_point(DmParticleDDF__SplinePoint *p) { return p != 0; }
static bool has_dm_particle_ddf__modifier(DmParticleDDF__Modifier *p) { return p != 0; }
static bool has_dm_particle_ddf__modifier__property(DmParticleDDF__Modifier__Property *p) { return p != 0; }
static bool has_dm_particle_ddf__emitter(DmParticleDDF__Emitter *p) { return p != 0; }
static bool has_dm_particle_ddf__emitter__property(DmParticleDDF__Emitter__Property *p) { return p != 0; }
static bool has_dm_particle_ddf__emitter__particle_property(DmParticleDDF__Emitter__ParticleProperty *p) { return p != 0; }
static bool has_dm_particle_ddf__particle_fx(DmParticleDDF__ParticleFX *p) { return p != 0; }

static void lua_pushdm_math__point3(lua_State* L, DmMath__Point3 *msg)
{
    lua_newtable(L);

    // x
    if (msg->has_x)
    {
        lua_pushstring(L, "x");
        lua_pushnumber(L, (float)(msg->x));
        lua_settable(L, -3);
    }

    // y
    if (msg->has_y)
    {
        lua_pushstring(L, "y");
        lua_pushnumber(L, (float)(msg->y));
        lua_settable(L, -3);
    }

    // z
    if (msg->has_z)
    {
        lua_pushstring(L, "z");
        lua_pushnumber(L, (float)(msg->z));
        lua_settable(L, -3);
    }

    // d
    if (msg->has_d)
    {
        lua_pushstring(L, "d");
        lua_pushnumber(L, (float)(msg->d));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_math__vector3(lua_State* L, DmMath__Vector3 *msg)
{
    lua_newtable(L);

    // x
    if (msg->has_x)
    {
        lua_pushstring(L, "x");
        lua_pushnumber(L, (float)(msg->x));
        lua_settable(L, -3);
    }

    // y
    if (msg->has_y)
    {
        lua_pushstring(L, "y");
        lua_pushnumber(L, (float)(msg->y));
        lua_settable(L, -3);
    }

    // z
    if (msg->has_z)
    {
        lua_pushstring(L, "z");
        lua_pushnumber(L, (float)(msg->z));
        lua_settable(L, -3);
    }

    // d
    if (msg->has_d)
    {
        lua_pushstring(L, "d");
        lua_pushnumber(L, (float)(msg->d));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_math__vector4(lua_State* L, DmMath__Vector4 *msg)
{
    lua_newtable(L);

    // x
    if (msg->has_x)
    {
        lua_pushstring(L, "x");
        lua_pushnumber(L, (float)(msg->x));
        lua_settable(L, -3);
    }

    // y
    if (msg->has_y)
    {
        lua_pushstring(L, "y");
        lua_pushnumber(L, (float)(msg->y));
        lua_settable(L, -3);
    }

    // z
    if (msg->has_z)
    {
        lua_pushstring(L, "z");
        lua_pushnumber(L, (float)(msg->z));
        lua_settable(L, -3);
    }

    // w
    if (msg->has_w)
    {
        lua_pushstring(L, "w");
        lua_pushnumber(L, (float)(msg->w));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_math__quat(lua_State* L, DmMath__Quat *msg)
{
    lua_newtable(L);

    // x
    if (msg->has_x)
    {
        lua_pushstring(L, "x");
        lua_pushnumber(L, (float)(msg->x));
        lua_settable(L, -3);
    }

    // y
    if (msg->has_y)
    {
        lua_pushstring(L, "y");
        lua_pushnumber(L, (float)(msg->y));
        lua_settable(L, -3);
    }

    // z
    if (msg->has_z)
    {
        lua_pushstring(L, "z");
        lua_pushnumber(L, (float)(msg->z));
        lua_settable(L, -3);
    }

    // w
    if (msg->has_w)
    {
        lua_pushstring(L, "w");
        lua_pushnumber(L, (float)(msg->w));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_math__transform(lua_State* L, DmMath__Transform *msg)
{
    lua_newtable(L);

    // rotation
    if (msg->rotation != 0)
    {
        lua_pushstring(L, "rotation");
        lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
        lua_settable(L, -3);
    }

    // translation
    if (msg->translation != 0)
    {
        lua_pushstring(L, "translation");
        lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->translation));
        lua_settable(L, -3);
    }

    // scale
    if (msg->scale != 0)
    {
        lua_pushstring(L, "scale");
        lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->scale));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_math__matrix4(lua_State* L, DmMath__Matrix4 *msg)
{
    lua_newtable(L);

    // m00
    if (msg->has_m00)
    {
        lua_pushstring(L, "m00");
        lua_pushnumber(L, (float)(msg->m00));
        lua_settable(L, -3);
    }

    // m01
    if (msg->has_m01)
    {
        lua_pushstring(L, "m01");
        lua_pushnumber(L, (float)(msg->m01));
        lua_settable(L, -3);
    }

    // m02
    if (msg->has_m02)
    {
        lua_pushstring(L, "m02");
        lua_pushnumber(L, (float)(msg->m02));
        lua_settable(L, -3);
    }

    // m03
    if (msg->has_m03)
    {
        lua_pushstring(L, "m03");
        lua_pushnumber(L, (float)(msg->m03));
        lua_settable(L, -3);
    }

    // m10
    if (msg->has_m10)
    {
        lua_pushstring(L, "m10");
        lua_pushnumber(L, (float)(msg->m10));
        lua_settable(L, -3);
    }

    // m11
    if (msg->has_m11)
    {
        lua_pushstring(L, "m11");
        lua_pushnumber(L, (float)(msg->m11));
        lua_settable(L, -3);
    }

    // m12
    if (msg->has_m12)
    {
        lua_pushstring(L, "m12");
        lua_pushnumber(L, (float)(msg->m12));
        lua_settable(L, -3);
    }

    // m13
    if (msg->has_m13)
    {
        lua_pushstring(L, "m13");
        lua_pushnumber(L, (float)(msg->m13));
        lua_settable(L, -3);
    }

    // m20
    if (msg->has_m20)
    {
        lua_pushstring(L, "m20");
        lua_pushnumber(L, (float)(msg->m20));
        lua_settable(L, -3);
    }

    // m21
    if (msg->has_m21)
    {
        lua_pushstring(L, "m21");
        lua_pushnumber(L, (float)(msg->m21));
        lua_settable(L, -3);
    }

    // m22
    if (msg->has_m22)
    {
        lua_pushstring(L, "m22");
        lua_pushnumber(L, (float)(msg->m22));
        lua_settable(L, -3);
    }

    // m23
    if (msg->has_m23)
    {
        lua_pushstring(L, "m23");
        lua_pushnumber(L, (float)(msg->m23));
        lua_settable(L, -3);
    }

    // m30
    if (msg->has_m30)
    {
        lua_pushstring(L, "m30");
        lua_pushnumber(L, (float)(msg->m30));
        lua_settable(L, -3);
    }

    // m31
    if (msg->has_m31)
    {
        lua_pushstring(L, "m31");
        lua_pushnumber(L, (float)(msg->m31));
        lua_settable(L, -3);
    }

    // m32
    if (msg->has_m32)
    {
        lua_pushstring(L, "m32");
        lua_pushnumber(L, (float)(msg->m32));
        lua_settable(L, -3);
    }

    // m33
    if (msg->has_m33)
    {
        lua_pushstring(L, "m33");
        lua_pushnumber(L, (float)(msg->m33));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_input_ddf__gamepad_modifier_t(lua_State* L, DmInputDDF__GamepadModifierT *msg)
{
    lua_newtable(L);

    // mod
    lua_pushstring(L, "mod");
    lua_pushnumber(L, (DmInputDDF__GamepadModifier)(msg->mod));
    lua_settable(L, -3);

}
static void lua_pushdm_input_ddf__gamepad_map_entry(lua_State* L, DmInputDDF__GamepadMapEntry *msg)
{
    lua_newtable(L);

    // input
    lua_pushstring(L, "input");
    lua_pushnumber(L, (DmInputDDF__Gamepad)(msg->input));
    lua_settable(L, -3);

    // type
    lua_pushstring(L, "type");
    lua_pushnumber(L, (DmInputDDF__GamepadType)(msg->type));
    lua_settable(L, -3);

    // index
    lua_pushstring(L, "index");
    lua_pushnumber(L, (uint32_t)(msg->index));
    lua_settable(L, -3);

    // mod
    lua_pushstring(L, "mod");
    lua_newtable(L);
    int mod_size = msg->n_mod;
    for (int i = 0; i < mod_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_input_ddf__gamepad_modifier_t(L, (DmInputDDF__GamepadModifierT*)(msg->mod[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // hat_mask
    if (msg->has_hat_mask)
    {
        lua_pushstring(L, "hat_mask");
        lua_pushnumber(L, (uint32_t)(msg->hat_mask));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_input_ddf__gamepad_map(lua_State* L, DmInputDDF__GamepadMap *msg)
{
    lua_newtable(L);

    // device
    lua_pushstring(L, "device");
    lua_pushstring(L, (char*)(msg->device));
    lua_settable(L, -3);

    // platform
    lua_pushstring(L, "platform");
    lua_pushstring(L, (char*)(msg->platform));
    lua_settable(L, -3);

    // dead_zone
    lua_pushstring(L, "dead_zone");
    lua_pushnumber(L, (float)(msg->dead_zone));
    lua_settable(L, -3);

    // map
    lua_pushstring(L, "map");
    lua_newtable(L);
    int map_size = msg->n_map;
    for (int i = 0; i < map_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_input_ddf__gamepad_map_entry(L, (DmInputDDF__GamepadMapEntry*)(msg->map[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_input_ddf__gamepad_maps(lua_State* L, DmInputDDF__GamepadMaps *msg)
{
    lua_newtable(L);

    // driver
    lua_pushstring(L, "driver");
    lua_newtable(L);
    int driver_size = msg->n_driver;
    for (int i = 0; i < driver_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_input_ddf__gamepad_map(L, (DmInputDDF__GamepadMap*)(msg->driver[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_input_ddf__key_trigger(lua_State* L, DmInputDDF__KeyTrigger *msg)
{
    lua_newtable(L);

    // input
    lua_pushstring(L, "input");
    lua_pushnumber(L, (DmInputDDF__Key)(msg->input));
    lua_settable(L, -3);

    // action
    lua_pushstring(L, "action");
    lua_pushstring(L, (char*)(msg->action));
    lua_settable(L, -3);

}
static void lua_pushdm_input_ddf__mouse_trigger(lua_State* L, DmInputDDF__MouseTrigger *msg)
{
    lua_newtable(L);

    // input
    lua_pushstring(L, "input");
    lua_pushnumber(L, (DmInputDDF__Mouse)(msg->input));
    lua_settable(L, -3);

    // action
    lua_pushstring(L, "action");
    lua_pushstring(L, (char*)(msg->action));
    lua_settable(L, -3);

}
static void lua_pushdm_input_ddf__gamepad_trigger(lua_State* L, DmInputDDF__GamepadTrigger *msg)
{
    lua_newtable(L);

    // input
    lua_pushstring(L, "input");
    lua_pushnumber(L, (DmInputDDF__Gamepad)(msg->input));
    lua_settable(L, -3);

    // action
    lua_pushstring(L, "action");
    lua_pushstring(L, (char*)(msg->action));
    lua_settable(L, -3);

}
static void lua_pushdm_input_ddf__touch_trigger(lua_State* L, DmInputDDF__TouchTrigger *msg)
{
    lua_newtable(L);

    // input
    lua_pushstring(L, "input");
    lua_pushnumber(L, (DmInputDDF__Touch)(msg->input));
    lua_settable(L, -3);

    // action
    lua_pushstring(L, "action");
    lua_pushstring(L, (char*)(msg->action));
    lua_settable(L, -3);

}
static void lua_pushdm_input_ddf__text_trigger(lua_State* L, DmInputDDF__TextTrigger *msg)
{
    lua_newtable(L);

    // input
    lua_pushstring(L, "input");
    lua_pushnumber(L, (DmInputDDF__Text)(msg->input));
    lua_settable(L, -3);

    // action
    lua_pushstring(L, "action");
    lua_pushstring(L, (char*)(msg->action));
    lua_settable(L, -3);

}
static void lua_pushdm_input_ddf__input_binding(lua_State* L, DmInputDDF__InputBinding *msg)
{
    lua_newtable(L);

    // key_trigger
    lua_pushstring(L, "key_trigger");
    lua_newtable(L);
    int key_trigger_size = msg->n_key_trigger;
    for (int i = 0; i < key_trigger_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_input_ddf__key_trigger(L, (DmInputDDF__KeyTrigger*)(msg->key_trigger[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // mouse_trigger
    lua_pushstring(L, "mouse_trigger");
    lua_newtable(L);
    int mouse_trigger_size = msg->n_mouse_trigger;
    for (int i = 0; i < mouse_trigger_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_input_ddf__mouse_trigger(L, (DmInputDDF__MouseTrigger*)(msg->mouse_trigger[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // gamepad_trigger
    lua_pushstring(L, "gamepad_trigger");
    lua_newtable(L);
    int gamepad_trigger_size = msg->n_gamepad_trigger;
    for (int i = 0; i < gamepad_trigger_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_input_ddf__gamepad_trigger(L, (DmInputDDF__GamepadTrigger*)(msg->gamepad_trigger[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // touch_trigger
    lua_pushstring(L, "touch_trigger");
    lua_newtable(L);
    int touch_trigger_size = msg->n_touch_trigger;
    for (int i = 0; i < touch_trigger_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_input_ddf__touch_trigger(L, (DmInputDDF__TouchTrigger*)(msg->touch_trigger[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // text_trigger
    lua_pushstring(L, "text_trigger");
    lua_newtable(L);
    int text_trigger_size = msg->n_text_trigger;
    for (int i = 0; i < text_trigger_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_input_ddf__text_trigger(L, (DmInputDDF__TextTrigger*)(msg->text_trigger[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__render_prototype_desc(lua_State* L, DmRenderDDF__RenderPrototypeDesc *msg)
{
    lua_newtable(L);

    // script
    lua_pushstring(L, "script");
    lua_pushstring(L, (char*)(msg->script));
    lua_settable(L, -3);

    // materials
    lua_pushstring(L, "materials");
    lua_newtable(L);
    int materials_size = msg->n_materials;
    for (int i = 0; i < materials_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_render_ddf__render_prototype_desc__material_desc(L, (DmRenderDDF__RenderPrototypeDesc__MaterialDesc*)(msg->materials[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__render_prototype_desc__material_desc(lua_State* L, DmRenderDDF__RenderPrototypeDesc__MaterialDesc *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // material
    lua_pushstring(L, "material");
    lua_pushstring(L, (char*)(msg->material));
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__draw_text(lua_State* L, DmRenderDDF__DrawText *msg)
{
    lua_newtable(L);

    // position
    lua_pushstring(L, "position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
    lua_settable(L, -3);

    // text
    lua_pushstring(L, "text");
    lua_pushstring(L, (char*)(msg->text));
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__draw_debug_text(lua_State* L, DmRenderDDF__DrawDebugText *msg)
{
    lua_newtable(L);

    // position
    lua_pushstring(L, "position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
    lua_settable(L, -3);

    // text
    lua_pushstring(L, "text");
    lua_pushstring(L, (char*)(msg->text));
    lua_settable(L, -3);

    // color
    lua_pushstring(L, "color");
    lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->color));
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__draw_line(lua_State* L, DmRenderDDF__DrawLine *msg)
{
    lua_newtable(L);

    // start_point
    lua_pushstring(L, "start_point");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->start_point));
    lua_settable(L, -3);

    // end_point
    lua_pushstring(L, "end_point");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->end_point));
    lua_settable(L, -3);

    // color
    lua_pushstring(L, "color");
    lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->color));
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__window_resized(lua_State* L, DmRenderDDF__WindowResized *msg)
{
    lua_newtable(L);

    // width
    lua_pushstring(L, "width");
    lua_pushnumber(L, (uint32_t)(msg->width));
    lua_settable(L, -3);

    // height
    lua_pushstring(L, "height");
    lua_pushnumber(L, (uint32_t)(msg->height));
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__resize(lua_State* L, DmRenderDDF__Resize *msg)
{
    lua_newtable(L);

    // width
    lua_pushstring(L, "width");
    lua_pushnumber(L, (uint32_t)(msg->width));
    lua_settable(L, -3);

    // height
    lua_pushstring(L, "height");
    lua_pushnumber(L, (uint32_t)(msg->height));
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__clear_color(lua_State* L, DmRenderDDF__ClearColor *msg)
{
    lua_newtable(L);

    // color
    lua_pushstring(L, "color");
    lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->color));
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__display_profile_qualifier(lua_State* L, DmRenderDDF__DisplayProfileQualifier *msg)
{
    lua_newtable(L);

    // width
    lua_pushstring(L, "width");
    lua_pushnumber(L, (uint32_t)(msg->width));
    lua_settable(L, -3);

    // height
    lua_pushstring(L, "height");
    lua_pushnumber(L, (uint32_t)(msg->height));
    lua_settable(L, -3);

    // device_models
    lua_pushstring(L, "device_models");
    lua_newtable(L);
    int device_models_size = msg->n_device_models;
    for (int i = 0; i < device_models_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->device_models[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__display_profile(lua_State* L, DmRenderDDF__DisplayProfile *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // qualifiers
    lua_pushstring(L, "qualifiers");
    lua_newtable(L);
    int qualifiers_size = msg->n_qualifiers;
    for (int i = 0; i < qualifiers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_render_ddf__display_profile_qualifier(L, (DmRenderDDF__DisplayProfileQualifier*)(msg->qualifiers[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__display_profiles(lua_State* L, DmRenderDDF__DisplayProfiles *msg)
{
    lua_newtable(L);

    // profiles
    lua_pushstring(L, "profiles");
    lua_newtable(L);
    int profiles_size = msg->n_profiles;
    for (int i = 0; i < profiles_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_render_ddf__display_profile(L, (DmRenderDDF__DisplayProfile*)(msg->profiles[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__font_desc(lua_State* L, DmRenderDDF__FontDesc *msg)
{
    lua_newtable(L);

    // font
    lua_pushstring(L, "font");
    lua_pushstring(L, (char*)(msg->font));
    lua_settable(L, -3);

    // material
    lua_pushstring(L, "material");
    lua_pushstring(L, (char*)(msg->material));
    lua_settable(L, -3);

    // size
    lua_pushstring(L, "size");
    lua_pushnumber(L, (uint32_t)(msg->size));
    lua_settable(L, -3);

    // antialias
    if (msg->has_antialias)
    {
        lua_pushstring(L, "antialias");
        lua_pushnumber(L, (uint32_t)(msg->antialias));
        lua_settable(L, -3);
    }

    // alpha
    if (msg->has_alpha)
    {
        lua_pushstring(L, "alpha");
        lua_pushnumber(L, (float)(msg->alpha));
        lua_settable(L, -3);
    }

    // outline_alpha
    if (msg->has_outline_alpha)
    {
        lua_pushstring(L, "outline_alpha");
        lua_pushnumber(L, (float)(msg->outline_alpha));
        lua_settable(L, -3);
    }

    // outline_width
    if (msg->has_outline_width)
    {
        lua_pushstring(L, "outline_width");
        lua_pushnumber(L, (float)(msg->outline_width));
        lua_settable(L, -3);
    }

    // shadow_alpha
    if (msg->has_shadow_alpha)
    {
        lua_pushstring(L, "shadow_alpha");
        lua_pushnumber(L, (float)(msg->shadow_alpha));
        lua_settable(L, -3);
    }

    // shadow_blur
    if (msg->has_shadow_blur)
    {
        lua_pushstring(L, "shadow_blur");
        lua_pushnumber(L, (uint32_t)(msg->shadow_blur));
        lua_settable(L, -3);
    }

    // shadow_x
    if (msg->has_shadow_x)
    {
        lua_pushstring(L, "shadow_x");
        lua_pushnumber(L, (float)(msg->shadow_x));
        lua_settable(L, -3);
    }

    // shadow_y
    if (msg->has_shadow_y)
    {
        lua_pushstring(L, "shadow_y");
        lua_pushnumber(L, (float)(msg->shadow_y));
        lua_settable(L, -3);
    }

    // extra_characters
    if (msg->extra_characters != 0)
    {
        lua_pushstring(L, "extra_characters");
        lua_pushstring(L, (char*)(msg->extra_characters));
        lua_settable(L, -3);
    }

    // output_format
    if (msg->has_output_format)
    {
        lua_pushstring(L, "output_format");
        lua_pushnumber(L, (DmRenderDDF__FontTextureFormat)(msg->output_format));
        lua_settable(L, -3);
    }

    // all_chars
    if (msg->has_all_chars)
    {
        lua_pushstring(L, "all_chars");
        lua_pushboolean(L, (bool)(msg->all_chars));
        lua_settable(L, -3);
    }

    // cache_width
    if (msg->has_cache_width)
    {
        lua_pushstring(L, "cache_width");
        lua_pushnumber(L, (uint32_t)(msg->cache_width));
        lua_settable(L, -3);
    }

    // cache_height
    if (msg->has_cache_height)
    {
        lua_pushstring(L, "cache_height");
        lua_pushnumber(L, (uint32_t)(msg->cache_height));
        lua_settable(L, -3);
    }

    // render_mode
    if (msg->has_render_mode)
    {
        lua_pushstring(L, "render_mode");
        lua_pushnumber(L, (DmRenderDDF__FontRenderMode)(msg->render_mode));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_render_ddf__font_map(lua_State* L, DmRenderDDF__FontMap *msg)
{
    lua_newtable(L);

    // glyphs
    lua_pushstring(L, "glyphs");
    lua_newtable(L);
    int glyphs_size = msg->n_glyphs;
    for (int i = 0; i < glyphs_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_render_ddf__font_map__glyph(L, (DmRenderDDF__FontMap__Glyph*)(msg->glyphs[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // material
    lua_pushstring(L, "material");
    lua_pushstring(L, (char*)(msg->material));
    lua_settable(L, -3);

    // shadow_x
    if (msg->has_shadow_x)
    {
        lua_pushstring(L, "shadow_x");
        lua_pushnumber(L, (float)(msg->shadow_x));
        lua_settable(L, -3);
    }

    // shadow_y
    if (msg->has_shadow_y)
    {
        lua_pushstring(L, "shadow_y");
        lua_pushnumber(L, (float)(msg->shadow_y));
        lua_settable(L, -3);
    }

    // max_ascent
    lua_pushstring(L, "max_ascent");
    lua_pushnumber(L, (float)(msg->max_ascent));
    lua_settable(L, -3);

    // max_descent
    lua_pushstring(L, "max_descent");
    lua_pushnumber(L, (float)(msg->max_descent));
    lua_settable(L, -3);

    // image_format
    if (msg->has_image_format)
    {
        lua_pushstring(L, "image_format");
        lua_pushnumber(L, (DmRenderDDF__FontTextureFormat)(msg->image_format));
        lua_settable(L, -3);
    }

    // sdf_spread
    if (msg->has_sdf_spread)
    {
        lua_pushstring(L, "sdf_spread");
        lua_pushnumber(L, (float)(msg->sdf_spread));
        lua_settable(L, -3);
    }

    // sdf_offset
    if (msg->has_sdf_offset)
    {
        lua_pushstring(L, "sdf_offset");
        lua_pushnumber(L, (float)(msg->sdf_offset));
        lua_settable(L, -3);
    }

    // sdf_outline
    if (msg->has_sdf_outline)
    {
        lua_pushstring(L, "sdf_outline");
        lua_pushnumber(L, (float)(msg->sdf_outline));
        lua_settable(L, -3);
    }

    // sdf_shadow
    if (msg->has_sdf_shadow)
    {
        lua_pushstring(L, "sdf_shadow");
        lua_pushnumber(L, (float)(msg->sdf_shadow));
        lua_settable(L, -3);
    }

    // cache_width
    if (msg->has_cache_width)
    {
        lua_pushstring(L, "cache_width");
        lua_pushnumber(L, (uint32_t)(msg->cache_width));
        lua_settable(L, -3);
    }

    // cache_height
    if (msg->has_cache_height)
    {
        lua_pushstring(L, "cache_height");
        lua_pushnumber(L, (uint32_t)(msg->cache_height));
        lua_settable(L, -3);
    }

    // glyph_padding
    if (msg->has_glyph_padding)
    {
        lua_pushstring(L, "glyph_padding");
        lua_pushnumber(L, (uint64_t)(msg->glyph_padding));
        lua_settable(L, -3);
    }

    // cache_cell_width
    if (msg->has_cache_cell_width)
    {
        lua_pushstring(L, "cache_cell_width");
        lua_pushnumber(L, (uint32_t)(msg->cache_cell_width));
        lua_settable(L, -3);
    }

    // cache_cell_height
    if (msg->has_cache_cell_height)
    {
        lua_pushstring(L, "cache_cell_height");
        lua_pushnumber(L, (uint32_t)(msg->cache_cell_height));
        lua_settable(L, -3);
    }

    // glyph_channels
    if (msg->has_glyph_channels)
    {
        lua_pushstring(L, "glyph_channels");
        lua_pushnumber(L, (uint32_t)(msg->glyph_channels));
        lua_settable(L, -3);
    }

    // glyph_data
    if (msg->glyph_data.data != 0)
    {
        lua_pushstring(L, "glyph_data");
        lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->glyph_data));
        lua_settable(L, -3);
    }

    // alpha
    if (msg->has_alpha)
    {
        lua_pushstring(L, "alpha");
        lua_pushnumber(L, (float)(msg->alpha));
        lua_settable(L, -3);
    }

    // outline_alpha
    if (msg->has_outline_alpha)
    {
        lua_pushstring(L, "outline_alpha");
        lua_pushnumber(L, (float)(msg->outline_alpha));
        lua_settable(L, -3);
    }

    // shadow_alpha
    if (msg->has_shadow_alpha)
    {
        lua_pushstring(L, "shadow_alpha");
        lua_pushnumber(L, (float)(msg->shadow_alpha));
        lua_settable(L, -3);
    }

    // cache_cell_max_ascent
    if (msg->has_cache_cell_max_ascent)
    {
        lua_pushstring(L, "cache_cell_max_ascent");
        lua_pushnumber(L, (uint32_t)(msg->cache_cell_max_ascent));
        lua_settable(L, -3);
    }

    // layer_mask
    if (msg->has_layer_mask)
    {
        lua_pushstring(L, "layer_mask");
        lua_pushnumber(L, (uint32_t)(msg->layer_mask));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_render_ddf__font_map__glyph(lua_State* L, DmRenderDDF__FontMap__Glyph *msg)
{
    lua_newtable(L);

    // character
    lua_pushstring(L, "character");
    lua_pushnumber(L, (uint32_t)(msg->character));
    lua_settable(L, -3);

    // width
    if (msg->has_width)
    {
        lua_pushstring(L, "width");
        lua_pushnumber(L, (uint32_t)(msg->width));
        lua_settable(L, -3);
    }

    // advance
    if (msg->has_advance)
    {
        lua_pushstring(L, "advance");
        lua_pushnumber(L, (float)(msg->advance));
        lua_settable(L, -3);
    }

    // left_bearing
    if (msg->has_left_bearing)
    {
        lua_pushstring(L, "left_bearing");
        lua_pushnumber(L, (float)(msg->left_bearing));
        lua_settable(L, -3);
    }

    // ascent
    if (msg->has_ascent)
    {
        lua_pushstring(L, "ascent");
        lua_pushnumber(L, (uint32_t)(msg->ascent));
        lua_settable(L, -3);
    }

    // descent
    if (msg->has_descent)
    {
        lua_pushstring(L, "descent");
        lua_pushnumber(L, (uint32_t)(msg->descent));
        lua_settable(L, -3);
    }

    // x
    if (msg->has_x)
    {
        lua_pushstring(L, "x");
        lua_pushnumber(L, (int32_t)(msg->x));
        lua_settable(L, -3);
    }

    // y
    if (msg->has_y)
    {
        lua_pushstring(L, "y");
        lua_pushnumber(L, (int32_t)(msg->y));
        lua_settable(L, -3);
    }

    // glyph_data_offset
    if (msg->has_glyph_data_offset)
    {
        lua_pushstring(L, "glyph_data_offset");
        lua_pushnumber(L, (uint64_t)(msg->glyph_data_offset));
        lua_settable(L, -3);
    }

    // glyph_data_size
    if (msg->has_glyph_data_size)
    {
        lua_pushstring(L, "glyph_data_size");
        lua_pushnumber(L, (uint64_t)(msg->glyph_data_size));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_render_ddf__material_desc(lua_State* L, DmRenderDDF__MaterialDesc *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // tags
    lua_pushstring(L, "tags");
    lua_newtable(L);
    int tags_size = msg->n_tags;
    for (int i = 0; i < tags_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->tags[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // vertex_program
    lua_pushstring(L, "vertex_program");
    lua_pushstring(L, (char*)(msg->vertex_program));
    lua_settable(L, -3);

    // fragment_program
    lua_pushstring(L, "fragment_program");
    lua_pushstring(L, (char*)(msg->fragment_program));
    lua_settable(L, -3);

    // vertex_space
    if (msg->has_vertex_space)
    {
        lua_pushstring(L, "vertex_space");
        lua_pushnumber(L, (DmRenderDDF__MaterialDesc__VertexSpace)(msg->vertex_space));
        lua_settable(L, -3);
    }

    // vertex_constants
    lua_pushstring(L, "vertex_constants");
    lua_newtable(L);
    int vertex_constants_size = msg->n_vertex_constants;
    for (int i = 0; i < vertex_constants_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_render_ddf__material_desc__constant(L, (DmRenderDDF__MaterialDesc__Constant*)(msg->vertex_constants[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // fragment_constants
    lua_pushstring(L, "fragment_constants");
    lua_newtable(L);
    int fragment_constants_size = msg->n_fragment_constants;
    for (int i = 0; i < fragment_constants_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_render_ddf__material_desc__constant(L, (DmRenderDDF__MaterialDesc__Constant*)(msg->fragment_constants[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // textures
    lua_pushstring(L, "textures");
    lua_newtable(L);
    int textures_size = msg->n_textures;
    for (int i = 0; i < textures_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->textures[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // samplers
    lua_pushstring(L, "samplers");
    lua_newtable(L);
    int samplers_size = msg->n_samplers;
    for (int i = 0; i < samplers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_render_ddf__material_desc__sampler(L, (DmRenderDDF__MaterialDesc__Sampler*)(msg->samplers[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__material_desc__constant(lua_State* L, DmRenderDDF__MaterialDesc__Constant *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // type
    lua_pushstring(L, "type");
    lua_pushnumber(L, (DmRenderDDF__MaterialDesc__ConstantType)(msg->type));
    lua_settable(L, -3);

    // value
    lua_pushstring(L, "value");
    lua_newtable(L);
    int value_size = msg->n_value;
    for (int i = 0; i < value_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->value[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_render_ddf__material_desc__sampler(lua_State* L, DmRenderDDF__MaterialDesc__Sampler *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // wrap_u
    lua_pushstring(L, "wrap_u");
    lua_pushnumber(L, (DmRenderDDF__MaterialDesc__WrapMode)(msg->wrap_u));
    lua_settable(L, -3);

    // wrap_v
    lua_pushstring(L, "wrap_v");
    lua_pushnumber(L, (DmRenderDDF__MaterialDesc__WrapMode)(msg->wrap_v));
    lua_settable(L, -3);

    // filter_min
    lua_pushstring(L, "filter_min");
    lua_pushnumber(L, (DmRenderDDF__MaterialDesc__FilterModeMin)(msg->filter_min));
    lua_settable(L, -3);

    // filter_mag
    lua_pushstring(L, "filter_mag");
    lua_pushnumber(L, (DmRenderDDF__MaterialDesc__FilterModeMag)(msg->filter_mag));
    lua_settable(L, -3);

    // max_anisotropy
    if (msg->has_max_anisotropy)
    {
        lua_pushstring(L, "max_anisotropy");
        lua_pushnumber(L, (float)(msg->max_anisotropy));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_script_ddf__lua_ref(lua_State* L, DmScriptDDF__LuaRef *msg)
{
    lua_newtable(L);

    // ref
    lua_pushstring(L, "ref");
    lua_pushnumber(L, (int32_t)(msg->ref));
    lua_settable(L, -3);

    // context_table_ref
    lua_pushstring(L, "context_table_ref");
    lua_pushnumber(L, (int32_t)(msg->context_table_ref));
    lua_settable(L, -3);

}
static void lua_pushdm_system_ddf__exit(lua_State* L, DmSystemDDF__Exit *msg)
{
    lua_newtable(L);

    // code
    lua_pushstring(L, "code");
    lua_pushnumber(L, (int32_t)(msg->code));
    lua_settable(L, -3);

}
static void lua_pushdm_system_ddf__toggle_profile(lua_State* L, DmSystemDDF__ToggleProfile *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_system_ddf__toggle_physics_debug(lua_State* L, DmSystemDDF__TogglePhysicsDebug *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_system_ddf__start_record(lua_State* L, DmSystemDDF__StartRecord *msg)
{
    lua_newtable(L);

    // file_name
    lua_pushstring(L, "file_name");
    lua_pushstring(L, (char*)(msg->file_name));
    lua_settable(L, -3);

    // frame_period
    if (msg->has_frame_period)
    {
        lua_pushstring(L, "frame_period");
        lua_pushnumber(L, (int32_t)(msg->frame_period));
        lua_settable(L, -3);
    }

    // fps
    if (msg->has_fps)
    {
        lua_pushstring(L, "fps");
        lua_pushnumber(L, (int32_t)(msg->fps));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_system_ddf__stop_record(lua_State* L, DmSystemDDF__StopRecord *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_system_ddf__reboot(lua_State* L, DmSystemDDF__Reboot *msg)
{
    lua_newtable(L);

    // arg1
    if (msg->arg1 != 0)
    {
        lua_pushstring(L, "arg1");
        lua_pushstring(L, (char*)(msg->arg1));
        lua_settable(L, -3);
    }

    // arg2
    if (msg->arg2 != 0)
    {
        lua_pushstring(L, "arg2");
        lua_pushstring(L, (char*)(msg->arg2));
        lua_settable(L, -3);
    }

    // arg3
    if (msg->arg3 != 0)
    {
        lua_pushstring(L, "arg3");
        lua_pushstring(L, (char*)(msg->arg3));
        lua_settable(L, -3);
    }

    // arg4
    if (msg->arg4 != 0)
    {
        lua_pushstring(L, "arg4");
        lua_pushstring(L, (char*)(msg->arg4));
        lua_settable(L, -3);
    }

    // arg5
    if (msg->arg5 != 0)
    {
        lua_pushstring(L, "arg5");
        lua_pushstring(L, (char*)(msg->arg5));
        lua_settable(L, -3);
    }

    // arg6
    if (msg->arg6 != 0)
    {
        lua_pushstring(L, "arg6");
        lua_pushstring(L, (char*)(msg->arg6));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_system_ddf__set_vsync(lua_State* L, DmSystemDDF__SetVsync *msg)
{
    lua_newtable(L);

    // swap_interval
    lua_pushstring(L, "swap_interval");
    lua_pushnumber(L, (int32_t)(msg->swap_interval));
    lua_settable(L, -3);

}
static void lua_pushdm_system_ddf__set_update_frequency(lua_State* L, DmSystemDDF__SetUpdateFrequency *msg)
{
    lua_newtable(L);

    // frequency
    lua_pushstring(L, "frequency");
    lua_pushnumber(L, (int32_t)(msg->frequency));
    lua_settable(L, -3);

}
static void lua_pushdm_script_doc__parameter(lua_State* L, DmScriptDoc__Parameter *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // doc
    lua_pushstring(L, "doc");
    lua_pushstring(L, (char*)(msg->doc));
    lua_settable(L, -3);

    // types
    lua_pushstring(L, "types");
    lua_newtable(L);
    int types_size = msg->n_types;
    for (int i = 0; i < types_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->types[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_script_doc__member(lua_State* L, DmScriptDoc__Member *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // doc
    lua_pushstring(L, "doc");
    lua_pushstring(L, (char*)(msg->doc));
    lua_settable(L, -3);

    // type
    lua_pushstring(L, "type");
    lua_pushstring(L, (char*)(msg->type));
    lua_settable(L, -3);

}
static void lua_pushdm_script_doc__return_value(lua_State* L, DmScriptDoc__ReturnValue *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // doc
    lua_pushstring(L, "doc");
    lua_pushstring(L, (char*)(msg->doc));
    lua_settable(L, -3);

    // types
    lua_pushstring(L, "types");
    lua_newtable(L);
    int types_size = msg->n_types;
    for (int i = 0; i < types_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->types[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_script_doc__element(lua_State* L, DmScriptDoc__Element *msg)
{
    lua_newtable(L);

    // type
    lua_pushstring(L, "type");
    lua_pushnumber(L, (DmScriptDoc__Type)(msg->type));
    lua_settable(L, -3);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // brief
    lua_pushstring(L, "brief");
    lua_pushstring(L, (char*)(msg->brief));
    lua_settable(L, -3);

    // description
    lua_pushstring(L, "description");
    lua_pushstring(L, (char*)(msg->description));
    lua_settable(L, -3);

    // returnvalues
    lua_pushstring(L, "returnvalues");
    lua_newtable(L);
    int returnvalues_size = msg->n_returnvalues;
    for (int i = 0; i < returnvalues_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_script_doc__return_value(L, (DmScriptDoc__ReturnValue*)(msg->returnvalues[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // parameters
    lua_pushstring(L, "parameters");
    lua_newtable(L);
    int parameters_size = msg->n_parameters;
    for (int i = 0; i < parameters_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_script_doc__parameter(L, (DmScriptDoc__Parameter*)(msg->parameters[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // examples
    if (msg->examples != 0)
    {
        lua_pushstring(L, "examples");
        lua_pushstring(L, (char*)(msg->examples));
        lua_settable(L, -3);
    }

    // replaces
    if (msg->replaces != 0)
    {
        lua_pushstring(L, "replaces");
        lua_pushstring(L, (char*)(msg->replaces));
        lua_settable(L, -3);
    }

    // error
    if (msg->error != 0)
    {
        lua_pushstring(L, "error");
        lua_pushstring(L, (char*)(msg->error));
        lua_settable(L, -3);
    }

    // tparams
    lua_pushstring(L, "tparams");
    lua_newtable(L);
    int tparams_size = msg->n_tparams;
    for (int i = 0; i < tparams_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_script_doc__member(L, (DmScriptDoc__Member*)(msg->tparams[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // members
    lua_pushstring(L, "members");
    lua_newtable(L);
    int members_size = msg->n_members;
    for (int i = 0; i < members_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_script_doc__member(L, (DmScriptDoc__Member*)(msg->members[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // notes
    lua_pushstring(L, "notes");
    lua_newtable(L);
    int notes_size = msg->n_notes;
    for (int i = 0; i < notes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->notes[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_script_doc__info(lua_State* L, DmScriptDoc__Info *msg)
{
    lua_newtable(L);

    // namespace
    lua_pushstring(L, "namespace");
    lua_pushstring(L, (char*)(msg->namespace_));
    lua_settable(L, -3);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // brief
    lua_pushstring(L, "brief");
    lua_pushstring(L, (char*)(msg->brief));
    lua_settable(L, -3);

    // description
    lua_pushstring(L, "description");
    lua_pushstring(L, (char*)(msg->description));
    lua_settable(L, -3);

    // path
    lua_pushstring(L, "path");
    lua_pushstring(L, (char*)(msg->path));
    lua_settable(L, -3);

    // file
    lua_pushstring(L, "file");
    lua_pushstring(L, (char*)(msg->file));
    lua_settable(L, -3);

}
static void lua_pushdm_script_doc__document(lua_State* L, DmScriptDoc__Document *msg)
{
    lua_newtable(L);

    // elements
    lua_pushstring(L, "elements");
    lua_newtable(L);
    int elements_size = msg->n_elements;
    for (int i = 0; i < elements_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_script_doc__element(L, (DmScriptDoc__Element*)(msg->elements[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // info
    if (msg->info != 0)
    {
        lua_pushstring(L, "info");
        lua_pushdm_script_doc__info(L, (DmScriptDoc__Info*)(msg->info));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_http_ddf__stop_http(lua_State* L, DmHttpDDF__StopHttp *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_http_ddf__http_request(lua_State* L, DmHttpDDF__HttpRequest *msg)
{
    lua_newtable(L);

    // method
    lua_pushstring(L, "method");
    lua_pushstring(L, (char*)(msg->method));
    lua_settable(L, -3);

    // url
    lua_pushstring(L, "url");
    lua_pushstring(L, (char*)(msg->url));
    lua_settable(L, -3);

    // headers
    lua_pushstring(L, "headers");
    lua_pushnumber(L, (uint64_t)(msg->headers));
    lua_settable(L, -3);

    // headers_length
    lua_pushstring(L, "headers_length");
    lua_pushnumber(L, (uint64_t)(msg->headers_length));
    lua_settable(L, -3);

    // request
    lua_pushstring(L, "request");
    lua_pushnumber(L, (uint64_t)(msg->request));
    lua_settable(L, -3);

    // request_length
    lua_pushstring(L, "request_length");
    lua_pushnumber(L, (uint32_t)(msg->request_length));
    lua_settable(L, -3);

    // timeout
    if (msg->has_timeout)
    {
        lua_pushstring(L, "timeout");
        lua_pushnumber(L, (uint64_t)(msg->timeout));
        lua_settable(L, -3);
    }

    // path
    if (msg->path != 0)
    {
        lua_pushstring(L, "path");
        lua_pushstring(L, (char*)(msg->path));
        lua_settable(L, -3);
    }

    // ignore_cache
    if (msg->has_ignore_cache)
    {
        lua_pushstring(L, "ignore_cache");
        lua_pushboolean(L, (bool)(msg->ignore_cache));
        lua_settable(L, -3);
    }

    // chunked_transfer
    if (msg->has_chunked_transfer)
    {
        lua_pushstring(L, "chunked_transfer");
        lua_pushboolean(L, (bool)(msg->chunked_transfer));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_http_ddf__http_response(lua_State* L, DmHttpDDF__HttpResponse *msg)
{
    lua_newtable(L);

    // status
    lua_pushstring(L, "status");
    lua_pushnumber(L, (int32_t)(msg->status));
    lua_settable(L, -3);

    // headers
    lua_pushstring(L, "headers");
    lua_pushnumber(L, (uint64_t)(msg->headers));
    lua_settable(L, -3);

    // headers_length
    lua_pushstring(L, "headers_length");
    lua_pushnumber(L, (uint32_t)(msg->headers_length));
    lua_settable(L, -3);

    // response
    lua_pushstring(L, "response");
    lua_pushnumber(L, (uint64_t)(msg->response));
    lua_settable(L, -3);

    // response_length
    lua_pushstring(L, "response_length");
    lua_pushnumber(L, (uint32_t)(msg->response_length));
    lua_settable(L, -3);

    // path
    lua_pushstring(L, "path");
    lua_pushstring(L, (char*)(msg->path));
    lua_settable(L, -3);

}
static void lua_pushdm_lua_ddf__lua_source(lua_State* L, DmLuaDDF__LuaSource *msg)
{
    lua_newtable(L);

    // script
    if (msg->script.data != 0)
    {
        lua_pushstring(L, "script");
        lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->script));
        lua_settable(L, -3);
    }

    // filename
    lua_pushstring(L, "filename");
    lua_pushstring(L, (char*)(msg->filename));
    lua_settable(L, -3);

    // bytecode
    if (msg->bytecode.data != 0)
    {
        lua_pushstring(L, "bytecode");
        lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->bytecode));
        lua_settable(L, -3);
    }

    // delta
    if (msg->delta.data != 0)
    {
        lua_pushstring(L, "delta");
        lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->delta));
        lua_settable(L, -3);
    }

    // bytecode_32
    if (msg->bytecode_32.data != 0)
    {
        lua_pushstring(L, "bytecode_32");
        lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->bytecode_32));
        lua_settable(L, -3);
    }

    // bytecode_64
    if (msg->bytecode_64.data != 0)
    {
        lua_pushstring(L, "bytecode_64");
        lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->bytecode_64));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_rig_ddf__bone(lua_State* L, DmRigDDF__Bone *msg)
{
    lua_newtable(L);

    // parent
    lua_pushstring(L, "parent");
    lua_pushnumber(L, (uint32_t)(msg->parent));
    lua_settable(L, -3);

    // id
    lua_pushstring(L, "id");
    lua_pushnumber(L, (uint64_t)(msg->id));
    lua_settable(L, -3);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // local
    lua_pushstring(L, "local");
    lua_pushdm_math__transform(L, (DmMath__Transform*)(msg->local));
    lua_settable(L, -3);

    // world
    lua_pushstring(L, "world");
    lua_pushdm_math__transform(L, (DmMath__Transform*)(msg->world));
    lua_settable(L, -3);

    // inverse_bind_pose
    lua_pushstring(L, "inverse_bind_pose");
    lua_pushdm_math__transform(L, (DmMath__Transform*)(msg->inverse_bind_pose));
    lua_settable(L, -3);

    // length
    if (msg->has_length)
    {
        lua_pushstring(L, "length");
        lua_pushnumber(L, (float)(msg->length));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_rig_ddf__ik(lua_State* L, DmRigDDF__IK *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushnumber(L, (uint64_t)(msg->id));
    lua_settable(L, -3);

    // parent
    lua_pushstring(L, "parent");
    lua_pushnumber(L, (uint32_t)(msg->parent));
    lua_settable(L, -3);

    // child
    lua_pushstring(L, "child");
    lua_pushnumber(L, (uint32_t)(msg->child));
    lua_settable(L, -3);

    // target
    lua_pushstring(L, "target");
    lua_pushnumber(L, (uint32_t)(msg->target));
    lua_settable(L, -3);

    // positive
    if (msg->has_positive)
    {
        lua_pushstring(L, "positive");
        lua_pushboolean(L, (bool)(msg->positive));
        lua_settable(L, -3);
    }

    // mix
    if (msg->has_mix)
    {
        lua_pushstring(L, "mix");
        lua_pushnumber(L, (float)(msg->mix));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_rig_ddf__skeleton(lua_State* L, DmRigDDF__Skeleton *msg)
{
    lua_newtable(L);

    // bones
    lua_pushstring(L, "bones");
    lua_newtable(L);
    int bones_size = msg->n_bones;
    for (int i = 0; i < bones_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_rig_ddf__bone(L, (DmRigDDF__Bone*)(msg->bones[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // iks
    lua_pushstring(L, "iks");
    lua_newtable(L);
    int iks_size = msg->n_iks;
    for (int i = 0; i < iks_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_rig_ddf__ik(L, (DmRigDDF__IK*)(msg->iks[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_rig_ddf__animation_track(lua_State* L, DmRigDDF__AnimationTrack *msg)
{
    lua_newtable(L);

    // bone_index
    lua_pushstring(L, "bone_index");
    lua_pushnumber(L, (uint32_t)(msg->bone_index));
    lua_settable(L, -3);

    // positions
    lua_pushstring(L, "positions");
    lua_newtable(L);
    int positions_size = msg->n_positions;
    for (int i = 0; i < positions_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->positions[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // rotations
    lua_pushstring(L, "rotations");
    lua_newtable(L);
    int rotations_size = msg->n_rotations;
    for (int i = 0; i < rotations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->rotations[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // scale
    lua_pushstring(L, "scale");
    lua_newtable(L);
    int scale_size = msg->n_scale;
    for (int i = 0; i < scale_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->scale[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_rig_ddf__event_key(lua_State* L, DmRigDDF__EventKey *msg)
{
    lua_newtable(L);

    // t
    lua_pushstring(L, "t");
    lua_pushnumber(L, (float)(msg->t));
    lua_settable(L, -3);

    // integer
    if (msg->has_integer)
    {
        lua_pushstring(L, "integer");
        lua_pushnumber(L, (int32_t)(msg->integer));
        lua_settable(L, -3);
    }

    // float
    if (msg->has_float_)
    {
        lua_pushstring(L, "float");
        lua_pushnumber(L, (float)(msg->float_));
        lua_settable(L, -3);
    }

    // string
    if (msg->has_string)
    {
        lua_pushstring(L, "string");
        lua_pushnumber(L, (uint64_t)(msg->string));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_rig_ddf__event_track(lua_State* L, DmRigDDF__EventTrack *msg)
{
    lua_newtable(L);

    // event_id
    lua_pushstring(L, "event_id");
    lua_pushnumber(L, (uint64_t)(msg->event_id));
    lua_settable(L, -3);

    // keys
    lua_pushstring(L, "keys");
    lua_newtable(L);
    int keys_size = msg->n_keys;
    for (int i = 0; i < keys_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_rig_ddf__event_key(L, (DmRigDDF__EventKey*)(msg->keys[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_rig_ddf__rig_animation(lua_State* L, DmRigDDF__RigAnimation *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushnumber(L, (uint64_t)(msg->id));
    lua_settable(L, -3);

    // duration
    lua_pushstring(L, "duration");
    lua_pushnumber(L, (float)(msg->duration));
    lua_settable(L, -3);

    // sample_rate
    lua_pushstring(L, "sample_rate");
    lua_pushnumber(L, (float)(msg->sample_rate));
    lua_settable(L, -3);

    // tracks
    lua_pushstring(L, "tracks");
    lua_newtable(L);
    int tracks_size = msg->n_tracks;
    for (int i = 0; i < tracks_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_rig_ddf__animation_track(L, (DmRigDDF__AnimationTrack*)(msg->tracks[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // event_tracks
    lua_pushstring(L, "event_tracks");
    lua_newtable(L);
    int event_tracks_size = msg->n_event_tracks;
    for (int i = 0; i < event_tracks_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_rig_ddf__event_track(L, (DmRigDDF__EventTrack*)(msg->event_tracks[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_rig_ddf__animation_set(lua_State* L, DmRigDDF__AnimationSet *msg)
{
    lua_newtable(L);

    // animations
    lua_pushstring(L, "animations");
    lua_newtable(L);
    int animations_size = msg->n_animations;
    for (int i = 0; i < animations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_rig_ddf__rig_animation(L, (DmRigDDF__RigAnimation*)(msg->animations[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // bone_list
    lua_pushstring(L, "bone_list");
    lua_newtable(L);
    int bone_list_size = msg->n_bone_list;
    for (int i = 0; i < bone_list_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint64_t)(msg->bone_list[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_rig_ddf__animation_instance_desc(lua_State* L, DmRigDDF__AnimationInstanceDesc *msg)
{
    lua_newtable(L);

    // animation
    lua_pushstring(L, "animation");
    lua_pushstring(L, (char*)(msg->animation));
    lua_settable(L, -3);

}
static void lua_pushdm_rig_ddf__animation_set_desc(lua_State* L, DmRigDDF__AnimationSetDesc *msg)
{
    lua_newtable(L);

    // animations
    lua_pushstring(L, "animations");
    lua_newtable(L);
    int animations_size = msg->n_animations;
    for (int i = 0; i < animations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_rig_ddf__animation_instance_desc(L, (DmRigDDF__AnimationInstanceDesc*)(msg->animations[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // skeleton
    if (msg->skeleton != 0)
    {
        lua_pushstring(L, "skeleton");
        lua_pushstring(L, (char*)(msg->skeleton));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_rig_ddf__mesh(lua_State* L, DmRigDDF__Mesh *msg)
{
    lua_newtable(L);

    // positions
    lua_pushstring(L, "positions");
    lua_newtable(L);
    int positions_size = msg->n_positions;
    for (int i = 0; i < positions_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->positions[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // normals
    lua_pushstring(L, "normals");
    lua_newtable(L);
    int normals_size = msg->n_normals;
    for (int i = 0; i < normals_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->normals[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // tangents
    lua_pushstring(L, "tangents");
    lua_newtable(L);
    int tangents_size = msg->n_tangents;
    for (int i = 0; i < tangents_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->tangents[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // colors
    lua_pushstring(L, "colors");
    lua_newtable(L);
    int colors_size = msg->n_colors;
    for (int i = 0; i < colors_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->colors[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // texcoord0
    lua_pushstring(L, "texcoord0");
    lua_newtable(L);
    int texcoord0_size = msg->n_texcoord0;
    for (int i = 0; i < texcoord0_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->texcoord0[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // num_texcoord0_components
    if (msg->has_num_texcoord0_components)
    {
        lua_pushstring(L, "num_texcoord0_components");
        lua_pushnumber(L, (uint32_t)(msg->num_texcoord0_components));
        lua_settable(L, -3);
    }

    // texcoord1
    lua_pushstring(L, "texcoord1");
    lua_newtable(L);
    int texcoord1_size = msg->n_texcoord1;
    for (int i = 0; i < texcoord1_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->texcoord1[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // num_texcoord1_components
    if (msg->has_num_texcoord1_components)
    {
        lua_pushstring(L, "num_texcoord1_components");
        lua_pushnumber(L, (uint32_t)(msg->num_texcoord1_components));
        lua_settable(L, -3);
    }

    // indices
    if (msg->indices.data != 0)
    {
        lua_pushstring(L, "indices");
        lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->indices));
        lua_settable(L, -3);
    }

    // indices_format
    if (msg->has_indices_format)
    {
        lua_pushstring(L, "indices_format");
        lua_pushnumber(L, (DmRigDDF__IndexBufferFormat)(msg->indices_format));
        lua_settable(L, -3);
    }

    // weights
    lua_pushstring(L, "weights");
    lua_newtable(L);
    int weights_size = msg->n_weights;
    for (int i = 0; i < weights_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->weights[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // bone_indices
    lua_pushstring(L, "bone_indices");
    lua_newtable(L);
    int bone_indices_size = msg->n_bone_indices;
    for (int i = 0; i < bone_indices_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint32_t)(msg->bone_indices[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // material_index
    if (msg->has_material_index)
    {
        lua_pushstring(L, "material_index");
        lua_pushnumber(L, (uint32_t)(msg->material_index));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_rig_ddf__model(lua_State* L, DmRigDDF__Model *msg)
{
    lua_newtable(L);

    // local
    lua_pushstring(L, "local");
    lua_pushdm_math__transform(L, (DmMath__Transform*)(msg->local));
    lua_settable(L, -3);

    // id
    lua_pushstring(L, "id");
    lua_pushnumber(L, (uint64_t)(msg->id));
    lua_settable(L, -3);

    // meshes
    lua_pushstring(L, "meshes");
    lua_newtable(L);
    int meshes_size = msg->n_meshes;
    for (int i = 0; i < meshes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_rig_ddf__mesh(L, (DmRigDDF__Mesh*)(msg->meshes[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_rig_ddf__mesh_set(lua_State* L, DmRigDDF__MeshSet *msg)
{
    lua_newtable(L);

    // models
    lua_pushstring(L, "models");
    lua_newtable(L);
    int models_size = msg->n_models;
    for (int i = 0; i < models_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_rig_ddf__model(L, (DmRigDDF__Model*)(msg->models[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // materials
    lua_pushstring(L, "materials");
    lua_newtable(L);
    int materials_size = msg->n_materials;
    for (int i = 0; i < materials_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->materials[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // bone_list
    lua_pushstring(L, "bone_list");
    lua_newtable(L);
    int bone_list_size = msg->n_bone_list;
    for (int i = 0; i < bone_list_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint64_t)(msg->bone_list[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // max_bone_count
    if (msg->has_max_bone_count)
    {
        lua_pushstring(L, "max_bone_count");
        lua_pushnumber(L, (uint32_t)(msg->max_bone_count));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_rig_ddf__rig_scene(lua_State* L, DmRigDDF__RigScene *msg)
{
    lua_newtable(L);

    // skeleton
    if (msg->skeleton != 0)
    {
        lua_pushstring(L, "skeleton");
        lua_pushstring(L, (char*)(msg->skeleton));
        lua_settable(L, -3);
    }

    // animation_set
    if (msg->animation_set != 0)
    {
        lua_pushstring(L, "animation_set");
        lua_pushstring(L, (char*)(msg->animation_set));
        lua_settable(L, -3);
    }

    // mesh_set
    lua_pushstring(L, "mesh_set");
    lua_pushstring(L, (char*)(msg->mesh_set));
    lua_settable(L, -3);

    // texture_set
    if (msg->texture_set != 0)
    {
        lua_pushstring(L, "texture_set");
        lua_pushstring(L, (char*)(msg->texture_set));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_model_ddf__model_desc(lua_State* L, DmModelDDF__ModelDesc *msg)
{
    lua_newtable(L);

    // mesh
    lua_pushstring(L, "mesh");
    lua_pushstring(L, (char*)(msg->mesh));
    lua_settable(L, -3);

    // material
    lua_pushstring(L, "material");
    lua_pushstring(L, (char*)(msg->material));
    lua_settable(L, -3);

    // textures
    lua_pushstring(L, "textures");
    lua_newtable(L);
    int textures_size = msg->n_textures;
    for (int i = 0; i < textures_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->textures[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // skeleton
    if (msg->skeleton != 0)
    {
        lua_pushstring(L, "skeleton");
        lua_pushstring(L, (char*)(msg->skeleton));
        lua_settable(L, -3);
    }

    // animations
    if (msg->animations != 0)
    {
        lua_pushstring(L, "animations");
        lua_pushstring(L, (char*)(msg->animations));
        lua_settable(L, -3);
    }

    // default_animation
    if (msg->default_animation != 0)
    {
        lua_pushstring(L, "default_animation");
        lua_pushstring(L, (char*)(msg->default_animation));
        lua_settable(L, -3);
    }

    // name
    if (msg->name != 0)
    {
        lua_pushstring(L, "name");
        lua_pushstring(L, (char*)(msg->name));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_model_ddf__model(lua_State* L, DmModelDDF__Model *msg)
{
    lua_newtable(L);

    // rig_scene
    lua_pushstring(L, "rig_scene");
    lua_pushstring(L, (char*)(msg->rig_scene));
    lua_settable(L, -3);

    // material
    lua_pushstring(L, "material");
    lua_pushstring(L, (char*)(msg->material));
    lua_settable(L, -3);

    // textures
    lua_pushstring(L, "textures");
    lua_newtable(L);
    int textures_size = msg->n_textures;
    for (int i = 0; i < textures_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->textures[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // default_animation
    if (msg->default_animation != 0)
    {
        lua_pushstring(L, "default_animation");
        lua_pushstring(L, (char*)(msg->default_animation));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_model_ddf__reset_constant(lua_State* L, DmModelDDF__ResetConstant *msg)
{
    lua_newtable(L);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_pushnumber(L, (uint64_t)(msg->name_hash));
    lua_settable(L, -3);

}
static void lua_pushdm_model_ddf__set_texture(lua_State* L, DmModelDDF__SetTexture *msg)
{
    lua_newtable(L);

    // texture_hash
    lua_pushstring(L, "texture_hash");
    lua_pushnumber(L, (uint64_t)(msg->texture_hash));
    lua_settable(L, -3);

    // texture_unit
    lua_pushstring(L, "texture_unit");
    lua_pushnumber(L, (uint32_t)(msg->texture_unit));
    lua_settable(L, -3);

}
static void lua_pushdm_model_ddf__model_play_animation(lua_State* L, DmModelDDF__ModelPlayAnimation *msg)
{
    lua_newtable(L);

    // animation_id
    lua_pushstring(L, "animation_id");
    lua_pushnumber(L, (uint64_t)(msg->animation_id));
    lua_settable(L, -3);

    // playback
    lua_pushstring(L, "playback");
    lua_pushnumber(L, (uint32_t)(msg->playback));
    lua_settable(L, -3);

    // blend_duration
    if (msg->has_blend_duration)
    {
        lua_pushstring(L, "blend_duration");
        lua_pushnumber(L, (float)(msg->blend_duration));
        lua_settable(L, -3);
    }

    // offset
    if (msg->has_offset)
    {
        lua_pushstring(L, "offset");
        lua_pushnumber(L, (float)(msg->offset));
        lua_settable(L, -3);
    }

    // playback_rate
    if (msg->has_playback_rate)
    {
        lua_pushstring(L, "playback_rate");
        lua_pushnumber(L, (float)(msg->playback_rate));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_model_ddf__model_cancel_animation(lua_State* L, DmModelDDF__ModelCancelAnimation *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_model_ddf__model_animation_done(lua_State* L, DmModelDDF__ModelAnimationDone *msg)
{
    lua_newtable(L);

    // animation_id
    lua_pushstring(L, "animation_id");
    lua_pushnumber(L, (uint64_t)(msg->animation_id));
    lua_settable(L, -3);

    // playback
    lua_pushstring(L, "playback");
    lua_pushnumber(L, (uint32_t)(msg->playback));
    lua_settable(L, -3);

}
static void lua_pushdm_mesh_ddf__mesh_desc(lua_State* L, DmMeshDDF__MeshDesc *msg)
{
    lua_newtable(L);

    // material
    lua_pushstring(L, "material");
    lua_pushstring(L, (char*)(msg->material));
    lua_settable(L, -3);

    // vertices
    lua_pushstring(L, "vertices");
    lua_pushstring(L, (char*)(msg->vertices));
    lua_settable(L, -3);

    // textures
    lua_pushstring(L, "textures");
    lua_newtable(L);
    int textures_size = msg->n_textures;
    for (int i = 0; i < textures_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->textures[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // primitive_type
    if (msg->has_primitive_type)
    {
        lua_pushstring(L, "primitive_type");
        lua_pushnumber(L, (DmMeshDDF__MeshDesc__PrimitiveType)(msg->primitive_type));
        lua_settable(L, -3);
    }

    // position_stream
    if (msg->position_stream != 0)
    {
        lua_pushstring(L, "position_stream");
        lua_pushstring(L, (char*)(msg->position_stream));
        lua_settable(L, -3);
    }

    // normal_stream
    if (msg->normal_stream != 0)
    {
        lua_pushstring(L, "normal_stream");
        lua_pushstring(L, (char*)(msg->normal_stream));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__label_desc(lua_State* L, DmGameSystemDDF__LabelDesc *msg)
{
    lua_newtable(L);

    // size
    lua_pushstring(L, "size");
    lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->size));
    lua_settable(L, -3);

    // scale
    if (msg->scale != 0)
    {
        lua_pushstring(L, "scale");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->scale));
        lua_settable(L, -3);
    }

    // color
    lua_pushstring(L, "color");
    lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->color));
    lua_settable(L, -3);

    // outline
    lua_pushstring(L, "outline");
    lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->outline));
    lua_settable(L, -3);

    // shadow
    lua_pushstring(L, "shadow");
    lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->shadow));
    lua_settable(L, -3);

    // leading
    lua_pushstring(L, "leading");
    lua_pushnumber(L, (float)(msg->leading));
    lua_settable(L, -3);

    // tracking
    lua_pushstring(L, "tracking");
    lua_pushnumber(L, (float)(msg->tracking));
    lua_settable(L, -3);

    // pivot
    lua_pushstring(L, "pivot");
    lua_pushnumber(L, (DmGameSystemDDF__LabelDesc__Pivot)(msg->pivot));
    lua_settable(L, -3);

    // blend_mode
    lua_pushstring(L, "blend_mode");
    lua_pushnumber(L, (DmGameSystemDDF__LabelDesc__BlendMode)(msg->blend_mode));
    lua_settable(L, -3);

    // line_break
    lua_pushstring(L, "line_break");
    lua_pushboolean(L, (bool)(msg->line_break));
    lua_settable(L, -3);

    // text
    lua_pushstring(L, "text");
    lua_pushstring(L, (char*)(msg->text));
    lua_settable(L, -3);

    // font
    lua_pushstring(L, "font");
    lua_pushstring(L, (char*)(msg->font));
    lua_settable(L, -3);

    // material
    lua_pushstring(L, "material");
    lua_pushstring(L, (char*)(msg->material));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__set_text(lua_State* L, DmGameSystemDDF__SetText *msg)
{
    lua_newtable(L);

    // text
    lua_pushstring(L, "text");
    lua_pushstring(L, (char*)(msg->text));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__convex_hull(lua_State* L, DmGameSystemDDF__ConvexHull *msg)
{
    lua_newtable(L);

    // index
    lua_pushstring(L, "index");
    lua_pushnumber(L, (uint32_t)(msg->index));
    lua_settable(L, -3);

    // count
    lua_pushstring(L, "count");
    lua_pushnumber(L, (uint32_t)(msg->count));
    lua_settable(L, -3);

    // collision_group
    lua_pushstring(L, "collision_group");
    lua_pushstring(L, (char*)(msg->collision_group));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__cue(lua_State* L, DmGameSystemDDF__Cue *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // frame
    lua_pushstring(L, "frame");
    lua_pushnumber(L, (uint32_t)(msg->frame));
    lua_settable(L, -3);

    // value
    if (msg->has_value)
    {
        lua_pushstring(L, "value");
        lua_pushnumber(L, (float)(msg->value));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__animation(lua_State* L, DmGameSystemDDF__Animation *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // start_tile
    lua_pushstring(L, "start_tile");
    lua_pushnumber(L, (uint32_t)(msg->start_tile));
    lua_settable(L, -3);

    // end_tile
    lua_pushstring(L, "end_tile");
    lua_pushnumber(L, (uint32_t)(msg->end_tile));
    lua_settable(L, -3);

    // playback
    if (msg->has_playback)
    {
        lua_pushstring(L, "playback");
        lua_pushnumber(L, (DmGameSystemDDF__Playback)(msg->playback));
        lua_settable(L, -3);
    }

    // fps
    if (msg->has_fps)
    {
        lua_pushstring(L, "fps");
        lua_pushnumber(L, (uint32_t)(msg->fps));
        lua_settable(L, -3);
    }

    // flip_horizontal
    if (msg->has_flip_horizontal)
    {
        lua_pushstring(L, "flip_horizontal");
        lua_pushnumber(L, (uint32_t)(msg->flip_horizontal));
        lua_settable(L, -3);
    }

    // flip_vertical
    if (msg->has_flip_vertical)
    {
        lua_pushstring(L, "flip_vertical");
        lua_pushnumber(L, (uint32_t)(msg->flip_vertical));
        lua_settable(L, -3);
    }

    // cues
    lua_pushstring(L, "cues");
    lua_newtable(L);
    int cues_size = msg->n_cues;
    for (int i = 0; i < cues_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_system_ddf__cue(L, (DmGameSystemDDF__Cue*)(msg->cues[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__tile_set(lua_State* L, DmGameSystemDDF__TileSet *msg)
{
    lua_newtable(L);

    // image
    lua_pushstring(L, "image");
    lua_pushstring(L, (char*)(msg->image));
    lua_settable(L, -3);

    // tile_width
    lua_pushstring(L, "tile_width");
    lua_pushnumber(L, (uint32_t)(msg->tile_width));
    lua_settable(L, -3);

    // tile_height
    lua_pushstring(L, "tile_height");
    lua_pushnumber(L, (uint32_t)(msg->tile_height));
    lua_settable(L, -3);

    // tile_margin
    lua_pushstring(L, "tile_margin");
    lua_pushnumber(L, (uint32_t)(msg->tile_margin));
    lua_settable(L, -3);

    // tile_spacing
    lua_pushstring(L, "tile_spacing");
    lua_pushnumber(L, (uint32_t)(msg->tile_spacing));
    lua_settable(L, -3);

    // collision
    if (msg->collision != 0)
    {
        lua_pushstring(L, "collision");
        lua_pushstring(L, (char*)(msg->collision));
        lua_settable(L, -3);
    }

    // material_tag
    lua_pushstring(L, "material_tag");
    lua_pushstring(L, (char*)(msg->material_tag));
    lua_settable(L, -3);

    // convex_hulls
    lua_pushstring(L, "convex_hulls");
    lua_newtable(L);
    int convex_hulls_size = msg->n_convex_hulls;
    for (int i = 0; i < convex_hulls_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_system_ddf__convex_hull(L, (DmGameSystemDDF__ConvexHull*)(msg->convex_hulls[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // convex_hull_points
    lua_pushstring(L, "convex_hull_points");
    lua_newtable(L);
    int convex_hull_points_size = msg->n_convex_hull_points;
    for (int i = 0; i < convex_hull_points_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->convex_hull_points[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // collision_groups
    lua_pushstring(L, "collision_groups");
    lua_newtable(L);
    int collision_groups_size = msg->n_collision_groups;
    for (int i = 0; i < collision_groups_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->collision_groups[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // animations
    lua_pushstring(L, "animations");
    lua_newtable(L);
    int animations_size = msg->n_animations;
    for (int i = 0; i < animations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_system_ddf__animation(L, (DmGameSystemDDF__Animation*)(msg->animations[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // extrude_borders
    if (msg->has_extrude_borders)
    {
        lua_pushstring(L, "extrude_borders");
        lua_pushnumber(L, (uint32_t)(msg->extrude_borders));
        lua_settable(L, -3);
    }

    // inner_padding
    if (msg->has_inner_padding)
    {
        lua_pushstring(L, "inner_padding");
        lua_pushnumber(L, (uint32_t)(msg->inner_padding));
        lua_settable(L, -3);
    }

    // sprite_trim_mode
    if (msg->has_sprite_trim_mode)
    {
        lua_pushstring(L, "sprite_trim_mode");
        lua_pushnumber(L, (DmGameSystemDDF__SpriteTrimmingMode)(msg->sprite_trim_mode));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__tile_cell(lua_State* L, DmGameSystemDDF__TileCell *msg)
{
    lua_newtable(L);

    // x
    lua_pushstring(L, "x");
    lua_pushnumber(L, (int32_t)(msg->x));
    lua_settable(L, -3);

    // y
    lua_pushstring(L, "y");
    lua_pushnumber(L, (int32_t)(msg->y));
    lua_settable(L, -3);

    // tile
    lua_pushstring(L, "tile");
    lua_pushnumber(L, (uint32_t)(msg->tile));
    lua_settable(L, -3);

    // h_flip
    if (msg->has_h_flip)
    {
        lua_pushstring(L, "h_flip");
        lua_pushnumber(L, (uint32_t)(msg->h_flip));
        lua_settable(L, -3);
    }

    // v_flip
    if (msg->has_v_flip)
    {
        lua_pushstring(L, "v_flip");
        lua_pushnumber(L, (uint32_t)(msg->v_flip));
        lua_settable(L, -3);
    }

    // rotate90
    if (msg->has_rotate90)
    {
        lua_pushstring(L, "rotate90");
        lua_pushnumber(L, (uint32_t)(msg->rotate90));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__tile_layer(lua_State* L, DmGameSystemDDF__TileLayer *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // z
    lua_pushstring(L, "z");
    lua_pushnumber(L, (float)(msg->z));
    lua_settable(L, -3);

    // is_visible
    lua_pushstring(L, "is_visible");
    lua_pushnumber(L, (uint32_t)(msg->is_visible));
    lua_settable(L, -3);

    // id_hash
    if (msg->has_id_hash)
    {
        lua_pushstring(L, "id_hash");
        lua_pushnumber(L, (uint64_t)(msg->id_hash));
        lua_settable(L, -3);
    }

    // cell
    lua_pushstring(L, "cell");
    lua_newtable(L);
    int cell_size = msg->n_cell;
    for (int i = 0; i < cell_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_system_ddf__tile_cell(L, (DmGameSystemDDF__TileCell*)(msg->cell[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__tile_grid(lua_State* L, DmGameSystemDDF__TileGrid *msg)
{
    lua_newtable(L);

    // tile_set
    lua_pushstring(L, "tile_set");
    lua_pushstring(L, (char*)(msg->tile_set));
    lua_settable(L, -3);

    // layers
    lua_pushstring(L, "layers");
    lua_newtable(L);
    int layers_size = msg->n_layers;
    for (int i = 0; i < layers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_system_ddf__tile_layer(L, (DmGameSystemDDF__TileLayer*)(msg->layers[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // material
    if (msg->material != 0)
    {
        lua_pushstring(L, "material");
        lua_pushstring(L, (char*)(msg->material));
        lua_settable(L, -3);
    }

    // blend_mode
    if (msg->has_blend_mode)
    {
        lua_pushstring(L, "blend_mode");
        lua_pushnumber(L, (DmGameSystemDDF__TileGrid__BlendMode)(msg->blend_mode));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__set_tile(lua_State* L, DmGameSystemDDF__SetTile *msg)
{
    lua_newtable(L);

    // layer_id
    lua_pushstring(L, "layer_id");
    lua_pushnumber(L, (uint64_t)(msg->layer_id));
    lua_settable(L, -3);

    // position
    lua_pushstring(L, "position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
    lua_settable(L, -3);

    // tile
    if (msg->has_tile)
    {
        lua_pushstring(L, "tile");
        lua_pushnumber(L, (uint32_t)(msg->tile));
        lua_settable(L, -3);
    }

    // dx
    if (msg->has_dx)
    {
        lua_pushstring(L, "dx");
        lua_pushnumber(L, (uint32_t)(msg->dx));
        lua_settable(L, -3);
    }

    // dy
    if (msg->has_dy)
    {
        lua_pushstring(L, "dy");
        lua_pushnumber(L, (uint32_t)(msg->dy));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__set_constant_tile_map(lua_State* L, DmGameSystemDDF__SetConstantTileMap *msg)
{
    lua_newtable(L);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_pushnumber(L, (uint64_t)(msg->name_hash));
    lua_settable(L, -3);

    // value
    lua_pushstring(L, "value");
    lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->value));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__reset_constant_tile_map(lua_State* L, DmGameSystemDDF__ResetConstantTileMap *msg)
{
    lua_newtable(L);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_pushnumber(L, (uint64_t)(msg->name_hash));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__atlas_image(lua_State* L, DmGameSystemDDF__AtlasImage *msg)
{
    lua_newtable(L);

    // image
    lua_pushstring(L, "image");
    lua_pushstring(L, (char*)(msg->image));
    lua_settable(L, -3);

    // sprite_trim_mode
    if (msg->has_sprite_trim_mode)
    {
        lua_pushstring(L, "sprite_trim_mode");
        lua_pushnumber(L, (DmGameSystemDDF__SpriteTrimmingMode)(msg->sprite_trim_mode));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__atlas_animation(lua_State* L, DmGameSystemDDF__AtlasAnimation *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // images
    lua_pushstring(L, "images");
    lua_newtable(L);
    int images_size = msg->n_images;
    for (int i = 0; i < images_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_system_ddf__atlas_image(L, (DmGameSystemDDF__AtlasImage*)(msg->images[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // playback
    if (msg->has_playback)
    {
        lua_pushstring(L, "playback");
        lua_pushnumber(L, (DmGameSystemDDF__Playback)(msg->playback));
        lua_settable(L, -3);
    }

    // fps
    if (msg->has_fps)
    {
        lua_pushstring(L, "fps");
        lua_pushnumber(L, (uint32_t)(msg->fps));
        lua_settable(L, -3);
    }

    // flip_horizontal
    if (msg->has_flip_horizontal)
    {
        lua_pushstring(L, "flip_horizontal");
        lua_pushnumber(L, (uint32_t)(msg->flip_horizontal));
        lua_settable(L, -3);
    }

    // flip_vertical
    if (msg->has_flip_vertical)
    {
        lua_pushstring(L, "flip_vertical");
        lua_pushnumber(L, (uint32_t)(msg->flip_vertical));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__atlas(lua_State* L, DmGameSystemDDF__Atlas *msg)
{
    lua_newtable(L);

    // images
    lua_pushstring(L, "images");
    lua_newtable(L);
    int images_size = msg->n_images;
    for (int i = 0; i < images_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_system_ddf__atlas_image(L, (DmGameSystemDDF__AtlasImage*)(msg->images[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // animations
    lua_pushstring(L, "animations");
    lua_newtable(L);
    int animations_size = msg->n_animations;
    for (int i = 0; i < animations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_system_ddf__atlas_animation(L, (DmGameSystemDDF__AtlasAnimation*)(msg->animations[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // margin
    if (msg->has_margin)
    {
        lua_pushstring(L, "margin");
        lua_pushnumber(L, (uint32_t)(msg->margin));
        lua_settable(L, -3);
    }

    // extrude_borders
    if (msg->has_extrude_borders)
    {
        lua_pushstring(L, "extrude_borders");
        lua_pushnumber(L, (uint32_t)(msg->extrude_borders));
        lua_settable(L, -3);
    }

    // inner_padding
    if (msg->has_inner_padding)
    {
        lua_pushstring(L, "inner_padding");
        lua_pushnumber(L, (uint32_t)(msg->inner_padding));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_buffer_ddf__stream_desc(lua_State* L, DmBufferDDF__StreamDesc *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // value_type
    lua_pushstring(L, "value_type");
    lua_pushnumber(L, (DmBufferDDF__ValueType)(msg->value_type));
    lua_settable(L, -3);

    // value_count
    lua_pushstring(L, "value_count");
    lua_pushnumber(L, (uint32_t)(msg->value_count));
    lua_settable(L, -3);

    // ui
    lua_pushstring(L, "ui");
    lua_newtable(L);
    int ui_size = msg->n_ui;
    for (int i = 0; i < ui_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint32_t)(msg->ui[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // i
    lua_pushstring(L, "i");
    lua_newtable(L);
    int i_size = msg->n_i;
    for (int i = 0; i < i_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (int32_t)(msg->i[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // ui64
    lua_pushstring(L, "ui64");
    lua_newtable(L);
    int ui64_size = msg->n_ui64;
    for (int i = 0; i < ui64_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint64_t)(msg->ui64[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // i64
    lua_pushstring(L, "i64");
    lua_newtable(L);
    int i64_size = msg->n_i64;
    for (int i = 0; i < i64_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (int64_t)(msg->i64[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // f
    lua_pushstring(L, "f");
    lua_newtable(L);
    int f_size = msg->n_f;
    for (int i = 0; i < f_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->f[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_buffer_ddf__buffer_desc(lua_State* L, DmBufferDDF__BufferDesc *msg)
{
    lua_newtable(L);

    // streams
    lua_pushstring(L, "streams");
    lua_newtable(L);
    int streams_size = msg->n_streams;
    for (int i = 0; i < streams_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_buffer_ddf__stream_desc(L, (DmBufferDDF__StreamDesc*)(msg->streams[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_sound_ddf__sound_desc(lua_State* L, DmSoundDDF__SoundDesc *msg)
{
    lua_newtable(L);

    // sound
    lua_pushstring(L, "sound");
    lua_pushstring(L, (char*)(msg->sound));
    lua_settable(L, -3);

    // looping
    if (msg->has_looping)
    {
        lua_pushstring(L, "looping");
        lua_pushnumber(L, (int32_t)(msg->looping));
        lua_settable(L, -3);
    }

    // group
    if (msg->group != 0)
    {
        lua_pushstring(L, "group");
        lua_pushstring(L, (char*)(msg->group));
        lua_settable(L, -3);
    }

    // gain
    if (msg->has_gain)
    {
        lua_pushstring(L, "gain");
        lua_pushnumber(L, (float)(msg->gain));
        lua_settable(L, -3);
    }

    // pan
    if (msg->has_pan)
    {
        lua_pushstring(L, "pan");
        lua_pushnumber(L, (float)(msg->pan));
        lua_settable(L, -3);
    }

    // speed
    if (msg->has_speed)
    {
        lua_pushstring(L, "speed");
        lua_pushnumber(L, (float)(msg->speed));
        lua_settable(L, -3);
    }

    // loopcount
    if (msg->has_loopcount)
    {
        lua_pushstring(L, "loopcount");
        lua_pushnumber(L, (int32_t)(msg->loopcount));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_gamesys_ddf__camera_desc(lua_State* L, DmGamesysDDF__CameraDesc *msg)
{
    lua_newtable(L);

    // aspect_ratio
    lua_pushstring(L, "aspect_ratio");
    lua_pushnumber(L, (float)(msg->aspect_ratio));
    lua_settable(L, -3);

    // fov
    lua_pushstring(L, "fov");
    lua_pushnumber(L, (float)(msg->fov));
    lua_settable(L, -3);

    // near_z
    lua_pushstring(L, "near_z");
    lua_pushnumber(L, (float)(msg->near_z));
    lua_settable(L, -3);

    // far_z
    lua_pushstring(L, "far_z");
    lua_pushnumber(L, (float)(msg->far_z));
    lua_settable(L, -3);

    // auto_aspect_ratio
    if (msg->has_auto_aspect_ratio)
    {
        lua_pushstring(L, "auto_aspect_ratio");
        lua_pushnumber(L, (uint32_t)(msg->auto_aspect_ratio));
        lua_settable(L, -3);
    }

    // orthographic_projection
    if (msg->has_orthographic_projection)
    {
        lua_pushstring(L, "orthographic_projection");
        lua_pushnumber(L, (uint32_t)(msg->orthographic_projection));
        lua_settable(L, -3);
    }

    // orthographic_zoom
    if (msg->has_orthographic_zoom)
    {
        lua_pushstring(L, "orthographic_zoom");
        lua_pushnumber(L, (float)(msg->orthographic_zoom));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_gamesys_ddf__set_camera(lua_State* L, DmGamesysDDF__SetCamera *msg)
{
    lua_newtable(L);

    // aspect_ratio
    lua_pushstring(L, "aspect_ratio");
    lua_pushnumber(L, (float)(msg->aspect_ratio));
    lua_settable(L, -3);

    // fov
    lua_pushstring(L, "fov");
    lua_pushnumber(L, (float)(msg->fov));
    lua_settable(L, -3);

    // near_z
    lua_pushstring(L, "near_z");
    lua_pushnumber(L, (float)(msg->near_z));
    lua_settable(L, -3);

    // far_z
    lua_pushstring(L, "far_z");
    lua_pushnumber(L, (float)(msg->far_z));
    lua_settable(L, -3);

    // orthographic_projection
    if (msg->has_orthographic_projection)
    {
        lua_pushstring(L, "orthographic_projection");
        lua_pushnumber(L, (uint32_t)(msg->orthographic_projection));
        lua_settable(L, -3);
    }

    // orthographic_zoom
    if (msg->has_orthographic_zoom)
    {
        lua_pushstring(L, "orthographic_zoom");
        lua_pushnumber(L, (float)(msg->orthographic_zoom));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_gamesys_ddf__acquire_camera_focus(lua_State* L, DmGamesysDDF__AcquireCameraFocus *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_gamesys_ddf__release_camera_focus(lua_State* L, DmGamesysDDF__ReleaseCameraFocus *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_game_system_ddf__sprite_desc(lua_State* L, DmGameSystemDDF__SpriteDesc *msg)
{
    lua_newtable(L);

    // tile_set
    lua_pushstring(L, "tile_set");
    lua_pushstring(L, (char*)(msg->tile_set));
    lua_settable(L, -3);

    // default_animation
    lua_pushstring(L, "default_animation");
    lua_pushstring(L, (char*)(msg->default_animation));
    lua_settable(L, -3);

    // material
    if (msg->material != 0)
    {
        lua_pushstring(L, "material");
        lua_pushstring(L, (char*)(msg->material));
        lua_settable(L, -3);
    }

    // blend_mode
    if (msg->has_blend_mode)
    {
        lua_pushstring(L, "blend_mode");
        lua_pushnumber(L, (DmGameSystemDDF__SpriteDesc__BlendMode)(msg->blend_mode));
        lua_settable(L, -3);
    }

    // slice9
    if (msg->slice9 != 0)
    {
        lua_pushstring(L, "slice9");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->slice9));
        lua_settable(L, -3);
    }

    // size
    if (msg->size != 0)
    {
        lua_pushstring(L, "size");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->size));
        lua_settable(L, -3);
    }

    // size_mode
    if (msg->has_size_mode)
    {
        lua_pushstring(L, "size_mode");
        lua_pushnumber(L, (DmGameSystemDDF__SpriteDesc__SizeMode)(msg->size_mode));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__play_animation(lua_State* L, DmGameSystemDDF__PlayAnimation *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushnumber(L, (uint64_t)(msg->id));
    lua_settable(L, -3);

    // offset
    if (msg->has_offset)
    {
        lua_pushstring(L, "offset");
        lua_pushnumber(L, (float)(msg->offset));
        lua_settable(L, -3);
    }

    // playback_rate
    if (msg->has_playback_rate)
    {
        lua_pushstring(L, "playback_rate");
        lua_pushnumber(L, (float)(msg->playback_rate));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__animation_done(lua_State* L, DmGameSystemDDF__AnimationDone *msg)
{
    lua_newtable(L);

    // current_tile
    lua_pushstring(L, "current_tile");
    lua_pushnumber(L, (uint32_t)(msg->current_tile));
    lua_settable(L, -3);

    // id
    lua_pushstring(L, "id");
    lua_pushnumber(L, (uint64_t)(msg->id));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__set_flip_horizontal(lua_State* L, DmGameSystemDDF__SetFlipHorizontal *msg)
{
    lua_newtable(L);

    // flip
    lua_pushstring(L, "flip");
    lua_pushnumber(L, (uint32_t)(msg->flip));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__set_flip_vertical(lua_State* L, DmGameSystemDDF__SetFlipVertical *msg)
{
    lua_newtable(L);

    // flip
    lua_pushstring(L, "flip");
    lua_pushnumber(L, (uint32_t)(msg->flip));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__texture_set_animation(lua_State* L, DmGameSystemDDF__TextureSetAnimation *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // width
    lua_pushstring(L, "width");
    lua_pushnumber(L, (uint32_t)(msg->width));
    lua_settable(L, -3);

    // height
    lua_pushstring(L, "height");
    lua_pushnumber(L, (uint32_t)(msg->height));
    lua_settable(L, -3);

    // start
    lua_pushstring(L, "start");
    lua_pushnumber(L, (uint32_t)(msg->start));
    lua_settable(L, -3);

    // end
    lua_pushstring(L, "end");
    lua_pushnumber(L, (uint32_t)(msg->end));
    lua_settable(L, -3);

    // fps
    if (msg->has_fps)
    {
        lua_pushstring(L, "fps");
        lua_pushnumber(L, (uint32_t)(msg->fps));
        lua_settable(L, -3);
    }

    // playback
    if (msg->has_playback)
    {
        lua_pushstring(L, "playback");
        lua_pushnumber(L, (DmGameSystemDDF__Playback)(msg->playback));
        lua_settable(L, -3);
    }

    // flip_horizontal
    if (msg->has_flip_horizontal)
    {
        lua_pushstring(L, "flip_horizontal");
        lua_pushnumber(L, (uint32_t)(msg->flip_horizontal));
        lua_settable(L, -3);
    }

    // flip_vertical
    if (msg->has_flip_vertical)
    {
        lua_pushstring(L, "flip_vertical");
        lua_pushnumber(L, (uint32_t)(msg->flip_vertical));
        lua_settable(L, -3);
    }

    // is_animation
    if (msg->has_is_animation)
    {
        lua_pushstring(L, "is_animation");
        lua_pushnumber(L, (uint32_t)(msg->is_animation));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__sprite_geometry(lua_State* L, DmGameSystemDDF__SpriteGeometry *msg)
{
    lua_newtable(L);

    // width
    lua_pushstring(L, "width");
    lua_pushnumber(L, (uint32_t)(msg->width));
    lua_settable(L, -3);

    // height
    lua_pushstring(L, "height");
    lua_pushnumber(L, (uint32_t)(msg->height));
    lua_settable(L, -3);

    // vertices
    lua_pushstring(L, "vertices");
    lua_newtable(L);
    int vertices_size = msg->n_vertices;
    for (int i = 0; i < vertices_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->vertices[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // uvs
    lua_pushstring(L, "uvs");
    lua_newtable(L);
    int uvs_size = msg->n_uvs;
    for (int i = 0; i < uvs_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->uvs[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // indices
    lua_pushstring(L, "indices");
    lua_newtable(L);
    int indices_size = msg->n_indices;
    for (int i = 0; i < indices_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint32_t)(msg->indices[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__texture_set(lua_State* L, DmGameSystemDDF__TextureSet *msg)
{
    lua_newtable(L);

    // texture
    lua_pushstring(L, "texture");
    lua_pushstring(L, (char*)(msg->texture));
    lua_settable(L, -3);

    // animations
    lua_pushstring(L, "animations");
    lua_newtable(L);
    int animations_size = msg->n_animations;
    for (int i = 0; i < animations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_system_ddf__texture_set_animation(L, (DmGameSystemDDF__TextureSetAnimation*)(msg->animations[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // convex_hulls
    lua_pushstring(L, "convex_hulls");
    lua_newtable(L);
    int convex_hulls_size = msg->n_convex_hulls;
    for (int i = 0; i < convex_hulls_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_system_ddf__convex_hull(L, (DmGameSystemDDF__ConvexHull*)(msg->convex_hulls[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // tile_width
    if (msg->has_tile_width)
    {
        lua_pushstring(L, "tile_width");
        lua_pushnumber(L, (uint32_t)(msg->tile_width));
        lua_settable(L, -3);
    }

    // tile_height
    if (msg->has_tile_height)
    {
        lua_pushstring(L, "tile_height");
        lua_pushnumber(L, (uint32_t)(msg->tile_height));
        lua_settable(L, -3);
    }

    // tile_count
    if (msg->has_tile_count)
    {
        lua_pushstring(L, "tile_count");
        lua_pushnumber(L, (uint32_t)(msg->tile_count));
        lua_settable(L, -3);
    }

    // collision_hull_points
    lua_pushstring(L, "collision_hull_points");
    lua_newtable(L);
    int collision_hull_points_size = msg->n_collision_hull_points;
    for (int i = 0; i < collision_hull_points_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->collision_hull_points[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // collision_groups
    lua_pushstring(L, "collision_groups");
    lua_newtable(L);
    int collision_groups_size = msg->n_collision_groups;
    for (int i = 0; i < collision_groups_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->collision_groups[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // tex_coords
    lua_pushstring(L, "tex_coords");
    lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->tex_coords));
    lua_settable(L, -3);

    // tex_dims
    if (msg->tex_dims.data != 0)
    {
        lua_pushstring(L, "tex_dims");
        lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->tex_dims));
        lua_settable(L, -3);
    }

    // geometries
    lua_pushstring(L, "geometries");
    lua_newtable(L);
    int geometries_size = msg->n_geometries;
    for (int i = 0; i < geometries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_system_ddf__sprite_geometry(L, (DmGameSystemDDF__SpriteGeometry*)(msg->geometries[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // use_geometries
    if (msg->has_use_geometries)
    {
        lua_pushstring(L, "use_geometries");
        lua_pushnumber(L, (uint32_t)(msg->use_geometries));
        lua_settable(L, -3);
    }

    // frame_indices
    lua_pushstring(L, "frame_indices");
    lua_newtable(L);
    int frame_indices_size = msg->n_frame_indices;
    for (int i = 0; i < frame_indices_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint32_t)(msg->frame_indices[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__convex_shape(lua_State* L, DmPhysicsDDF__ConvexShape *msg)
{
    lua_newtable(L);

    // shape_type
    lua_pushstring(L, "shape_type");
    lua_pushnumber(L, (DmPhysicsDDF__ConvexShape__Type)(msg->shape_type));
    lua_settable(L, -3);

    // data
    lua_pushstring(L, "data");
    lua_newtable(L);
    int data_size = msg->n_data;
    for (int i = 0; i < data_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->data[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__collision_shape(lua_State* L, DmPhysicsDDF__CollisionShape *msg)
{
    lua_newtable(L);

    // shapes
    lua_pushstring(L, "shapes");
    lua_newtable(L);
    int shapes_size = msg->n_shapes;
    for (int i = 0; i < shapes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_physics_ddf__collision_shape__shape(L, (DmPhysicsDDF__CollisionShape__Shape*)(msg->shapes[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // data
    lua_pushstring(L, "data");
    lua_newtable(L);
    int data_size = msg->n_data;
    for (int i = 0; i < data_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->data[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__collision_shape__shape(lua_State* L, DmPhysicsDDF__CollisionShape__Shape *msg)
{
    lua_newtable(L);

    // shape_type
    lua_pushstring(L, "shape_type");
    lua_pushnumber(L, (DmPhysicsDDF__CollisionShape__Type)(msg->shape_type));
    lua_settable(L, -3);

    // position
    lua_pushstring(L, "position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
    lua_settable(L, -3);

    // rotation
    lua_pushstring(L, "rotation");
    lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
    lua_settable(L, -3);

    // index
    lua_pushstring(L, "index");
    lua_pushnumber(L, (uint32_t)(msg->index));
    lua_settable(L, -3);

    // count
    lua_pushstring(L, "count");
    lua_pushnumber(L, (uint32_t)(msg->count));
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__collision_object_desc(lua_State* L, DmPhysicsDDF__CollisionObjectDesc *msg)
{
    lua_newtable(L);

    // collision_shape
    if (msg->collision_shape != 0)
    {
        lua_pushstring(L, "collision_shape");
        lua_pushstring(L, (char*)(msg->collision_shape));
        lua_settable(L, -3);
    }

    // type
    lua_pushstring(L, "type");
    lua_pushnumber(L, (DmPhysicsDDF__CollisionObjectType)(msg->type));
    lua_settable(L, -3);

    // mass
    lua_pushstring(L, "mass");
    lua_pushnumber(L, (float)(msg->mass));
    lua_settable(L, -3);

    // friction
    lua_pushstring(L, "friction");
    lua_pushnumber(L, (float)(msg->friction));
    lua_settable(L, -3);

    // restitution
    lua_pushstring(L, "restitution");
    lua_pushnumber(L, (float)(msg->restitution));
    lua_settable(L, -3);

    // group
    lua_pushstring(L, "group");
    lua_pushstring(L, (char*)(msg->group));
    lua_settable(L, -3);

    // mask
    lua_pushstring(L, "mask");
    lua_newtable(L);
    int mask_size = msg->n_mask;
    for (int i = 0; i < mask_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->mask[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // embedded_collision_shape
    if (msg->embedded_collision_shape != 0)
    {
        lua_pushstring(L, "embedded_collision_shape");
        lua_pushdm_physics_ddf__collision_shape(L, (DmPhysicsDDF__CollisionShape*)(msg->embedded_collision_shape));
        lua_settable(L, -3);
    }

    // linear_damping
    if (msg->has_linear_damping)
    {
        lua_pushstring(L, "linear_damping");
        lua_pushnumber(L, (float)(msg->linear_damping));
        lua_settable(L, -3);
    }

    // angular_damping
    if (msg->has_angular_damping)
    {
        lua_pushstring(L, "angular_damping");
        lua_pushnumber(L, (float)(msg->angular_damping));
        lua_settable(L, -3);
    }

    // locked_rotation
    if (msg->has_locked_rotation)
    {
        lua_pushstring(L, "locked_rotation");
        lua_pushboolean(L, (bool)(msg->locked_rotation));
        lua_settable(L, -3);
    }

    // bullet
    if (msg->has_bullet)
    {
        lua_pushstring(L, "bullet");
        lua_pushboolean(L, (bool)(msg->bullet));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_physics_ddf__apply_force(lua_State* L, DmPhysicsDDF__ApplyForce *msg)
{
    lua_newtable(L);

    // force
    lua_pushstring(L, "force");
    lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->force));
    lua_settable(L, -3);

    // position
    lua_pushstring(L, "position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__collision_response(lua_State* L, DmPhysicsDDF__CollisionResponse *msg)
{
    lua_newtable(L);

    // other_id
    lua_pushstring(L, "other_id");
    lua_pushnumber(L, (uint64_t)(msg->other_id));
    lua_settable(L, -3);

    // group
    lua_pushstring(L, "group");
    lua_pushnumber(L, (uint64_t)(msg->group));
    lua_settable(L, -3);

    // other_position
    lua_pushstring(L, "other_position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->other_position));
    lua_settable(L, -3);

    // other_group
    lua_pushstring(L, "other_group");
    lua_pushnumber(L, (uint64_t)(msg->other_group));
    lua_settable(L, -3);

    // own_group
    lua_pushstring(L, "own_group");
    lua_pushnumber(L, (uint64_t)(msg->own_group));
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__contact_point_response(lua_State* L, DmPhysicsDDF__ContactPointResponse *msg)
{
    lua_newtable(L);

    // position
    lua_pushstring(L, "position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
    lua_settable(L, -3);

    // normal
    lua_pushstring(L, "normal");
    lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->normal));
    lua_settable(L, -3);

    // relative_velocity
    lua_pushstring(L, "relative_velocity");
    lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->relative_velocity));
    lua_settable(L, -3);

    // distance
    lua_pushstring(L, "distance");
    lua_pushnumber(L, (float)(msg->distance));
    lua_settable(L, -3);

    // applied_impulse
    lua_pushstring(L, "applied_impulse");
    lua_pushnumber(L, (float)(msg->applied_impulse));
    lua_settable(L, -3);

    // life_time
    lua_pushstring(L, "life_time");
    lua_pushnumber(L, (float)(msg->life_time));
    lua_settable(L, -3);

    // mass
    lua_pushstring(L, "mass");
    lua_pushnumber(L, (float)(msg->mass));
    lua_settable(L, -3);

    // other_mass
    lua_pushstring(L, "other_mass");
    lua_pushnumber(L, (float)(msg->other_mass));
    lua_settable(L, -3);

    // other_id
    lua_pushstring(L, "other_id");
    lua_pushnumber(L, (uint64_t)(msg->other_id));
    lua_settable(L, -3);

    // other_position
    lua_pushstring(L, "other_position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->other_position));
    lua_settable(L, -3);

    // group
    lua_pushstring(L, "group");
    lua_pushnumber(L, (uint64_t)(msg->group));
    lua_settable(L, -3);

    // other_group
    lua_pushstring(L, "other_group");
    lua_pushnumber(L, (uint64_t)(msg->other_group));
    lua_settable(L, -3);

    // own_group
    lua_pushstring(L, "own_group");
    lua_pushnumber(L, (uint64_t)(msg->own_group));
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__trigger_response(lua_State* L, DmPhysicsDDF__TriggerResponse *msg)
{
    lua_newtable(L);

    // other_id
    lua_pushstring(L, "other_id");
    lua_pushnumber(L, (uint64_t)(msg->other_id));
    lua_settable(L, -3);

    // enter
    lua_pushstring(L, "enter");
    lua_pushboolean(L, (bool)(msg->enter));
    lua_settable(L, -3);

    // group
    lua_pushstring(L, "group");
    lua_pushnumber(L, (uint64_t)(msg->group));
    lua_settable(L, -3);

    // other_group
    lua_pushstring(L, "other_group");
    lua_pushnumber(L, (uint64_t)(msg->other_group));
    lua_settable(L, -3);

    // own_group
    lua_pushstring(L, "own_group");
    lua_pushnumber(L, (uint64_t)(msg->own_group));
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__request_ray_cast(lua_State* L, DmPhysicsDDF__RequestRayCast *msg)
{
    lua_newtable(L);

    // from
    lua_pushstring(L, "from");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->from));
    lua_settable(L, -3);

    // to
    lua_pushstring(L, "to");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->to));
    lua_settable(L, -3);

    // mask
    lua_pushstring(L, "mask");
    lua_pushnumber(L, (uint32_t)(msg->mask));
    lua_settable(L, -3);

    // request_id
    lua_pushstring(L, "request_id");
    lua_pushnumber(L, (uint32_t)(msg->request_id));
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__ray_cast_response(lua_State* L, DmPhysicsDDF__RayCastResponse *msg)
{
    lua_newtable(L);

    // fraction
    lua_pushstring(L, "fraction");
    lua_pushnumber(L, (float)(msg->fraction));
    lua_settable(L, -3);

    // position
    lua_pushstring(L, "position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
    lua_settable(L, -3);

    // normal
    lua_pushstring(L, "normal");
    lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->normal));
    lua_settable(L, -3);

    // id
    lua_pushstring(L, "id");
    lua_pushnumber(L, (uint64_t)(msg->id));
    lua_settable(L, -3);

    // group
    lua_pushstring(L, "group");
    lua_pushnumber(L, (uint64_t)(msg->group));
    lua_settable(L, -3);

    // request_id
    lua_pushstring(L, "request_id");
    lua_pushnumber(L, (uint32_t)(msg->request_id));
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__ray_cast_missed(lua_State* L, DmPhysicsDDF__RayCastMissed *msg)
{
    lua_newtable(L);

    // request_id
    lua_pushstring(L, "request_id");
    lua_pushnumber(L, (uint32_t)(msg->request_id));
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__request_velocity(lua_State* L, DmPhysicsDDF__RequestVelocity *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_physics_ddf__velocity_response(lua_State* L, DmPhysicsDDF__VelocityResponse *msg)
{
    lua_newtable(L);

    // linear_velocity
    lua_pushstring(L, "linear_velocity");
    lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->linear_velocity));
    lua_settable(L, -3);

    // angular_velocity
    lua_pushstring(L, "angular_velocity");
    lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->angular_velocity));
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__set_grid_shape_hull(lua_State* L, DmPhysicsDDF__SetGridShapeHull *msg)
{
    lua_newtable(L);

    // shape
    lua_pushstring(L, "shape");
    lua_pushnumber(L, (uint32_t)(msg->shape));
    lua_settable(L, -3);

    // row
    lua_pushstring(L, "row");
    lua_pushnumber(L, (uint32_t)(msg->row));
    lua_settable(L, -3);

    // column
    lua_pushstring(L, "column");
    lua_pushnumber(L, (uint32_t)(msg->column));
    lua_settable(L, -3);

    // hull
    lua_pushstring(L, "hull");
    lua_pushnumber(L, (uint32_t)(msg->hull));
    lua_settable(L, -3);

    // flip_horizontal
    lua_pushstring(L, "flip_horizontal");
    lua_pushnumber(L, (uint32_t)(msg->flip_horizontal));
    lua_settable(L, -3);

    // flip_vertical
    lua_pushstring(L, "flip_vertical");
    lua_pushnumber(L, (uint32_t)(msg->flip_vertical));
    lua_settable(L, -3);

    // rotate90
    lua_pushstring(L, "rotate90");
    lua_pushnumber(L, (uint32_t)(msg->rotate90));
    lua_settable(L, -3);

}
static void lua_pushdm_physics_ddf__enable_grid_shape_layer(lua_State* L, DmPhysicsDDF__EnableGridShapeLayer *msg)
{
    lua_newtable(L);

    // shape
    lua_pushstring(L, "shape");
    lua_pushnumber(L, (uint32_t)(msg->shape));
    lua_settable(L, -3);

    // enable
    lua_pushstring(L, "enable");
    lua_pushnumber(L, (uint32_t)(msg->enable));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__factory_desc(lua_State* L, DmGameSystemDDF__FactoryDesc *msg)
{
    lua_newtable(L);

    // prototype
    lua_pushstring(L, "prototype");
    lua_pushstring(L, (char*)(msg->prototype));
    lua_settable(L, -3);

    // load_dynamically
    if (msg->has_load_dynamically)
    {
        lua_pushstring(L, "load_dynamically");
        lua_pushboolean(L, (bool)(msg->load_dynamically));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__collection_factory_desc(lua_State* L, DmGameSystemDDF__CollectionFactoryDesc *msg)
{
    lua_newtable(L);

    // prototype
    lua_pushstring(L, "prototype");
    lua_pushstring(L, (char*)(msg->prototype));
    lua_settable(L, -3);

    // load_dynamically
    if (msg->has_load_dynamically)
    {
        lua_pushstring(L, "load_dynamically");
        lua_pushboolean(L, (bool)(msg->load_dynamically));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__create(lua_State* L, DmGameSystemDDF__Create *msg)
{
    lua_newtable(L);

    // position
    lua_pushstring(L, "position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
    lua_settable(L, -3);

    // rotation
    lua_pushstring(L, "rotation");
    lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
    lua_settable(L, -3);

    // id
    if (msg->has_id)
    {
        lua_pushstring(L, "id");
        lua_pushnumber(L, (uint64_t)(msg->id));
        lua_settable(L, -3);
    }

    // scale
    if (msg->has_scale)
    {
        lua_pushstring(L, "scale");
        lua_pushnumber(L, (float)(msg->scale));
        lua_settable(L, -3);
    }

    // scale3
    if (msg->scale3 != 0)
    {
        lua_pushstring(L, "scale3");
        lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->scale3));
        lua_settable(L, -3);
    }

    // index
    if (msg->has_index)
    {
        lua_pushstring(L, "index");
        lua_pushnumber(L, (uint32_t)(msg->index));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__collection_proxy_desc(lua_State* L, DmGameSystemDDF__CollectionProxyDesc *msg)
{
    lua_newtable(L);

    // collection
    lua_pushstring(L, "collection");
    lua_pushstring(L, (char*)(msg->collection));
    lua_settable(L, -3);

    // exclude
    if (msg->has_exclude)
    {
        lua_pushstring(L, "exclude");
        lua_pushboolean(L, (bool)(msg->exclude));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__set_time_step(lua_State* L, DmGameSystemDDF__SetTimeStep *msg)
{
    lua_newtable(L);

    // factor
    lua_pushstring(L, "factor");
    lua_pushnumber(L, (float)(msg->factor));
    lua_settable(L, -3);

    // mode
    lua_pushstring(L, "mode");
    lua_pushnumber(L, (DmGameSystemDDF__TimeStepMode)(msg->mode));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__light_desc(lua_State* L, DmGameSystemDDF__LightDesc *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // type
    lua_pushstring(L, "type");
    lua_pushnumber(L, (DmGameSystemDDF__LightType)(msg->type));
    lua_settable(L, -3);

    // intensity
    lua_pushstring(L, "intensity");
    lua_pushnumber(L, (float)(msg->intensity));
    lua_settable(L, -3);

    // color
    lua_pushstring(L, "color");
    lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->color));
    lua_settable(L, -3);

    // range
    lua_pushstring(L, "range");
    lua_pushnumber(L, (float)(msg->range));
    lua_settable(L, -3);

    // decay
    lua_pushstring(L, "decay");
    lua_pushnumber(L, (float)(msg->decay));
    lua_settable(L, -3);

    // cone_angle
    if (msg->has_cone_angle)
    {
        lua_pushstring(L, "cone_angle");
        lua_pushnumber(L, (float)(msg->cone_angle));
        lua_settable(L, -3);
    }

    // penumbra_angle
    if (msg->has_penumbra_angle)
    {
        lua_pushstring(L, "penumbra_angle");
        lua_pushnumber(L, (float)(msg->penumbra_angle));
        lua_settable(L, -3);
    }

    // drop_off
    if (msg->has_drop_off)
    {
        lua_pushstring(L, "drop_off");
        lua_pushnumber(L, (float)(msg->drop_off));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__set_light(lua_State* L, DmGameSystemDDF__SetLight *msg)
{
    lua_newtable(L);

    // position
    lua_pushstring(L, "position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
    lua_settable(L, -3);

    // rotation
    lua_pushstring(L, "rotation");
    lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
    lua_settable(L, -3);

    // light
    lua_pushstring(L, "light");
    lua_pushdm_game_system_ddf__light_desc(L, (DmGameSystemDDF__LightDesc*)(msg->light));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__set_view_projection(lua_State* L, DmGameSystemDDF__SetViewProjection *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushnumber(L, (uint64_t)(msg->id));
    lua_settable(L, -3);

    // view
    lua_pushstring(L, "view");
    lua_pushdm_math__matrix4(L, (DmMath__Matrix4*)(msg->view));
    lua_settable(L, -3);

    // projection
    lua_pushstring(L, "projection");
    lua_pushdm_math__matrix4(L, (DmMath__Matrix4*)(msg->projection));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__play_sound(lua_State* L, DmGameSystemDDF__PlaySound *msg)
{
    lua_newtable(L);

    // delay
    if (msg->has_delay)
    {
        lua_pushstring(L, "delay");
        lua_pushnumber(L, (float)(msg->delay));
        lua_settable(L, -3);
    }

    // gain
    if (msg->has_gain)
    {
        lua_pushstring(L, "gain");
        lua_pushnumber(L, (float)(msg->gain));
        lua_settable(L, -3);
    }

    // pan
    if (msg->has_pan)
    {
        lua_pushstring(L, "pan");
        lua_pushnumber(L, (float)(msg->pan));
        lua_settable(L, -3);
    }

    // speed
    if (msg->has_speed)
    {
        lua_pushstring(L, "speed");
        lua_pushnumber(L, (float)(msg->speed));
        lua_settable(L, -3);
    }

    // play_id
    if (msg->has_play_id)
    {
        lua_pushstring(L, "play_id");
        lua_pushnumber(L, (uint32_t)(msg->play_id));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__stop_sound(lua_State* L, DmGameSystemDDF__StopSound *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_game_system_ddf__pause_sound(lua_State* L, DmGameSystemDDF__PauseSound *msg)
{
    lua_newtable(L);

    // pause
    if (msg->has_pause)
    {
        lua_pushstring(L, "pause");
        lua_pushboolean(L, (bool)(msg->pause));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__sound_done(lua_State* L, DmGameSystemDDF__SoundDone *msg)
{
    lua_newtable(L);

    // play_id
    if (msg->has_play_id)
    {
        lua_pushstring(L, "play_id");
        lua_pushnumber(L, (int32_t)(msg->play_id));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__set_gain(lua_State* L, DmGameSystemDDF__SetGain *msg)
{
    lua_newtable(L);

    // gain
    if (msg->has_gain)
    {
        lua_pushstring(L, "gain");
        lua_pushnumber(L, (float)(msg->gain));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__set_pan(lua_State* L, DmGameSystemDDF__SetPan *msg)
{
    lua_newtable(L);

    // pan
    if (msg->has_pan)
    {
        lua_pushstring(L, "pan");
        lua_pushnumber(L, (float)(msg->pan));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__set_speed(lua_State* L, DmGameSystemDDF__SetSpeed *msg)
{
    lua_newtable(L);

    // speed
    if (msg->has_speed)
    {
        lua_pushstring(L, "speed");
        lua_pushnumber(L, (float)(msg->speed));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__play_particle_fx(lua_State* L, DmGameSystemDDF__PlayParticleFX *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_game_system_ddf__stop_particle_fx(lua_State* L, DmGameSystemDDF__StopParticleFX *msg)
{
    lua_newtable(L);

    // clear_particles
    if (msg->has_clear_particles)
    {
        lua_pushstring(L, "clear_particles");
        lua_pushboolean(L, (bool)(msg->clear_particles));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__set_constant_particle_fx(lua_State* L, DmGameSystemDDF__SetConstantParticleFX *msg)
{
    lua_newtable(L);

    // emitter_id
    lua_pushstring(L, "emitter_id");
    lua_pushnumber(L, (uint64_t)(msg->emitter_id));
    lua_settable(L, -3);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_pushnumber(L, (uint64_t)(msg->name_hash));
    lua_settable(L, -3);

    // value
    lua_pushstring(L, "value");
    lua_pushdm_math__matrix4(L, (DmMath__Matrix4*)(msg->value));
    lua_settable(L, -3);

    // is_matrix4
    if (msg->has_is_matrix4)
    {
        lua_pushstring(L, "is_matrix4");
        lua_pushboolean(L, (bool)(msg->is_matrix4));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__reset_constant_particle_fx(lua_State* L, DmGameSystemDDF__ResetConstantParticleFX *msg)
{
    lua_newtable(L);

    // emitter_id
    lua_pushstring(L, "emitter_id");
    lua_pushnumber(L, (uint64_t)(msg->emitter_id));
    lua_settable(L, -3);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_pushnumber(L, (uint64_t)(msg->name_hash));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__set_constant(lua_State* L, DmGameSystemDDF__SetConstant *msg)
{
    lua_newtable(L);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_pushnumber(L, (uint64_t)(msg->name_hash));
    lua_settable(L, -3);

    // value
    lua_pushstring(L, "value");
    lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->value));
    lua_settable(L, -3);

    // index
    if (msg->has_index)
    {
        lua_pushstring(L, "index");
        lua_pushnumber(L, (int32_t)(msg->index));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_system_ddf__reset_constant(lua_State* L, DmGameSystemDDF__ResetConstant *msg)
{
    lua_newtable(L);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_pushnumber(L, (uint64_t)(msg->name_hash));
    lua_settable(L, -3);

}
static void lua_pushdm_game_system_ddf__set_scale(lua_State* L, DmGameSystemDDF__SetScale *msg)
{
    lua_newtable(L);

    // scale
    lua_pushstring(L, "scale");
    lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->scale));
    lua_settable(L, -3);

}
static void lua_pushdm_gui_ddf__node_desc(lua_State* L, DmGuiDDF__NodeDesc *msg)
{
    lua_newtable(L);

    // position
    if (msg->position != 0)
    {
        lua_pushstring(L, "position");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->position));
        lua_settable(L, -3);
    }

    // rotation
    if (msg->rotation != 0)
    {
        lua_pushstring(L, "rotation");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->rotation));
        lua_settable(L, -3);
    }

    // scale
    if (msg->scale != 0)
    {
        lua_pushstring(L, "scale");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->scale));
        lua_settable(L, -3);
    }

    // size
    if (msg->size != 0)
    {
        lua_pushstring(L, "size");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->size));
        lua_settable(L, -3);
    }

    // color
    if (msg->color != 0)
    {
        lua_pushstring(L, "color");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->color));
        lua_settable(L, -3);
    }

    // type
    if (msg->has_type)
    {
        lua_pushstring(L, "type");
        lua_pushnumber(L, (DmGuiDDF__NodeDesc__Type)(msg->type));
        lua_settable(L, -3);
    }

    // blend_mode
    if (msg->has_blend_mode)
    {
        lua_pushstring(L, "blend_mode");
        lua_pushnumber(L, (DmGuiDDF__NodeDesc__BlendMode)(msg->blend_mode));
        lua_settable(L, -3);
    }

    // text
    if (msg->text != 0)
    {
        lua_pushstring(L, "text");
        lua_pushstring(L, (char*)(msg->text));
        lua_settable(L, -3);
    }

    // texture
    if (msg->texture != 0)
    {
        lua_pushstring(L, "texture");
        lua_pushstring(L, (char*)(msg->texture));
        lua_settable(L, -3);
    }

    // font
    if (msg->font != 0)
    {
        lua_pushstring(L, "font");
        lua_pushstring(L, (char*)(msg->font));
        lua_settable(L, -3);
    }

    // id
    if (msg->id != 0)
    {
        lua_pushstring(L, "id");
        lua_pushstring(L, (char*)(msg->id));
        lua_settable(L, -3);
    }

    // xanchor
    if (msg->has_xanchor)
    {
        lua_pushstring(L, "xanchor");
        lua_pushnumber(L, (DmGuiDDF__NodeDesc__XAnchor)(msg->xanchor));
        lua_settable(L, -3);
    }

    // yanchor
    if (msg->has_yanchor)
    {
        lua_pushstring(L, "yanchor");
        lua_pushnumber(L, (DmGuiDDF__NodeDesc__YAnchor)(msg->yanchor));
        lua_settable(L, -3);
    }

    // pivot
    if (msg->has_pivot)
    {
        lua_pushstring(L, "pivot");
        lua_pushnumber(L, (DmGuiDDF__NodeDesc__Pivot)(msg->pivot));
        lua_settable(L, -3);
    }

    // outline
    if (msg->outline != 0)
    {
        lua_pushstring(L, "outline");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->outline));
        lua_settable(L, -3);
    }

    // shadow
    if (msg->shadow != 0)
    {
        lua_pushstring(L, "shadow");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->shadow));
        lua_settable(L, -3);
    }

    // adjust_mode
    if (msg->has_adjust_mode)
    {
        lua_pushstring(L, "adjust_mode");
        lua_pushnumber(L, (DmGuiDDF__NodeDesc__AdjustMode)(msg->adjust_mode));
        lua_settable(L, -3);
    }

    // line_break
    if (msg->has_line_break)
    {
        lua_pushstring(L, "line_break");
        lua_pushboolean(L, (bool)(msg->line_break));
        lua_settable(L, -3);
    }

    // parent
    if (msg->parent != 0)
    {
        lua_pushstring(L, "parent");
        lua_pushstring(L, (char*)(msg->parent));
        lua_settable(L, -3);
    }

    // layer
    if (msg->layer != 0)
    {
        lua_pushstring(L, "layer");
        lua_pushstring(L, (char*)(msg->layer));
        lua_settable(L, -3);
    }

    // inherit_alpha
    if (msg->has_inherit_alpha)
    {
        lua_pushstring(L, "inherit_alpha");
        lua_pushboolean(L, (bool)(msg->inherit_alpha));
        lua_settable(L, -3);
    }

    // slice9
    if (msg->slice9 != 0)
    {
        lua_pushstring(L, "slice9");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->slice9));
        lua_settable(L, -3);
    }

    // outerBounds
    if (msg->has_outerbounds)
    {
        lua_pushstring(L, "outerBounds");
        lua_pushnumber(L, (DmGuiDDF__NodeDesc__PieBounds)(msg->outerbounds));
        lua_settable(L, -3);
    }

    // innerRadius
    if (msg->has_innerradius)
    {
        lua_pushstring(L, "innerRadius");
        lua_pushnumber(L, (float)(msg->innerradius));
        lua_settable(L, -3);
    }

    // perimeterVertices
    if (msg->has_perimetervertices)
    {
        lua_pushstring(L, "perimeterVertices");
        lua_pushnumber(L, (int32_t)(msg->perimetervertices));
        lua_settable(L, -3);
    }

    // pieFillAngle
    if (msg->has_piefillangle)
    {
        lua_pushstring(L, "pieFillAngle");
        lua_pushnumber(L, (float)(msg->piefillangle));
        lua_settable(L, -3);
    }

    // clipping_mode
    if (msg->has_clipping_mode)
    {
        lua_pushstring(L, "clipping_mode");
        lua_pushnumber(L, (DmGuiDDF__NodeDesc__ClippingMode)(msg->clipping_mode));
        lua_settable(L, -3);
    }

    // clipping_visible
    if (msg->has_clipping_visible)
    {
        lua_pushstring(L, "clipping_visible");
        lua_pushboolean(L, (bool)(msg->clipping_visible));
        lua_settable(L, -3);
    }

    // clipping_inverted
    if (msg->has_clipping_inverted)
    {
        lua_pushstring(L, "clipping_inverted");
        lua_pushboolean(L, (bool)(msg->clipping_inverted));
        lua_settable(L, -3);
    }

    // alpha
    if (msg->has_alpha)
    {
        lua_pushstring(L, "alpha");
        lua_pushnumber(L, (float)(msg->alpha));
        lua_settable(L, -3);
    }

    // outline_alpha
    if (msg->has_outline_alpha)
    {
        lua_pushstring(L, "outline_alpha");
        lua_pushnumber(L, (float)(msg->outline_alpha));
        lua_settable(L, -3);
    }

    // shadow_alpha
    if (msg->has_shadow_alpha)
    {
        lua_pushstring(L, "shadow_alpha");
        lua_pushnumber(L, (float)(msg->shadow_alpha));
        lua_settable(L, -3);
    }

    // overridden_fields
    lua_pushstring(L, "overridden_fields");
    lua_newtable(L);
    int overridden_fields_size = msg->n_overridden_fields;
    for (int i = 0; i < overridden_fields_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint32_t)(msg->overridden_fields[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // template
    if (msg->template_ != 0)
    {
        lua_pushstring(L, "template");
        lua_pushstring(L, (char*)(msg->template_));
        lua_settable(L, -3);
    }

    // template_node_child
    if (msg->has_template_node_child)
    {
        lua_pushstring(L, "template_node_child");
        lua_pushboolean(L, (bool)(msg->template_node_child));
        lua_settable(L, -3);
    }

    // text_leading
    if (msg->has_text_leading)
    {
        lua_pushstring(L, "text_leading");
        lua_pushnumber(L, (float)(msg->text_leading));
        lua_settable(L, -3);
    }

    // text_tracking
    if (msg->has_text_tracking)
    {
        lua_pushstring(L, "text_tracking");
        lua_pushnumber(L, (float)(msg->text_tracking));
        lua_settable(L, -3);
    }

    // size_mode
    if (msg->has_size_mode)
    {
        lua_pushstring(L, "size_mode");
        lua_pushnumber(L, (DmGuiDDF__NodeDesc__SizeMode)(msg->size_mode));
        lua_settable(L, -3);
    }

    // spine_scene
    if (msg->spine_scene != 0)
    {
        lua_pushstring(L, "spine_scene");
        lua_pushstring(L, (char*)(msg->spine_scene));
        lua_settable(L, -3);
    }

    // spine_default_animation
    if (msg->spine_default_animation != 0)
    {
        lua_pushstring(L, "spine_default_animation");
        lua_pushstring(L, (char*)(msg->spine_default_animation));
        lua_settable(L, -3);
    }

    // spine_skin
    if (msg->spine_skin != 0)
    {
        lua_pushstring(L, "spine_skin");
        lua_pushstring(L, (char*)(msg->spine_skin));
        lua_settable(L, -3);
    }

    // spine_node_child
    if (msg->has_spine_node_child)
    {
        lua_pushstring(L, "spine_node_child");
        lua_pushboolean(L, (bool)(msg->spine_node_child));
        lua_settable(L, -3);
    }

    // particlefx
    if (msg->particlefx != 0)
    {
        lua_pushstring(L, "particlefx");
        lua_pushstring(L, (char*)(msg->particlefx));
        lua_settable(L, -3);
    }

    // custom_type
    if (msg->has_custom_type)
    {
        lua_pushstring(L, "custom_type");
        lua_pushnumber(L, (uint32_t)(msg->custom_type));
        lua_settable(L, -3);
    }

    // enabled
    if (msg->has_enabled)
    {
        lua_pushstring(L, "enabled");
        lua_pushboolean(L, (bool)(msg->enabled));
        lua_settable(L, -3);
    }

    // visible
    if (msg->has_visible)
    {
        lua_pushstring(L, "visible");
        lua_pushboolean(L, (bool)(msg->visible));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_gui_ddf__scene_desc(lua_State* L, DmGuiDDF__SceneDesc *msg)
{
    lua_newtable(L);

    // script
    lua_pushstring(L, "script");
    lua_pushstring(L, (char*)(msg->script));
    lua_settable(L, -3);

    // fonts
    lua_pushstring(L, "fonts");
    lua_newtable(L);
    int fonts_size = msg->n_fonts;
    for (int i = 0; i < fonts_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_gui_ddf__scene_desc__font_desc(L, (DmGuiDDF__SceneDesc__FontDesc*)(msg->fonts[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // textures
    lua_pushstring(L, "textures");
    lua_newtable(L);
    int textures_size = msg->n_textures;
    for (int i = 0; i < textures_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_gui_ddf__scene_desc__texture_desc(L, (DmGuiDDF__SceneDesc__TextureDesc*)(msg->textures[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // background_color
    if (msg->background_color != 0)
    {
        lua_pushstring(L, "background_color");
        lua_pushdm_math__vector4(L, (DmMath__Vector4*)(msg->background_color));
        lua_settable(L, -3);
    }

    // nodes
    lua_pushstring(L, "nodes");
    lua_newtable(L);
    int nodes_size = msg->n_nodes;
    for (int i = 0; i < nodes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_gui_ddf__node_desc(L, (DmGuiDDF__NodeDesc*)(msg->nodes[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // layers
    lua_pushstring(L, "layers");
    lua_newtable(L);
    int layers_size = msg->n_layers;
    for (int i = 0; i < layers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_gui_ddf__scene_desc__layer_desc(L, (DmGuiDDF__SceneDesc__LayerDesc*)(msg->layers[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // material
    if (msg->material != 0)
    {
        lua_pushstring(L, "material");
        lua_pushstring(L, (char*)(msg->material));
        lua_settable(L, -3);
    }

    // layouts
    lua_pushstring(L, "layouts");
    lua_newtable(L);
    int layouts_size = msg->n_layouts;
    for (int i = 0; i < layouts_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_gui_ddf__scene_desc__layout_desc(L, (DmGuiDDF__SceneDesc__LayoutDesc*)(msg->layouts[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // adjust_reference
    if (msg->has_adjust_reference)
    {
        lua_pushstring(L, "adjust_reference");
        lua_pushnumber(L, (DmGuiDDF__SceneDesc__AdjustReference)(msg->adjust_reference));
        lua_settable(L, -3);
    }

    // max_nodes
    if (msg->has_max_nodes)
    {
        lua_pushstring(L, "max_nodes");
        lua_pushnumber(L, (uint32_t)(msg->max_nodes));
        lua_settable(L, -3);
    }

    // spine_scenes
    lua_pushstring(L, "spine_scenes");
    lua_newtable(L);
    int spine_scenes_size = msg->n_spine_scenes;
    for (int i = 0; i < spine_scenes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_gui_ddf__scene_desc__spine_scene_desc(L, (DmGuiDDF__SceneDesc__SpineSceneDesc*)(msg->spine_scenes[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // particlefxs
    lua_pushstring(L, "particlefxs");
    lua_newtable(L);
    int particlefxs_size = msg->n_particlefxs;
    for (int i = 0; i < particlefxs_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_gui_ddf__scene_desc__particle_fxdesc(L, (DmGuiDDF__SceneDesc__ParticleFXDesc*)(msg->particlefxs[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // resources
    lua_pushstring(L, "resources");
    lua_newtable(L);
    int resources_size = msg->n_resources;
    for (int i = 0; i < resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_gui_ddf__scene_desc__resource_desc(L, (DmGuiDDF__SceneDesc__ResourceDesc*)(msg->resources[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_gui_ddf__scene_desc__font_desc(lua_State* L, DmGuiDDF__SceneDesc__FontDesc *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // font
    lua_pushstring(L, "font");
    lua_pushstring(L, (char*)(msg->font));
    lua_settable(L, -3);

}
static void lua_pushdm_gui_ddf__scene_desc__texture_desc(lua_State* L, DmGuiDDF__SceneDesc__TextureDesc *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // texture
    lua_pushstring(L, "texture");
    lua_pushstring(L, (char*)(msg->texture));
    lua_settable(L, -3);

}
static void lua_pushdm_gui_ddf__scene_desc__layer_desc(lua_State* L, DmGuiDDF__SceneDesc__LayerDesc *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

}
static void lua_pushdm_gui_ddf__scene_desc__layout_desc(lua_State* L, DmGuiDDF__SceneDesc__LayoutDesc *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // nodes
    lua_pushstring(L, "nodes");
    lua_newtable(L);
    int nodes_size = msg->n_nodes;
    for (int i = 0; i < nodes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_gui_ddf__node_desc(L, (DmGuiDDF__NodeDesc*)(msg->nodes[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_gui_ddf__scene_desc__spine_scene_desc(lua_State* L, DmGuiDDF__SceneDesc__SpineSceneDesc *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // spine_scene
    lua_pushstring(L, "spine_scene");
    lua_pushstring(L, (char*)(msg->spine_scene));
    lua_settable(L, -3);

}
static void lua_pushdm_gui_ddf__scene_desc__resource_desc(lua_State* L, DmGuiDDF__SceneDesc__ResourceDesc *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // path
    lua_pushstring(L, "path");
    lua_pushstring(L, (char*)(msg->path));
    lua_settable(L, -3);

}
static void lua_pushdm_gui_ddf__scene_desc__particle_fxdesc(lua_State* L, DmGuiDDF__SceneDesc__ParticleFXDesc *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // particlefx
    lua_pushstring(L, "particlefx");
    lua_pushstring(L, (char*)(msg->particlefx));
    lua_settable(L, -3);

}
static void lua_pushdm_gui_ddf__layout_changed(lua_State* L, DmGuiDDF__LayoutChanged *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushnumber(L, (uint64_t)(msg->id));
    lua_settable(L, -3);

    // previous_id
    lua_pushstring(L, "previous_id");
    lua_pushnumber(L, (uint64_t)(msg->previous_id));
    lua_settable(L, -3);

}
static void lua_pushdm_live_update_ddf__hash_digest(lua_State* L, DmLiveUpdateDDF__HashDigest *msg)
{
    lua_newtable(L);

    // data
    lua_pushstring(L, "data");
    lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->data));
    lua_settable(L, -3);

}
static void lua_pushdm_live_update_ddf__manifest_header(lua_State* L, DmLiveUpdateDDF__ManifestHeader *msg)
{
    lua_newtable(L);

    // magic_number
    lua_pushstring(L, "magic_number");
    lua_pushnumber(L, (int32_t)(msg->magic_number));
    lua_settable(L, -3);

    // version
    lua_pushstring(L, "version");
    lua_pushnumber(L, (int32_t)(msg->version));
    lua_settable(L, -3);

    // resource_hash_algorithm
    lua_pushstring(L, "resource_hash_algorithm");
    lua_pushnumber(L, (DmLiveUpdateDDF__HashAlgorithm)(msg->resource_hash_algorithm));
    lua_settable(L, -3);

    // signature_hash_algorithm
    lua_pushstring(L, "signature_hash_algorithm");
    lua_pushnumber(L, (DmLiveUpdateDDF__HashAlgorithm)(msg->signature_hash_algorithm));
    lua_settable(L, -3);

    // signature_sign_algorithm
    lua_pushstring(L, "signature_sign_algorithm");
    lua_pushnumber(L, (DmLiveUpdateDDF__SignAlgorithm)(msg->signature_sign_algorithm));
    lua_settable(L, -3);

    // project_identifier
    lua_pushstring(L, "project_identifier");
    lua_pushdm_live_update_ddf__hash_digest(L, (DmLiveUpdateDDF__HashDigest*)(msg->project_identifier));
    lua_settable(L, -3);

}
static void lua_pushdm_live_update_ddf__resource_entry(lua_State* L, DmLiveUpdateDDF__ResourceEntry *msg)
{
    lua_newtable(L);

    // url
    lua_pushstring(L, "url");
    lua_pushstring(L, (char*)(msg->url));
    lua_settable(L, -3);

    // url_hash
    lua_pushstring(L, "url_hash");
    lua_pushnumber(L, (uint64_t)(msg->url_hash));
    lua_settable(L, -3);

    // hash
    lua_pushstring(L, "hash");
    lua_pushdm_live_update_ddf__hash_digest(L, (DmLiveUpdateDDF__HashDigest*)(msg->hash));
    lua_settable(L, -3);

    // dependants
    lua_pushstring(L, "dependants");
    lua_newtable(L);
    int dependants_size = msg->n_dependants;
    for (int i = 0; i < dependants_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint32_t)(msg->dependants[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // flags
    lua_pushstring(L, "flags");
    lua_pushnumber(L, (uint32_t)(msg->flags));
    lua_settable(L, -3);

}
static void lua_pushdm_live_update_ddf__manifest_data(lua_State* L, DmLiveUpdateDDF__ManifestData *msg)
{
    lua_newtable(L);

    // header
    lua_pushstring(L, "header");
    lua_pushdm_live_update_ddf__manifest_header(L, (DmLiveUpdateDDF__ManifestHeader*)(msg->header));
    lua_settable(L, -3);

    // engine_versions
    lua_pushstring(L, "engine_versions");
    lua_newtable(L);
    int engine_versions_size = msg->n_engine_versions;
    for (int i = 0; i < engine_versions_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_live_update_ddf__hash_digest(L, (DmLiveUpdateDDF__HashDigest*)(msg->engine_versions[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // resources
    lua_pushstring(L, "resources");
    lua_newtable(L);
    int resources_size = msg->n_resources;
    for (int i = 0; i < resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_live_update_ddf__resource_entry(L, (DmLiveUpdateDDF__ResourceEntry*)(msg->resources[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_live_update_ddf__manifest_file(lua_State* L, DmLiveUpdateDDF__ManifestFile *msg)
{
    lua_newtable(L);

    // data
    lua_pushstring(L, "data");
    lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->data));
    lua_settable(L, -3);

    // signature
    lua_pushstring(L, "signature");
    lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->signature));
    lua_settable(L, -3);

    // archive_identifier
    lua_pushstring(L, "archive_identifier");
    lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->archive_identifier));
    lua_settable(L, -3);

}
static void lua_pushdm_resource_ddf__reload(lua_State* L, DmResourceDDF__Reload *msg)
{
    lua_newtable(L);

    // resources
    lua_pushstring(L, "resources");
    lua_newtable(L);
    int resources_size = msg->n_resources;
    for (int i = 0; i < resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->resources[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_graphics__cubemap(lua_State* L, DmGraphics__Cubemap *msg)
{
    lua_newtable(L);

    // right
    lua_pushstring(L, "right");
    lua_pushstring(L, (char*)(msg->right));
    lua_settable(L, -3);

    // left
    lua_pushstring(L, "left");
    lua_pushstring(L, (char*)(msg->left));
    lua_settable(L, -3);

    // top
    lua_pushstring(L, "top");
    lua_pushstring(L, (char*)(msg->top));
    lua_settable(L, -3);

    // bottom
    lua_pushstring(L, "bottom");
    lua_pushstring(L, (char*)(msg->bottom));
    lua_settable(L, -3);

    // front
    lua_pushstring(L, "front");
    lua_pushstring(L, (char*)(msg->front));
    lua_settable(L, -3);

    // back
    lua_pushstring(L, "back");
    lua_pushstring(L, (char*)(msg->back));
    lua_settable(L, -3);

}
static void lua_pushdm_graphics__texture_image(lua_State* L, DmGraphics__TextureImage *msg)
{
    lua_newtable(L);

    // alternatives
    lua_pushstring(L, "alternatives");
    lua_newtable(L);
    int alternatives_size = msg->n_alternatives;
    for (int i = 0; i < alternatives_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_graphics__texture_image__image(L, (DmGraphics__TextureImage__Image*)(msg->alternatives[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // type
    lua_pushstring(L, "type");
    lua_pushnumber(L, (DmGraphics__TextureImage__Type)(msg->type));
    lua_settable(L, -3);

    // count
    lua_pushstring(L, "count");
    lua_pushnumber(L, (uint32_t)(msg->count));
    lua_settable(L, -3);

}
static void lua_pushdm_graphics__texture_image__image(lua_State* L, DmGraphics__TextureImage__Image *msg)
{
    lua_newtable(L);

    // width
    lua_pushstring(L, "width");
    lua_pushnumber(L, (uint32_t)(msg->width));
    lua_settable(L, -3);

    // height
    lua_pushstring(L, "height");
    lua_pushnumber(L, (uint32_t)(msg->height));
    lua_settable(L, -3);

    // original_width
    lua_pushstring(L, "original_width");
    lua_pushnumber(L, (uint32_t)(msg->original_width));
    lua_settable(L, -3);

    // original_height
    lua_pushstring(L, "original_height");
    lua_pushnumber(L, (uint32_t)(msg->original_height));
    lua_settable(L, -3);

    // format
    lua_pushstring(L, "format");
    lua_pushnumber(L, (DmGraphics__TextureImage__TextureFormat)(msg->format));
    lua_settable(L, -3);

    // mip_map_offset
    lua_pushstring(L, "mip_map_offset");
    lua_newtable(L);
    int mip_map_offset_size = msg->n_mip_map_offset;
    for (int i = 0; i < mip_map_offset_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint32_t)(msg->mip_map_offset[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // mip_map_size
    lua_pushstring(L, "mip_map_size");
    lua_newtable(L);
    int mip_map_size_size = msg->n_mip_map_size;
    for (int i = 0; i < mip_map_size_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint32_t)(msg->mip_map_size[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // data
    lua_pushstring(L, "data");
    lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->data));
    lua_settable(L, -3);

    // compression_type
    if (msg->has_compression_type)
    {
        lua_pushstring(L, "compression_type");
        lua_pushnumber(L, (DmGraphics__TextureImage__CompressionType)(msg->compression_type));
        lua_settable(L, -3);
    }

    // compression_flags
    if (msg->has_compression_flags)
    {
        lua_pushstring(L, "compression_flags");
        lua_pushnumber(L, (uint64_t)(msg->compression_flags));
        lua_settable(L, -3);
    }

    // mip_map_size_compressed
    lua_pushstring(L, "mip_map_size_compressed");
    lua_newtable(L);
    int mip_map_size_compressed_size = msg->n_mip_map_size_compressed;
    for (int i = 0; i < mip_map_size_compressed_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint32_t)(msg->mip_map_size_compressed[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_graphics__texture_format_alternative(lua_State* L, DmGraphics__TextureFormatAlternative *msg)
{
    lua_newtable(L);

    // format
    lua_pushstring(L, "format");
    lua_pushnumber(L, (DmGraphics__TextureImage__TextureFormat)(msg->format));
    lua_settable(L, -3);

    // compression_level
    lua_pushstring(L, "compression_level");
    lua_pushnumber(L, (DmGraphics__TextureFormatAlternative__CompressionLevel)(msg->compression_level));
    lua_settable(L, -3);

    // compression_type
    if (msg->has_compression_type)
    {
        lua_pushstring(L, "compression_type");
        lua_pushnumber(L, (DmGraphics__TextureImage__CompressionType)(msg->compression_type));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_graphics__path_settings(lua_State* L, DmGraphics__PathSettings *msg)
{
    lua_newtable(L);

    // path
    lua_pushstring(L, "path");
    lua_pushstring(L, (char*)(msg->path));
    lua_settable(L, -3);

    // profile
    lua_pushstring(L, "profile");
    lua_pushstring(L, (char*)(msg->profile));
    lua_settable(L, -3);

}
static void lua_pushdm_graphics__platform_profile(lua_State* L, DmGraphics__PlatformProfile *msg)
{
    lua_newtable(L);

    // os
    lua_pushstring(L, "os");
    lua_pushnumber(L, (DmGraphics__PlatformProfile__OS)(msg->os));
    lua_settable(L, -3);

    // formats
    lua_pushstring(L, "formats");
    lua_newtable(L);
    int formats_size = msg->n_formats;
    for (int i = 0; i < formats_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_graphics__texture_format_alternative(L, (DmGraphics__TextureFormatAlternative*)(msg->formats[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // mipmaps
    lua_pushstring(L, "mipmaps");
    lua_pushboolean(L, (bool)(msg->mipmaps));
    lua_settable(L, -3);

    // max_texture_size
    if (msg->has_max_texture_size)
    {
        lua_pushstring(L, "max_texture_size");
        lua_pushnumber(L, (uint32_t)(msg->max_texture_size));
        lua_settable(L, -3);
    }

    // premultiply_alpha
    if (msg->has_premultiply_alpha)
    {
        lua_pushstring(L, "premultiply_alpha");
        lua_pushboolean(L, (bool)(msg->premultiply_alpha));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_graphics__texture_profile(lua_State* L, DmGraphics__TextureProfile *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // platforms
    lua_pushstring(L, "platforms");
    lua_newtable(L);
    int platforms_size = msg->n_platforms;
    for (int i = 0; i < platforms_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_graphics__platform_profile(L, (DmGraphics__PlatformProfile*)(msg->platforms[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_graphics__texture_profiles(lua_State* L, DmGraphics__TextureProfiles *msg)
{
    lua_newtable(L);

    // path_settings
    lua_pushstring(L, "path_settings");
    lua_newtable(L);
    int path_settings_size = msg->n_path_settings;
    for (int i = 0; i < path_settings_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_graphics__path_settings(L, (DmGraphics__PathSettings*)(msg->path_settings[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // profiles
    lua_pushstring(L, "profiles");
    lua_newtable(L);
    int profiles_size = msg->n_profiles;
    for (int i = 0; i < profiles_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_graphics__texture_profile(L, (DmGraphics__TextureProfile*)(msg->profiles[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_graphics__shader_desc(lua_State* L, DmGraphics__ShaderDesc *msg)
{
    lua_newtable(L);

    // shaders
    lua_pushstring(L, "shaders");
    lua_newtable(L);
    int shaders_size = msg->n_shaders;
    for (int i = 0; i < shaders_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_graphics__shader_desc__shader(L, (DmGraphics__ShaderDesc__Shader*)(msg->shaders[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_graphics__shader_desc__resource_binding(lua_State* L, DmGraphics__ShaderDesc__ResourceBinding *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // type
    lua_pushstring(L, "type");
    lua_pushnumber(L, (DmGraphics__ShaderDesc__ShaderDataType)(msg->type));
    lua_settable(L, -3);

    // element_count
    if (msg->has_element_count)
    {
        lua_pushstring(L, "element_count");
        lua_pushnumber(L, (uint32_t)(msg->element_count));
        lua_settable(L, -3);
    }

    // set
    if (msg->has_set)
    {
        lua_pushstring(L, "set");
        lua_pushnumber(L, (uint32_t)(msg->set));
        lua_settable(L, -3);
    }

    // binding
    if (msg->has_binding)
    {
        lua_pushstring(L, "binding");
        lua_pushnumber(L, (uint32_t)(msg->binding));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_graphics__shader_desc__shader(lua_State* L, DmGraphics__ShaderDesc__Shader *msg)
{
    lua_newtable(L);

    // language
    lua_pushstring(L, "language");
    lua_pushnumber(L, (DmGraphics__ShaderDesc__Language)(msg->language));
    lua_settable(L, -3);

    // source
    if (msg->source.data != 0)
    {
        lua_pushstring(L, "source");
        lua_pushProtobufCBinaryData(L, (ProtobufCBinaryData)(msg->source));
        lua_settable(L, -3);
    }

    // uniforms
    lua_pushstring(L, "uniforms");
    lua_newtable(L);
    int uniforms_size = msg->n_uniforms;
    for (int i = 0; i < uniforms_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_graphics__shader_desc__resource_binding(L, (DmGraphics__ShaderDesc__ResourceBinding*)(msg->uniforms[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // attributes
    lua_pushstring(L, "attributes");
    lua_newtable(L);
    int attributes_size = msg->n_attributes;
    for (int i = 0; i < attributes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_graphics__shader_desc__resource_binding(L, (DmGraphics__ShaderDesc__ResourceBinding*)(msg->attributes[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_properties_ddf__property_declaration_entry(lua_State* L, DmPropertiesDDF__PropertyDeclarationEntry *msg)
{
    lua_newtable(L);

    // key
    lua_pushstring(L, "key");
    lua_pushstring(L, (char*)(msg->key));
    lua_settable(L, -3);

    // id
    lua_pushstring(L, "id");
    lua_pushnumber(L, (uint64_t)(msg->id));
    lua_settable(L, -3);

    // index
    lua_pushstring(L, "index");
    lua_pushnumber(L, (uint32_t)(msg->index));
    lua_settable(L, -3);

    // element_ids
    lua_pushstring(L, "element_ids");
    lua_newtable(L);
    int element_ids_size = msg->n_element_ids;
    for (int i = 0; i < element_ids_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint64_t)(msg->element_ids[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_properties_ddf__property_declarations(lua_State* L, DmPropertiesDDF__PropertyDeclarations *msg)
{
    lua_newtable(L);

    // number_entries
    lua_pushstring(L, "number_entries");
    lua_newtable(L);
    int number_entries_size = msg->n_number_entries;
    for (int i = 0; i < number_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_properties_ddf__property_declaration_entry(L, (DmPropertiesDDF__PropertyDeclarationEntry*)(msg->number_entries[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // hash_entries
    lua_pushstring(L, "hash_entries");
    lua_newtable(L);
    int hash_entries_size = msg->n_hash_entries;
    for (int i = 0; i < hash_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_properties_ddf__property_declaration_entry(L, (DmPropertiesDDF__PropertyDeclarationEntry*)(msg->hash_entries[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // url_entries
    lua_pushstring(L, "url_entries");
    lua_newtable(L);
    int url_entries_size = msg->n_url_entries;
    for (int i = 0; i < url_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_properties_ddf__property_declaration_entry(L, (DmPropertiesDDF__PropertyDeclarationEntry*)(msg->url_entries[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // vector3_entries
    lua_pushstring(L, "vector3_entries");
    lua_newtable(L);
    int vector3_entries_size = msg->n_vector3_entries;
    for (int i = 0; i < vector3_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_properties_ddf__property_declaration_entry(L, (DmPropertiesDDF__PropertyDeclarationEntry*)(msg->vector3_entries[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // vector4_entries
    lua_pushstring(L, "vector4_entries");
    lua_newtable(L);
    int vector4_entries_size = msg->n_vector4_entries;
    for (int i = 0; i < vector4_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_properties_ddf__property_declaration_entry(L, (DmPropertiesDDF__PropertyDeclarationEntry*)(msg->vector4_entries[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // quat_entries
    lua_pushstring(L, "quat_entries");
    lua_newtable(L);
    int quat_entries_size = msg->n_quat_entries;
    for (int i = 0; i < quat_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_properties_ddf__property_declaration_entry(L, (DmPropertiesDDF__PropertyDeclarationEntry*)(msg->quat_entries[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // bool_entries
    lua_pushstring(L, "bool_entries");
    lua_newtable(L);
    int bool_entries_size = msg->n_bool_entries;
    for (int i = 0; i < bool_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_properties_ddf__property_declaration_entry(L, (DmPropertiesDDF__PropertyDeclarationEntry*)(msg->bool_entries[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // float_values
    lua_pushstring(L, "float_values");
    lua_newtable(L);
    int float_values_size = msg->n_float_values;
    for (int i = 0; i < float_values_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (float)(msg->float_values[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // hash_values
    lua_pushstring(L, "hash_values");
    lua_newtable(L);
    int hash_values_size = msg->n_hash_values;
    for (int i = 0; i < hash_values_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushnumber(L, (uint64_t)(msg->hash_values[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // string_values
    lua_pushstring(L, "string_values");
    lua_newtable(L);
    int string_values_size = msg->n_string_values;
    for (int i = 0; i < string_values_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->string_values[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_game_object_ddf__property_desc(lua_State* L, DmGameObjectDDF__PropertyDesc *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // value
    lua_pushstring(L, "value");
    lua_pushstring(L, (char*)(msg->value));
    lua_settable(L, -3);

    // type
    lua_pushstring(L, "type");
    lua_pushnumber(L, (DmGameObjectDDF__PropertyType)(msg->type));
    lua_settable(L, -3);

}
static void lua_pushdm_game_object_ddf__component_desc(lua_State* L, DmGameObjectDDF__ComponentDesc *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // component
    lua_pushstring(L, "component");
    lua_pushstring(L, (char*)(msg->component));
    lua_settable(L, -3);

    // position
    if (msg->position != 0)
    {
        lua_pushstring(L, "position");
        lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
        lua_settable(L, -3);
    }

    // rotation
    if (msg->rotation != 0)
    {
        lua_pushstring(L, "rotation");
        lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
        lua_settable(L, -3);
    }

    // properties
    lua_pushstring(L, "properties");
    lua_newtable(L);
    int properties_size = msg->n_properties;
    for (int i = 0; i < properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__property_desc(L, (DmGameObjectDDF__PropertyDesc*)(msg->properties[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // property_decls
    if (msg->property_decls != 0)
    {
        lua_pushstring(L, "property_decls");
        lua_pushdm_properties_ddf__property_declarations(L, (DmPropertiesDDF__PropertyDeclarations*)(msg->property_decls));
        lua_settable(L, -3);
    }

    // scale
    if (msg->scale != 0)
    {
        lua_pushstring(L, "scale");
        lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->scale));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_object_ddf__embedded_component_desc(lua_State* L, DmGameObjectDDF__EmbeddedComponentDesc *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // type
    lua_pushstring(L, "type");
    lua_pushstring(L, (char*)(msg->type));
    lua_settable(L, -3);

    // data
    lua_pushstring(L, "data");
    lua_pushstring(L, (char*)(msg->data));
    lua_settable(L, -3);

    // position
    if (msg->position != 0)
    {
        lua_pushstring(L, "position");
        lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
        lua_settable(L, -3);
    }

    // rotation
    if (msg->rotation != 0)
    {
        lua_pushstring(L, "rotation");
        lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
        lua_settable(L, -3);
    }

    // scale
    if (msg->scale != 0)
    {
        lua_pushstring(L, "scale");
        lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->scale));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_object_ddf__prototype_desc(lua_State* L, DmGameObjectDDF__PrototypeDesc *msg)
{
    lua_newtable(L);

    // components
    lua_pushstring(L, "components");
    lua_newtable(L);
    int components_size = msg->n_components;
    for (int i = 0; i < components_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__component_desc(L, (DmGameObjectDDF__ComponentDesc*)(msg->components[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // embedded_components
    lua_pushstring(L, "embedded_components");
    lua_newtable(L);
    int embedded_components_size = msg->n_embedded_components;
    for (int i = 0; i < embedded_components_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__embedded_component_desc(L, (DmGameObjectDDF__EmbeddedComponentDesc*)(msg->embedded_components[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // property_resources
    lua_pushstring(L, "property_resources");
    lua_newtable(L);
    int property_resources_size = msg->n_property_resources;
    for (int i = 0; i < property_resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->property_resources[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_game_object_ddf__component_property_desc(lua_State* L, DmGameObjectDDF__ComponentPropertyDesc *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // properties
    lua_pushstring(L, "properties");
    lua_newtable(L);
    int properties_size = msg->n_properties;
    for (int i = 0; i < properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__property_desc(L, (DmGameObjectDDF__PropertyDesc*)(msg->properties[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // property_decls
    if (msg->property_decls != 0)
    {
        lua_pushstring(L, "property_decls");
        lua_pushdm_properties_ddf__property_declarations(L, (DmPropertiesDDF__PropertyDeclarations*)(msg->property_decls));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_object_ddf__componen_type_desc(lua_State* L, DmGameObjectDDF__ComponenTypeDesc *msg)
{
    lua_newtable(L);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_pushnumber(L, (uint64_t)(msg->name_hash));
    lua_settable(L, -3);

    // max_count
    lua_pushstring(L, "max_count");
    lua_pushnumber(L, (uint32_t)(msg->max_count));
    lua_settable(L, -3);

}
static void lua_pushdm_game_object_ddf__instance_desc(lua_State* L, DmGameObjectDDF__InstanceDesc *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // prototype
    lua_pushstring(L, "prototype");
    lua_pushstring(L, (char*)(msg->prototype));
    lua_settable(L, -3);

    // children
    lua_pushstring(L, "children");
    lua_newtable(L);
    int children_size = msg->n_children;
    for (int i = 0; i < children_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->children[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // position
    if (msg->position != 0)
    {
        lua_pushstring(L, "position");
        lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
        lua_settable(L, -3);
    }

    // rotation
    if (msg->rotation != 0)
    {
        lua_pushstring(L, "rotation");
        lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
        lua_settable(L, -3);
    }

    // component_properties
    lua_pushstring(L, "component_properties");
    lua_newtable(L);
    int component_properties_size = msg->n_component_properties;
    for (int i = 0; i < component_properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__component_property_desc(L, (DmGameObjectDDF__ComponentPropertyDesc*)(msg->component_properties[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // scale
    if (msg->has_scale)
    {
        lua_pushstring(L, "scale");
        lua_pushnumber(L, (float)(msg->scale));
        lua_settable(L, -3);
    }

    // scale3
    if (msg->scale3 != 0)
    {
        lua_pushstring(L, "scale3");
        lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->scale3));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_object_ddf__embedded_instance_desc(lua_State* L, DmGameObjectDDF__EmbeddedInstanceDesc *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // children
    lua_pushstring(L, "children");
    lua_newtable(L);
    int children_size = msg->n_children;
    for (int i = 0; i < children_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->children[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // data
    lua_pushstring(L, "data");
    lua_pushstring(L, (char*)(msg->data));
    lua_settable(L, -3);

    // position
    if (msg->position != 0)
    {
        lua_pushstring(L, "position");
        lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
        lua_settable(L, -3);
    }

    // rotation
    if (msg->rotation != 0)
    {
        lua_pushstring(L, "rotation");
        lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
        lua_settable(L, -3);
    }

    // component_properties
    lua_pushstring(L, "component_properties");
    lua_newtable(L);
    int component_properties_size = msg->n_component_properties;
    for (int i = 0; i < component_properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__component_property_desc(L, (DmGameObjectDDF__ComponentPropertyDesc*)(msg->component_properties[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // scale
    if (msg->has_scale)
    {
        lua_pushstring(L, "scale");
        lua_pushnumber(L, (float)(msg->scale));
        lua_settable(L, -3);
    }

    // scale3
    if (msg->scale3 != 0)
    {
        lua_pushstring(L, "scale3");
        lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->scale3));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_object_ddf__instance_property_desc(lua_State* L, DmGameObjectDDF__InstancePropertyDesc *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // properties
    lua_pushstring(L, "properties");
    lua_newtable(L);
    int properties_size = msg->n_properties;
    for (int i = 0; i < properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__component_property_desc(L, (DmGameObjectDDF__ComponentPropertyDesc*)(msg->properties[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_game_object_ddf__collection_instance_desc(lua_State* L, DmGameObjectDDF__CollectionInstanceDesc *msg)
{
    lua_newtable(L);

    // id
    lua_pushstring(L, "id");
    lua_pushstring(L, (char*)(msg->id));
    lua_settable(L, -3);

    // collection
    lua_pushstring(L, "collection");
    lua_pushstring(L, (char*)(msg->collection));
    lua_settable(L, -3);

    // position
    if (msg->position != 0)
    {
        lua_pushstring(L, "position");
        lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
        lua_settable(L, -3);
    }

    // rotation
    if (msg->rotation != 0)
    {
        lua_pushstring(L, "rotation");
        lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
        lua_settable(L, -3);
    }

    // scale
    if (msg->has_scale)
    {
        lua_pushstring(L, "scale");
        lua_pushnumber(L, (float)(msg->scale));
        lua_settable(L, -3);
    }

    // scale3
    if (msg->scale3 != 0)
    {
        lua_pushstring(L, "scale3");
        lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->scale3));
        lua_settable(L, -3);
    }

    // instance_properties
    lua_pushstring(L, "instance_properties");
    lua_newtable(L);
    int instance_properties_size = msg->n_instance_properties;
    for (int i = 0; i < instance_properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__instance_property_desc(L, (DmGameObjectDDF__InstancePropertyDesc*)(msg->instance_properties[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_game_object_ddf__collection_desc(lua_State* L, DmGameObjectDDF__CollectionDesc *msg)
{
    lua_newtable(L);

    // name
    lua_pushstring(L, "name");
    lua_pushstring(L, (char*)(msg->name));
    lua_settable(L, -3);

    // instances
    lua_pushstring(L, "instances");
    lua_newtable(L);
    int instances_size = msg->n_instances;
    for (int i = 0; i < instances_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__instance_desc(L, (DmGameObjectDDF__InstanceDesc*)(msg->instances[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // collection_instances
    lua_pushstring(L, "collection_instances");
    lua_newtable(L);
    int collection_instances_size = msg->n_collection_instances;
    for (int i = 0; i < collection_instances_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__collection_instance_desc(L, (DmGameObjectDDF__CollectionInstanceDesc*)(msg->collection_instances[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // scale_along_z
    if (msg->has_scale_along_z)
    {
        lua_pushstring(L, "scale_along_z");
        lua_pushnumber(L, (uint32_t)(msg->scale_along_z));
        lua_settable(L, -3);
    }

    // embedded_instances
    lua_pushstring(L, "embedded_instances");
    lua_newtable(L);
    int embedded_instances_size = msg->n_embedded_instances;
    for (int i = 0; i < embedded_instances_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__embedded_instance_desc(L, (DmGameObjectDDF__EmbeddedInstanceDesc*)(msg->embedded_instances[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // property_resources
    lua_pushstring(L, "property_resources");
    lua_newtable(L);
    int property_resources_size = msg->n_property_resources;
    for (int i = 0; i < property_resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->property_resources[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // component_types
    lua_pushstring(L, "component_types");
    lua_newtable(L);
    int component_types_size = msg->n_component_types;
    for (int i = 0; i < component_types_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_game_object_ddf__componen_type_desc(L, (DmGameObjectDDF__ComponenTypeDesc*)(msg->component_types[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_game_object_ddf__acquire_input_focus(lua_State* L, DmGameObjectDDF__AcquireInputFocus *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_game_object_ddf__release_input_focus(lua_State* L, DmGameObjectDDF__ReleaseInputFocus *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_game_object_ddf__request_transform(lua_State* L, DmGameObjectDDF__RequestTransform *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_game_object_ddf__transform_response(lua_State* L, DmGameObjectDDF__TransformResponse *msg)
{
    lua_newtable(L);

    // position
    lua_pushstring(L, "position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
    lua_settable(L, -3);

    // rotation
    lua_pushstring(L, "rotation");
    lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
    lua_settable(L, -3);

    // world_position
    lua_pushstring(L, "world_position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->world_position));
    lua_settable(L, -3);

    // world_rotation
    lua_pushstring(L, "world_rotation");
    lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->world_rotation));
    lua_settable(L, -3);

    // scale
    if (msg->has_scale)
    {
        lua_pushstring(L, "scale");
        lua_pushnumber(L, (float)(msg->scale));
        lua_settable(L, -3);
    }

    // scale3
    if (msg->scale3 != 0)
    {
        lua_pushstring(L, "scale3");
        lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->scale3));
        lua_settable(L, -3);
    }

    // world_scale
    if (msg->has_world_scale)
    {
        lua_pushstring(L, "world_scale");
        lua_pushnumber(L, (float)(msg->world_scale));
        lua_settable(L, -3);
    }

    // world_scale3
    if (msg->world_scale3 != 0)
    {
        lua_pushstring(L, "world_scale3");
        lua_pushdm_math__vector3(L, (DmMath__Vector3*)(msg->world_scale3));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_object_ddf__set_parent(lua_State* L, DmGameObjectDDF__SetParent *msg)
{
    lua_newtable(L);

    // parent_id
    if (msg->has_parent_id)
    {
        lua_pushstring(L, "parent_id");
        lua_pushnumber(L, (uint64_t)(msg->parent_id));
        lua_settable(L, -3);
    }

    // keep_world_transform
    if (msg->has_keep_world_transform)
    {
        lua_pushstring(L, "keep_world_transform");
        lua_pushnumber(L, (uint32_t)(msg->keep_world_transform));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_game_object_ddf__enable(lua_State* L, DmGameObjectDDF__Enable *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_game_object_ddf__disable(lua_State* L, DmGameObjectDDF__Disable *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_game_object_ddf__script_message(lua_State* L, DmGameObjectDDF__ScriptMessage *msg)
{
    lua_newtable(L);

    // descriptor_hash
    lua_pushstring(L, "descriptor_hash");
    lua_pushnumber(L, (uint64_t)(msg->descriptor_hash));
    lua_settable(L, -3);

    // payload_size
    lua_pushstring(L, "payload_size");
    lua_pushnumber(L, (uint32_t)(msg->payload_size));
    lua_settable(L, -3);

    // function
    if (msg->has_function)
    {
        lua_pushstring(L, "function");
        lua_pushnumber(L, (uint32_t)(msg->function));
        lua_settable(L, -3);
    }

    // unref_function
    if (msg->has_unref_function)
    {
        lua_pushstring(L, "unref_function");
        lua_pushboolean(L, (bool)(msg->unref_function));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_lua_ddf__lua_module(lua_State* L, DmLuaDDF__LuaModule *msg)
{
    lua_newtable(L);

    // source
    lua_pushstring(L, "source");
    lua_pushdm_lua_ddf__lua_source(L, (DmLuaDDF__LuaSource*)(msg->source));
    lua_settable(L, -3);

    // modules
    lua_pushstring(L, "modules");
    lua_newtable(L);
    int modules_size = msg->n_modules;
    for (int i = 0; i < modules_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->modules[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // resources
    lua_pushstring(L, "resources");
    lua_newtable(L);
    int resources_size = msg->n_resources;
    for (int i = 0; i < resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->resources[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // properties
    if (msg->properties != 0)
    {
        lua_pushstring(L, "properties");
        lua_pushdm_properties_ddf__property_declarations(L, (DmPropertiesDDF__PropertyDeclarations*)(msg->properties));
        lua_settable(L, -3);
    }

    // property_resources
    lua_pushstring(L, "property_resources");
    lua_newtable(L);
    int property_resources_size = msg->n_property_resources;
    for (int i = 0; i < property_resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushstring(L, (char*)(msg->property_resources[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_engine_ddf__hide_app(lua_State* L, DmEngineDDF__HideApp *msg)
{
    lua_newtable(L);

}
static void lua_pushdm_engine_ddf__run_script(lua_State* L, DmEngineDDF__RunScript *msg)
{
    lua_newtable(L);

    // module
    lua_pushstring(L, "module");
    lua_pushdm_lua_ddf__lua_module(L, (DmLuaDDF__LuaModule*)(msg->module));
    lua_settable(L, -3);

}
static void lua_pushdm_particle_ddf__spline_point(lua_State* L, DmParticleDDF__SplinePoint *msg)
{
    lua_newtable(L);

    // x
    lua_pushstring(L, "x");
    lua_pushnumber(L, (float)(msg->x));
    lua_settable(L, -3);

    // y
    lua_pushstring(L, "y");
    lua_pushnumber(L, (float)(msg->y));
    lua_settable(L, -3);

    // t_x
    lua_pushstring(L, "t_x");
    lua_pushnumber(L, (float)(msg->t_x));
    lua_settable(L, -3);

    // t_y
    lua_pushstring(L, "t_y");
    lua_pushnumber(L, (float)(msg->t_y));
    lua_settable(L, -3);

}
static void lua_pushdm_particle_ddf__modifier(lua_State* L, DmParticleDDF__Modifier *msg)
{
    lua_newtable(L);

    // type
    lua_pushstring(L, "type");
    lua_pushnumber(L, (DmParticleDDF__ModifierType)(msg->type));
    lua_settable(L, -3);

    // use_direction
    if (msg->has_use_direction)
    {
        lua_pushstring(L, "use_direction");
        lua_pushnumber(L, (uint32_t)(msg->use_direction));
        lua_settable(L, -3);
    }

    // position
    if (msg->position != 0)
    {
        lua_pushstring(L, "position");
        lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
        lua_settable(L, -3);
    }

    // rotation
    if (msg->rotation != 0)
    {
        lua_pushstring(L, "rotation");
        lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
        lua_settable(L, -3);
    }

    // properties
    lua_pushstring(L, "properties");
    lua_newtable(L);
    int properties_size = msg->n_properties;
    for (int i = 0; i < properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_particle_ddf__modifier__property(L, (DmParticleDDF__Modifier__Property*)(msg->properties[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_particle_ddf__modifier__property(lua_State* L, DmParticleDDF__Modifier__Property *msg)
{
    lua_newtable(L);

    // key
    lua_pushstring(L, "key");
    lua_pushnumber(L, (DmParticleDDF__ModifierKey)(msg->key));
    lua_settable(L, -3);

    // points
    lua_pushstring(L, "points");
    lua_newtable(L);
    int points_size = msg->n_points;
    for (int i = 0; i < points_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_particle_ddf__spline_point(L, (DmParticleDDF__SplinePoint*)(msg->points[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // spread
    if (msg->has_spread)
    {
        lua_pushstring(L, "spread");
        lua_pushnumber(L, (float)(msg->spread));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_particle_ddf__emitter(lua_State* L, DmParticleDDF__Emitter *msg)
{
    lua_newtable(L);

    // id
    if (msg->id != 0)
    {
        lua_pushstring(L, "id");
        lua_pushstring(L, (char*)(msg->id));
        lua_settable(L, -3);
    }

    // mode
    lua_pushstring(L, "mode");
    lua_pushnumber(L, (DmParticleDDF__PlayMode)(msg->mode));
    lua_settable(L, -3);

    // duration
    if (msg->has_duration)
    {
        lua_pushstring(L, "duration");
        lua_pushnumber(L, (float)(msg->duration));
        lua_settable(L, -3);
    }

    // space
    lua_pushstring(L, "space");
    lua_pushnumber(L, (DmParticleDDF__EmissionSpace)(msg->space));
    lua_settable(L, -3);

    // position
    lua_pushstring(L, "position");
    lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->position));
    lua_settable(L, -3);

    // rotation
    lua_pushstring(L, "rotation");
    lua_pushdm_math__quat(L, (DmMath__Quat*)(msg->rotation));
    lua_settable(L, -3);

    // tile_source
    lua_pushstring(L, "tile_source");
    lua_pushstring(L, (char*)(msg->tile_source));
    lua_settable(L, -3);

    // animation
    lua_pushstring(L, "animation");
    lua_pushstring(L, (char*)(msg->animation));
    lua_settable(L, -3);

    // material
    lua_pushstring(L, "material");
    lua_pushstring(L, (char*)(msg->material));
    lua_settable(L, -3);

    // blend_mode
    if (msg->has_blend_mode)
    {
        lua_pushstring(L, "blend_mode");
        lua_pushnumber(L, (DmParticleDDF__BlendMode)(msg->blend_mode));
        lua_settable(L, -3);
    }

    // particle_orientation
    if (msg->has_particle_orientation)
    {
        lua_pushstring(L, "particle_orientation");
        lua_pushnumber(L, (DmParticleDDF__ParticleOrientation)(msg->particle_orientation));
        lua_settable(L, -3);
    }

    // inherit_velocity
    if (msg->has_inherit_velocity)
    {
        lua_pushstring(L, "inherit_velocity");
        lua_pushnumber(L, (float)(msg->inherit_velocity));
        lua_settable(L, -3);
    }

    // max_particle_count
    lua_pushstring(L, "max_particle_count");
    lua_pushnumber(L, (uint32_t)(msg->max_particle_count));
    lua_settable(L, -3);

    // type
    lua_pushstring(L, "type");
    lua_pushnumber(L, (DmParticleDDF__EmitterType)(msg->type));
    lua_settable(L, -3);

    // start_delay
    if (msg->has_start_delay)
    {
        lua_pushstring(L, "start_delay");
        lua_pushnumber(L, (float)(msg->start_delay));
        lua_settable(L, -3);
    }

    // properties
    lua_pushstring(L, "properties");
    lua_newtable(L);
    int properties_size = msg->n_properties;
    for (int i = 0; i < properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_particle_ddf__emitter__property(L, (DmParticleDDF__Emitter__Property*)(msg->properties[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // particle_properties
    lua_pushstring(L, "particle_properties");
    lua_newtable(L);
    int particle_properties_size = msg->n_particle_properties;
    for (int i = 0; i < particle_properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_particle_ddf__emitter__particle_property(L, (DmParticleDDF__Emitter__ParticleProperty*)(msg->particle_properties[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // modifiers
    lua_pushstring(L, "modifiers");
    lua_newtable(L);
    int modifiers_size = msg->n_modifiers;
    for (int i = 0; i < modifiers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_particle_ddf__modifier(L, (DmParticleDDF__Modifier*)(msg->modifiers[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // size_mode
    if (msg->has_size_mode)
    {
        lua_pushstring(L, "size_mode");
        lua_pushnumber(L, (DmParticleDDF__SizeMode)(msg->size_mode));
        lua_settable(L, -3);
    }

    // start_delay_spread
    if (msg->has_start_delay_spread)
    {
        lua_pushstring(L, "start_delay_spread");
        lua_pushnumber(L, (float)(msg->start_delay_spread));
        lua_settable(L, -3);
    }

    // duration_spread
    if (msg->has_duration_spread)
    {
        lua_pushstring(L, "duration_spread");
        lua_pushnumber(L, (float)(msg->duration_spread));
        lua_settable(L, -3);
    }

    // stretch_with_velocity
    if (msg->has_stretch_with_velocity)
    {
        lua_pushstring(L, "stretch_with_velocity");
        lua_pushboolean(L, (bool)(msg->stretch_with_velocity));
        lua_settable(L, -3);
    }

    // start_offset
    if (msg->has_start_offset)
    {
        lua_pushstring(L, "start_offset");
        lua_pushnumber(L, (float)(msg->start_offset));
        lua_settable(L, -3);
    }

    // pivot
    if (msg->pivot != 0)
    {
        lua_pushstring(L, "pivot");
        lua_pushdm_math__point3(L, (DmMath__Point3*)(msg->pivot));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_particle_ddf__emitter__property(lua_State* L, DmParticleDDF__Emitter__Property *msg)
{
    lua_newtable(L);

    // key
    lua_pushstring(L, "key");
    lua_pushnumber(L, (DmParticleDDF__EmitterKey)(msg->key));
    lua_settable(L, -3);

    // points
    lua_pushstring(L, "points");
    lua_newtable(L);
    int points_size = msg->n_points;
    for (int i = 0; i < points_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_particle_ddf__spline_point(L, (DmParticleDDF__SplinePoint*)(msg->points[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // spread
    if (msg->has_spread)
    {
        lua_pushstring(L, "spread");
        lua_pushnumber(L, (float)(msg->spread));
        lua_settable(L, -3);
    }

}
static void lua_pushdm_particle_ddf__emitter__particle_property(lua_State* L, DmParticleDDF__Emitter__ParticleProperty *msg)
{
    lua_newtable(L);

    // key
    lua_pushstring(L, "key");
    lua_pushnumber(L, (DmParticleDDF__ParticleKey)(msg->key));
    lua_settable(L, -3);

    // points
    lua_pushstring(L, "points");
    lua_newtable(L);
    int points_size = msg->n_points;
    for (int i = 0; i < points_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_particle_ddf__spline_point(L, (DmParticleDDF__SplinePoint*)(msg->points[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}
static void lua_pushdm_particle_ddf__particle_fx(lua_State* L, DmParticleDDF__ParticleFX *msg)
{
    lua_newtable(L);

    // emitters
    lua_pushstring(L, "emitters");
    lua_newtable(L);
    int emitters_size = msg->n_emitters;
    for (int i = 0; i < emitters_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_particle_ddf__emitter(L, (DmParticleDDF__Emitter*)(msg->emitters[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

    // modifiers
    lua_pushstring(L, "modifiers");
    lua_newtable(L);
    int modifiers_size = msg->n_modifiers;
    for (int i = 0; i < modifiers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_pushdm_particle_ddf__modifier(L, (DmParticleDDF__Modifier*)(msg->modifiers[i]));
        lua_settable(L, -3);
    }
    lua_settable(L, -3);

}


/******************************************************************************
 * CHECK 
 ******************************************************************************/

static int luaL_checkboolean(lua_State* L, int narg) { return lua_toboolean(L, narg); }

static DmMath__Point3* luaL_checkdm_math__point3(lua_State* L, int narg);
static DmMath__Vector3* luaL_checkdm_math__vector3(lua_State* L, int narg);
static DmMath__Vector4* luaL_checkdm_math__vector4(lua_State* L, int narg);
static DmMath__Quat* luaL_checkdm_math__quat(lua_State* L, int narg);
static DmMath__Transform* luaL_checkdm_math__transform(lua_State* L, int narg);
static DmMath__Matrix4* luaL_checkdm_math__matrix4(lua_State* L, int narg);
static DmInputDDF__GamepadModifierT* luaL_checkdm_input_ddf__gamepad_modifier_t(lua_State* L, int narg);
static DmInputDDF__GamepadMapEntry* luaL_checkdm_input_ddf__gamepad_map_entry(lua_State* L, int narg);
static DmInputDDF__GamepadMap* luaL_checkdm_input_ddf__gamepad_map(lua_State* L, int narg);
static DmInputDDF__GamepadMaps* luaL_checkdm_input_ddf__gamepad_maps(lua_State* L, int narg);
static DmInputDDF__KeyTrigger* luaL_checkdm_input_ddf__key_trigger(lua_State* L, int narg);
static DmInputDDF__MouseTrigger* luaL_checkdm_input_ddf__mouse_trigger(lua_State* L, int narg);
static DmInputDDF__GamepadTrigger* luaL_checkdm_input_ddf__gamepad_trigger(lua_State* L, int narg);
static DmInputDDF__TouchTrigger* luaL_checkdm_input_ddf__touch_trigger(lua_State* L, int narg);
static DmInputDDF__TextTrigger* luaL_checkdm_input_ddf__text_trigger(lua_State* L, int narg);
static DmInputDDF__InputBinding* luaL_checkdm_input_ddf__input_binding(lua_State* L, int narg);
static DmRenderDDF__RenderPrototypeDesc* luaL_checkdm_render_ddf__render_prototype_desc(lua_State* L, int narg);
static DmRenderDDF__RenderPrototypeDesc__MaterialDesc* luaL_checkdm_render_ddf__render_prototype_desc__material_desc(lua_State* L, int narg);
static DmRenderDDF__DrawText* luaL_checkdm_render_ddf__draw_text(lua_State* L, int narg);
static DmRenderDDF__DrawDebugText* luaL_checkdm_render_ddf__draw_debug_text(lua_State* L, int narg);
static DmRenderDDF__DrawLine* luaL_checkdm_render_ddf__draw_line(lua_State* L, int narg);
static DmRenderDDF__WindowResized* luaL_checkdm_render_ddf__window_resized(lua_State* L, int narg);
static DmRenderDDF__Resize* luaL_checkdm_render_ddf__resize(lua_State* L, int narg);
static DmRenderDDF__ClearColor* luaL_checkdm_render_ddf__clear_color(lua_State* L, int narg);
static DmRenderDDF__DisplayProfileQualifier* luaL_checkdm_render_ddf__display_profile_qualifier(lua_State* L, int narg);
static DmRenderDDF__DisplayProfile* luaL_checkdm_render_ddf__display_profile(lua_State* L, int narg);
static DmRenderDDF__DisplayProfiles* luaL_checkdm_render_ddf__display_profiles(lua_State* L, int narg);
static DmRenderDDF__FontDesc* luaL_checkdm_render_ddf__font_desc(lua_State* L, int narg);
static DmRenderDDF__FontMap* luaL_checkdm_render_ddf__font_map(lua_State* L, int narg);
static DmRenderDDF__FontMap__Glyph* luaL_checkdm_render_ddf__font_map__glyph(lua_State* L, int narg);
static DmRenderDDF__MaterialDesc* luaL_checkdm_render_ddf__material_desc(lua_State* L, int narg);
static DmRenderDDF__MaterialDesc__Constant* luaL_checkdm_render_ddf__material_desc__constant(lua_State* L, int narg);
static DmRenderDDF__MaterialDesc__Sampler* luaL_checkdm_render_ddf__material_desc__sampler(lua_State* L, int narg);
static DmScriptDDF__LuaRef* luaL_checkdm_script_ddf__lua_ref(lua_State* L, int narg);
static DmSystemDDF__Exit* luaL_checkdm_system_ddf__exit(lua_State* L, int narg);
static DmSystemDDF__ToggleProfile* luaL_checkdm_system_ddf__toggle_profile(lua_State* L, int narg);
static DmSystemDDF__TogglePhysicsDebug* luaL_checkdm_system_ddf__toggle_physics_debug(lua_State* L, int narg);
static DmSystemDDF__StartRecord* luaL_checkdm_system_ddf__start_record(lua_State* L, int narg);
static DmSystemDDF__StopRecord* luaL_checkdm_system_ddf__stop_record(lua_State* L, int narg);
static DmSystemDDF__Reboot* luaL_checkdm_system_ddf__reboot(lua_State* L, int narg);
static DmSystemDDF__SetVsync* luaL_checkdm_system_ddf__set_vsync(lua_State* L, int narg);
static DmSystemDDF__SetUpdateFrequency* luaL_checkdm_system_ddf__set_update_frequency(lua_State* L, int narg);
static DmScriptDoc__Parameter* luaL_checkdm_script_doc__parameter(lua_State* L, int narg);
static DmScriptDoc__Member* luaL_checkdm_script_doc__member(lua_State* L, int narg);
static DmScriptDoc__ReturnValue* luaL_checkdm_script_doc__return_value(lua_State* L, int narg);
static DmScriptDoc__Element* luaL_checkdm_script_doc__element(lua_State* L, int narg);
static DmScriptDoc__Info* luaL_checkdm_script_doc__info(lua_State* L, int narg);
static DmScriptDoc__Document* luaL_checkdm_script_doc__document(lua_State* L, int narg);
static DmHttpDDF__StopHttp* luaL_checkdm_http_ddf__stop_http(lua_State* L, int narg);
static DmHttpDDF__HttpRequest* luaL_checkdm_http_ddf__http_request(lua_State* L, int narg);
static DmHttpDDF__HttpResponse* luaL_checkdm_http_ddf__http_response(lua_State* L, int narg);
static DmLuaDDF__LuaSource* luaL_checkdm_lua_ddf__lua_source(lua_State* L, int narg);
static DmRigDDF__Bone* luaL_checkdm_rig_ddf__bone(lua_State* L, int narg);
static DmRigDDF__IK* luaL_checkdm_rig_ddf__ik(lua_State* L, int narg);
static DmRigDDF__Skeleton* luaL_checkdm_rig_ddf__skeleton(lua_State* L, int narg);
static DmRigDDF__AnimationTrack* luaL_checkdm_rig_ddf__animation_track(lua_State* L, int narg);
static DmRigDDF__EventKey* luaL_checkdm_rig_ddf__event_key(lua_State* L, int narg);
static DmRigDDF__EventTrack* luaL_checkdm_rig_ddf__event_track(lua_State* L, int narg);
static DmRigDDF__RigAnimation* luaL_checkdm_rig_ddf__rig_animation(lua_State* L, int narg);
static DmRigDDF__AnimationSet* luaL_checkdm_rig_ddf__animation_set(lua_State* L, int narg);
static DmRigDDF__AnimationInstanceDesc* luaL_checkdm_rig_ddf__animation_instance_desc(lua_State* L, int narg);
static DmRigDDF__AnimationSetDesc* luaL_checkdm_rig_ddf__animation_set_desc(lua_State* L, int narg);
static DmRigDDF__Mesh* luaL_checkdm_rig_ddf__mesh(lua_State* L, int narg);
static DmRigDDF__Model* luaL_checkdm_rig_ddf__model(lua_State* L, int narg);
static DmRigDDF__MeshSet* luaL_checkdm_rig_ddf__mesh_set(lua_State* L, int narg);
static DmRigDDF__RigScene* luaL_checkdm_rig_ddf__rig_scene(lua_State* L, int narg);
static DmModelDDF__ModelDesc* luaL_checkdm_model_ddf__model_desc(lua_State* L, int narg);
static DmModelDDF__Model* luaL_checkdm_model_ddf__model(lua_State* L, int narg);
static DmModelDDF__ResetConstant* luaL_checkdm_model_ddf__reset_constant(lua_State* L, int narg);
static DmModelDDF__SetTexture* luaL_checkdm_model_ddf__set_texture(lua_State* L, int narg);
static DmModelDDF__ModelPlayAnimation* luaL_checkdm_model_ddf__model_play_animation(lua_State* L, int narg);
static DmModelDDF__ModelCancelAnimation* luaL_checkdm_model_ddf__model_cancel_animation(lua_State* L, int narg);
static DmModelDDF__ModelAnimationDone* luaL_checkdm_model_ddf__model_animation_done(lua_State* L, int narg);
static DmMeshDDF__MeshDesc* luaL_checkdm_mesh_ddf__mesh_desc(lua_State* L, int narg);
static DmGameSystemDDF__LabelDesc* luaL_checkdm_game_system_ddf__label_desc(lua_State* L, int narg);
static DmGameSystemDDF__SetText* luaL_checkdm_game_system_ddf__set_text(lua_State* L, int narg);
static DmGameSystemDDF__ConvexHull* luaL_checkdm_game_system_ddf__convex_hull(lua_State* L, int narg);
static DmGameSystemDDF__Cue* luaL_checkdm_game_system_ddf__cue(lua_State* L, int narg);
static DmGameSystemDDF__Animation* luaL_checkdm_game_system_ddf__animation(lua_State* L, int narg);
static DmGameSystemDDF__TileSet* luaL_checkdm_game_system_ddf__tile_set(lua_State* L, int narg);
static DmGameSystemDDF__TileCell* luaL_checkdm_game_system_ddf__tile_cell(lua_State* L, int narg);
static DmGameSystemDDF__TileLayer* luaL_checkdm_game_system_ddf__tile_layer(lua_State* L, int narg);
static DmGameSystemDDF__TileGrid* luaL_checkdm_game_system_ddf__tile_grid(lua_State* L, int narg);
static DmGameSystemDDF__SetTile* luaL_checkdm_game_system_ddf__set_tile(lua_State* L, int narg);
static DmGameSystemDDF__SetConstantTileMap* luaL_checkdm_game_system_ddf__set_constant_tile_map(lua_State* L, int narg);
static DmGameSystemDDF__ResetConstantTileMap* luaL_checkdm_game_system_ddf__reset_constant_tile_map(lua_State* L, int narg);
static DmGameSystemDDF__AtlasImage* luaL_checkdm_game_system_ddf__atlas_image(lua_State* L, int narg);
static DmGameSystemDDF__AtlasAnimation* luaL_checkdm_game_system_ddf__atlas_animation(lua_State* L, int narg);
static DmGameSystemDDF__Atlas* luaL_checkdm_game_system_ddf__atlas(lua_State* L, int narg);
static DmBufferDDF__StreamDesc* luaL_checkdm_buffer_ddf__stream_desc(lua_State* L, int narg);
static DmBufferDDF__BufferDesc* luaL_checkdm_buffer_ddf__buffer_desc(lua_State* L, int narg);
static DmSoundDDF__SoundDesc* luaL_checkdm_sound_ddf__sound_desc(lua_State* L, int narg);
static DmGamesysDDF__CameraDesc* luaL_checkdm_gamesys_ddf__camera_desc(lua_State* L, int narg);
static DmGamesysDDF__SetCamera* luaL_checkdm_gamesys_ddf__set_camera(lua_State* L, int narg);
static DmGamesysDDF__AcquireCameraFocus* luaL_checkdm_gamesys_ddf__acquire_camera_focus(lua_State* L, int narg);
static DmGamesysDDF__ReleaseCameraFocus* luaL_checkdm_gamesys_ddf__release_camera_focus(lua_State* L, int narg);
static DmGameSystemDDF__SpriteDesc* luaL_checkdm_game_system_ddf__sprite_desc(lua_State* L, int narg);
static DmGameSystemDDF__PlayAnimation* luaL_checkdm_game_system_ddf__play_animation(lua_State* L, int narg);
static DmGameSystemDDF__AnimationDone* luaL_checkdm_game_system_ddf__animation_done(lua_State* L, int narg);
static DmGameSystemDDF__SetFlipHorizontal* luaL_checkdm_game_system_ddf__set_flip_horizontal(lua_State* L, int narg);
static DmGameSystemDDF__SetFlipVertical* luaL_checkdm_game_system_ddf__set_flip_vertical(lua_State* L, int narg);
static DmGameSystemDDF__TextureSetAnimation* luaL_checkdm_game_system_ddf__texture_set_animation(lua_State* L, int narg);
static DmGameSystemDDF__SpriteGeometry* luaL_checkdm_game_system_ddf__sprite_geometry(lua_State* L, int narg);
static DmGameSystemDDF__TextureSet* luaL_checkdm_game_system_ddf__texture_set(lua_State* L, int narg);
static DmPhysicsDDF__ConvexShape* luaL_checkdm_physics_ddf__convex_shape(lua_State* L, int narg);
static DmPhysicsDDF__CollisionShape* luaL_checkdm_physics_ddf__collision_shape(lua_State* L, int narg);
static DmPhysicsDDF__CollisionShape__Shape* luaL_checkdm_physics_ddf__collision_shape__shape(lua_State* L, int narg);
static DmPhysicsDDF__CollisionObjectDesc* luaL_checkdm_physics_ddf__collision_object_desc(lua_State* L, int narg);
static DmPhysicsDDF__ApplyForce* luaL_checkdm_physics_ddf__apply_force(lua_State* L, int narg);
static DmPhysicsDDF__CollisionResponse* luaL_checkdm_physics_ddf__collision_response(lua_State* L, int narg);
static DmPhysicsDDF__ContactPointResponse* luaL_checkdm_physics_ddf__contact_point_response(lua_State* L, int narg);
static DmPhysicsDDF__TriggerResponse* luaL_checkdm_physics_ddf__trigger_response(lua_State* L, int narg);
static DmPhysicsDDF__RequestRayCast* luaL_checkdm_physics_ddf__request_ray_cast(lua_State* L, int narg);
static DmPhysicsDDF__RayCastResponse* luaL_checkdm_physics_ddf__ray_cast_response(lua_State* L, int narg);
static DmPhysicsDDF__RayCastMissed* luaL_checkdm_physics_ddf__ray_cast_missed(lua_State* L, int narg);
static DmPhysicsDDF__RequestVelocity* luaL_checkdm_physics_ddf__request_velocity(lua_State* L, int narg);
static DmPhysicsDDF__VelocityResponse* luaL_checkdm_physics_ddf__velocity_response(lua_State* L, int narg);
static DmPhysicsDDF__SetGridShapeHull* luaL_checkdm_physics_ddf__set_grid_shape_hull(lua_State* L, int narg);
static DmPhysicsDDF__EnableGridShapeLayer* luaL_checkdm_physics_ddf__enable_grid_shape_layer(lua_State* L, int narg);
static DmGameSystemDDF__FactoryDesc* luaL_checkdm_game_system_ddf__factory_desc(lua_State* L, int narg);
static DmGameSystemDDF__CollectionFactoryDesc* luaL_checkdm_game_system_ddf__collection_factory_desc(lua_State* L, int narg);
static DmGameSystemDDF__Create* luaL_checkdm_game_system_ddf__create(lua_State* L, int narg);
static DmGameSystemDDF__CollectionProxyDesc* luaL_checkdm_game_system_ddf__collection_proxy_desc(lua_State* L, int narg);
static DmGameSystemDDF__SetTimeStep* luaL_checkdm_game_system_ddf__set_time_step(lua_State* L, int narg);
static DmGameSystemDDF__LightDesc* luaL_checkdm_game_system_ddf__light_desc(lua_State* L, int narg);
static DmGameSystemDDF__SetLight* luaL_checkdm_game_system_ddf__set_light(lua_State* L, int narg);
static DmGameSystemDDF__SetViewProjection* luaL_checkdm_game_system_ddf__set_view_projection(lua_State* L, int narg);
static DmGameSystemDDF__PlaySound* luaL_checkdm_game_system_ddf__play_sound(lua_State* L, int narg);
static DmGameSystemDDF__StopSound* luaL_checkdm_game_system_ddf__stop_sound(lua_State* L, int narg);
static DmGameSystemDDF__PauseSound* luaL_checkdm_game_system_ddf__pause_sound(lua_State* L, int narg);
static DmGameSystemDDF__SoundDone* luaL_checkdm_game_system_ddf__sound_done(lua_State* L, int narg);
static DmGameSystemDDF__SetGain* luaL_checkdm_game_system_ddf__set_gain(lua_State* L, int narg);
static DmGameSystemDDF__SetPan* luaL_checkdm_game_system_ddf__set_pan(lua_State* L, int narg);
static DmGameSystemDDF__SetSpeed* luaL_checkdm_game_system_ddf__set_speed(lua_State* L, int narg);
static DmGameSystemDDF__PlayParticleFX* luaL_checkdm_game_system_ddf__play_particle_fx(lua_State* L, int narg);
static DmGameSystemDDF__StopParticleFX* luaL_checkdm_game_system_ddf__stop_particle_fx(lua_State* L, int narg);
static DmGameSystemDDF__SetConstantParticleFX* luaL_checkdm_game_system_ddf__set_constant_particle_fx(lua_State* L, int narg);
static DmGameSystemDDF__ResetConstantParticleFX* luaL_checkdm_game_system_ddf__reset_constant_particle_fx(lua_State* L, int narg);
static DmGameSystemDDF__SetConstant* luaL_checkdm_game_system_ddf__set_constant(lua_State* L, int narg);
static DmGameSystemDDF__ResetConstant* luaL_checkdm_game_system_ddf__reset_constant(lua_State* L, int narg);
static DmGameSystemDDF__SetScale* luaL_checkdm_game_system_ddf__set_scale(lua_State* L, int narg);
static DmGuiDDF__NodeDesc* luaL_checkdm_gui_ddf__node_desc(lua_State* L, int narg);
static DmGuiDDF__SceneDesc* luaL_checkdm_gui_ddf__scene_desc(lua_State* L, int narg);
static DmGuiDDF__SceneDesc__FontDesc* luaL_checkdm_gui_ddf__scene_desc__font_desc(lua_State* L, int narg);
static DmGuiDDF__SceneDesc__TextureDesc* luaL_checkdm_gui_ddf__scene_desc__texture_desc(lua_State* L, int narg);
static DmGuiDDF__SceneDesc__LayerDesc* luaL_checkdm_gui_ddf__scene_desc__layer_desc(lua_State* L, int narg);
static DmGuiDDF__SceneDesc__LayoutDesc* luaL_checkdm_gui_ddf__scene_desc__layout_desc(lua_State* L, int narg);
static DmGuiDDF__SceneDesc__SpineSceneDesc* luaL_checkdm_gui_ddf__scene_desc__spine_scene_desc(lua_State* L, int narg);
static DmGuiDDF__SceneDesc__ResourceDesc* luaL_checkdm_gui_ddf__scene_desc__resource_desc(lua_State* L, int narg);
static DmGuiDDF__SceneDesc__ParticleFXDesc* luaL_checkdm_gui_ddf__scene_desc__particle_fxdesc(lua_State* L, int narg);
static DmGuiDDF__LayoutChanged* luaL_checkdm_gui_ddf__layout_changed(lua_State* L, int narg);
static DmLiveUpdateDDF__HashDigest* luaL_checkdm_live_update_ddf__hash_digest(lua_State* L, int narg);
static DmLiveUpdateDDF__ManifestHeader* luaL_checkdm_live_update_ddf__manifest_header(lua_State* L, int narg);
static DmLiveUpdateDDF__ResourceEntry* luaL_checkdm_live_update_ddf__resource_entry(lua_State* L, int narg);
static DmLiveUpdateDDF__ManifestData* luaL_checkdm_live_update_ddf__manifest_data(lua_State* L, int narg);
static DmLiveUpdateDDF__ManifestFile* luaL_checkdm_live_update_ddf__manifest_file(lua_State* L, int narg);
static DmResourceDDF__Reload* luaL_checkdm_resource_ddf__reload(lua_State* L, int narg);
static DmGraphics__Cubemap* luaL_checkdm_graphics__cubemap(lua_State* L, int narg);
static DmGraphics__TextureImage* luaL_checkdm_graphics__texture_image(lua_State* L, int narg);
static DmGraphics__TextureImage__Image* luaL_checkdm_graphics__texture_image__image(lua_State* L, int narg);
static DmGraphics__TextureFormatAlternative* luaL_checkdm_graphics__texture_format_alternative(lua_State* L, int narg);
static DmGraphics__PathSettings* luaL_checkdm_graphics__path_settings(lua_State* L, int narg);
static DmGraphics__PlatformProfile* luaL_checkdm_graphics__platform_profile(lua_State* L, int narg);
static DmGraphics__TextureProfile* luaL_checkdm_graphics__texture_profile(lua_State* L, int narg);
static DmGraphics__TextureProfiles* luaL_checkdm_graphics__texture_profiles(lua_State* L, int narg);
static DmGraphics__ShaderDesc* luaL_checkdm_graphics__shader_desc(lua_State* L, int narg);
static DmGraphics__ShaderDesc__ResourceBinding* luaL_checkdm_graphics__shader_desc__resource_binding(lua_State* L, int narg);
static DmGraphics__ShaderDesc__Shader* luaL_checkdm_graphics__shader_desc__shader(lua_State* L, int narg);
static DmPropertiesDDF__PropertyDeclarationEntry* luaL_checkdm_properties_ddf__property_declaration_entry(lua_State* L, int narg);
static DmPropertiesDDF__PropertyDeclarations* luaL_checkdm_properties_ddf__property_declarations(lua_State* L, int narg);
static DmGameObjectDDF__PropertyDesc* luaL_checkdm_game_object_ddf__property_desc(lua_State* L, int narg);
static DmGameObjectDDF__ComponentDesc* luaL_checkdm_game_object_ddf__component_desc(lua_State* L, int narg);
static DmGameObjectDDF__EmbeddedComponentDesc* luaL_checkdm_game_object_ddf__embedded_component_desc(lua_State* L, int narg);
static DmGameObjectDDF__PrototypeDesc* luaL_checkdm_game_object_ddf__prototype_desc(lua_State* L, int narg);
static DmGameObjectDDF__ComponentPropertyDesc* luaL_checkdm_game_object_ddf__component_property_desc(lua_State* L, int narg);
static DmGameObjectDDF__ComponenTypeDesc* luaL_checkdm_game_object_ddf__componen_type_desc(lua_State* L, int narg);
static DmGameObjectDDF__InstanceDesc* luaL_checkdm_game_object_ddf__instance_desc(lua_State* L, int narg);
static DmGameObjectDDF__EmbeddedInstanceDesc* luaL_checkdm_game_object_ddf__embedded_instance_desc(lua_State* L, int narg);
static DmGameObjectDDF__InstancePropertyDesc* luaL_checkdm_game_object_ddf__instance_property_desc(lua_State* L, int narg);
static DmGameObjectDDF__CollectionInstanceDesc* luaL_checkdm_game_object_ddf__collection_instance_desc(lua_State* L, int narg);
static DmGameObjectDDF__CollectionDesc* luaL_checkdm_game_object_ddf__collection_desc(lua_State* L, int narg);
static DmGameObjectDDF__AcquireInputFocus* luaL_checkdm_game_object_ddf__acquire_input_focus(lua_State* L, int narg);
static DmGameObjectDDF__ReleaseInputFocus* luaL_checkdm_game_object_ddf__release_input_focus(lua_State* L, int narg);
static DmGameObjectDDF__RequestTransform* luaL_checkdm_game_object_ddf__request_transform(lua_State* L, int narg);
static DmGameObjectDDF__TransformResponse* luaL_checkdm_game_object_ddf__transform_response(lua_State* L, int narg);
static DmGameObjectDDF__SetParent* luaL_checkdm_game_object_ddf__set_parent(lua_State* L, int narg);
static DmGameObjectDDF__Enable* luaL_checkdm_game_object_ddf__enable(lua_State* L, int narg);
static DmGameObjectDDF__Disable* luaL_checkdm_game_object_ddf__disable(lua_State* L, int narg);
static DmGameObjectDDF__ScriptMessage* luaL_checkdm_game_object_ddf__script_message(lua_State* L, int narg);
static DmLuaDDF__LuaModule* luaL_checkdm_lua_ddf__lua_module(lua_State* L, int narg);
static DmEngineDDF__HideApp* luaL_checkdm_engine_ddf__hide_app(lua_State* L, int narg);
static DmEngineDDF__RunScript* luaL_checkdm_engine_ddf__run_script(lua_State* L, int narg);
static DmParticleDDF__SplinePoint* luaL_checkdm_particle_ddf__spline_point(lua_State* L, int narg);
static DmParticleDDF__Modifier* luaL_checkdm_particle_ddf__modifier(lua_State* L, int narg);
static DmParticleDDF__Modifier__Property* luaL_checkdm_particle_ddf__modifier__property(lua_State* L, int narg);
static DmParticleDDF__Emitter* luaL_checkdm_particle_ddf__emitter(lua_State* L, int narg);
static DmParticleDDF__Emitter__Property* luaL_checkdm_particle_ddf__emitter__property(lua_State* L, int narg);
static DmParticleDDF__Emitter__ParticleProperty* luaL_checkdm_particle_ddf__emitter__particle_property(lua_State* L, int narg);
static DmParticleDDF__ParticleFX* luaL_checkdm_particle_ddf__particle_fx(lua_State* L, int narg);

static ProtobufCBinaryData luaL_checkProtobufCBinaryData(lua_State* L, int narg)
{
    size_t len;
    const char* data = luaL_checklstring(L, narg, &len);

    ProtobufCBinaryData binarydata;
    binarydata.data = (uint8_t*)data;
    binarydata.len = len;
    return binarydata;
}

static DmMath__Point3* luaL_checkdm_math__point3(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmMath__Point3 *msg = (DmMath__Point3*)malloc(sizeof(DmMath__Point3));
    dm_math__point3__init(msg);

    // x
    lua_pushstring(L, "x");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_x = 1;
        msg->x = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // y
    lua_pushstring(L, "y");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_y = 1;
        msg->y = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // z
    lua_pushstring(L, "z");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_z = 1;
        msg->z = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // d
    lua_pushstring(L, "d");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_d = 1;
        msg->d = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmMath__Vector3* luaL_checkdm_math__vector3(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmMath__Vector3 *msg = (DmMath__Vector3*)malloc(sizeof(DmMath__Vector3));
    dm_math__vector3__init(msg);

    // x
    lua_pushstring(L, "x");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_x = 1;
        msg->x = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // y
    lua_pushstring(L, "y");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_y = 1;
        msg->y = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // z
    lua_pushstring(L, "z");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_z = 1;
        msg->z = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // d
    lua_pushstring(L, "d");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_d = 1;
        msg->d = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmMath__Vector4* luaL_checkdm_math__vector4(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmMath__Vector4 *msg = (DmMath__Vector4*)malloc(sizeof(DmMath__Vector4));
    dm_math__vector4__init(msg);

    // x
    lua_pushstring(L, "x");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_x = 1;
        msg->x = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // y
    lua_pushstring(L, "y");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_y = 1;
        msg->y = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // z
    lua_pushstring(L, "z");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_z = 1;
        msg->z = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // w
    lua_pushstring(L, "w");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_w = 1;
        msg->w = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmMath__Quat* luaL_checkdm_math__quat(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmMath__Quat *msg = (DmMath__Quat*)malloc(sizeof(DmMath__Quat));
    dm_math__quat__init(msg);

    // x
    lua_pushstring(L, "x");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_x = 1;
        msg->x = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // y
    lua_pushstring(L, "y");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_y = 1;
        msg->y = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // z
    lua_pushstring(L, "z");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_z = 1;
        msg->z = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // w
    lua_pushstring(L, "w");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_w = 1;
        msg->w = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmMath__Transform* luaL_checkdm_math__transform(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmMath__Transform *msg = (DmMath__Transform*)malloc(sizeof(DmMath__Transform));
    dm_math__transform__init(msg);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // translation
    lua_pushstring(L, "translation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->translation = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->scale = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmMath__Matrix4* luaL_checkdm_math__matrix4(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmMath__Matrix4 *msg = (DmMath__Matrix4*)malloc(sizeof(DmMath__Matrix4));
    dm_math__matrix4__init(msg);

    // m00
    lua_pushstring(L, "m00");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m00 = 1;
        msg->m00 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m01
    lua_pushstring(L, "m01");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m01 = 1;
        msg->m01 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m02
    lua_pushstring(L, "m02");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m02 = 1;
        msg->m02 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m03
    lua_pushstring(L, "m03");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m03 = 1;
        msg->m03 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m10
    lua_pushstring(L, "m10");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m10 = 1;
        msg->m10 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m11
    lua_pushstring(L, "m11");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m11 = 1;
        msg->m11 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m12
    lua_pushstring(L, "m12");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m12 = 1;
        msg->m12 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m13
    lua_pushstring(L, "m13");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m13 = 1;
        msg->m13 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m20
    lua_pushstring(L, "m20");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m20 = 1;
        msg->m20 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m21
    lua_pushstring(L, "m21");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m21 = 1;
        msg->m21 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m22
    lua_pushstring(L, "m22");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m22 = 1;
        msg->m22 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m23
    lua_pushstring(L, "m23");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m23 = 1;
        msg->m23 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m30
    lua_pushstring(L, "m30");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m30 = 1;
        msg->m30 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m31
    lua_pushstring(L, "m31");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m31 = 1;
        msg->m31 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m32
    lua_pushstring(L, "m32");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m32 = 1;
        msg->m32 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // m33
    lua_pushstring(L, "m33");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_m33 = 1;
        msg->m33 = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmInputDDF__GamepadModifierT* luaL_checkdm_input_ddf__gamepad_modifier_t(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmInputDDF__GamepadModifierT *msg = (DmInputDDF__GamepadModifierT*)malloc(sizeof(DmInputDDF__GamepadModifierT));
    dm_input_ddf__gamepad_modifier_t__init(msg);

    // mod
    lua_pushstring(L, "mod");
    lua_gettable(L, narg);
    msg->mod = (DmInputDDF__GamepadModifier)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmInputDDF__GamepadMapEntry* luaL_checkdm_input_ddf__gamepad_map_entry(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmInputDDF__GamepadMapEntry *msg = (DmInputDDF__GamepadMapEntry*)malloc(sizeof(DmInputDDF__GamepadMapEntry));
    dm_input_ddf__gamepad_map_entry__init(msg);

    // input
    lua_pushstring(L, "input");
    lua_gettable(L, narg);
    msg->input = (DmInputDDF__Gamepad)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (DmInputDDF__GamepadType)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // index
    lua_pushstring(L, "index");
    lua_gettable(L, narg);
    msg->index = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // mod
    lua_pushstring(L, "mod");
    lua_gettable(L, narg);
    int mod_size = lua_objlen(L, lua_gettop(L));
    int mod_index = lua_gettop(L);
    msg->n_mod = mod_size;
    msg->mod = (DmInputDDF__GamepadModifierT**)malloc(sizeof(DmInputDDF__GamepadModifierT*) * mod_size);
    for (int i = 0; i < mod_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, mod_index);
        msg->mod[i] = (DmInputDDF__GamepadModifierT*)luaL_checkdm_input_ddf__gamepad_modifier_t(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // hat_mask
    lua_pushstring(L, "hat_mask");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_hat_mask = 1;
        msg->hat_mask = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmInputDDF__GamepadMap* luaL_checkdm_input_ddf__gamepad_map(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmInputDDF__GamepadMap *msg = (DmInputDDF__GamepadMap*)malloc(sizeof(DmInputDDF__GamepadMap));
    dm_input_ddf__gamepad_map__init(msg);

    // device
    lua_pushstring(L, "device");
    lua_gettable(L, narg);
    msg->device = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // platform
    lua_pushstring(L, "platform");
    lua_gettable(L, narg);
    msg->platform = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // dead_zone
    lua_pushstring(L, "dead_zone");
    lua_gettable(L, narg);
    msg->dead_zone = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // map
    lua_pushstring(L, "map");
    lua_gettable(L, narg);
    int map_size = lua_objlen(L, lua_gettop(L));
    int map_index = lua_gettop(L);
    msg->n_map = map_size;
    msg->map = (DmInputDDF__GamepadMapEntry**)malloc(sizeof(DmInputDDF__GamepadMapEntry*) * map_size);
    for (int i = 0; i < map_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, map_index);
        msg->map[i] = (DmInputDDF__GamepadMapEntry*)luaL_checkdm_input_ddf__gamepad_map_entry(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmInputDDF__GamepadMaps* luaL_checkdm_input_ddf__gamepad_maps(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmInputDDF__GamepadMaps *msg = (DmInputDDF__GamepadMaps*)malloc(sizeof(DmInputDDF__GamepadMaps));
    dm_input_ddf__gamepad_maps__init(msg);

    // driver
    lua_pushstring(L, "driver");
    lua_gettable(L, narg);
    int driver_size = lua_objlen(L, lua_gettop(L));
    int driver_index = lua_gettop(L);
    msg->n_driver = driver_size;
    msg->driver = (DmInputDDF__GamepadMap**)malloc(sizeof(DmInputDDF__GamepadMap*) * driver_size);
    for (int i = 0; i < driver_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, driver_index);
        msg->driver[i] = (DmInputDDF__GamepadMap*)luaL_checkdm_input_ddf__gamepad_map(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmInputDDF__KeyTrigger* luaL_checkdm_input_ddf__key_trigger(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmInputDDF__KeyTrigger *msg = (DmInputDDF__KeyTrigger*)malloc(sizeof(DmInputDDF__KeyTrigger));
    dm_input_ddf__key_trigger__init(msg);

    // input
    lua_pushstring(L, "input");
    lua_gettable(L, narg);
    msg->input = (DmInputDDF__Key)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // action
    lua_pushstring(L, "action");
    lua_gettable(L, narg);
    msg->action = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmInputDDF__MouseTrigger* luaL_checkdm_input_ddf__mouse_trigger(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmInputDDF__MouseTrigger *msg = (DmInputDDF__MouseTrigger*)malloc(sizeof(DmInputDDF__MouseTrigger));
    dm_input_ddf__mouse_trigger__init(msg);

    // input
    lua_pushstring(L, "input");
    lua_gettable(L, narg);
    msg->input = (DmInputDDF__Mouse)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // action
    lua_pushstring(L, "action");
    lua_gettable(L, narg);
    msg->action = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmInputDDF__GamepadTrigger* luaL_checkdm_input_ddf__gamepad_trigger(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmInputDDF__GamepadTrigger *msg = (DmInputDDF__GamepadTrigger*)malloc(sizeof(DmInputDDF__GamepadTrigger));
    dm_input_ddf__gamepad_trigger__init(msg);

    // input
    lua_pushstring(L, "input");
    lua_gettable(L, narg);
    msg->input = (DmInputDDF__Gamepad)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // action
    lua_pushstring(L, "action");
    lua_gettable(L, narg);
    msg->action = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmInputDDF__TouchTrigger* luaL_checkdm_input_ddf__touch_trigger(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmInputDDF__TouchTrigger *msg = (DmInputDDF__TouchTrigger*)malloc(sizeof(DmInputDDF__TouchTrigger));
    dm_input_ddf__touch_trigger__init(msg);

    // input
    lua_pushstring(L, "input");
    lua_gettable(L, narg);
    msg->input = (DmInputDDF__Touch)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // action
    lua_pushstring(L, "action");
    lua_gettable(L, narg);
    msg->action = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmInputDDF__TextTrigger* luaL_checkdm_input_ddf__text_trigger(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmInputDDF__TextTrigger *msg = (DmInputDDF__TextTrigger*)malloc(sizeof(DmInputDDF__TextTrigger));
    dm_input_ddf__text_trigger__init(msg);

    // input
    lua_pushstring(L, "input");
    lua_gettable(L, narg);
    msg->input = (DmInputDDF__Text)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // action
    lua_pushstring(L, "action");
    lua_gettable(L, narg);
    msg->action = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmInputDDF__InputBinding* luaL_checkdm_input_ddf__input_binding(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmInputDDF__InputBinding *msg = (DmInputDDF__InputBinding*)malloc(sizeof(DmInputDDF__InputBinding));
    dm_input_ddf__input_binding__init(msg);

    // key_trigger
    lua_pushstring(L, "key_trigger");
    lua_gettable(L, narg);
    int key_trigger_size = lua_objlen(L, lua_gettop(L));
    int key_trigger_index = lua_gettop(L);
    msg->n_key_trigger = key_trigger_size;
    msg->key_trigger = (DmInputDDF__KeyTrigger**)malloc(sizeof(DmInputDDF__KeyTrigger*) * key_trigger_size);
    for (int i = 0; i < key_trigger_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, key_trigger_index);
        msg->key_trigger[i] = (DmInputDDF__KeyTrigger*)luaL_checkdm_input_ddf__key_trigger(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // mouse_trigger
    lua_pushstring(L, "mouse_trigger");
    lua_gettable(L, narg);
    int mouse_trigger_size = lua_objlen(L, lua_gettop(L));
    int mouse_trigger_index = lua_gettop(L);
    msg->n_mouse_trigger = mouse_trigger_size;
    msg->mouse_trigger = (DmInputDDF__MouseTrigger**)malloc(sizeof(DmInputDDF__MouseTrigger*) * mouse_trigger_size);
    for (int i = 0; i < mouse_trigger_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, mouse_trigger_index);
        msg->mouse_trigger[i] = (DmInputDDF__MouseTrigger*)luaL_checkdm_input_ddf__mouse_trigger(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // gamepad_trigger
    lua_pushstring(L, "gamepad_trigger");
    lua_gettable(L, narg);
    int gamepad_trigger_size = lua_objlen(L, lua_gettop(L));
    int gamepad_trigger_index = lua_gettop(L);
    msg->n_gamepad_trigger = gamepad_trigger_size;
    msg->gamepad_trigger = (DmInputDDF__GamepadTrigger**)malloc(sizeof(DmInputDDF__GamepadTrigger*) * gamepad_trigger_size);
    for (int i = 0; i < gamepad_trigger_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, gamepad_trigger_index);
        msg->gamepad_trigger[i] = (DmInputDDF__GamepadTrigger*)luaL_checkdm_input_ddf__gamepad_trigger(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // touch_trigger
    lua_pushstring(L, "touch_trigger");
    lua_gettable(L, narg);
    int touch_trigger_size = lua_objlen(L, lua_gettop(L));
    int touch_trigger_index = lua_gettop(L);
    msg->n_touch_trigger = touch_trigger_size;
    msg->touch_trigger = (DmInputDDF__TouchTrigger**)malloc(sizeof(DmInputDDF__TouchTrigger*) * touch_trigger_size);
    for (int i = 0; i < touch_trigger_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, touch_trigger_index);
        msg->touch_trigger[i] = (DmInputDDF__TouchTrigger*)luaL_checkdm_input_ddf__touch_trigger(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // text_trigger
    lua_pushstring(L, "text_trigger");
    lua_gettable(L, narg);
    int text_trigger_size = lua_objlen(L, lua_gettop(L));
    int text_trigger_index = lua_gettop(L);
    msg->n_text_trigger = text_trigger_size;
    msg->text_trigger = (DmInputDDF__TextTrigger**)malloc(sizeof(DmInputDDF__TextTrigger*) * text_trigger_size);
    for (int i = 0; i < text_trigger_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, text_trigger_index);
        msg->text_trigger[i] = (DmInputDDF__TextTrigger*)luaL_checkdm_input_ddf__text_trigger(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__RenderPrototypeDesc* luaL_checkdm_render_ddf__render_prototype_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__RenderPrototypeDesc *msg = (DmRenderDDF__RenderPrototypeDesc*)malloc(sizeof(DmRenderDDF__RenderPrototypeDesc));
    dm_render_ddf__render_prototype_desc__init(msg);

    // script
    lua_pushstring(L, "script");
    lua_gettable(L, narg);
    msg->script = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // materials
    lua_pushstring(L, "materials");
    lua_gettable(L, narg);
    int materials_size = lua_objlen(L, lua_gettop(L));
    int materials_index = lua_gettop(L);
    msg->n_materials = materials_size;
    msg->materials = (DmRenderDDF__RenderPrototypeDesc__MaterialDesc**)malloc(sizeof(DmRenderDDF__RenderPrototypeDesc__MaterialDesc*) * materials_size);
    for (int i = 0; i < materials_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, materials_index);
        msg->materials[i] = (DmRenderDDF__RenderPrototypeDesc__MaterialDesc*)luaL_checkdm_render_ddf__render_prototype_desc__material_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__RenderPrototypeDesc__MaterialDesc* luaL_checkdm_render_ddf__render_prototype_desc__material_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__RenderPrototypeDesc__MaterialDesc *msg = (DmRenderDDF__RenderPrototypeDesc__MaterialDesc*)malloc(sizeof(DmRenderDDF__RenderPrototypeDesc__MaterialDesc));
    dm_render_ddf__render_prototype_desc__material_desc__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // material
    lua_pushstring(L, "material");
    lua_gettable(L, narg);
    msg->material = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__DrawText* luaL_checkdm_render_ddf__draw_text(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__DrawText *msg = (DmRenderDDF__DrawText*)malloc(sizeof(DmRenderDDF__DrawText));
    dm_render_ddf__draw_text__init(msg);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // text
    lua_pushstring(L, "text");
    lua_gettable(L, narg);
    msg->text = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__DrawDebugText* luaL_checkdm_render_ddf__draw_debug_text(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__DrawDebugText *msg = (DmRenderDDF__DrawDebugText*)malloc(sizeof(DmRenderDDF__DrawDebugText));
    dm_render_ddf__draw_debug_text__init(msg);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // text
    lua_pushstring(L, "text");
    lua_gettable(L, narg);
    msg->text = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // color
    lua_pushstring(L, "color");
    lua_gettable(L, narg);
    msg->color = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__DrawLine* luaL_checkdm_render_ddf__draw_line(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__DrawLine *msg = (DmRenderDDF__DrawLine*)malloc(sizeof(DmRenderDDF__DrawLine));
    dm_render_ddf__draw_line__init(msg);

    // start_point
    lua_pushstring(L, "start_point");
    lua_gettable(L, narg);
    msg->start_point = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // end_point
    lua_pushstring(L, "end_point");
    lua_gettable(L, narg);
    msg->end_point = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // color
    lua_pushstring(L, "color");
    lua_gettable(L, narg);
    msg->color = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__WindowResized* luaL_checkdm_render_ddf__window_resized(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__WindowResized *msg = (DmRenderDDF__WindowResized*)malloc(sizeof(DmRenderDDF__WindowResized));
    dm_render_ddf__window_resized__init(msg);

    // width
    lua_pushstring(L, "width");
    lua_gettable(L, narg);
    msg->width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // height
    lua_pushstring(L, "height");
    lua_gettable(L, narg);
    msg->height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__Resize* luaL_checkdm_render_ddf__resize(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__Resize *msg = (DmRenderDDF__Resize*)malloc(sizeof(DmRenderDDF__Resize));
    dm_render_ddf__resize__init(msg);

    // width
    lua_pushstring(L, "width");
    lua_gettable(L, narg);
    msg->width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // height
    lua_pushstring(L, "height");
    lua_gettable(L, narg);
    msg->height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__ClearColor* luaL_checkdm_render_ddf__clear_color(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__ClearColor *msg = (DmRenderDDF__ClearColor*)malloc(sizeof(DmRenderDDF__ClearColor));
    dm_render_ddf__clear_color__init(msg);

    // color
    lua_pushstring(L, "color");
    lua_gettable(L, narg);
    msg->color = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__DisplayProfileQualifier* luaL_checkdm_render_ddf__display_profile_qualifier(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__DisplayProfileQualifier *msg = (DmRenderDDF__DisplayProfileQualifier*)malloc(sizeof(DmRenderDDF__DisplayProfileQualifier));
    dm_render_ddf__display_profile_qualifier__init(msg);

    // width
    lua_pushstring(L, "width");
    lua_gettable(L, narg);
    msg->width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // height
    lua_pushstring(L, "height");
    lua_gettable(L, narg);
    msg->height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // device_models
    lua_pushstring(L, "device_models");
    lua_gettable(L, narg);
    int device_models_size = lua_objlen(L, lua_gettop(L));
    int device_models_index = lua_gettop(L);
    msg->n_device_models = device_models_size;
    msg->device_models = (char**)malloc(sizeof(char*) * device_models_size);
    for (int i = 0; i < device_models_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, device_models_index);
        msg->device_models[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__DisplayProfile* luaL_checkdm_render_ddf__display_profile(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__DisplayProfile *msg = (DmRenderDDF__DisplayProfile*)malloc(sizeof(DmRenderDDF__DisplayProfile));
    dm_render_ddf__display_profile__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // qualifiers
    lua_pushstring(L, "qualifiers");
    lua_gettable(L, narg);
    int qualifiers_size = lua_objlen(L, lua_gettop(L));
    int qualifiers_index = lua_gettop(L);
    msg->n_qualifiers = qualifiers_size;
    msg->qualifiers = (DmRenderDDF__DisplayProfileQualifier**)malloc(sizeof(DmRenderDDF__DisplayProfileQualifier*) * qualifiers_size);
    for (int i = 0; i < qualifiers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, qualifiers_index);
        msg->qualifiers[i] = (DmRenderDDF__DisplayProfileQualifier*)luaL_checkdm_render_ddf__display_profile_qualifier(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__DisplayProfiles* luaL_checkdm_render_ddf__display_profiles(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__DisplayProfiles *msg = (DmRenderDDF__DisplayProfiles*)malloc(sizeof(DmRenderDDF__DisplayProfiles));
    dm_render_ddf__display_profiles__init(msg);

    // profiles
    lua_pushstring(L, "profiles");
    lua_gettable(L, narg);
    int profiles_size = lua_objlen(L, lua_gettop(L));
    int profiles_index = lua_gettop(L);
    msg->n_profiles = profiles_size;
    msg->profiles = (DmRenderDDF__DisplayProfile**)malloc(sizeof(DmRenderDDF__DisplayProfile*) * profiles_size);
    for (int i = 0; i < profiles_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, profiles_index);
        msg->profiles[i] = (DmRenderDDF__DisplayProfile*)luaL_checkdm_render_ddf__display_profile(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__FontDesc* luaL_checkdm_render_ddf__font_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__FontDesc *msg = (DmRenderDDF__FontDesc*)malloc(sizeof(DmRenderDDF__FontDesc));
    dm_render_ddf__font_desc__init(msg);

    // font
    lua_pushstring(L, "font");
    lua_gettable(L, narg);
    msg->font = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // material
    lua_pushstring(L, "material");
    lua_gettable(L, narg);
    msg->material = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // size
    lua_pushstring(L, "size");
    lua_gettable(L, narg);
    msg->size = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // antialias
    lua_pushstring(L, "antialias");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_antialias = 1;
        msg->antialias = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // alpha
    lua_pushstring(L, "alpha");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_alpha = 1;
        msg->alpha = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // outline_alpha
    lua_pushstring(L, "outline_alpha");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_outline_alpha = 1;
        msg->outline_alpha = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // outline_width
    lua_pushstring(L, "outline_width");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_outline_width = 1;
        msg->outline_width = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // shadow_alpha
    lua_pushstring(L, "shadow_alpha");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_shadow_alpha = 1;
        msg->shadow_alpha = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // shadow_blur
    lua_pushstring(L, "shadow_blur");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_shadow_blur = 1;
        msg->shadow_blur = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // shadow_x
    lua_pushstring(L, "shadow_x");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_shadow_x = 1;
        msg->shadow_x = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // shadow_y
    lua_pushstring(L, "shadow_y");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_shadow_y = 1;
        msg->shadow_y = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // extra_characters
    lua_pushstring(L, "extra_characters");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->extra_characters = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // output_format
    lua_pushstring(L, "output_format");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_output_format = 1;
        msg->output_format = (DmRenderDDF__FontTextureFormat)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // all_chars
    lua_pushstring(L, "all_chars");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_all_chars = 1;
        msg->all_chars = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // cache_width
    lua_pushstring(L, "cache_width");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_cache_width = 1;
        msg->cache_width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // cache_height
    lua_pushstring(L, "cache_height");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_cache_height = 1;
        msg->cache_height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // render_mode
    lua_pushstring(L, "render_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_render_mode = 1;
        msg->render_mode = (DmRenderDDF__FontRenderMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__FontMap* luaL_checkdm_render_ddf__font_map(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__FontMap *msg = (DmRenderDDF__FontMap*)malloc(sizeof(DmRenderDDF__FontMap));
    dm_render_ddf__font_map__init(msg);

    // glyphs
    lua_pushstring(L, "glyphs");
    lua_gettable(L, narg);
    int glyphs_size = lua_objlen(L, lua_gettop(L));
    int glyphs_index = lua_gettop(L);
    msg->n_glyphs = glyphs_size;
    msg->glyphs = (DmRenderDDF__FontMap__Glyph**)malloc(sizeof(DmRenderDDF__FontMap__Glyph*) * glyphs_size);
    for (int i = 0; i < glyphs_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, glyphs_index);
        msg->glyphs[i] = (DmRenderDDF__FontMap__Glyph*)luaL_checkdm_render_ddf__font_map__glyph(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // material
    lua_pushstring(L, "material");
    lua_gettable(L, narg);
    msg->material = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // shadow_x
    lua_pushstring(L, "shadow_x");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_shadow_x = 1;
        msg->shadow_x = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // shadow_y
    lua_pushstring(L, "shadow_y");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_shadow_y = 1;
        msg->shadow_y = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // max_ascent
    lua_pushstring(L, "max_ascent");
    lua_gettable(L, narg);
    msg->max_ascent = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // max_descent
    lua_pushstring(L, "max_descent");
    lua_gettable(L, narg);
    msg->max_descent = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // image_format
    lua_pushstring(L, "image_format");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_image_format = 1;
        msg->image_format = (DmRenderDDF__FontTextureFormat)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // sdf_spread
    lua_pushstring(L, "sdf_spread");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_sdf_spread = 1;
        msg->sdf_spread = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // sdf_offset
    lua_pushstring(L, "sdf_offset");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_sdf_offset = 1;
        msg->sdf_offset = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // sdf_outline
    lua_pushstring(L, "sdf_outline");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_sdf_outline = 1;
        msg->sdf_outline = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // sdf_shadow
    lua_pushstring(L, "sdf_shadow");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_sdf_shadow = 1;
        msg->sdf_shadow = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // cache_width
    lua_pushstring(L, "cache_width");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_cache_width = 1;
        msg->cache_width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // cache_height
    lua_pushstring(L, "cache_height");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_cache_height = 1;
        msg->cache_height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // glyph_padding
    lua_pushstring(L, "glyph_padding");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_glyph_padding = 1;
        msg->glyph_padding = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // cache_cell_width
    lua_pushstring(L, "cache_cell_width");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_cache_cell_width = 1;
        msg->cache_cell_width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // cache_cell_height
    lua_pushstring(L, "cache_cell_height");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_cache_cell_height = 1;
        msg->cache_cell_height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // glyph_channels
    lua_pushstring(L, "glyph_channels");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_glyph_channels = 1;
        msg->glyph_channels = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // glyph_data
    lua_pushstring(L, "glyph_data");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->glyph_data = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // alpha
    lua_pushstring(L, "alpha");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_alpha = 1;
        msg->alpha = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // outline_alpha
    lua_pushstring(L, "outline_alpha");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_outline_alpha = 1;
        msg->outline_alpha = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // shadow_alpha
    lua_pushstring(L, "shadow_alpha");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_shadow_alpha = 1;
        msg->shadow_alpha = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // cache_cell_max_ascent
    lua_pushstring(L, "cache_cell_max_ascent");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_cache_cell_max_ascent = 1;
        msg->cache_cell_max_ascent = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // layer_mask
    lua_pushstring(L, "layer_mask");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_layer_mask = 1;
        msg->layer_mask = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__FontMap__Glyph* luaL_checkdm_render_ddf__font_map__glyph(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__FontMap__Glyph *msg = (DmRenderDDF__FontMap__Glyph*)malloc(sizeof(DmRenderDDF__FontMap__Glyph));
    dm_render_ddf__font_map__glyph__init(msg);

    // character
    lua_pushstring(L, "character");
    lua_gettable(L, narg);
    msg->character = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // width
    lua_pushstring(L, "width");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_width = 1;
        msg->width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // advance
    lua_pushstring(L, "advance");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_advance = 1;
        msg->advance = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // left_bearing
    lua_pushstring(L, "left_bearing");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_left_bearing = 1;
        msg->left_bearing = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // ascent
    lua_pushstring(L, "ascent");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_ascent = 1;
        msg->ascent = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // descent
    lua_pushstring(L, "descent");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_descent = 1;
        msg->descent = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // x
    lua_pushstring(L, "x");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_x = 1;
        msg->x = (int32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // y
    lua_pushstring(L, "y");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_y = 1;
        msg->y = (int32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // glyph_data_offset
    lua_pushstring(L, "glyph_data_offset");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_glyph_data_offset = 1;
        msg->glyph_data_offset = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // glyph_data_size
    lua_pushstring(L, "glyph_data_size");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_glyph_data_size = 1;
        msg->glyph_data_size = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__MaterialDesc* luaL_checkdm_render_ddf__material_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__MaterialDesc *msg = (DmRenderDDF__MaterialDesc*)malloc(sizeof(DmRenderDDF__MaterialDesc));
    dm_render_ddf__material_desc__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // tags
    lua_pushstring(L, "tags");
    lua_gettable(L, narg);
    int tags_size = lua_objlen(L, lua_gettop(L));
    int tags_index = lua_gettop(L);
    msg->n_tags = tags_size;
    msg->tags = (char**)malloc(sizeof(char*) * tags_size);
    for (int i = 0; i < tags_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, tags_index);
        msg->tags[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // vertex_program
    lua_pushstring(L, "vertex_program");
    lua_gettable(L, narg);
    msg->vertex_program = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // fragment_program
    lua_pushstring(L, "fragment_program");
    lua_gettable(L, narg);
    msg->fragment_program = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // vertex_space
    lua_pushstring(L, "vertex_space");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_vertex_space = 1;
        msg->vertex_space = (DmRenderDDF__MaterialDesc__VertexSpace)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // vertex_constants
    lua_pushstring(L, "vertex_constants");
    lua_gettable(L, narg);
    int vertex_constants_size = lua_objlen(L, lua_gettop(L));
    int vertex_constants_index = lua_gettop(L);
    msg->n_vertex_constants = vertex_constants_size;
    msg->vertex_constants = (DmRenderDDF__MaterialDesc__Constant**)malloc(sizeof(DmRenderDDF__MaterialDesc__Constant*) * vertex_constants_size);
    for (int i = 0; i < vertex_constants_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, vertex_constants_index);
        msg->vertex_constants[i] = (DmRenderDDF__MaterialDesc__Constant*)luaL_checkdm_render_ddf__material_desc__constant(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // fragment_constants
    lua_pushstring(L, "fragment_constants");
    lua_gettable(L, narg);
    int fragment_constants_size = lua_objlen(L, lua_gettop(L));
    int fragment_constants_index = lua_gettop(L);
    msg->n_fragment_constants = fragment_constants_size;
    msg->fragment_constants = (DmRenderDDF__MaterialDesc__Constant**)malloc(sizeof(DmRenderDDF__MaterialDesc__Constant*) * fragment_constants_size);
    for (int i = 0; i < fragment_constants_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, fragment_constants_index);
        msg->fragment_constants[i] = (DmRenderDDF__MaterialDesc__Constant*)luaL_checkdm_render_ddf__material_desc__constant(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // textures
    lua_pushstring(L, "textures");
    lua_gettable(L, narg);
    int textures_size = lua_objlen(L, lua_gettop(L));
    int textures_index = lua_gettop(L);
    msg->n_textures = textures_size;
    msg->textures = (char**)malloc(sizeof(char*) * textures_size);
    for (int i = 0; i < textures_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, textures_index);
        msg->textures[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // samplers
    lua_pushstring(L, "samplers");
    lua_gettable(L, narg);
    int samplers_size = lua_objlen(L, lua_gettop(L));
    int samplers_index = lua_gettop(L);
    msg->n_samplers = samplers_size;
    msg->samplers = (DmRenderDDF__MaterialDesc__Sampler**)malloc(sizeof(DmRenderDDF__MaterialDesc__Sampler*) * samplers_size);
    for (int i = 0; i < samplers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, samplers_index);
        msg->samplers[i] = (DmRenderDDF__MaterialDesc__Sampler*)luaL_checkdm_render_ddf__material_desc__sampler(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__MaterialDesc__Constant* luaL_checkdm_render_ddf__material_desc__constant(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__MaterialDesc__Constant *msg = (DmRenderDDF__MaterialDesc__Constant*)malloc(sizeof(DmRenderDDF__MaterialDesc__Constant));
    dm_render_ddf__material_desc__constant__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (DmRenderDDF__MaterialDesc__ConstantType)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // value
    lua_pushstring(L, "value");
    lua_gettable(L, narg);
    int value_size = lua_objlen(L, lua_gettop(L));
    int value_index = lua_gettop(L);
    msg->n_value = value_size;
    msg->value = (DmMath__Vector4**)malloc(sizeof(DmMath__Vector4*) * value_size);
    for (int i = 0; i < value_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, value_index);
        msg->value[i] = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRenderDDF__MaterialDesc__Sampler* luaL_checkdm_render_ddf__material_desc__sampler(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRenderDDF__MaterialDesc__Sampler *msg = (DmRenderDDF__MaterialDesc__Sampler*)malloc(sizeof(DmRenderDDF__MaterialDesc__Sampler));
    dm_render_ddf__material_desc__sampler__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // wrap_u
    lua_pushstring(L, "wrap_u");
    lua_gettable(L, narg);
    msg->wrap_u = (DmRenderDDF__MaterialDesc__WrapMode)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // wrap_v
    lua_pushstring(L, "wrap_v");
    lua_gettable(L, narg);
    msg->wrap_v = (DmRenderDDF__MaterialDesc__WrapMode)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // filter_min
    lua_pushstring(L, "filter_min");
    lua_gettable(L, narg);
    msg->filter_min = (DmRenderDDF__MaterialDesc__FilterModeMin)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // filter_mag
    lua_pushstring(L, "filter_mag");
    lua_gettable(L, narg);
    msg->filter_mag = (DmRenderDDF__MaterialDesc__FilterModeMag)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // max_anisotropy
    lua_pushstring(L, "max_anisotropy");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_max_anisotropy = 1;
        msg->max_anisotropy = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmScriptDDF__LuaRef* luaL_checkdm_script_ddf__lua_ref(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmScriptDDF__LuaRef *msg = (DmScriptDDF__LuaRef*)malloc(sizeof(DmScriptDDF__LuaRef));
    dm_script_ddf__lua_ref__init(msg);

    // ref
    lua_pushstring(L, "ref");
    lua_gettable(L, narg);
    msg->ref = (int32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // context_table_ref
    lua_pushstring(L, "context_table_ref");
    lua_gettable(L, narg);
    msg->context_table_ref = (int32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmSystemDDF__Exit* luaL_checkdm_system_ddf__exit(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmSystemDDF__Exit *msg = (DmSystemDDF__Exit*)malloc(sizeof(DmSystemDDF__Exit));
    dm_system_ddf__exit__init(msg);

    // code
    lua_pushstring(L, "code");
    lua_gettable(L, narg);
    msg->code = (int32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmSystemDDF__ToggleProfile* luaL_checkdm_system_ddf__toggle_profile(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmSystemDDF__ToggleProfile *msg = (DmSystemDDF__ToggleProfile*)malloc(sizeof(DmSystemDDF__ToggleProfile));
    dm_system_ddf__toggle_profile__init(msg);

    return msg;
}
static DmSystemDDF__TogglePhysicsDebug* luaL_checkdm_system_ddf__toggle_physics_debug(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmSystemDDF__TogglePhysicsDebug *msg = (DmSystemDDF__TogglePhysicsDebug*)malloc(sizeof(DmSystemDDF__TogglePhysicsDebug));
    dm_system_ddf__toggle_physics_debug__init(msg);

    return msg;
}
static DmSystemDDF__StartRecord* luaL_checkdm_system_ddf__start_record(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmSystemDDF__StartRecord *msg = (DmSystemDDF__StartRecord*)malloc(sizeof(DmSystemDDF__StartRecord));
    dm_system_ddf__start_record__init(msg);

    // file_name
    lua_pushstring(L, "file_name");
    lua_gettable(L, narg);
    msg->file_name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // frame_period
    lua_pushstring(L, "frame_period");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_frame_period = 1;
        msg->frame_period = (int32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // fps
    lua_pushstring(L, "fps");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_fps = 1;
        msg->fps = (int32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmSystemDDF__StopRecord* luaL_checkdm_system_ddf__stop_record(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmSystemDDF__StopRecord *msg = (DmSystemDDF__StopRecord*)malloc(sizeof(DmSystemDDF__StopRecord));
    dm_system_ddf__stop_record__init(msg);

    return msg;
}
static DmSystemDDF__Reboot* luaL_checkdm_system_ddf__reboot(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmSystemDDF__Reboot *msg = (DmSystemDDF__Reboot*)malloc(sizeof(DmSystemDDF__Reboot));
    dm_system_ddf__reboot__init(msg);

    // arg1
    lua_pushstring(L, "arg1");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->arg1 = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // arg2
    lua_pushstring(L, "arg2");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->arg2 = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // arg3
    lua_pushstring(L, "arg3");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->arg3 = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // arg4
    lua_pushstring(L, "arg4");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->arg4 = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // arg5
    lua_pushstring(L, "arg5");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->arg5 = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // arg6
    lua_pushstring(L, "arg6");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->arg6 = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmSystemDDF__SetVsync* luaL_checkdm_system_ddf__set_vsync(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmSystemDDF__SetVsync *msg = (DmSystemDDF__SetVsync*)malloc(sizeof(DmSystemDDF__SetVsync));
    dm_system_ddf__set_vsync__init(msg);

    // swap_interval
    lua_pushstring(L, "swap_interval");
    lua_gettable(L, narg);
    msg->swap_interval = (int32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmSystemDDF__SetUpdateFrequency* luaL_checkdm_system_ddf__set_update_frequency(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmSystemDDF__SetUpdateFrequency *msg = (DmSystemDDF__SetUpdateFrequency*)malloc(sizeof(DmSystemDDF__SetUpdateFrequency));
    dm_system_ddf__set_update_frequency__init(msg);

    // frequency
    lua_pushstring(L, "frequency");
    lua_gettable(L, narg);
    msg->frequency = (int32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmScriptDoc__Parameter* luaL_checkdm_script_doc__parameter(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmScriptDoc__Parameter *msg = (DmScriptDoc__Parameter*)malloc(sizeof(DmScriptDoc__Parameter));
    dm_script_doc__parameter__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // doc
    lua_pushstring(L, "doc");
    lua_gettable(L, narg);
    msg->doc = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // types
    lua_pushstring(L, "types");
    lua_gettable(L, narg);
    int types_size = lua_objlen(L, lua_gettop(L));
    int types_index = lua_gettop(L);
    msg->n_types = types_size;
    msg->types = (char**)malloc(sizeof(char*) * types_size);
    for (int i = 0; i < types_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, types_index);
        msg->types[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmScriptDoc__Member* luaL_checkdm_script_doc__member(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmScriptDoc__Member *msg = (DmScriptDoc__Member*)malloc(sizeof(DmScriptDoc__Member));
    dm_script_doc__member__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // doc
    lua_pushstring(L, "doc");
    lua_gettable(L, narg);
    msg->doc = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmScriptDoc__ReturnValue* luaL_checkdm_script_doc__return_value(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmScriptDoc__ReturnValue *msg = (DmScriptDoc__ReturnValue*)malloc(sizeof(DmScriptDoc__ReturnValue));
    dm_script_doc__return_value__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // doc
    lua_pushstring(L, "doc");
    lua_gettable(L, narg);
    msg->doc = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // types
    lua_pushstring(L, "types");
    lua_gettable(L, narg);
    int types_size = lua_objlen(L, lua_gettop(L));
    int types_index = lua_gettop(L);
    msg->n_types = types_size;
    msg->types = (char**)malloc(sizeof(char*) * types_size);
    for (int i = 0; i < types_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, types_index);
        msg->types[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmScriptDoc__Element* luaL_checkdm_script_doc__element(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmScriptDoc__Element *msg = (DmScriptDoc__Element*)malloc(sizeof(DmScriptDoc__Element));
    dm_script_doc__element__init(msg);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (DmScriptDoc__Type)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // brief
    lua_pushstring(L, "brief");
    lua_gettable(L, narg);
    msg->brief = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // description
    lua_pushstring(L, "description");
    lua_gettable(L, narg);
    msg->description = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // returnvalues
    lua_pushstring(L, "returnvalues");
    lua_gettable(L, narg);
    int returnvalues_size = lua_objlen(L, lua_gettop(L));
    int returnvalues_index = lua_gettop(L);
    msg->n_returnvalues = returnvalues_size;
    msg->returnvalues = (DmScriptDoc__ReturnValue**)malloc(sizeof(DmScriptDoc__ReturnValue*) * returnvalues_size);
    for (int i = 0; i < returnvalues_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, returnvalues_index);
        msg->returnvalues[i] = (DmScriptDoc__ReturnValue*)luaL_checkdm_script_doc__return_value(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // parameters
    lua_pushstring(L, "parameters");
    lua_gettable(L, narg);
    int parameters_size = lua_objlen(L, lua_gettop(L));
    int parameters_index = lua_gettop(L);
    msg->n_parameters = parameters_size;
    msg->parameters = (DmScriptDoc__Parameter**)malloc(sizeof(DmScriptDoc__Parameter*) * parameters_size);
    for (int i = 0; i < parameters_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, parameters_index);
        msg->parameters[i] = (DmScriptDoc__Parameter*)luaL_checkdm_script_doc__parameter(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // examples
    lua_pushstring(L, "examples");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->examples = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // replaces
    lua_pushstring(L, "replaces");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->replaces = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // error
    lua_pushstring(L, "error");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->error = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // tparams
    lua_pushstring(L, "tparams");
    lua_gettable(L, narg);
    int tparams_size = lua_objlen(L, lua_gettop(L));
    int tparams_index = lua_gettop(L);
    msg->n_tparams = tparams_size;
    msg->tparams = (DmScriptDoc__Member**)malloc(sizeof(DmScriptDoc__Member*) * tparams_size);
    for (int i = 0; i < tparams_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, tparams_index);
        msg->tparams[i] = (DmScriptDoc__Member*)luaL_checkdm_script_doc__member(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // members
    lua_pushstring(L, "members");
    lua_gettable(L, narg);
    int members_size = lua_objlen(L, lua_gettop(L));
    int members_index = lua_gettop(L);
    msg->n_members = members_size;
    msg->members = (DmScriptDoc__Member**)malloc(sizeof(DmScriptDoc__Member*) * members_size);
    for (int i = 0; i < members_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, members_index);
        msg->members[i] = (DmScriptDoc__Member*)luaL_checkdm_script_doc__member(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // notes
    lua_pushstring(L, "notes");
    lua_gettable(L, narg);
    int notes_size = lua_objlen(L, lua_gettop(L));
    int notes_index = lua_gettop(L);
    msg->n_notes = notes_size;
    msg->notes = (char**)malloc(sizeof(char*) * notes_size);
    for (int i = 0; i < notes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, notes_index);
        msg->notes[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmScriptDoc__Info* luaL_checkdm_script_doc__info(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmScriptDoc__Info *msg = (DmScriptDoc__Info*)malloc(sizeof(DmScriptDoc__Info));
    dm_script_doc__info__init(msg);

    // namespace
    lua_pushstring(L, "namespace");
    lua_gettable(L, narg);
    msg->namespace_ = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // brief
    lua_pushstring(L, "brief");
    lua_gettable(L, narg);
    msg->brief = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // description
    lua_pushstring(L, "description");
    lua_gettable(L, narg);
    msg->description = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // path
    lua_pushstring(L, "path");
    lua_gettable(L, narg);
    msg->path = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // file
    lua_pushstring(L, "file");
    lua_gettable(L, narg);
    msg->file = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmScriptDoc__Document* luaL_checkdm_script_doc__document(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmScriptDoc__Document *msg = (DmScriptDoc__Document*)malloc(sizeof(DmScriptDoc__Document));
    dm_script_doc__document__init(msg);

    // elements
    lua_pushstring(L, "elements");
    lua_gettable(L, narg);
    int elements_size = lua_objlen(L, lua_gettop(L));
    int elements_index = lua_gettop(L);
    msg->n_elements = elements_size;
    msg->elements = (DmScriptDoc__Element**)malloc(sizeof(DmScriptDoc__Element*) * elements_size);
    for (int i = 0; i < elements_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, elements_index);
        msg->elements[i] = (DmScriptDoc__Element*)luaL_checkdm_script_doc__element(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // info
    lua_pushstring(L, "info");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->info = (DmScriptDoc__Info*)luaL_checkdm_script_doc__info(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmHttpDDF__StopHttp* luaL_checkdm_http_ddf__stop_http(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmHttpDDF__StopHttp *msg = (DmHttpDDF__StopHttp*)malloc(sizeof(DmHttpDDF__StopHttp));
    dm_http_ddf__stop_http__init(msg);

    return msg;
}
static DmHttpDDF__HttpRequest* luaL_checkdm_http_ddf__http_request(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmHttpDDF__HttpRequest *msg = (DmHttpDDF__HttpRequest*)malloc(sizeof(DmHttpDDF__HttpRequest));
    dm_http_ddf__http_request__init(msg);

    // method
    lua_pushstring(L, "method");
    lua_gettable(L, narg);
    msg->method = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // url
    lua_pushstring(L, "url");
    lua_gettable(L, narg);
    msg->url = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // headers
    lua_pushstring(L, "headers");
    lua_gettable(L, narg);
    msg->headers = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // headers_length
    lua_pushstring(L, "headers_length");
    lua_gettable(L, narg);
    msg->headers_length = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // request
    lua_pushstring(L, "request");
    lua_gettable(L, narg);
    msg->request = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // request_length
    lua_pushstring(L, "request_length");
    lua_gettable(L, narg);
    msg->request_length = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // timeout
    lua_pushstring(L, "timeout");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_timeout = 1;
        msg->timeout = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // path
    lua_pushstring(L, "path");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->path = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // ignore_cache
    lua_pushstring(L, "ignore_cache");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_ignore_cache = 1;
        msg->ignore_cache = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // chunked_transfer
    lua_pushstring(L, "chunked_transfer");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_chunked_transfer = 1;
        msg->chunked_transfer = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmHttpDDF__HttpResponse* luaL_checkdm_http_ddf__http_response(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmHttpDDF__HttpResponse *msg = (DmHttpDDF__HttpResponse*)malloc(sizeof(DmHttpDDF__HttpResponse));
    dm_http_ddf__http_response__init(msg);

    // status
    lua_pushstring(L, "status");
    lua_gettable(L, narg);
    msg->status = (int32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // headers
    lua_pushstring(L, "headers");
    lua_gettable(L, narg);
    msg->headers = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // headers_length
    lua_pushstring(L, "headers_length");
    lua_gettable(L, narg);
    msg->headers_length = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // response
    lua_pushstring(L, "response");
    lua_gettable(L, narg);
    msg->response = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // response_length
    lua_pushstring(L, "response_length");
    lua_gettable(L, narg);
    msg->response_length = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // path
    lua_pushstring(L, "path");
    lua_gettable(L, narg);
    msg->path = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmLuaDDF__LuaSource* luaL_checkdm_lua_ddf__lua_source(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmLuaDDF__LuaSource *msg = (DmLuaDDF__LuaSource*)malloc(sizeof(DmLuaDDF__LuaSource));
    dm_lua_ddf__lua_source__init(msg);

    // script
    lua_pushstring(L, "script");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->script = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // filename
    lua_pushstring(L, "filename");
    lua_gettable(L, narg);
    msg->filename = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // bytecode
    lua_pushstring(L, "bytecode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->bytecode = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // delta
    lua_pushstring(L, "delta");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->delta = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // bytecode_32
    lua_pushstring(L, "bytecode_32");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->bytecode_32 = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // bytecode_64
    lua_pushstring(L, "bytecode_64");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->bytecode_64 = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__Bone* luaL_checkdm_rig_ddf__bone(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__Bone *msg = (DmRigDDF__Bone*)malloc(sizeof(DmRigDDF__Bone));
    dm_rig_ddf__bone__init(msg);

    // parent
    lua_pushstring(L, "parent");
    lua_gettable(L, narg);
    msg->parent = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // local
    lua_pushstring(L, "local");
    lua_gettable(L, narg);
    msg->local = (DmMath__Transform*)luaL_checkdm_math__transform(L, lua_gettop(L));
    lua_pop(L, 1);

    // world
    lua_pushstring(L, "world");
    lua_gettable(L, narg);
    msg->world = (DmMath__Transform*)luaL_checkdm_math__transform(L, lua_gettop(L));
    lua_pop(L, 1);

    // inverse_bind_pose
    lua_pushstring(L, "inverse_bind_pose");
    lua_gettable(L, narg);
    msg->inverse_bind_pose = (DmMath__Transform*)luaL_checkdm_math__transform(L, lua_gettop(L));
    lua_pop(L, 1);

    // length
    lua_pushstring(L, "length");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_length = 1;
        msg->length = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__IK* luaL_checkdm_rig_ddf__ik(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__IK *msg = (DmRigDDF__IK*)malloc(sizeof(DmRigDDF__IK));
    dm_rig_ddf__ik__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // parent
    lua_pushstring(L, "parent");
    lua_gettable(L, narg);
    msg->parent = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // child
    lua_pushstring(L, "child");
    lua_gettable(L, narg);
    msg->child = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // target
    lua_pushstring(L, "target");
    lua_gettable(L, narg);
    msg->target = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // positive
    lua_pushstring(L, "positive");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_positive = 1;
        msg->positive = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // mix
    lua_pushstring(L, "mix");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_mix = 1;
        msg->mix = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__Skeleton* luaL_checkdm_rig_ddf__skeleton(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__Skeleton *msg = (DmRigDDF__Skeleton*)malloc(sizeof(DmRigDDF__Skeleton));
    dm_rig_ddf__skeleton__init(msg);

    // bones
    lua_pushstring(L, "bones");
    lua_gettable(L, narg);
    int bones_size = lua_objlen(L, lua_gettop(L));
    int bones_index = lua_gettop(L);
    msg->n_bones = bones_size;
    msg->bones = (DmRigDDF__Bone**)malloc(sizeof(DmRigDDF__Bone*) * bones_size);
    for (int i = 0; i < bones_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, bones_index);
        msg->bones[i] = (DmRigDDF__Bone*)luaL_checkdm_rig_ddf__bone(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // iks
    lua_pushstring(L, "iks");
    lua_gettable(L, narg);
    int iks_size = lua_objlen(L, lua_gettop(L));
    int iks_index = lua_gettop(L);
    msg->n_iks = iks_size;
    msg->iks = (DmRigDDF__IK**)malloc(sizeof(DmRigDDF__IK*) * iks_size);
    for (int i = 0; i < iks_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, iks_index);
        msg->iks[i] = (DmRigDDF__IK*)luaL_checkdm_rig_ddf__ik(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__AnimationTrack* luaL_checkdm_rig_ddf__animation_track(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__AnimationTrack *msg = (DmRigDDF__AnimationTrack*)malloc(sizeof(DmRigDDF__AnimationTrack));
    dm_rig_ddf__animation_track__init(msg);

    // bone_index
    lua_pushstring(L, "bone_index");
    lua_gettable(L, narg);
    msg->bone_index = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // positions
    lua_pushstring(L, "positions");
    lua_gettable(L, narg);
    int positions_size = lua_objlen(L, lua_gettop(L));
    int positions_index = lua_gettop(L);
    msg->n_positions = positions_size;
    msg->positions = (float*)malloc(sizeof(float) * positions_size);
    for (int i = 0; i < positions_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, positions_index);
        msg->positions[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // rotations
    lua_pushstring(L, "rotations");
    lua_gettable(L, narg);
    int rotations_size = lua_objlen(L, lua_gettop(L));
    int rotations_index = lua_gettop(L);
    msg->n_rotations = rotations_size;
    msg->rotations = (float*)malloc(sizeof(float) * rotations_size);
    for (int i = 0; i < rotations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, rotations_index);
        msg->rotations[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    int scale_size = lua_objlen(L, lua_gettop(L));
    int scale_index = lua_gettop(L);
    msg->n_scale = scale_size;
    msg->scale = (float*)malloc(sizeof(float) * scale_size);
    for (int i = 0; i < scale_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, scale_index);
        msg->scale[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__EventKey* luaL_checkdm_rig_ddf__event_key(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__EventKey *msg = (DmRigDDF__EventKey*)malloc(sizeof(DmRigDDF__EventKey));
    dm_rig_ddf__event_key__init(msg);

    // t
    lua_pushstring(L, "t");
    lua_gettable(L, narg);
    msg->t = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // integer
    lua_pushstring(L, "integer");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_integer = 1;
        msg->integer = (int32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // float
    lua_pushstring(L, "float");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_float_ = 1;
        msg->float_ = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // string
    lua_pushstring(L, "string");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_string = 1;
        msg->string = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__EventTrack* luaL_checkdm_rig_ddf__event_track(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__EventTrack *msg = (DmRigDDF__EventTrack*)malloc(sizeof(DmRigDDF__EventTrack));
    dm_rig_ddf__event_track__init(msg);

    // event_id
    lua_pushstring(L, "event_id");
    lua_gettable(L, narg);
    msg->event_id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // keys
    lua_pushstring(L, "keys");
    lua_gettable(L, narg);
    int keys_size = lua_objlen(L, lua_gettop(L));
    int keys_index = lua_gettop(L);
    msg->n_keys = keys_size;
    msg->keys = (DmRigDDF__EventKey**)malloc(sizeof(DmRigDDF__EventKey*) * keys_size);
    for (int i = 0; i < keys_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, keys_index);
        msg->keys[i] = (DmRigDDF__EventKey*)luaL_checkdm_rig_ddf__event_key(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__RigAnimation* luaL_checkdm_rig_ddf__rig_animation(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__RigAnimation *msg = (DmRigDDF__RigAnimation*)malloc(sizeof(DmRigDDF__RigAnimation));
    dm_rig_ddf__rig_animation__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // duration
    lua_pushstring(L, "duration");
    lua_gettable(L, narg);
    msg->duration = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // sample_rate
    lua_pushstring(L, "sample_rate");
    lua_gettable(L, narg);
    msg->sample_rate = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // tracks
    lua_pushstring(L, "tracks");
    lua_gettable(L, narg);
    int tracks_size = lua_objlen(L, lua_gettop(L));
    int tracks_index = lua_gettop(L);
    msg->n_tracks = tracks_size;
    msg->tracks = (DmRigDDF__AnimationTrack**)malloc(sizeof(DmRigDDF__AnimationTrack*) * tracks_size);
    for (int i = 0; i < tracks_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, tracks_index);
        msg->tracks[i] = (DmRigDDF__AnimationTrack*)luaL_checkdm_rig_ddf__animation_track(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // event_tracks
    lua_pushstring(L, "event_tracks");
    lua_gettable(L, narg);
    int event_tracks_size = lua_objlen(L, lua_gettop(L));
    int event_tracks_index = lua_gettop(L);
    msg->n_event_tracks = event_tracks_size;
    msg->event_tracks = (DmRigDDF__EventTrack**)malloc(sizeof(DmRigDDF__EventTrack*) * event_tracks_size);
    for (int i = 0; i < event_tracks_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, event_tracks_index);
        msg->event_tracks[i] = (DmRigDDF__EventTrack*)luaL_checkdm_rig_ddf__event_track(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__AnimationSet* luaL_checkdm_rig_ddf__animation_set(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__AnimationSet *msg = (DmRigDDF__AnimationSet*)malloc(sizeof(DmRigDDF__AnimationSet));
    dm_rig_ddf__animation_set__init(msg);

    // animations
    lua_pushstring(L, "animations");
    lua_gettable(L, narg);
    int animations_size = lua_objlen(L, lua_gettop(L));
    int animations_index = lua_gettop(L);
    msg->n_animations = animations_size;
    msg->animations = (DmRigDDF__RigAnimation**)malloc(sizeof(DmRigDDF__RigAnimation*) * animations_size);
    for (int i = 0; i < animations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, animations_index);
        msg->animations[i] = (DmRigDDF__RigAnimation*)luaL_checkdm_rig_ddf__rig_animation(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // bone_list
    lua_pushstring(L, "bone_list");
    lua_gettable(L, narg);
    int bone_list_size = lua_objlen(L, lua_gettop(L));
    int bone_list_index = lua_gettop(L);
    msg->n_bone_list = bone_list_size;
    msg->bone_list = (uint64_t*)malloc(sizeof(uint64_t) * bone_list_size);
    for (int i = 0; i < bone_list_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, bone_list_index);
        msg->bone_list[i] = (uint64_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__AnimationInstanceDesc* luaL_checkdm_rig_ddf__animation_instance_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__AnimationInstanceDesc *msg = (DmRigDDF__AnimationInstanceDesc*)malloc(sizeof(DmRigDDF__AnimationInstanceDesc));
    dm_rig_ddf__animation_instance_desc__init(msg);

    // animation
    lua_pushstring(L, "animation");
    lua_gettable(L, narg);
    msg->animation = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__AnimationSetDesc* luaL_checkdm_rig_ddf__animation_set_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__AnimationSetDesc *msg = (DmRigDDF__AnimationSetDesc*)malloc(sizeof(DmRigDDF__AnimationSetDesc));
    dm_rig_ddf__animation_set_desc__init(msg);

    // animations
    lua_pushstring(L, "animations");
    lua_gettable(L, narg);
    int animations_size = lua_objlen(L, lua_gettop(L));
    int animations_index = lua_gettop(L);
    msg->n_animations = animations_size;
    msg->animations = (DmRigDDF__AnimationInstanceDesc**)malloc(sizeof(DmRigDDF__AnimationInstanceDesc*) * animations_size);
    for (int i = 0; i < animations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, animations_index);
        msg->animations[i] = (DmRigDDF__AnimationInstanceDesc*)luaL_checkdm_rig_ddf__animation_instance_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // skeleton
    lua_pushstring(L, "skeleton");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->skeleton = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__Mesh* luaL_checkdm_rig_ddf__mesh(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__Mesh *msg = (DmRigDDF__Mesh*)malloc(sizeof(DmRigDDF__Mesh));
    dm_rig_ddf__mesh__init(msg);

    // positions
    lua_pushstring(L, "positions");
    lua_gettable(L, narg);
    int positions_size = lua_objlen(L, lua_gettop(L));
    int positions_index = lua_gettop(L);
    msg->n_positions = positions_size;
    msg->positions = (float*)malloc(sizeof(float) * positions_size);
    for (int i = 0; i < positions_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, positions_index);
        msg->positions[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // normals
    lua_pushstring(L, "normals");
    lua_gettable(L, narg);
    int normals_size = lua_objlen(L, lua_gettop(L));
    int normals_index = lua_gettop(L);
    msg->n_normals = normals_size;
    msg->normals = (float*)malloc(sizeof(float) * normals_size);
    for (int i = 0; i < normals_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, normals_index);
        msg->normals[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // tangents
    lua_pushstring(L, "tangents");
    lua_gettable(L, narg);
    int tangents_size = lua_objlen(L, lua_gettop(L));
    int tangents_index = lua_gettop(L);
    msg->n_tangents = tangents_size;
    msg->tangents = (float*)malloc(sizeof(float) * tangents_size);
    for (int i = 0; i < tangents_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, tangents_index);
        msg->tangents[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // colors
    lua_pushstring(L, "colors");
    lua_gettable(L, narg);
    int colors_size = lua_objlen(L, lua_gettop(L));
    int colors_index = lua_gettop(L);
    msg->n_colors = colors_size;
    msg->colors = (float*)malloc(sizeof(float) * colors_size);
    for (int i = 0; i < colors_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, colors_index);
        msg->colors[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // texcoord0
    lua_pushstring(L, "texcoord0");
    lua_gettable(L, narg);
    int texcoord0_size = lua_objlen(L, lua_gettop(L));
    int texcoord0_index = lua_gettop(L);
    msg->n_texcoord0 = texcoord0_size;
    msg->texcoord0 = (float*)malloc(sizeof(float) * texcoord0_size);
    for (int i = 0; i < texcoord0_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, texcoord0_index);
        msg->texcoord0[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // num_texcoord0_components
    lua_pushstring(L, "num_texcoord0_components");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_num_texcoord0_components = 1;
        msg->num_texcoord0_components = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // texcoord1
    lua_pushstring(L, "texcoord1");
    lua_gettable(L, narg);
    int texcoord1_size = lua_objlen(L, lua_gettop(L));
    int texcoord1_index = lua_gettop(L);
    msg->n_texcoord1 = texcoord1_size;
    msg->texcoord1 = (float*)malloc(sizeof(float) * texcoord1_size);
    for (int i = 0; i < texcoord1_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, texcoord1_index);
        msg->texcoord1[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // num_texcoord1_components
    lua_pushstring(L, "num_texcoord1_components");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_num_texcoord1_components = 1;
        msg->num_texcoord1_components = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // indices
    lua_pushstring(L, "indices");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->indices = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // indices_format
    lua_pushstring(L, "indices_format");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_indices_format = 1;
        msg->indices_format = (DmRigDDF__IndexBufferFormat)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // weights
    lua_pushstring(L, "weights");
    lua_gettable(L, narg);
    int weights_size = lua_objlen(L, lua_gettop(L));
    int weights_index = lua_gettop(L);
    msg->n_weights = weights_size;
    msg->weights = (float*)malloc(sizeof(float) * weights_size);
    for (int i = 0; i < weights_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, weights_index);
        msg->weights[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // bone_indices
    lua_pushstring(L, "bone_indices");
    lua_gettable(L, narg);
    int bone_indices_size = lua_objlen(L, lua_gettop(L));
    int bone_indices_index = lua_gettop(L);
    msg->n_bone_indices = bone_indices_size;
    msg->bone_indices = (uint32_t*)malloc(sizeof(uint32_t) * bone_indices_size);
    for (int i = 0; i < bone_indices_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, bone_indices_index);
        msg->bone_indices[i] = (uint32_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // material_index
    lua_pushstring(L, "material_index");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_material_index = 1;
        msg->material_index = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__Model* luaL_checkdm_rig_ddf__model(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__Model *msg = (DmRigDDF__Model*)malloc(sizeof(DmRigDDF__Model));
    dm_rig_ddf__model__init(msg);

    // local
    lua_pushstring(L, "local");
    lua_gettable(L, narg);
    msg->local = (DmMath__Transform*)luaL_checkdm_math__transform(L, lua_gettop(L));
    lua_pop(L, 1);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // meshes
    lua_pushstring(L, "meshes");
    lua_gettable(L, narg);
    int meshes_size = lua_objlen(L, lua_gettop(L));
    int meshes_index = lua_gettop(L);
    msg->n_meshes = meshes_size;
    msg->meshes = (DmRigDDF__Mesh**)malloc(sizeof(DmRigDDF__Mesh*) * meshes_size);
    for (int i = 0; i < meshes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, meshes_index);
        msg->meshes[i] = (DmRigDDF__Mesh*)luaL_checkdm_rig_ddf__mesh(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__MeshSet* luaL_checkdm_rig_ddf__mesh_set(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__MeshSet *msg = (DmRigDDF__MeshSet*)malloc(sizeof(DmRigDDF__MeshSet));
    dm_rig_ddf__mesh_set__init(msg);

    // models
    lua_pushstring(L, "models");
    lua_gettable(L, narg);
    int models_size = lua_objlen(L, lua_gettop(L));
    int models_index = lua_gettop(L);
    msg->n_models = models_size;
    msg->models = (DmRigDDF__Model**)malloc(sizeof(DmRigDDF__Model*) * models_size);
    for (int i = 0; i < models_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, models_index);
        msg->models[i] = (DmRigDDF__Model*)luaL_checkdm_rig_ddf__model(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // materials
    lua_pushstring(L, "materials");
    lua_gettable(L, narg);
    int materials_size = lua_objlen(L, lua_gettop(L));
    int materials_index = lua_gettop(L);
    msg->n_materials = materials_size;
    msg->materials = (char**)malloc(sizeof(char*) * materials_size);
    for (int i = 0; i < materials_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, materials_index);
        msg->materials[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // bone_list
    lua_pushstring(L, "bone_list");
    lua_gettable(L, narg);
    int bone_list_size = lua_objlen(L, lua_gettop(L));
    int bone_list_index = lua_gettop(L);
    msg->n_bone_list = bone_list_size;
    msg->bone_list = (uint64_t*)malloc(sizeof(uint64_t) * bone_list_size);
    for (int i = 0; i < bone_list_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, bone_list_index);
        msg->bone_list[i] = (uint64_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // max_bone_count
    lua_pushstring(L, "max_bone_count");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_max_bone_count = 1;
        msg->max_bone_count = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmRigDDF__RigScene* luaL_checkdm_rig_ddf__rig_scene(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmRigDDF__RigScene *msg = (DmRigDDF__RigScene*)malloc(sizeof(DmRigDDF__RigScene));
    dm_rig_ddf__rig_scene__init(msg);

    // skeleton
    lua_pushstring(L, "skeleton");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->skeleton = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // animation_set
    lua_pushstring(L, "animation_set");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->animation_set = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // mesh_set
    lua_pushstring(L, "mesh_set");
    lua_gettable(L, narg);
    msg->mesh_set = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // texture_set
    lua_pushstring(L, "texture_set");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->texture_set = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmModelDDF__ModelDesc* luaL_checkdm_model_ddf__model_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmModelDDF__ModelDesc *msg = (DmModelDDF__ModelDesc*)malloc(sizeof(DmModelDDF__ModelDesc));
    dm_model_ddf__model_desc__init(msg);

    // mesh
    lua_pushstring(L, "mesh");
    lua_gettable(L, narg);
    msg->mesh = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // material
    lua_pushstring(L, "material");
    lua_gettable(L, narg);
    msg->material = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // textures
    lua_pushstring(L, "textures");
    lua_gettable(L, narg);
    int textures_size = lua_objlen(L, lua_gettop(L));
    int textures_index = lua_gettop(L);
    msg->n_textures = textures_size;
    msg->textures = (char**)malloc(sizeof(char*) * textures_size);
    for (int i = 0; i < textures_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, textures_index);
        msg->textures[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // skeleton
    lua_pushstring(L, "skeleton");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->skeleton = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // animations
    lua_pushstring(L, "animations");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->animations = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // default_animation
    lua_pushstring(L, "default_animation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->default_animation = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmModelDDF__Model* luaL_checkdm_model_ddf__model(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmModelDDF__Model *msg = (DmModelDDF__Model*)malloc(sizeof(DmModelDDF__Model));
    dm_model_ddf__model__init(msg);

    // rig_scene
    lua_pushstring(L, "rig_scene");
    lua_gettable(L, narg);
    msg->rig_scene = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // material
    lua_pushstring(L, "material");
    lua_gettable(L, narg);
    msg->material = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // textures
    lua_pushstring(L, "textures");
    lua_gettable(L, narg);
    int textures_size = lua_objlen(L, lua_gettop(L));
    int textures_index = lua_gettop(L);
    msg->n_textures = textures_size;
    msg->textures = (char**)malloc(sizeof(char*) * textures_size);
    for (int i = 0; i < textures_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, textures_index);
        msg->textures[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // default_animation
    lua_pushstring(L, "default_animation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->default_animation = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmModelDDF__ResetConstant* luaL_checkdm_model_ddf__reset_constant(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmModelDDF__ResetConstant *msg = (DmModelDDF__ResetConstant*)malloc(sizeof(DmModelDDF__ResetConstant));
    dm_model_ddf__reset_constant__init(msg);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_gettable(L, narg);
    msg->name_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmModelDDF__SetTexture* luaL_checkdm_model_ddf__set_texture(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmModelDDF__SetTexture *msg = (DmModelDDF__SetTexture*)malloc(sizeof(DmModelDDF__SetTexture));
    dm_model_ddf__set_texture__init(msg);

    // texture_hash
    lua_pushstring(L, "texture_hash");
    lua_gettable(L, narg);
    msg->texture_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // texture_unit
    lua_pushstring(L, "texture_unit");
    lua_gettable(L, narg);
    msg->texture_unit = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmModelDDF__ModelPlayAnimation* luaL_checkdm_model_ddf__model_play_animation(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmModelDDF__ModelPlayAnimation *msg = (DmModelDDF__ModelPlayAnimation*)malloc(sizeof(DmModelDDF__ModelPlayAnimation));
    dm_model_ddf__model_play_animation__init(msg);

    // animation_id
    lua_pushstring(L, "animation_id");
    lua_gettable(L, narg);
    msg->animation_id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // playback
    lua_pushstring(L, "playback");
    lua_gettable(L, narg);
    msg->playback = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // blend_duration
    lua_pushstring(L, "blend_duration");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_blend_duration = 1;
        msg->blend_duration = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // offset
    lua_pushstring(L, "offset");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_offset = 1;
        msg->offset = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // playback_rate
    lua_pushstring(L, "playback_rate");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_playback_rate = 1;
        msg->playback_rate = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmModelDDF__ModelCancelAnimation* luaL_checkdm_model_ddf__model_cancel_animation(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmModelDDF__ModelCancelAnimation *msg = (DmModelDDF__ModelCancelAnimation*)malloc(sizeof(DmModelDDF__ModelCancelAnimation));
    dm_model_ddf__model_cancel_animation__init(msg);

    return msg;
}
static DmModelDDF__ModelAnimationDone* luaL_checkdm_model_ddf__model_animation_done(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmModelDDF__ModelAnimationDone *msg = (DmModelDDF__ModelAnimationDone*)malloc(sizeof(DmModelDDF__ModelAnimationDone));
    dm_model_ddf__model_animation_done__init(msg);

    // animation_id
    lua_pushstring(L, "animation_id");
    lua_gettable(L, narg);
    msg->animation_id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // playback
    lua_pushstring(L, "playback");
    lua_gettable(L, narg);
    msg->playback = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmMeshDDF__MeshDesc* luaL_checkdm_mesh_ddf__mesh_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmMeshDDF__MeshDesc *msg = (DmMeshDDF__MeshDesc*)malloc(sizeof(DmMeshDDF__MeshDesc));
    dm_mesh_ddf__mesh_desc__init(msg);

    // material
    lua_pushstring(L, "material");
    lua_gettable(L, narg);
    msg->material = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // vertices
    lua_pushstring(L, "vertices");
    lua_gettable(L, narg);
    msg->vertices = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // textures
    lua_pushstring(L, "textures");
    lua_gettable(L, narg);
    int textures_size = lua_objlen(L, lua_gettop(L));
    int textures_index = lua_gettop(L);
    msg->n_textures = textures_size;
    msg->textures = (char**)malloc(sizeof(char*) * textures_size);
    for (int i = 0; i < textures_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, textures_index);
        msg->textures[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // primitive_type
    lua_pushstring(L, "primitive_type");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_primitive_type = 1;
        msg->primitive_type = (DmMeshDDF__MeshDesc__PrimitiveType)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // position_stream
    lua_pushstring(L, "position_stream");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->position_stream = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // normal_stream
    lua_pushstring(L, "normal_stream");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->normal_stream = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__LabelDesc* luaL_checkdm_game_system_ddf__label_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__LabelDesc *msg = (DmGameSystemDDF__LabelDesc*)malloc(sizeof(DmGameSystemDDF__LabelDesc));
    dm_game_system_ddf__label_desc__init(msg);

    // size
    lua_pushstring(L, "size");
    lua_gettable(L, narg);
    msg->size = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    lua_pop(L, 1);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->scale = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // color
    lua_pushstring(L, "color");
    lua_gettable(L, narg);
    msg->color = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    lua_pop(L, 1);

    // outline
    lua_pushstring(L, "outline");
    lua_gettable(L, narg);
    msg->outline = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    lua_pop(L, 1);

    // shadow
    lua_pushstring(L, "shadow");
    lua_gettable(L, narg);
    msg->shadow = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    lua_pop(L, 1);

    // leading
    lua_pushstring(L, "leading");
    lua_gettable(L, narg);
    msg->leading = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // tracking
    lua_pushstring(L, "tracking");
    lua_gettable(L, narg);
    msg->tracking = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // pivot
    lua_pushstring(L, "pivot");
    lua_gettable(L, narg);
    msg->pivot = (DmGameSystemDDF__LabelDesc__Pivot)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // blend_mode
    lua_pushstring(L, "blend_mode");
    lua_gettable(L, narg);
    msg->blend_mode = (DmGameSystemDDF__LabelDesc__BlendMode)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // line_break
    lua_pushstring(L, "line_break");
    lua_gettable(L, narg);
    msg->line_break = (bool)luaL_checkboolean(L, lua_gettop(L));
    lua_pop(L, 1);

    // text
    lua_pushstring(L, "text");
    lua_gettable(L, narg);
    msg->text = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // font
    lua_pushstring(L, "font");
    lua_gettable(L, narg);
    msg->font = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // material
    lua_pushstring(L, "material");
    lua_gettable(L, narg);
    msg->material = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetText* luaL_checkdm_game_system_ddf__set_text(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetText *msg = (DmGameSystemDDF__SetText*)malloc(sizeof(DmGameSystemDDF__SetText));
    dm_game_system_ddf__set_text__init(msg);

    // text
    lua_pushstring(L, "text");
    lua_gettable(L, narg);
    msg->text = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__ConvexHull* luaL_checkdm_game_system_ddf__convex_hull(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__ConvexHull *msg = (DmGameSystemDDF__ConvexHull*)malloc(sizeof(DmGameSystemDDF__ConvexHull));
    dm_game_system_ddf__convex_hull__init(msg);

    // index
    lua_pushstring(L, "index");
    lua_gettable(L, narg);
    msg->index = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // count
    lua_pushstring(L, "count");
    lua_gettable(L, narg);
    msg->count = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // collision_group
    lua_pushstring(L, "collision_group");
    lua_gettable(L, narg);
    msg->collision_group = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__Cue* luaL_checkdm_game_system_ddf__cue(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__Cue *msg = (DmGameSystemDDF__Cue*)malloc(sizeof(DmGameSystemDDF__Cue));
    dm_game_system_ddf__cue__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // frame
    lua_pushstring(L, "frame");
    lua_gettable(L, narg);
    msg->frame = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // value
    lua_pushstring(L, "value");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_value = 1;
        msg->value = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__Animation* luaL_checkdm_game_system_ddf__animation(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__Animation *msg = (DmGameSystemDDF__Animation*)malloc(sizeof(DmGameSystemDDF__Animation));
    dm_game_system_ddf__animation__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // start_tile
    lua_pushstring(L, "start_tile");
    lua_gettable(L, narg);
    msg->start_tile = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // end_tile
    lua_pushstring(L, "end_tile");
    lua_gettable(L, narg);
    msg->end_tile = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // playback
    lua_pushstring(L, "playback");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_playback = 1;
        msg->playback = (DmGameSystemDDF__Playback)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // fps
    lua_pushstring(L, "fps");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_fps = 1;
        msg->fps = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // flip_horizontal
    lua_pushstring(L, "flip_horizontal");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_flip_horizontal = 1;
        msg->flip_horizontal = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // flip_vertical
    lua_pushstring(L, "flip_vertical");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_flip_vertical = 1;
        msg->flip_vertical = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // cues
    lua_pushstring(L, "cues");
    lua_gettable(L, narg);
    int cues_size = lua_objlen(L, lua_gettop(L));
    int cues_index = lua_gettop(L);
    msg->n_cues = cues_size;
    msg->cues = (DmGameSystemDDF__Cue**)malloc(sizeof(DmGameSystemDDF__Cue*) * cues_size);
    for (int i = 0; i < cues_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, cues_index);
        msg->cues[i] = (DmGameSystemDDF__Cue*)luaL_checkdm_game_system_ddf__cue(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__TileSet* luaL_checkdm_game_system_ddf__tile_set(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__TileSet *msg = (DmGameSystemDDF__TileSet*)malloc(sizeof(DmGameSystemDDF__TileSet));
    dm_game_system_ddf__tile_set__init(msg);

    // image
    lua_pushstring(L, "image");
    lua_gettable(L, narg);
    msg->image = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // tile_width
    lua_pushstring(L, "tile_width");
    lua_gettable(L, narg);
    msg->tile_width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // tile_height
    lua_pushstring(L, "tile_height");
    lua_gettable(L, narg);
    msg->tile_height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // tile_margin
    lua_pushstring(L, "tile_margin");
    lua_gettable(L, narg);
    msg->tile_margin = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // tile_spacing
    lua_pushstring(L, "tile_spacing");
    lua_gettable(L, narg);
    msg->tile_spacing = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // collision
    lua_pushstring(L, "collision");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->collision = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // material_tag
    lua_pushstring(L, "material_tag");
    lua_gettable(L, narg);
    msg->material_tag = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // convex_hulls
    lua_pushstring(L, "convex_hulls");
    lua_gettable(L, narg);
    int convex_hulls_size = lua_objlen(L, lua_gettop(L));
    int convex_hulls_index = lua_gettop(L);
    msg->n_convex_hulls = convex_hulls_size;
    msg->convex_hulls = (DmGameSystemDDF__ConvexHull**)malloc(sizeof(DmGameSystemDDF__ConvexHull*) * convex_hulls_size);
    for (int i = 0; i < convex_hulls_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, convex_hulls_index);
        msg->convex_hulls[i] = (DmGameSystemDDF__ConvexHull*)luaL_checkdm_game_system_ddf__convex_hull(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // convex_hull_points
    lua_pushstring(L, "convex_hull_points");
    lua_gettable(L, narg);
    int convex_hull_points_size = lua_objlen(L, lua_gettop(L));
    int convex_hull_points_index = lua_gettop(L);
    msg->n_convex_hull_points = convex_hull_points_size;
    msg->convex_hull_points = (float*)malloc(sizeof(float) * convex_hull_points_size);
    for (int i = 0; i < convex_hull_points_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, convex_hull_points_index);
        msg->convex_hull_points[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // collision_groups
    lua_pushstring(L, "collision_groups");
    lua_gettable(L, narg);
    int collision_groups_size = lua_objlen(L, lua_gettop(L));
    int collision_groups_index = lua_gettop(L);
    msg->n_collision_groups = collision_groups_size;
    msg->collision_groups = (char**)malloc(sizeof(char*) * collision_groups_size);
    for (int i = 0; i < collision_groups_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, collision_groups_index);
        msg->collision_groups[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // animations
    lua_pushstring(L, "animations");
    lua_gettable(L, narg);
    int animations_size = lua_objlen(L, lua_gettop(L));
    int animations_index = lua_gettop(L);
    msg->n_animations = animations_size;
    msg->animations = (DmGameSystemDDF__Animation**)malloc(sizeof(DmGameSystemDDF__Animation*) * animations_size);
    for (int i = 0; i < animations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, animations_index);
        msg->animations[i] = (DmGameSystemDDF__Animation*)luaL_checkdm_game_system_ddf__animation(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // extrude_borders
    lua_pushstring(L, "extrude_borders");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_extrude_borders = 1;
        msg->extrude_borders = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // inner_padding
    lua_pushstring(L, "inner_padding");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_inner_padding = 1;
        msg->inner_padding = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // sprite_trim_mode
    lua_pushstring(L, "sprite_trim_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_sprite_trim_mode = 1;
        msg->sprite_trim_mode = (DmGameSystemDDF__SpriteTrimmingMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__TileCell* luaL_checkdm_game_system_ddf__tile_cell(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__TileCell *msg = (DmGameSystemDDF__TileCell*)malloc(sizeof(DmGameSystemDDF__TileCell));
    dm_game_system_ddf__tile_cell__init(msg);

    // x
    lua_pushstring(L, "x");
    lua_gettable(L, narg);
    msg->x = (int32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // y
    lua_pushstring(L, "y");
    lua_gettable(L, narg);
    msg->y = (int32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // tile
    lua_pushstring(L, "tile");
    lua_gettable(L, narg);
    msg->tile = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // h_flip
    lua_pushstring(L, "h_flip");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_h_flip = 1;
        msg->h_flip = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // v_flip
    lua_pushstring(L, "v_flip");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_v_flip = 1;
        msg->v_flip = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // rotate90
    lua_pushstring(L, "rotate90");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_rotate90 = 1;
        msg->rotate90 = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__TileLayer* luaL_checkdm_game_system_ddf__tile_layer(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__TileLayer *msg = (DmGameSystemDDF__TileLayer*)malloc(sizeof(DmGameSystemDDF__TileLayer));
    dm_game_system_ddf__tile_layer__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // z
    lua_pushstring(L, "z");
    lua_gettable(L, narg);
    msg->z = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // is_visible
    lua_pushstring(L, "is_visible");
    lua_gettable(L, narg);
    msg->is_visible = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // id_hash
    lua_pushstring(L, "id_hash");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_id_hash = 1;
        msg->id_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // cell
    lua_pushstring(L, "cell");
    lua_gettable(L, narg);
    int cell_size = lua_objlen(L, lua_gettop(L));
    int cell_index = lua_gettop(L);
    msg->n_cell = cell_size;
    msg->cell = (DmGameSystemDDF__TileCell**)malloc(sizeof(DmGameSystemDDF__TileCell*) * cell_size);
    for (int i = 0; i < cell_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, cell_index);
        msg->cell[i] = (DmGameSystemDDF__TileCell*)luaL_checkdm_game_system_ddf__tile_cell(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__TileGrid* luaL_checkdm_game_system_ddf__tile_grid(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__TileGrid *msg = (DmGameSystemDDF__TileGrid*)malloc(sizeof(DmGameSystemDDF__TileGrid));
    dm_game_system_ddf__tile_grid__init(msg);

    // tile_set
    lua_pushstring(L, "tile_set");
    lua_gettable(L, narg);
    msg->tile_set = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // layers
    lua_pushstring(L, "layers");
    lua_gettable(L, narg);
    int layers_size = lua_objlen(L, lua_gettop(L));
    int layers_index = lua_gettop(L);
    msg->n_layers = layers_size;
    msg->layers = (DmGameSystemDDF__TileLayer**)malloc(sizeof(DmGameSystemDDF__TileLayer*) * layers_size);
    for (int i = 0; i < layers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, layers_index);
        msg->layers[i] = (DmGameSystemDDF__TileLayer*)luaL_checkdm_game_system_ddf__tile_layer(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // material
    lua_pushstring(L, "material");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->material = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // blend_mode
    lua_pushstring(L, "blend_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_blend_mode = 1;
        msg->blend_mode = (DmGameSystemDDF__TileGrid__BlendMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetTile* luaL_checkdm_game_system_ddf__set_tile(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetTile *msg = (DmGameSystemDDF__SetTile*)malloc(sizeof(DmGameSystemDDF__SetTile));
    dm_game_system_ddf__set_tile__init(msg);

    // layer_id
    lua_pushstring(L, "layer_id");
    lua_gettable(L, narg);
    msg->layer_id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // tile
    lua_pushstring(L, "tile");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_tile = 1;
        msg->tile = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // dx
    lua_pushstring(L, "dx");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_dx = 1;
        msg->dx = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // dy
    lua_pushstring(L, "dy");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_dy = 1;
        msg->dy = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetConstantTileMap* luaL_checkdm_game_system_ddf__set_constant_tile_map(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetConstantTileMap *msg = (DmGameSystemDDF__SetConstantTileMap*)malloc(sizeof(DmGameSystemDDF__SetConstantTileMap));
    dm_game_system_ddf__set_constant_tile_map__init(msg);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_gettable(L, narg);
    msg->name_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // value
    lua_pushstring(L, "value");
    lua_gettable(L, narg);
    msg->value = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__ResetConstantTileMap* luaL_checkdm_game_system_ddf__reset_constant_tile_map(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__ResetConstantTileMap *msg = (DmGameSystemDDF__ResetConstantTileMap*)malloc(sizeof(DmGameSystemDDF__ResetConstantTileMap));
    dm_game_system_ddf__reset_constant_tile_map__init(msg);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_gettable(L, narg);
    msg->name_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__AtlasImage* luaL_checkdm_game_system_ddf__atlas_image(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__AtlasImage *msg = (DmGameSystemDDF__AtlasImage*)malloc(sizeof(DmGameSystemDDF__AtlasImage));
    dm_game_system_ddf__atlas_image__init(msg);

    // image
    lua_pushstring(L, "image");
    lua_gettable(L, narg);
    msg->image = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // sprite_trim_mode
    lua_pushstring(L, "sprite_trim_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_sprite_trim_mode = 1;
        msg->sprite_trim_mode = (DmGameSystemDDF__SpriteTrimmingMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__AtlasAnimation* luaL_checkdm_game_system_ddf__atlas_animation(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__AtlasAnimation *msg = (DmGameSystemDDF__AtlasAnimation*)malloc(sizeof(DmGameSystemDDF__AtlasAnimation));
    dm_game_system_ddf__atlas_animation__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // images
    lua_pushstring(L, "images");
    lua_gettable(L, narg);
    int images_size = lua_objlen(L, lua_gettop(L));
    int images_index = lua_gettop(L);
    msg->n_images = images_size;
    msg->images = (DmGameSystemDDF__AtlasImage**)malloc(sizeof(DmGameSystemDDF__AtlasImage*) * images_size);
    for (int i = 0; i < images_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, images_index);
        msg->images[i] = (DmGameSystemDDF__AtlasImage*)luaL_checkdm_game_system_ddf__atlas_image(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // playback
    lua_pushstring(L, "playback");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_playback = 1;
        msg->playback = (DmGameSystemDDF__Playback)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // fps
    lua_pushstring(L, "fps");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_fps = 1;
        msg->fps = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // flip_horizontal
    lua_pushstring(L, "flip_horizontal");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_flip_horizontal = 1;
        msg->flip_horizontal = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // flip_vertical
    lua_pushstring(L, "flip_vertical");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_flip_vertical = 1;
        msg->flip_vertical = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__Atlas* luaL_checkdm_game_system_ddf__atlas(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__Atlas *msg = (DmGameSystemDDF__Atlas*)malloc(sizeof(DmGameSystemDDF__Atlas));
    dm_game_system_ddf__atlas__init(msg);

    // images
    lua_pushstring(L, "images");
    lua_gettable(L, narg);
    int images_size = lua_objlen(L, lua_gettop(L));
    int images_index = lua_gettop(L);
    msg->n_images = images_size;
    msg->images = (DmGameSystemDDF__AtlasImage**)malloc(sizeof(DmGameSystemDDF__AtlasImage*) * images_size);
    for (int i = 0; i < images_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, images_index);
        msg->images[i] = (DmGameSystemDDF__AtlasImage*)luaL_checkdm_game_system_ddf__atlas_image(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // animations
    lua_pushstring(L, "animations");
    lua_gettable(L, narg);
    int animations_size = lua_objlen(L, lua_gettop(L));
    int animations_index = lua_gettop(L);
    msg->n_animations = animations_size;
    msg->animations = (DmGameSystemDDF__AtlasAnimation**)malloc(sizeof(DmGameSystemDDF__AtlasAnimation*) * animations_size);
    for (int i = 0; i < animations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, animations_index);
        msg->animations[i] = (DmGameSystemDDF__AtlasAnimation*)luaL_checkdm_game_system_ddf__atlas_animation(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // margin
    lua_pushstring(L, "margin");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_margin = 1;
        msg->margin = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // extrude_borders
    lua_pushstring(L, "extrude_borders");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_extrude_borders = 1;
        msg->extrude_borders = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // inner_padding
    lua_pushstring(L, "inner_padding");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_inner_padding = 1;
        msg->inner_padding = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmBufferDDF__StreamDesc* luaL_checkdm_buffer_ddf__stream_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmBufferDDF__StreamDesc *msg = (DmBufferDDF__StreamDesc*)malloc(sizeof(DmBufferDDF__StreamDesc));
    dm_buffer_ddf__stream_desc__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // value_type
    lua_pushstring(L, "value_type");
    lua_gettable(L, narg);
    msg->value_type = (DmBufferDDF__ValueType)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // value_count
    lua_pushstring(L, "value_count");
    lua_gettable(L, narg);
    msg->value_count = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // ui
    lua_pushstring(L, "ui");
    lua_gettable(L, narg);
    int ui_size = lua_objlen(L, lua_gettop(L));
    int ui_index = lua_gettop(L);
    msg->n_ui = ui_size;
    msg->ui = (uint32_t*)malloc(sizeof(uint32_t) * ui_size);
    for (int i = 0; i < ui_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, ui_index);
        msg->ui[i] = (uint32_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // i
    lua_pushstring(L, "i");
    lua_gettable(L, narg);
    int i_size = lua_objlen(L, lua_gettop(L));
    int i_index = lua_gettop(L);
    msg->n_i = i_size;
    msg->i = (int32_t*)malloc(sizeof(int32_t) * i_size);
    for (int i = 0; i < i_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, i_index);
        msg->i[i] = (int32_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // ui64
    lua_pushstring(L, "ui64");
    lua_gettable(L, narg);
    int ui64_size = lua_objlen(L, lua_gettop(L));
    int ui64_index = lua_gettop(L);
    msg->n_ui64 = ui64_size;
    msg->ui64 = (uint64_t*)malloc(sizeof(uint64_t) * ui64_size);
    for (int i = 0; i < ui64_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, ui64_index);
        msg->ui64[i] = (uint64_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // i64
    lua_pushstring(L, "i64");
    lua_gettable(L, narg);
    int i64_size = lua_objlen(L, lua_gettop(L));
    int i64_index = lua_gettop(L);
    msg->n_i64 = i64_size;
    msg->i64 = (int64_t*)malloc(sizeof(int64_t) * i64_size);
    for (int i = 0; i < i64_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, i64_index);
        msg->i64[i] = (int64_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // f
    lua_pushstring(L, "f");
    lua_gettable(L, narg);
    int f_size = lua_objlen(L, lua_gettop(L));
    int f_index = lua_gettop(L);
    msg->n_f = f_size;
    msg->f = (float*)malloc(sizeof(float) * f_size);
    for (int i = 0; i < f_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, f_index);
        msg->f[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmBufferDDF__BufferDesc* luaL_checkdm_buffer_ddf__buffer_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmBufferDDF__BufferDesc *msg = (DmBufferDDF__BufferDesc*)malloc(sizeof(DmBufferDDF__BufferDesc));
    dm_buffer_ddf__buffer_desc__init(msg);

    // streams
    lua_pushstring(L, "streams");
    lua_gettable(L, narg);
    int streams_size = lua_objlen(L, lua_gettop(L));
    int streams_index = lua_gettop(L);
    msg->n_streams = streams_size;
    msg->streams = (DmBufferDDF__StreamDesc**)malloc(sizeof(DmBufferDDF__StreamDesc*) * streams_size);
    for (int i = 0; i < streams_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, streams_index);
        msg->streams[i] = (DmBufferDDF__StreamDesc*)luaL_checkdm_buffer_ddf__stream_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmSoundDDF__SoundDesc* luaL_checkdm_sound_ddf__sound_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmSoundDDF__SoundDesc *msg = (DmSoundDDF__SoundDesc*)malloc(sizeof(DmSoundDDF__SoundDesc));
    dm_sound_ddf__sound_desc__init(msg);

    // sound
    lua_pushstring(L, "sound");
    lua_gettable(L, narg);
    msg->sound = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // looping
    lua_pushstring(L, "looping");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_looping = 1;
        msg->looping = (int32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // group
    lua_pushstring(L, "group");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->group = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // gain
    lua_pushstring(L, "gain");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_gain = 1;
        msg->gain = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // pan
    lua_pushstring(L, "pan");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_pan = 1;
        msg->pan = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // speed
    lua_pushstring(L, "speed");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_speed = 1;
        msg->speed = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // loopcount
    lua_pushstring(L, "loopcount");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_loopcount = 1;
        msg->loopcount = (int32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGamesysDDF__CameraDesc* luaL_checkdm_gamesys_ddf__camera_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGamesysDDF__CameraDesc *msg = (DmGamesysDDF__CameraDesc*)malloc(sizeof(DmGamesysDDF__CameraDesc));
    dm_gamesys_ddf__camera_desc__init(msg);

    // aspect_ratio
    lua_pushstring(L, "aspect_ratio");
    lua_gettable(L, narg);
    msg->aspect_ratio = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // fov
    lua_pushstring(L, "fov");
    lua_gettable(L, narg);
    msg->fov = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // near_z
    lua_pushstring(L, "near_z");
    lua_gettable(L, narg);
    msg->near_z = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // far_z
    lua_pushstring(L, "far_z");
    lua_gettable(L, narg);
    msg->far_z = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // auto_aspect_ratio
    lua_pushstring(L, "auto_aspect_ratio");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_auto_aspect_ratio = 1;
        msg->auto_aspect_ratio = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // orthographic_projection
    lua_pushstring(L, "orthographic_projection");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_orthographic_projection = 1;
        msg->orthographic_projection = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // orthographic_zoom
    lua_pushstring(L, "orthographic_zoom");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_orthographic_zoom = 1;
        msg->orthographic_zoom = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGamesysDDF__SetCamera* luaL_checkdm_gamesys_ddf__set_camera(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGamesysDDF__SetCamera *msg = (DmGamesysDDF__SetCamera*)malloc(sizeof(DmGamesysDDF__SetCamera));
    dm_gamesys_ddf__set_camera__init(msg);

    // aspect_ratio
    lua_pushstring(L, "aspect_ratio");
    lua_gettable(L, narg);
    msg->aspect_ratio = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // fov
    lua_pushstring(L, "fov");
    lua_gettable(L, narg);
    msg->fov = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // near_z
    lua_pushstring(L, "near_z");
    lua_gettable(L, narg);
    msg->near_z = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // far_z
    lua_pushstring(L, "far_z");
    lua_gettable(L, narg);
    msg->far_z = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // orthographic_projection
    lua_pushstring(L, "orthographic_projection");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_orthographic_projection = 1;
        msg->orthographic_projection = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // orthographic_zoom
    lua_pushstring(L, "orthographic_zoom");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_orthographic_zoom = 1;
        msg->orthographic_zoom = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGamesysDDF__AcquireCameraFocus* luaL_checkdm_gamesys_ddf__acquire_camera_focus(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGamesysDDF__AcquireCameraFocus *msg = (DmGamesysDDF__AcquireCameraFocus*)malloc(sizeof(DmGamesysDDF__AcquireCameraFocus));
    dm_gamesys_ddf__acquire_camera_focus__init(msg);

    return msg;
}
static DmGamesysDDF__ReleaseCameraFocus* luaL_checkdm_gamesys_ddf__release_camera_focus(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGamesysDDF__ReleaseCameraFocus *msg = (DmGamesysDDF__ReleaseCameraFocus*)malloc(sizeof(DmGamesysDDF__ReleaseCameraFocus));
    dm_gamesys_ddf__release_camera_focus__init(msg);

    return msg;
}
static DmGameSystemDDF__SpriteDesc* luaL_checkdm_game_system_ddf__sprite_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SpriteDesc *msg = (DmGameSystemDDF__SpriteDesc*)malloc(sizeof(DmGameSystemDDF__SpriteDesc));
    dm_game_system_ddf__sprite_desc__init(msg);

    // tile_set
    lua_pushstring(L, "tile_set");
    lua_gettable(L, narg);
    msg->tile_set = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // default_animation
    lua_pushstring(L, "default_animation");
    lua_gettable(L, narg);
    msg->default_animation = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // material
    lua_pushstring(L, "material");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->material = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // blend_mode
    lua_pushstring(L, "blend_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_blend_mode = 1;
        msg->blend_mode = (DmGameSystemDDF__SpriteDesc__BlendMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // slice9
    lua_pushstring(L, "slice9");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->slice9 = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // size
    lua_pushstring(L, "size");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->size = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // size_mode
    lua_pushstring(L, "size_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_size_mode = 1;
        msg->size_mode = (DmGameSystemDDF__SpriteDesc__SizeMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__PlayAnimation* luaL_checkdm_game_system_ddf__play_animation(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__PlayAnimation *msg = (DmGameSystemDDF__PlayAnimation*)malloc(sizeof(DmGameSystemDDF__PlayAnimation));
    dm_game_system_ddf__play_animation__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // offset
    lua_pushstring(L, "offset");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_offset = 1;
        msg->offset = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // playback_rate
    lua_pushstring(L, "playback_rate");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_playback_rate = 1;
        msg->playback_rate = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__AnimationDone* luaL_checkdm_game_system_ddf__animation_done(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__AnimationDone *msg = (DmGameSystemDDF__AnimationDone*)malloc(sizeof(DmGameSystemDDF__AnimationDone));
    dm_game_system_ddf__animation_done__init(msg);

    // current_tile
    lua_pushstring(L, "current_tile");
    lua_gettable(L, narg);
    msg->current_tile = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetFlipHorizontal* luaL_checkdm_game_system_ddf__set_flip_horizontal(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetFlipHorizontal *msg = (DmGameSystemDDF__SetFlipHorizontal*)malloc(sizeof(DmGameSystemDDF__SetFlipHorizontal));
    dm_game_system_ddf__set_flip_horizontal__init(msg);

    // flip
    lua_pushstring(L, "flip");
    lua_gettable(L, narg);
    msg->flip = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetFlipVertical* luaL_checkdm_game_system_ddf__set_flip_vertical(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetFlipVertical *msg = (DmGameSystemDDF__SetFlipVertical*)malloc(sizeof(DmGameSystemDDF__SetFlipVertical));
    dm_game_system_ddf__set_flip_vertical__init(msg);

    // flip
    lua_pushstring(L, "flip");
    lua_gettable(L, narg);
    msg->flip = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__TextureSetAnimation* luaL_checkdm_game_system_ddf__texture_set_animation(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__TextureSetAnimation *msg = (DmGameSystemDDF__TextureSetAnimation*)malloc(sizeof(DmGameSystemDDF__TextureSetAnimation));
    dm_game_system_ddf__texture_set_animation__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // width
    lua_pushstring(L, "width");
    lua_gettable(L, narg);
    msg->width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // height
    lua_pushstring(L, "height");
    lua_gettable(L, narg);
    msg->height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // start
    lua_pushstring(L, "start");
    lua_gettable(L, narg);
    msg->start = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // end
    lua_pushstring(L, "end");
    lua_gettable(L, narg);
    msg->end = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // fps
    lua_pushstring(L, "fps");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_fps = 1;
        msg->fps = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // playback
    lua_pushstring(L, "playback");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_playback = 1;
        msg->playback = (DmGameSystemDDF__Playback)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // flip_horizontal
    lua_pushstring(L, "flip_horizontal");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_flip_horizontal = 1;
        msg->flip_horizontal = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // flip_vertical
    lua_pushstring(L, "flip_vertical");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_flip_vertical = 1;
        msg->flip_vertical = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // is_animation
    lua_pushstring(L, "is_animation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_is_animation = 1;
        msg->is_animation = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SpriteGeometry* luaL_checkdm_game_system_ddf__sprite_geometry(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SpriteGeometry *msg = (DmGameSystemDDF__SpriteGeometry*)malloc(sizeof(DmGameSystemDDF__SpriteGeometry));
    dm_game_system_ddf__sprite_geometry__init(msg);

    // width
    lua_pushstring(L, "width");
    lua_gettable(L, narg);
    msg->width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // height
    lua_pushstring(L, "height");
    lua_gettable(L, narg);
    msg->height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // vertices
    lua_pushstring(L, "vertices");
    lua_gettable(L, narg);
    int vertices_size = lua_objlen(L, lua_gettop(L));
    int vertices_index = lua_gettop(L);
    msg->n_vertices = vertices_size;
    msg->vertices = (float*)malloc(sizeof(float) * vertices_size);
    for (int i = 0; i < vertices_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, vertices_index);
        msg->vertices[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // uvs
    lua_pushstring(L, "uvs");
    lua_gettable(L, narg);
    int uvs_size = lua_objlen(L, lua_gettop(L));
    int uvs_index = lua_gettop(L);
    msg->n_uvs = uvs_size;
    msg->uvs = (float*)malloc(sizeof(float) * uvs_size);
    for (int i = 0; i < uvs_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, uvs_index);
        msg->uvs[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // indices
    lua_pushstring(L, "indices");
    lua_gettable(L, narg);
    int indices_size = lua_objlen(L, lua_gettop(L));
    int indices_index = lua_gettop(L);
    msg->n_indices = indices_size;
    msg->indices = (uint32_t*)malloc(sizeof(uint32_t) * indices_size);
    for (int i = 0; i < indices_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, indices_index);
        msg->indices[i] = (uint32_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__TextureSet* luaL_checkdm_game_system_ddf__texture_set(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__TextureSet *msg = (DmGameSystemDDF__TextureSet*)malloc(sizeof(DmGameSystemDDF__TextureSet));
    dm_game_system_ddf__texture_set__init(msg);

    // texture
    lua_pushstring(L, "texture");
    lua_gettable(L, narg);
    msg->texture = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // animations
    lua_pushstring(L, "animations");
    lua_gettable(L, narg);
    int animations_size = lua_objlen(L, lua_gettop(L));
    int animations_index = lua_gettop(L);
    msg->n_animations = animations_size;
    msg->animations = (DmGameSystemDDF__TextureSetAnimation**)malloc(sizeof(DmGameSystemDDF__TextureSetAnimation*) * animations_size);
    for (int i = 0; i < animations_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, animations_index);
        msg->animations[i] = (DmGameSystemDDF__TextureSetAnimation*)luaL_checkdm_game_system_ddf__texture_set_animation(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // convex_hulls
    lua_pushstring(L, "convex_hulls");
    lua_gettable(L, narg);
    int convex_hulls_size = lua_objlen(L, lua_gettop(L));
    int convex_hulls_index = lua_gettop(L);
    msg->n_convex_hulls = convex_hulls_size;
    msg->convex_hulls = (DmGameSystemDDF__ConvexHull**)malloc(sizeof(DmGameSystemDDF__ConvexHull*) * convex_hulls_size);
    for (int i = 0; i < convex_hulls_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, convex_hulls_index);
        msg->convex_hulls[i] = (DmGameSystemDDF__ConvexHull*)luaL_checkdm_game_system_ddf__convex_hull(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // tile_width
    lua_pushstring(L, "tile_width");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_tile_width = 1;
        msg->tile_width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // tile_height
    lua_pushstring(L, "tile_height");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_tile_height = 1;
        msg->tile_height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // tile_count
    lua_pushstring(L, "tile_count");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_tile_count = 1;
        msg->tile_count = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // collision_hull_points
    lua_pushstring(L, "collision_hull_points");
    lua_gettable(L, narg);
    int collision_hull_points_size = lua_objlen(L, lua_gettop(L));
    int collision_hull_points_index = lua_gettop(L);
    msg->n_collision_hull_points = collision_hull_points_size;
    msg->collision_hull_points = (float*)malloc(sizeof(float) * collision_hull_points_size);
    for (int i = 0; i < collision_hull_points_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, collision_hull_points_index);
        msg->collision_hull_points[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // collision_groups
    lua_pushstring(L, "collision_groups");
    lua_gettable(L, narg);
    int collision_groups_size = lua_objlen(L, lua_gettop(L));
    int collision_groups_index = lua_gettop(L);
    msg->n_collision_groups = collision_groups_size;
    msg->collision_groups = (char**)malloc(sizeof(char*) * collision_groups_size);
    for (int i = 0; i < collision_groups_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, collision_groups_index);
        msg->collision_groups[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // tex_coords
    lua_pushstring(L, "tex_coords");
    lua_gettable(L, narg);
    msg->tex_coords = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    lua_pop(L, 1);

    // tex_dims
    lua_pushstring(L, "tex_dims");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->tex_dims = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // geometries
    lua_pushstring(L, "geometries");
    lua_gettable(L, narg);
    int geometries_size = lua_objlen(L, lua_gettop(L));
    int geometries_index = lua_gettop(L);
    msg->n_geometries = geometries_size;
    msg->geometries = (DmGameSystemDDF__SpriteGeometry**)malloc(sizeof(DmGameSystemDDF__SpriteGeometry*) * geometries_size);
    for (int i = 0; i < geometries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, geometries_index);
        msg->geometries[i] = (DmGameSystemDDF__SpriteGeometry*)luaL_checkdm_game_system_ddf__sprite_geometry(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // use_geometries
    lua_pushstring(L, "use_geometries");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_use_geometries = 1;
        msg->use_geometries = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // frame_indices
    lua_pushstring(L, "frame_indices");
    lua_gettable(L, narg);
    int frame_indices_size = lua_objlen(L, lua_gettop(L));
    int frame_indices_index = lua_gettop(L);
    msg->n_frame_indices = frame_indices_size;
    msg->frame_indices = (uint32_t*)malloc(sizeof(uint32_t) * frame_indices_size);
    for (int i = 0; i < frame_indices_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, frame_indices_index);
        msg->frame_indices[i] = (uint32_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__ConvexShape* luaL_checkdm_physics_ddf__convex_shape(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__ConvexShape *msg = (DmPhysicsDDF__ConvexShape*)malloc(sizeof(DmPhysicsDDF__ConvexShape));
    dm_physics_ddf__convex_shape__init(msg);

    // shape_type
    lua_pushstring(L, "shape_type");
    lua_gettable(L, narg);
    msg->shape_type = (DmPhysicsDDF__ConvexShape__Type)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // data
    lua_pushstring(L, "data");
    lua_gettable(L, narg);
    int data_size = lua_objlen(L, lua_gettop(L));
    int data_index = lua_gettop(L);
    msg->n_data = data_size;
    msg->data = (float*)malloc(sizeof(float) * data_size);
    for (int i = 0; i < data_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, data_index);
        msg->data[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__CollisionShape* luaL_checkdm_physics_ddf__collision_shape(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__CollisionShape *msg = (DmPhysicsDDF__CollisionShape*)malloc(sizeof(DmPhysicsDDF__CollisionShape));
    dm_physics_ddf__collision_shape__init(msg);

    // shapes
    lua_pushstring(L, "shapes");
    lua_gettable(L, narg);
    int shapes_size = lua_objlen(L, lua_gettop(L));
    int shapes_index = lua_gettop(L);
    msg->n_shapes = shapes_size;
    msg->shapes = (DmPhysicsDDF__CollisionShape__Shape**)malloc(sizeof(DmPhysicsDDF__CollisionShape__Shape*) * shapes_size);
    for (int i = 0; i < shapes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, shapes_index);
        msg->shapes[i] = (DmPhysicsDDF__CollisionShape__Shape*)luaL_checkdm_physics_ddf__collision_shape__shape(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // data
    lua_pushstring(L, "data");
    lua_gettable(L, narg);
    int data_size = lua_objlen(L, lua_gettop(L));
    int data_index = lua_gettop(L);
    msg->n_data = data_size;
    msg->data = (float*)malloc(sizeof(float) * data_size);
    for (int i = 0; i < data_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, data_index);
        msg->data[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__CollisionShape__Shape* luaL_checkdm_physics_ddf__collision_shape__shape(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__CollisionShape__Shape *msg = (DmPhysicsDDF__CollisionShape__Shape*)malloc(sizeof(DmPhysicsDDF__CollisionShape__Shape));
    dm_physics_ddf__collision_shape__shape__init(msg);

    // shape_type
    lua_pushstring(L, "shape_type");
    lua_gettable(L, narg);
    msg->shape_type = (DmPhysicsDDF__CollisionShape__Type)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    lua_pop(L, 1);

    // index
    lua_pushstring(L, "index");
    lua_gettable(L, narg);
    msg->index = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // count
    lua_pushstring(L, "count");
    lua_gettable(L, narg);
    msg->count = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__CollisionObjectDesc* luaL_checkdm_physics_ddf__collision_object_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__CollisionObjectDesc *msg = (DmPhysicsDDF__CollisionObjectDesc*)malloc(sizeof(DmPhysicsDDF__CollisionObjectDesc));
    dm_physics_ddf__collision_object_desc__init(msg);

    // collision_shape
    lua_pushstring(L, "collision_shape");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->collision_shape = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (DmPhysicsDDF__CollisionObjectType)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // mass
    lua_pushstring(L, "mass");
    lua_gettable(L, narg);
    msg->mass = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // friction
    lua_pushstring(L, "friction");
    lua_gettable(L, narg);
    msg->friction = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // restitution
    lua_pushstring(L, "restitution");
    lua_gettable(L, narg);
    msg->restitution = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // group
    lua_pushstring(L, "group");
    lua_gettable(L, narg);
    msg->group = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // mask
    lua_pushstring(L, "mask");
    lua_gettable(L, narg);
    int mask_size = lua_objlen(L, lua_gettop(L));
    int mask_index = lua_gettop(L);
    msg->n_mask = mask_size;
    msg->mask = (char**)malloc(sizeof(char*) * mask_size);
    for (int i = 0; i < mask_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, mask_index);
        msg->mask[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // embedded_collision_shape
    lua_pushstring(L, "embedded_collision_shape");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->embedded_collision_shape = (DmPhysicsDDF__CollisionShape*)luaL_checkdm_physics_ddf__collision_shape(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // linear_damping
    lua_pushstring(L, "linear_damping");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_linear_damping = 1;
        msg->linear_damping = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // angular_damping
    lua_pushstring(L, "angular_damping");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_angular_damping = 1;
        msg->angular_damping = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // locked_rotation
    lua_pushstring(L, "locked_rotation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_locked_rotation = 1;
        msg->locked_rotation = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // bullet
    lua_pushstring(L, "bullet");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_bullet = 1;
        msg->bullet = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__ApplyForce* luaL_checkdm_physics_ddf__apply_force(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__ApplyForce *msg = (DmPhysicsDDF__ApplyForce*)malloc(sizeof(DmPhysicsDDF__ApplyForce));
    dm_physics_ddf__apply_force__init(msg);

    // force
    lua_pushstring(L, "force");
    lua_gettable(L, narg);
    msg->force = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    lua_pop(L, 1);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__CollisionResponse* luaL_checkdm_physics_ddf__collision_response(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__CollisionResponse *msg = (DmPhysicsDDF__CollisionResponse*)malloc(sizeof(DmPhysicsDDF__CollisionResponse));
    dm_physics_ddf__collision_response__init(msg);

    // other_id
    lua_pushstring(L, "other_id");
    lua_gettable(L, narg);
    msg->other_id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // group
    lua_pushstring(L, "group");
    lua_gettable(L, narg);
    msg->group = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // other_position
    lua_pushstring(L, "other_position");
    lua_gettable(L, narg);
    msg->other_position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // other_group
    lua_pushstring(L, "other_group");
    lua_gettable(L, narg);
    msg->other_group = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // own_group
    lua_pushstring(L, "own_group");
    lua_gettable(L, narg);
    msg->own_group = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__ContactPointResponse* luaL_checkdm_physics_ddf__contact_point_response(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__ContactPointResponse *msg = (DmPhysicsDDF__ContactPointResponse*)malloc(sizeof(DmPhysicsDDF__ContactPointResponse));
    dm_physics_ddf__contact_point_response__init(msg);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // normal
    lua_pushstring(L, "normal");
    lua_gettable(L, narg);
    msg->normal = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    lua_pop(L, 1);

    // relative_velocity
    lua_pushstring(L, "relative_velocity");
    lua_gettable(L, narg);
    msg->relative_velocity = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    lua_pop(L, 1);

    // distance
    lua_pushstring(L, "distance");
    lua_gettable(L, narg);
    msg->distance = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // applied_impulse
    lua_pushstring(L, "applied_impulse");
    lua_gettable(L, narg);
    msg->applied_impulse = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // life_time
    lua_pushstring(L, "life_time");
    lua_gettable(L, narg);
    msg->life_time = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // mass
    lua_pushstring(L, "mass");
    lua_gettable(L, narg);
    msg->mass = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // other_mass
    lua_pushstring(L, "other_mass");
    lua_gettable(L, narg);
    msg->other_mass = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // other_id
    lua_pushstring(L, "other_id");
    lua_gettable(L, narg);
    msg->other_id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // other_position
    lua_pushstring(L, "other_position");
    lua_gettable(L, narg);
    msg->other_position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // group
    lua_pushstring(L, "group");
    lua_gettable(L, narg);
    msg->group = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // other_group
    lua_pushstring(L, "other_group");
    lua_gettable(L, narg);
    msg->other_group = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // own_group
    lua_pushstring(L, "own_group");
    lua_gettable(L, narg);
    msg->own_group = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__TriggerResponse* luaL_checkdm_physics_ddf__trigger_response(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__TriggerResponse *msg = (DmPhysicsDDF__TriggerResponse*)malloc(sizeof(DmPhysicsDDF__TriggerResponse));
    dm_physics_ddf__trigger_response__init(msg);

    // other_id
    lua_pushstring(L, "other_id");
    lua_gettable(L, narg);
    msg->other_id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // enter
    lua_pushstring(L, "enter");
    lua_gettable(L, narg);
    msg->enter = (bool)luaL_checkboolean(L, lua_gettop(L));
    lua_pop(L, 1);

    // group
    lua_pushstring(L, "group");
    lua_gettable(L, narg);
    msg->group = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // other_group
    lua_pushstring(L, "other_group");
    lua_gettable(L, narg);
    msg->other_group = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // own_group
    lua_pushstring(L, "own_group");
    lua_gettable(L, narg);
    msg->own_group = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__RequestRayCast* luaL_checkdm_physics_ddf__request_ray_cast(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__RequestRayCast *msg = (DmPhysicsDDF__RequestRayCast*)malloc(sizeof(DmPhysicsDDF__RequestRayCast));
    dm_physics_ddf__request_ray_cast__init(msg);

    // from
    lua_pushstring(L, "from");
    lua_gettable(L, narg);
    msg->from = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // to
    lua_pushstring(L, "to");
    lua_gettable(L, narg);
    msg->to = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // mask
    lua_pushstring(L, "mask");
    lua_gettable(L, narg);
    msg->mask = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // request_id
    lua_pushstring(L, "request_id");
    lua_gettable(L, narg);
    msg->request_id = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__RayCastResponse* luaL_checkdm_physics_ddf__ray_cast_response(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__RayCastResponse *msg = (DmPhysicsDDF__RayCastResponse*)malloc(sizeof(DmPhysicsDDF__RayCastResponse));
    dm_physics_ddf__ray_cast_response__init(msg);

    // fraction
    lua_pushstring(L, "fraction");
    lua_gettable(L, narg);
    msg->fraction = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // normal
    lua_pushstring(L, "normal");
    lua_gettable(L, narg);
    msg->normal = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    lua_pop(L, 1);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // group
    lua_pushstring(L, "group");
    lua_gettable(L, narg);
    msg->group = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // request_id
    lua_pushstring(L, "request_id");
    lua_gettable(L, narg);
    msg->request_id = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__RayCastMissed* luaL_checkdm_physics_ddf__ray_cast_missed(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__RayCastMissed *msg = (DmPhysicsDDF__RayCastMissed*)malloc(sizeof(DmPhysicsDDF__RayCastMissed));
    dm_physics_ddf__ray_cast_missed__init(msg);

    // request_id
    lua_pushstring(L, "request_id");
    lua_gettable(L, narg);
    msg->request_id = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__RequestVelocity* luaL_checkdm_physics_ddf__request_velocity(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__RequestVelocity *msg = (DmPhysicsDDF__RequestVelocity*)malloc(sizeof(DmPhysicsDDF__RequestVelocity));
    dm_physics_ddf__request_velocity__init(msg);

    return msg;
}
static DmPhysicsDDF__VelocityResponse* luaL_checkdm_physics_ddf__velocity_response(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__VelocityResponse *msg = (DmPhysicsDDF__VelocityResponse*)malloc(sizeof(DmPhysicsDDF__VelocityResponse));
    dm_physics_ddf__velocity_response__init(msg);

    // linear_velocity
    lua_pushstring(L, "linear_velocity");
    lua_gettable(L, narg);
    msg->linear_velocity = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    lua_pop(L, 1);

    // angular_velocity
    lua_pushstring(L, "angular_velocity");
    lua_gettable(L, narg);
    msg->angular_velocity = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__SetGridShapeHull* luaL_checkdm_physics_ddf__set_grid_shape_hull(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__SetGridShapeHull *msg = (DmPhysicsDDF__SetGridShapeHull*)malloc(sizeof(DmPhysicsDDF__SetGridShapeHull));
    dm_physics_ddf__set_grid_shape_hull__init(msg);

    // shape
    lua_pushstring(L, "shape");
    lua_gettable(L, narg);
    msg->shape = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // row
    lua_pushstring(L, "row");
    lua_gettable(L, narg);
    msg->row = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // column
    lua_pushstring(L, "column");
    lua_gettable(L, narg);
    msg->column = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // hull
    lua_pushstring(L, "hull");
    lua_gettable(L, narg);
    msg->hull = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // flip_horizontal
    lua_pushstring(L, "flip_horizontal");
    lua_gettable(L, narg);
    msg->flip_horizontal = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // flip_vertical
    lua_pushstring(L, "flip_vertical");
    lua_gettable(L, narg);
    msg->flip_vertical = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // rotate90
    lua_pushstring(L, "rotate90");
    lua_gettable(L, narg);
    msg->rotate90 = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmPhysicsDDF__EnableGridShapeLayer* luaL_checkdm_physics_ddf__enable_grid_shape_layer(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPhysicsDDF__EnableGridShapeLayer *msg = (DmPhysicsDDF__EnableGridShapeLayer*)malloc(sizeof(DmPhysicsDDF__EnableGridShapeLayer));
    dm_physics_ddf__enable_grid_shape_layer__init(msg);

    // shape
    lua_pushstring(L, "shape");
    lua_gettable(L, narg);
    msg->shape = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // enable
    lua_pushstring(L, "enable");
    lua_gettable(L, narg);
    msg->enable = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__FactoryDesc* luaL_checkdm_game_system_ddf__factory_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__FactoryDesc *msg = (DmGameSystemDDF__FactoryDesc*)malloc(sizeof(DmGameSystemDDF__FactoryDesc));
    dm_game_system_ddf__factory_desc__init(msg);

    // prototype
    lua_pushstring(L, "prototype");
    lua_gettable(L, narg);
    msg->prototype = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // load_dynamically
    lua_pushstring(L, "load_dynamically");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_load_dynamically = 1;
        msg->load_dynamically = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__CollectionFactoryDesc* luaL_checkdm_game_system_ddf__collection_factory_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__CollectionFactoryDesc *msg = (DmGameSystemDDF__CollectionFactoryDesc*)malloc(sizeof(DmGameSystemDDF__CollectionFactoryDesc));
    dm_game_system_ddf__collection_factory_desc__init(msg);

    // prototype
    lua_pushstring(L, "prototype");
    lua_gettable(L, narg);
    msg->prototype = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // load_dynamically
    lua_pushstring(L, "load_dynamically");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_load_dynamically = 1;
        msg->load_dynamically = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__Create* luaL_checkdm_game_system_ddf__create(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__Create *msg = (DmGameSystemDDF__Create*)malloc(sizeof(DmGameSystemDDF__Create));
    dm_game_system_ddf__create__init(msg);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    lua_pop(L, 1);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_id = 1;
        msg->id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_scale = 1;
        msg->scale = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // scale3
    lua_pushstring(L, "scale3");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->scale3 = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // index
    lua_pushstring(L, "index");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_index = 1;
        msg->index = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__CollectionProxyDesc* luaL_checkdm_game_system_ddf__collection_proxy_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__CollectionProxyDesc *msg = (DmGameSystemDDF__CollectionProxyDesc*)malloc(sizeof(DmGameSystemDDF__CollectionProxyDesc));
    dm_game_system_ddf__collection_proxy_desc__init(msg);

    // collection
    lua_pushstring(L, "collection");
    lua_gettable(L, narg);
    msg->collection = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // exclude
    lua_pushstring(L, "exclude");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_exclude = 1;
        msg->exclude = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetTimeStep* luaL_checkdm_game_system_ddf__set_time_step(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetTimeStep *msg = (DmGameSystemDDF__SetTimeStep*)malloc(sizeof(DmGameSystemDDF__SetTimeStep));
    dm_game_system_ddf__set_time_step__init(msg);

    // factor
    lua_pushstring(L, "factor");
    lua_gettable(L, narg);
    msg->factor = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // mode
    lua_pushstring(L, "mode");
    lua_gettable(L, narg);
    msg->mode = (DmGameSystemDDF__TimeStepMode)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__LightDesc* luaL_checkdm_game_system_ddf__light_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__LightDesc *msg = (DmGameSystemDDF__LightDesc*)malloc(sizeof(DmGameSystemDDF__LightDesc));
    dm_game_system_ddf__light_desc__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (DmGameSystemDDF__LightType)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // intensity
    lua_pushstring(L, "intensity");
    lua_gettable(L, narg);
    msg->intensity = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // color
    lua_pushstring(L, "color");
    lua_gettable(L, narg);
    msg->color = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    lua_pop(L, 1);

    // range
    lua_pushstring(L, "range");
    lua_gettable(L, narg);
    msg->range = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // decay
    lua_pushstring(L, "decay");
    lua_gettable(L, narg);
    msg->decay = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // cone_angle
    lua_pushstring(L, "cone_angle");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_cone_angle = 1;
        msg->cone_angle = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // penumbra_angle
    lua_pushstring(L, "penumbra_angle");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_penumbra_angle = 1;
        msg->penumbra_angle = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // drop_off
    lua_pushstring(L, "drop_off");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_drop_off = 1;
        msg->drop_off = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetLight* luaL_checkdm_game_system_ddf__set_light(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetLight *msg = (DmGameSystemDDF__SetLight*)malloc(sizeof(DmGameSystemDDF__SetLight));
    dm_game_system_ddf__set_light__init(msg);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    lua_pop(L, 1);

    // light
    lua_pushstring(L, "light");
    lua_gettable(L, narg);
    msg->light = (DmGameSystemDDF__LightDesc*)luaL_checkdm_game_system_ddf__light_desc(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetViewProjection* luaL_checkdm_game_system_ddf__set_view_projection(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetViewProjection *msg = (DmGameSystemDDF__SetViewProjection*)malloc(sizeof(DmGameSystemDDF__SetViewProjection));
    dm_game_system_ddf__set_view_projection__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // view
    lua_pushstring(L, "view");
    lua_gettable(L, narg);
    msg->view = (DmMath__Matrix4*)luaL_checkdm_math__matrix4(L, lua_gettop(L));
    lua_pop(L, 1);

    // projection
    lua_pushstring(L, "projection");
    lua_gettable(L, narg);
    msg->projection = (DmMath__Matrix4*)luaL_checkdm_math__matrix4(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__PlaySound* luaL_checkdm_game_system_ddf__play_sound(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__PlaySound *msg = (DmGameSystemDDF__PlaySound*)malloc(sizeof(DmGameSystemDDF__PlaySound));
    dm_game_system_ddf__play_sound__init(msg);

    // delay
    lua_pushstring(L, "delay");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_delay = 1;
        msg->delay = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // gain
    lua_pushstring(L, "gain");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_gain = 1;
        msg->gain = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // pan
    lua_pushstring(L, "pan");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_pan = 1;
        msg->pan = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // speed
    lua_pushstring(L, "speed");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_speed = 1;
        msg->speed = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // play_id
    lua_pushstring(L, "play_id");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_play_id = 1;
        msg->play_id = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__StopSound* luaL_checkdm_game_system_ddf__stop_sound(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__StopSound *msg = (DmGameSystemDDF__StopSound*)malloc(sizeof(DmGameSystemDDF__StopSound));
    dm_game_system_ddf__stop_sound__init(msg);

    return msg;
}
static DmGameSystemDDF__PauseSound* luaL_checkdm_game_system_ddf__pause_sound(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__PauseSound *msg = (DmGameSystemDDF__PauseSound*)malloc(sizeof(DmGameSystemDDF__PauseSound));
    dm_game_system_ddf__pause_sound__init(msg);

    // pause
    lua_pushstring(L, "pause");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_pause = 1;
        msg->pause = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SoundDone* luaL_checkdm_game_system_ddf__sound_done(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SoundDone *msg = (DmGameSystemDDF__SoundDone*)malloc(sizeof(DmGameSystemDDF__SoundDone));
    dm_game_system_ddf__sound_done__init(msg);

    // play_id
    lua_pushstring(L, "play_id");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_play_id = 1;
        msg->play_id = (int32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetGain* luaL_checkdm_game_system_ddf__set_gain(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetGain *msg = (DmGameSystemDDF__SetGain*)malloc(sizeof(DmGameSystemDDF__SetGain));
    dm_game_system_ddf__set_gain__init(msg);

    // gain
    lua_pushstring(L, "gain");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_gain = 1;
        msg->gain = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetPan* luaL_checkdm_game_system_ddf__set_pan(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetPan *msg = (DmGameSystemDDF__SetPan*)malloc(sizeof(DmGameSystemDDF__SetPan));
    dm_game_system_ddf__set_pan__init(msg);

    // pan
    lua_pushstring(L, "pan");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_pan = 1;
        msg->pan = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetSpeed* luaL_checkdm_game_system_ddf__set_speed(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetSpeed *msg = (DmGameSystemDDF__SetSpeed*)malloc(sizeof(DmGameSystemDDF__SetSpeed));
    dm_game_system_ddf__set_speed__init(msg);

    // speed
    lua_pushstring(L, "speed");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_speed = 1;
        msg->speed = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__PlayParticleFX* luaL_checkdm_game_system_ddf__play_particle_fx(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__PlayParticleFX *msg = (DmGameSystemDDF__PlayParticleFX*)malloc(sizeof(DmGameSystemDDF__PlayParticleFX));
    dm_game_system_ddf__play_particle_fx__init(msg);

    return msg;
}
static DmGameSystemDDF__StopParticleFX* luaL_checkdm_game_system_ddf__stop_particle_fx(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__StopParticleFX *msg = (DmGameSystemDDF__StopParticleFX*)malloc(sizeof(DmGameSystemDDF__StopParticleFX));
    dm_game_system_ddf__stop_particle_fx__init(msg);

    // clear_particles
    lua_pushstring(L, "clear_particles");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_clear_particles = 1;
        msg->clear_particles = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetConstantParticleFX* luaL_checkdm_game_system_ddf__set_constant_particle_fx(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetConstantParticleFX *msg = (DmGameSystemDDF__SetConstantParticleFX*)malloc(sizeof(DmGameSystemDDF__SetConstantParticleFX));
    dm_game_system_ddf__set_constant_particle_fx__init(msg);

    // emitter_id
    lua_pushstring(L, "emitter_id");
    lua_gettable(L, narg);
    msg->emitter_id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_gettable(L, narg);
    msg->name_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // value
    lua_pushstring(L, "value");
    lua_gettable(L, narg);
    msg->value = (DmMath__Matrix4*)luaL_checkdm_math__matrix4(L, lua_gettop(L));
    lua_pop(L, 1);

    // is_matrix4
    lua_pushstring(L, "is_matrix4");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_is_matrix4 = 1;
        msg->is_matrix4 = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__ResetConstantParticleFX* luaL_checkdm_game_system_ddf__reset_constant_particle_fx(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__ResetConstantParticleFX *msg = (DmGameSystemDDF__ResetConstantParticleFX*)malloc(sizeof(DmGameSystemDDF__ResetConstantParticleFX));
    dm_game_system_ddf__reset_constant_particle_fx__init(msg);

    // emitter_id
    lua_pushstring(L, "emitter_id");
    lua_gettable(L, narg);
    msg->emitter_id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_gettable(L, narg);
    msg->name_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetConstant* luaL_checkdm_game_system_ddf__set_constant(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetConstant *msg = (DmGameSystemDDF__SetConstant*)malloc(sizeof(DmGameSystemDDF__SetConstant));
    dm_game_system_ddf__set_constant__init(msg);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_gettable(L, narg);
    msg->name_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // value
    lua_pushstring(L, "value");
    lua_gettable(L, narg);
    msg->value = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    lua_pop(L, 1);

    // index
    lua_pushstring(L, "index");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_index = 1;
        msg->index = (int32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__ResetConstant* luaL_checkdm_game_system_ddf__reset_constant(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__ResetConstant *msg = (DmGameSystemDDF__ResetConstant*)malloc(sizeof(DmGameSystemDDF__ResetConstant));
    dm_game_system_ddf__reset_constant__init(msg);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_gettable(L, narg);
    msg->name_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameSystemDDF__SetScale* luaL_checkdm_game_system_ddf__set_scale(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameSystemDDF__SetScale *msg = (DmGameSystemDDF__SetScale*)malloc(sizeof(DmGameSystemDDF__SetScale));
    dm_game_system_ddf__set_scale__init(msg);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    msg->scale = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGuiDDF__NodeDesc* luaL_checkdm_gui_ddf__node_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGuiDDF__NodeDesc *msg = (DmGuiDDF__NodeDesc*)malloc(sizeof(DmGuiDDF__NodeDesc));
    dm_gui_ddf__node_desc__init(msg);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->position = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->rotation = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->scale = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // size
    lua_pushstring(L, "size");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->size = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // color
    lua_pushstring(L, "color");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->color = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_type = 1;
        msg->type = (DmGuiDDF__NodeDesc__Type)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // blend_mode
    lua_pushstring(L, "blend_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_blend_mode = 1;
        msg->blend_mode = (DmGuiDDF__NodeDesc__BlendMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // text
    lua_pushstring(L, "text");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->text = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // texture
    lua_pushstring(L, "texture");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->texture = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // font
    lua_pushstring(L, "font");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->font = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // xanchor
    lua_pushstring(L, "xanchor");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_xanchor = 1;
        msg->xanchor = (DmGuiDDF__NodeDesc__XAnchor)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // yanchor
    lua_pushstring(L, "yanchor");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_yanchor = 1;
        msg->yanchor = (DmGuiDDF__NodeDesc__YAnchor)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // pivot
    lua_pushstring(L, "pivot");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_pivot = 1;
        msg->pivot = (DmGuiDDF__NodeDesc__Pivot)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // outline
    lua_pushstring(L, "outline");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->outline = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // shadow
    lua_pushstring(L, "shadow");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->shadow = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // adjust_mode
    lua_pushstring(L, "adjust_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_adjust_mode = 1;
        msg->adjust_mode = (DmGuiDDF__NodeDesc__AdjustMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // line_break
    lua_pushstring(L, "line_break");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_line_break = 1;
        msg->line_break = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // parent
    lua_pushstring(L, "parent");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->parent = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // layer
    lua_pushstring(L, "layer");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->layer = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // inherit_alpha
    lua_pushstring(L, "inherit_alpha");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_inherit_alpha = 1;
        msg->inherit_alpha = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // slice9
    lua_pushstring(L, "slice9");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->slice9 = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // outerBounds
    lua_pushstring(L, "outerBounds");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_outerbounds = 1;
        msg->outerbounds = (DmGuiDDF__NodeDesc__PieBounds)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // innerRadius
    lua_pushstring(L, "innerRadius");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_innerradius = 1;
        msg->innerradius = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // perimeterVertices
    lua_pushstring(L, "perimeterVertices");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_perimetervertices = 1;
        msg->perimetervertices = (int32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // pieFillAngle
    lua_pushstring(L, "pieFillAngle");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_piefillangle = 1;
        msg->piefillangle = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // clipping_mode
    lua_pushstring(L, "clipping_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_clipping_mode = 1;
        msg->clipping_mode = (DmGuiDDF__NodeDesc__ClippingMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // clipping_visible
    lua_pushstring(L, "clipping_visible");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_clipping_visible = 1;
        msg->clipping_visible = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // clipping_inverted
    lua_pushstring(L, "clipping_inverted");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_clipping_inverted = 1;
        msg->clipping_inverted = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // alpha
    lua_pushstring(L, "alpha");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_alpha = 1;
        msg->alpha = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // outline_alpha
    lua_pushstring(L, "outline_alpha");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_outline_alpha = 1;
        msg->outline_alpha = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // shadow_alpha
    lua_pushstring(L, "shadow_alpha");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_shadow_alpha = 1;
        msg->shadow_alpha = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // overridden_fields
    lua_pushstring(L, "overridden_fields");
    lua_gettable(L, narg);
    int overridden_fields_size = lua_objlen(L, lua_gettop(L));
    int overridden_fields_index = lua_gettop(L);
    msg->n_overridden_fields = overridden_fields_size;
    msg->overridden_fields = (uint32_t*)malloc(sizeof(uint32_t) * overridden_fields_size);
    for (int i = 0; i < overridden_fields_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, overridden_fields_index);
        msg->overridden_fields[i] = (uint32_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // template
    lua_pushstring(L, "template");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->template_ = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // template_node_child
    lua_pushstring(L, "template_node_child");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_template_node_child = 1;
        msg->template_node_child = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // text_leading
    lua_pushstring(L, "text_leading");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_text_leading = 1;
        msg->text_leading = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // text_tracking
    lua_pushstring(L, "text_tracking");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_text_tracking = 1;
        msg->text_tracking = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // size_mode
    lua_pushstring(L, "size_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_size_mode = 1;
        msg->size_mode = (DmGuiDDF__NodeDesc__SizeMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // spine_scene
    lua_pushstring(L, "spine_scene");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->spine_scene = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // spine_default_animation
    lua_pushstring(L, "spine_default_animation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->spine_default_animation = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // spine_skin
    lua_pushstring(L, "spine_skin");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->spine_skin = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // spine_node_child
    lua_pushstring(L, "spine_node_child");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_spine_node_child = 1;
        msg->spine_node_child = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // particlefx
    lua_pushstring(L, "particlefx");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->particlefx = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // custom_type
    lua_pushstring(L, "custom_type");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_custom_type = 1;
        msg->custom_type = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // enabled
    lua_pushstring(L, "enabled");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_enabled = 1;
        msg->enabled = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // visible
    lua_pushstring(L, "visible");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_visible = 1;
        msg->visible = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGuiDDF__SceneDesc* luaL_checkdm_gui_ddf__scene_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGuiDDF__SceneDesc *msg = (DmGuiDDF__SceneDesc*)malloc(sizeof(DmGuiDDF__SceneDesc));
    dm_gui_ddf__scene_desc__init(msg);

    // script
    lua_pushstring(L, "script");
    lua_gettable(L, narg);
    msg->script = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // fonts
    lua_pushstring(L, "fonts");
    lua_gettable(L, narg);
    int fonts_size = lua_objlen(L, lua_gettop(L));
    int fonts_index = lua_gettop(L);
    msg->n_fonts = fonts_size;
    msg->fonts = (DmGuiDDF__SceneDesc__FontDesc**)malloc(sizeof(DmGuiDDF__SceneDesc__FontDesc*) * fonts_size);
    for (int i = 0; i < fonts_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, fonts_index);
        msg->fonts[i] = (DmGuiDDF__SceneDesc__FontDesc*)luaL_checkdm_gui_ddf__scene_desc__font_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // textures
    lua_pushstring(L, "textures");
    lua_gettable(L, narg);
    int textures_size = lua_objlen(L, lua_gettop(L));
    int textures_index = lua_gettop(L);
    msg->n_textures = textures_size;
    msg->textures = (DmGuiDDF__SceneDesc__TextureDesc**)malloc(sizeof(DmGuiDDF__SceneDesc__TextureDesc*) * textures_size);
    for (int i = 0; i < textures_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, textures_index);
        msg->textures[i] = (DmGuiDDF__SceneDesc__TextureDesc*)luaL_checkdm_gui_ddf__scene_desc__texture_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // background_color
    lua_pushstring(L, "background_color");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->background_color = (DmMath__Vector4*)luaL_checkdm_math__vector4(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // nodes
    lua_pushstring(L, "nodes");
    lua_gettable(L, narg);
    int nodes_size = lua_objlen(L, lua_gettop(L));
    int nodes_index = lua_gettop(L);
    msg->n_nodes = nodes_size;
    msg->nodes = (DmGuiDDF__NodeDesc**)malloc(sizeof(DmGuiDDF__NodeDesc*) * nodes_size);
    for (int i = 0; i < nodes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, nodes_index);
        msg->nodes[i] = (DmGuiDDF__NodeDesc*)luaL_checkdm_gui_ddf__node_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // layers
    lua_pushstring(L, "layers");
    lua_gettable(L, narg);
    int layers_size = lua_objlen(L, lua_gettop(L));
    int layers_index = lua_gettop(L);
    msg->n_layers = layers_size;
    msg->layers = (DmGuiDDF__SceneDesc__LayerDesc**)malloc(sizeof(DmGuiDDF__SceneDesc__LayerDesc*) * layers_size);
    for (int i = 0; i < layers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, layers_index);
        msg->layers[i] = (DmGuiDDF__SceneDesc__LayerDesc*)luaL_checkdm_gui_ddf__scene_desc__layer_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // material
    lua_pushstring(L, "material");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->material = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // layouts
    lua_pushstring(L, "layouts");
    lua_gettable(L, narg);
    int layouts_size = lua_objlen(L, lua_gettop(L));
    int layouts_index = lua_gettop(L);
    msg->n_layouts = layouts_size;
    msg->layouts = (DmGuiDDF__SceneDesc__LayoutDesc**)malloc(sizeof(DmGuiDDF__SceneDesc__LayoutDesc*) * layouts_size);
    for (int i = 0; i < layouts_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, layouts_index);
        msg->layouts[i] = (DmGuiDDF__SceneDesc__LayoutDesc*)luaL_checkdm_gui_ddf__scene_desc__layout_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // adjust_reference
    lua_pushstring(L, "adjust_reference");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_adjust_reference = 1;
        msg->adjust_reference = (DmGuiDDF__SceneDesc__AdjustReference)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // max_nodes
    lua_pushstring(L, "max_nodes");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_max_nodes = 1;
        msg->max_nodes = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // spine_scenes
    lua_pushstring(L, "spine_scenes");
    lua_gettable(L, narg);
    int spine_scenes_size = lua_objlen(L, lua_gettop(L));
    int spine_scenes_index = lua_gettop(L);
    msg->n_spine_scenes = spine_scenes_size;
    msg->spine_scenes = (DmGuiDDF__SceneDesc__SpineSceneDesc**)malloc(sizeof(DmGuiDDF__SceneDesc__SpineSceneDesc*) * spine_scenes_size);
    for (int i = 0; i < spine_scenes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, spine_scenes_index);
        msg->spine_scenes[i] = (DmGuiDDF__SceneDesc__SpineSceneDesc*)luaL_checkdm_gui_ddf__scene_desc__spine_scene_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // particlefxs
    lua_pushstring(L, "particlefxs");
    lua_gettable(L, narg);
    int particlefxs_size = lua_objlen(L, lua_gettop(L));
    int particlefxs_index = lua_gettop(L);
    msg->n_particlefxs = particlefxs_size;
    msg->particlefxs = (DmGuiDDF__SceneDesc__ParticleFXDesc**)malloc(sizeof(DmGuiDDF__SceneDesc__ParticleFXDesc*) * particlefxs_size);
    for (int i = 0; i < particlefxs_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, particlefxs_index);
        msg->particlefxs[i] = (DmGuiDDF__SceneDesc__ParticleFXDesc*)luaL_checkdm_gui_ddf__scene_desc__particle_fxdesc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // resources
    lua_pushstring(L, "resources");
    lua_gettable(L, narg);
    int resources_size = lua_objlen(L, lua_gettop(L));
    int resources_index = lua_gettop(L);
    msg->n_resources = resources_size;
    msg->resources = (DmGuiDDF__SceneDesc__ResourceDesc**)malloc(sizeof(DmGuiDDF__SceneDesc__ResourceDesc*) * resources_size);
    for (int i = 0; i < resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, resources_index);
        msg->resources[i] = (DmGuiDDF__SceneDesc__ResourceDesc*)luaL_checkdm_gui_ddf__scene_desc__resource_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGuiDDF__SceneDesc__FontDesc* luaL_checkdm_gui_ddf__scene_desc__font_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGuiDDF__SceneDesc__FontDesc *msg = (DmGuiDDF__SceneDesc__FontDesc*)malloc(sizeof(DmGuiDDF__SceneDesc__FontDesc));
    dm_gui_ddf__scene_desc__font_desc__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // font
    lua_pushstring(L, "font");
    lua_gettable(L, narg);
    msg->font = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGuiDDF__SceneDesc__TextureDesc* luaL_checkdm_gui_ddf__scene_desc__texture_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGuiDDF__SceneDesc__TextureDesc *msg = (DmGuiDDF__SceneDesc__TextureDesc*)malloc(sizeof(DmGuiDDF__SceneDesc__TextureDesc));
    dm_gui_ddf__scene_desc__texture_desc__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // texture
    lua_pushstring(L, "texture");
    lua_gettable(L, narg);
    msg->texture = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGuiDDF__SceneDesc__LayerDesc* luaL_checkdm_gui_ddf__scene_desc__layer_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGuiDDF__SceneDesc__LayerDesc *msg = (DmGuiDDF__SceneDesc__LayerDesc*)malloc(sizeof(DmGuiDDF__SceneDesc__LayerDesc));
    dm_gui_ddf__scene_desc__layer_desc__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGuiDDF__SceneDesc__LayoutDesc* luaL_checkdm_gui_ddf__scene_desc__layout_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGuiDDF__SceneDesc__LayoutDesc *msg = (DmGuiDDF__SceneDesc__LayoutDesc*)malloc(sizeof(DmGuiDDF__SceneDesc__LayoutDesc));
    dm_gui_ddf__scene_desc__layout_desc__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // nodes
    lua_pushstring(L, "nodes");
    lua_gettable(L, narg);
    int nodes_size = lua_objlen(L, lua_gettop(L));
    int nodes_index = lua_gettop(L);
    msg->n_nodes = nodes_size;
    msg->nodes = (DmGuiDDF__NodeDesc**)malloc(sizeof(DmGuiDDF__NodeDesc*) * nodes_size);
    for (int i = 0; i < nodes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, nodes_index);
        msg->nodes[i] = (DmGuiDDF__NodeDesc*)luaL_checkdm_gui_ddf__node_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGuiDDF__SceneDesc__SpineSceneDesc* luaL_checkdm_gui_ddf__scene_desc__spine_scene_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGuiDDF__SceneDesc__SpineSceneDesc *msg = (DmGuiDDF__SceneDesc__SpineSceneDesc*)malloc(sizeof(DmGuiDDF__SceneDesc__SpineSceneDesc));
    dm_gui_ddf__scene_desc__spine_scene_desc__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // spine_scene
    lua_pushstring(L, "spine_scene");
    lua_gettable(L, narg);
    msg->spine_scene = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGuiDDF__SceneDesc__ResourceDesc* luaL_checkdm_gui_ddf__scene_desc__resource_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGuiDDF__SceneDesc__ResourceDesc *msg = (DmGuiDDF__SceneDesc__ResourceDesc*)malloc(sizeof(DmGuiDDF__SceneDesc__ResourceDesc));
    dm_gui_ddf__scene_desc__resource_desc__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // path
    lua_pushstring(L, "path");
    lua_gettable(L, narg);
    msg->path = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGuiDDF__SceneDesc__ParticleFXDesc* luaL_checkdm_gui_ddf__scene_desc__particle_fxdesc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGuiDDF__SceneDesc__ParticleFXDesc *msg = (DmGuiDDF__SceneDesc__ParticleFXDesc*)malloc(sizeof(DmGuiDDF__SceneDesc__ParticleFXDesc));
    dm_gui_ddf__scene_desc__particle_fxdesc__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // particlefx
    lua_pushstring(L, "particlefx");
    lua_gettable(L, narg);
    msg->particlefx = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGuiDDF__LayoutChanged* luaL_checkdm_gui_ddf__layout_changed(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGuiDDF__LayoutChanged *msg = (DmGuiDDF__LayoutChanged*)malloc(sizeof(DmGuiDDF__LayoutChanged));
    dm_gui_ddf__layout_changed__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // previous_id
    lua_pushstring(L, "previous_id");
    lua_gettable(L, narg);
    msg->previous_id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmLiveUpdateDDF__HashDigest* luaL_checkdm_live_update_ddf__hash_digest(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmLiveUpdateDDF__HashDigest *msg = (DmLiveUpdateDDF__HashDigest*)malloc(sizeof(DmLiveUpdateDDF__HashDigest));
    dm_live_update_ddf__hash_digest__init(msg);

    // data
    lua_pushstring(L, "data");
    lua_gettable(L, narg);
    msg->data = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmLiveUpdateDDF__ManifestHeader* luaL_checkdm_live_update_ddf__manifest_header(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmLiveUpdateDDF__ManifestHeader *msg = (DmLiveUpdateDDF__ManifestHeader*)malloc(sizeof(DmLiveUpdateDDF__ManifestHeader));
    dm_live_update_ddf__manifest_header__init(msg);

    // magic_number
    lua_pushstring(L, "magic_number");
    lua_gettable(L, narg);
    msg->magic_number = (int32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // version
    lua_pushstring(L, "version");
    lua_gettable(L, narg);
    msg->version = (int32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // resource_hash_algorithm
    lua_pushstring(L, "resource_hash_algorithm");
    lua_gettable(L, narg);
    msg->resource_hash_algorithm = (DmLiveUpdateDDF__HashAlgorithm)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // signature_hash_algorithm
    lua_pushstring(L, "signature_hash_algorithm");
    lua_gettable(L, narg);
    msg->signature_hash_algorithm = (DmLiveUpdateDDF__HashAlgorithm)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // signature_sign_algorithm
    lua_pushstring(L, "signature_sign_algorithm");
    lua_gettable(L, narg);
    msg->signature_sign_algorithm = (DmLiveUpdateDDF__SignAlgorithm)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // project_identifier
    lua_pushstring(L, "project_identifier");
    lua_gettable(L, narg);
    msg->project_identifier = (DmLiveUpdateDDF__HashDigest*)luaL_checkdm_live_update_ddf__hash_digest(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmLiveUpdateDDF__ResourceEntry* luaL_checkdm_live_update_ddf__resource_entry(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmLiveUpdateDDF__ResourceEntry *msg = (DmLiveUpdateDDF__ResourceEntry*)malloc(sizeof(DmLiveUpdateDDF__ResourceEntry));
    dm_live_update_ddf__resource_entry__init(msg);

    // url
    lua_pushstring(L, "url");
    lua_gettable(L, narg);
    msg->url = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // url_hash
    lua_pushstring(L, "url_hash");
    lua_gettable(L, narg);
    msg->url_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // hash
    lua_pushstring(L, "hash");
    lua_gettable(L, narg);
    msg->hash = (DmLiveUpdateDDF__HashDigest*)luaL_checkdm_live_update_ddf__hash_digest(L, lua_gettop(L));
    lua_pop(L, 1);

    // dependants
    lua_pushstring(L, "dependants");
    lua_gettable(L, narg);
    int dependants_size = lua_objlen(L, lua_gettop(L));
    int dependants_index = lua_gettop(L);
    msg->n_dependants = dependants_size;
    msg->dependants = (uint32_t*)malloc(sizeof(uint32_t) * dependants_size);
    for (int i = 0; i < dependants_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, dependants_index);
        msg->dependants[i] = (uint32_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // flags
    lua_pushstring(L, "flags");
    lua_gettable(L, narg);
    msg->flags = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmLiveUpdateDDF__ManifestData* luaL_checkdm_live_update_ddf__manifest_data(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmLiveUpdateDDF__ManifestData *msg = (DmLiveUpdateDDF__ManifestData*)malloc(sizeof(DmLiveUpdateDDF__ManifestData));
    dm_live_update_ddf__manifest_data__init(msg);

    // header
    lua_pushstring(L, "header");
    lua_gettable(L, narg);
    msg->header = (DmLiveUpdateDDF__ManifestHeader*)luaL_checkdm_live_update_ddf__manifest_header(L, lua_gettop(L));
    lua_pop(L, 1);

    // engine_versions
    lua_pushstring(L, "engine_versions");
    lua_gettable(L, narg);
    int engine_versions_size = lua_objlen(L, lua_gettop(L));
    int engine_versions_index = lua_gettop(L);
    msg->n_engine_versions = engine_versions_size;
    msg->engine_versions = (DmLiveUpdateDDF__HashDigest**)malloc(sizeof(DmLiveUpdateDDF__HashDigest*) * engine_versions_size);
    for (int i = 0; i < engine_versions_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, engine_versions_index);
        msg->engine_versions[i] = (DmLiveUpdateDDF__HashDigest*)luaL_checkdm_live_update_ddf__hash_digest(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // resources
    lua_pushstring(L, "resources");
    lua_gettable(L, narg);
    int resources_size = lua_objlen(L, lua_gettop(L));
    int resources_index = lua_gettop(L);
    msg->n_resources = resources_size;
    msg->resources = (DmLiveUpdateDDF__ResourceEntry**)malloc(sizeof(DmLiveUpdateDDF__ResourceEntry*) * resources_size);
    for (int i = 0; i < resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, resources_index);
        msg->resources[i] = (DmLiveUpdateDDF__ResourceEntry*)luaL_checkdm_live_update_ddf__resource_entry(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmLiveUpdateDDF__ManifestFile* luaL_checkdm_live_update_ddf__manifest_file(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmLiveUpdateDDF__ManifestFile *msg = (DmLiveUpdateDDF__ManifestFile*)malloc(sizeof(DmLiveUpdateDDF__ManifestFile));
    dm_live_update_ddf__manifest_file__init(msg);

    // data
    lua_pushstring(L, "data");
    lua_gettable(L, narg);
    msg->data = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    lua_pop(L, 1);

    // signature
    lua_pushstring(L, "signature");
    lua_gettable(L, narg);
    msg->signature = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    lua_pop(L, 1);

    // archive_identifier
    lua_pushstring(L, "archive_identifier");
    lua_gettable(L, narg);
    msg->archive_identifier = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmResourceDDF__Reload* luaL_checkdm_resource_ddf__reload(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmResourceDDF__Reload *msg = (DmResourceDDF__Reload*)malloc(sizeof(DmResourceDDF__Reload));
    dm_resource_ddf__reload__init(msg);

    // resources
    lua_pushstring(L, "resources");
    lua_gettable(L, narg);
    int resources_size = lua_objlen(L, lua_gettop(L));
    int resources_index = lua_gettop(L);
    msg->n_resources = resources_size;
    msg->resources = (char**)malloc(sizeof(char*) * resources_size);
    for (int i = 0; i < resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, resources_index);
        msg->resources[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGraphics__Cubemap* luaL_checkdm_graphics__cubemap(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGraphics__Cubemap *msg = (DmGraphics__Cubemap*)malloc(sizeof(DmGraphics__Cubemap));
    dm_graphics__cubemap__init(msg);

    // right
    lua_pushstring(L, "right");
    lua_gettable(L, narg);
    msg->right = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // left
    lua_pushstring(L, "left");
    lua_gettable(L, narg);
    msg->left = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // top
    lua_pushstring(L, "top");
    lua_gettable(L, narg);
    msg->top = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // bottom
    lua_pushstring(L, "bottom");
    lua_gettable(L, narg);
    msg->bottom = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // front
    lua_pushstring(L, "front");
    lua_gettable(L, narg);
    msg->front = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // back
    lua_pushstring(L, "back");
    lua_gettable(L, narg);
    msg->back = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGraphics__TextureImage* luaL_checkdm_graphics__texture_image(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGraphics__TextureImage *msg = (DmGraphics__TextureImage*)malloc(sizeof(DmGraphics__TextureImage));
    dm_graphics__texture_image__init(msg);

    // alternatives
    lua_pushstring(L, "alternatives");
    lua_gettable(L, narg);
    int alternatives_size = lua_objlen(L, lua_gettop(L));
    int alternatives_index = lua_gettop(L);
    msg->n_alternatives = alternatives_size;
    msg->alternatives = (DmGraphics__TextureImage__Image**)malloc(sizeof(DmGraphics__TextureImage__Image*) * alternatives_size);
    for (int i = 0; i < alternatives_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, alternatives_index);
        msg->alternatives[i] = (DmGraphics__TextureImage__Image*)luaL_checkdm_graphics__texture_image__image(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (DmGraphics__TextureImage__Type)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // count
    lua_pushstring(L, "count");
    lua_gettable(L, narg);
    msg->count = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGraphics__TextureImage__Image* luaL_checkdm_graphics__texture_image__image(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGraphics__TextureImage__Image *msg = (DmGraphics__TextureImage__Image*)malloc(sizeof(DmGraphics__TextureImage__Image));
    dm_graphics__texture_image__image__init(msg);

    // width
    lua_pushstring(L, "width");
    lua_gettable(L, narg);
    msg->width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // height
    lua_pushstring(L, "height");
    lua_gettable(L, narg);
    msg->height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // original_width
    lua_pushstring(L, "original_width");
    lua_gettable(L, narg);
    msg->original_width = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // original_height
    lua_pushstring(L, "original_height");
    lua_gettable(L, narg);
    msg->original_height = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // format
    lua_pushstring(L, "format");
    lua_gettable(L, narg);
    msg->format = (DmGraphics__TextureImage__TextureFormat)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // mip_map_offset
    lua_pushstring(L, "mip_map_offset");
    lua_gettable(L, narg);
    int mip_map_offset_size = lua_objlen(L, lua_gettop(L));
    int mip_map_offset_index = lua_gettop(L);
    msg->n_mip_map_offset = mip_map_offset_size;
    msg->mip_map_offset = (uint32_t*)malloc(sizeof(uint32_t) * mip_map_offset_size);
    for (int i = 0; i < mip_map_offset_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, mip_map_offset_index);
        msg->mip_map_offset[i] = (uint32_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // mip_map_size
    lua_pushstring(L, "mip_map_size");
    lua_gettable(L, narg);
    int mip_map_size_size = lua_objlen(L, lua_gettop(L));
    int mip_map_size_index = lua_gettop(L);
    msg->n_mip_map_size = mip_map_size_size;
    msg->mip_map_size = (uint32_t*)malloc(sizeof(uint32_t) * mip_map_size_size);
    for (int i = 0; i < mip_map_size_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, mip_map_size_index);
        msg->mip_map_size[i] = (uint32_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // data
    lua_pushstring(L, "data");
    lua_gettable(L, narg);
    msg->data = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    lua_pop(L, 1);

    // compression_type
    lua_pushstring(L, "compression_type");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_compression_type = 1;
        msg->compression_type = (DmGraphics__TextureImage__CompressionType)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // compression_flags
    lua_pushstring(L, "compression_flags");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_compression_flags = 1;
        msg->compression_flags = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // mip_map_size_compressed
    lua_pushstring(L, "mip_map_size_compressed");
    lua_gettable(L, narg);
    int mip_map_size_compressed_size = lua_objlen(L, lua_gettop(L));
    int mip_map_size_compressed_index = lua_gettop(L);
    msg->n_mip_map_size_compressed = mip_map_size_compressed_size;
    msg->mip_map_size_compressed = (uint32_t*)malloc(sizeof(uint32_t) * mip_map_size_compressed_size);
    for (int i = 0; i < mip_map_size_compressed_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, mip_map_size_compressed_index);
        msg->mip_map_size_compressed[i] = (uint32_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGraphics__TextureFormatAlternative* luaL_checkdm_graphics__texture_format_alternative(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGraphics__TextureFormatAlternative *msg = (DmGraphics__TextureFormatAlternative*)malloc(sizeof(DmGraphics__TextureFormatAlternative));
    dm_graphics__texture_format_alternative__init(msg);

    // format
    lua_pushstring(L, "format");
    lua_gettable(L, narg);
    msg->format = (DmGraphics__TextureImage__TextureFormat)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // compression_level
    lua_pushstring(L, "compression_level");
    lua_gettable(L, narg);
    msg->compression_level = (DmGraphics__TextureFormatAlternative__CompressionLevel)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // compression_type
    lua_pushstring(L, "compression_type");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_compression_type = 1;
        msg->compression_type = (DmGraphics__TextureImage__CompressionType)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGraphics__PathSettings* luaL_checkdm_graphics__path_settings(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGraphics__PathSettings *msg = (DmGraphics__PathSettings*)malloc(sizeof(DmGraphics__PathSettings));
    dm_graphics__path_settings__init(msg);

    // path
    lua_pushstring(L, "path");
    lua_gettable(L, narg);
    msg->path = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // profile
    lua_pushstring(L, "profile");
    lua_gettable(L, narg);
    msg->profile = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGraphics__PlatformProfile* luaL_checkdm_graphics__platform_profile(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGraphics__PlatformProfile *msg = (DmGraphics__PlatformProfile*)malloc(sizeof(DmGraphics__PlatformProfile));
    dm_graphics__platform_profile__init(msg);

    // os
    lua_pushstring(L, "os");
    lua_gettable(L, narg);
    msg->os = (DmGraphics__PlatformProfile__OS)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // formats
    lua_pushstring(L, "formats");
    lua_gettable(L, narg);
    int formats_size = lua_objlen(L, lua_gettop(L));
    int formats_index = lua_gettop(L);
    msg->n_formats = formats_size;
    msg->formats = (DmGraphics__TextureFormatAlternative**)malloc(sizeof(DmGraphics__TextureFormatAlternative*) * formats_size);
    for (int i = 0; i < formats_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, formats_index);
        msg->formats[i] = (DmGraphics__TextureFormatAlternative*)luaL_checkdm_graphics__texture_format_alternative(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // mipmaps
    lua_pushstring(L, "mipmaps");
    lua_gettable(L, narg);
    msg->mipmaps = (bool)luaL_checkboolean(L, lua_gettop(L));
    lua_pop(L, 1);

    // max_texture_size
    lua_pushstring(L, "max_texture_size");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_max_texture_size = 1;
        msg->max_texture_size = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // premultiply_alpha
    lua_pushstring(L, "premultiply_alpha");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_premultiply_alpha = 1;
        msg->premultiply_alpha = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGraphics__TextureProfile* luaL_checkdm_graphics__texture_profile(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGraphics__TextureProfile *msg = (DmGraphics__TextureProfile*)malloc(sizeof(DmGraphics__TextureProfile));
    dm_graphics__texture_profile__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // platforms
    lua_pushstring(L, "platforms");
    lua_gettable(L, narg);
    int platforms_size = lua_objlen(L, lua_gettop(L));
    int platforms_index = lua_gettop(L);
    msg->n_platforms = platforms_size;
    msg->platforms = (DmGraphics__PlatformProfile**)malloc(sizeof(DmGraphics__PlatformProfile*) * platforms_size);
    for (int i = 0; i < platforms_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, platforms_index);
        msg->platforms[i] = (DmGraphics__PlatformProfile*)luaL_checkdm_graphics__platform_profile(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGraphics__TextureProfiles* luaL_checkdm_graphics__texture_profiles(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGraphics__TextureProfiles *msg = (DmGraphics__TextureProfiles*)malloc(sizeof(DmGraphics__TextureProfiles));
    dm_graphics__texture_profiles__init(msg);

    // path_settings
    lua_pushstring(L, "path_settings");
    lua_gettable(L, narg);
    int path_settings_size = lua_objlen(L, lua_gettop(L));
    int path_settings_index = lua_gettop(L);
    msg->n_path_settings = path_settings_size;
    msg->path_settings = (DmGraphics__PathSettings**)malloc(sizeof(DmGraphics__PathSettings*) * path_settings_size);
    for (int i = 0; i < path_settings_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, path_settings_index);
        msg->path_settings[i] = (DmGraphics__PathSettings*)luaL_checkdm_graphics__path_settings(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // profiles
    lua_pushstring(L, "profiles");
    lua_gettable(L, narg);
    int profiles_size = lua_objlen(L, lua_gettop(L));
    int profiles_index = lua_gettop(L);
    msg->n_profiles = profiles_size;
    msg->profiles = (DmGraphics__TextureProfile**)malloc(sizeof(DmGraphics__TextureProfile*) * profiles_size);
    for (int i = 0; i < profiles_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, profiles_index);
        msg->profiles[i] = (DmGraphics__TextureProfile*)luaL_checkdm_graphics__texture_profile(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGraphics__ShaderDesc* luaL_checkdm_graphics__shader_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGraphics__ShaderDesc *msg = (DmGraphics__ShaderDesc*)malloc(sizeof(DmGraphics__ShaderDesc));
    dm_graphics__shader_desc__init(msg);

    // shaders
    lua_pushstring(L, "shaders");
    lua_gettable(L, narg);
    int shaders_size = lua_objlen(L, lua_gettop(L));
    int shaders_index = lua_gettop(L);
    msg->n_shaders = shaders_size;
    msg->shaders = (DmGraphics__ShaderDesc__Shader**)malloc(sizeof(DmGraphics__ShaderDesc__Shader*) * shaders_size);
    for (int i = 0; i < shaders_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, shaders_index);
        msg->shaders[i] = (DmGraphics__ShaderDesc__Shader*)luaL_checkdm_graphics__shader_desc__shader(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGraphics__ShaderDesc__ResourceBinding* luaL_checkdm_graphics__shader_desc__resource_binding(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGraphics__ShaderDesc__ResourceBinding *msg = (DmGraphics__ShaderDesc__ResourceBinding*)malloc(sizeof(DmGraphics__ShaderDesc__ResourceBinding));
    dm_graphics__shader_desc__resource_binding__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (DmGraphics__ShaderDesc__ShaderDataType)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // element_count
    lua_pushstring(L, "element_count");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_element_count = 1;
        msg->element_count = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // set
    lua_pushstring(L, "set");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_set = 1;
        msg->set = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // binding
    lua_pushstring(L, "binding");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_binding = 1;
        msg->binding = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGraphics__ShaderDesc__Shader* luaL_checkdm_graphics__shader_desc__shader(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGraphics__ShaderDesc__Shader *msg = (DmGraphics__ShaderDesc__Shader*)malloc(sizeof(DmGraphics__ShaderDesc__Shader));
    dm_graphics__shader_desc__shader__init(msg);

    // language
    lua_pushstring(L, "language");
    lua_gettable(L, narg);
    msg->language = (DmGraphics__ShaderDesc__Language)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // source
    lua_pushstring(L, "source");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->source = (ProtobufCBinaryData)luaL_checkProtobufCBinaryData(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // uniforms
    lua_pushstring(L, "uniforms");
    lua_gettable(L, narg);
    int uniforms_size = lua_objlen(L, lua_gettop(L));
    int uniforms_index = lua_gettop(L);
    msg->n_uniforms = uniforms_size;
    msg->uniforms = (DmGraphics__ShaderDesc__ResourceBinding**)malloc(sizeof(DmGraphics__ShaderDesc__ResourceBinding*) * uniforms_size);
    for (int i = 0; i < uniforms_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, uniforms_index);
        msg->uniforms[i] = (DmGraphics__ShaderDesc__ResourceBinding*)luaL_checkdm_graphics__shader_desc__resource_binding(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // attributes
    lua_pushstring(L, "attributes");
    lua_gettable(L, narg);
    int attributes_size = lua_objlen(L, lua_gettop(L));
    int attributes_index = lua_gettop(L);
    msg->n_attributes = attributes_size;
    msg->attributes = (DmGraphics__ShaderDesc__ResourceBinding**)malloc(sizeof(DmGraphics__ShaderDesc__ResourceBinding*) * attributes_size);
    for (int i = 0; i < attributes_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, attributes_index);
        msg->attributes[i] = (DmGraphics__ShaderDesc__ResourceBinding*)luaL_checkdm_graphics__shader_desc__resource_binding(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmPropertiesDDF__PropertyDeclarationEntry* luaL_checkdm_properties_ddf__property_declaration_entry(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPropertiesDDF__PropertyDeclarationEntry *msg = (DmPropertiesDDF__PropertyDeclarationEntry*)malloc(sizeof(DmPropertiesDDF__PropertyDeclarationEntry));
    dm_properties_ddf__property_declaration_entry__init(msg);

    // key
    lua_pushstring(L, "key");
    lua_gettable(L, narg);
    msg->key = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // index
    lua_pushstring(L, "index");
    lua_gettable(L, narg);
    msg->index = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // element_ids
    lua_pushstring(L, "element_ids");
    lua_gettable(L, narg);
    int element_ids_size = lua_objlen(L, lua_gettop(L));
    int element_ids_index = lua_gettop(L);
    msg->n_element_ids = element_ids_size;
    msg->element_ids = (uint64_t*)malloc(sizeof(uint64_t) * element_ids_size);
    for (int i = 0; i < element_ids_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, element_ids_index);
        msg->element_ids[i] = (uint64_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmPropertiesDDF__PropertyDeclarations* luaL_checkdm_properties_ddf__property_declarations(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmPropertiesDDF__PropertyDeclarations *msg = (DmPropertiesDDF__PropertyDeclarations*)malloc(sizeof(DmPropertiesDDF__PropertyDeclarations));
    dm_properties_ddf__property_declarations__init(msg);

    // number_entries
    lua_pushstring(L, "number_entries");
    lua_gettable(L, narg);
    int number_entries_size = lua_objlen(L, lua_gettop(L));
    int number_entries_index = lua_gettop(L);
    msg->n_number_entries = number_entries_size;
    msg->number_entries = (DmPropertiesDDF__PropertyDeclarationEntry**)malloc(sizeof(DmPropertiesDDF__PropertyDeclarationEntry*) * number_entries_size);
    for (int i = 0; i < number_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, number_entries_index);
        msg->number_entries[i] = (DmPropertiesDDF__PropertyDeclarationEntry*)luaL_checkdm_properties_ddf__property_declaration_entry(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // hash_entries
    lua_pushstring(L, "hash_entries");
    lua_gettable(L, narg);
    int hash_entries_size = lua_objlen(L, lua_gettop(L));
    int hash_entries_index = lua_gettop(L);
    msg->n_hash_entries = hash_entries_size;
    msg->hash_entries = (DmPropertiesDDF__PropertyDeclarationEntry**)malloc(sizeof(DmPropertiesDDF__PropertyDeclarationEntry*) * hash_entries_size);
    for (int i = 0; i < hash_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, hash_entries_index);
        msg->hash_entries[i] = (DmPropertiesDDF__PropertyDeclarationEntry*)luaL_checkdm_properties_ddf__property_declaration_entry(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // url_entries
    lua_pushstring(L, "url_entries");
    lua_gettable(L, narg);
    int url_entries_size = lua_objlen(L, lua_gettop(L));
    int url_entries_index = lua_gettop(L);
    msg->n_url_entries = url_entries_size;
    msg->url_entries = (DmPropertiesDDF__PropertyDeclarationEntry**)malloc(sizeof(DmPropertiesDDF__PropertyDeclarationEntry*) * url_entries_size);
    for (int i = 0; i < url_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, url_entries_index);
        msg->url_entries[i] = (DmPropertiesDDF__PropertyDeclarationEntry*)luaL_checkdm_properties_ddf__property_declaration_entry(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // vector3_entries
    lua_pushstring(L, "vector3_entries");
    lua_gettable(L, narg);
    int vector3_entries_size = lua_objlen(L, lua_gettop(L));
    int vector3_entries_index = lua_gettop(L);
    msg->n_vector3_entries = vector3_entries_size;
    msg->vector3_entries = (DmPropertiesDDF__PropertyDeclarationEntry**)malloc(sizeof(DmPropertiesDDF__PropertyDeclarationEntry*) * vector3_entries_size);
    for (int i = 0; i < vector3_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, vector3_entries_index);
        msg->vector3_entries[i] = (DmPropertiesDDF__PropertyDeclarationEntry*)luaL_checkdm_properties_ddf__property_declaration_entry(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // vector4_entries
    lua_pushstring(L, "vector4_entries");
    lua_gettable(L, narg);
    int vector4_entries_size = lua_objlen(L, lua_gettop(L));
    int vector4_entries_index = lua_gettop(L);
    msg->n_vector4_entries = vector4_entries_size;
    msg->vector4_entries = (DmPropertiesDDF__PropertyDeclarationEntry**)malloc(sizeof(DmPropertiesDDF__PropertyDeclarationEntry*) * vector4_entries_size);
    for (int i = 0; i < vector4_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, vector4_entries_index);
        msg->vector4_entries[i] = (DmPropertiesDDF__PropertyDeclarationEntry*)luaL_checkdm_properties_ddf__property_declaration_entry(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // quat_entries
    lua_pushstring(L, "quat_entries");
    lua_gettable(L, narg);
    int quat_entries_size = lua_objlen(L, lua_gettop(L));
    int quat_entries_index = lua_gettop(L);
    msg->n_quat_entries = quat_entries_size;
    msg->quat_entries = (DmPropertiesDDF__PropertyDeclarationEntry**)malloc(sizeof(DmPropertiesDDF__PropertyDeclarationEntry*) * quat_entries_size);
    for (int i = 0; i < quat_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, quat_entries_index);
        msg->quat_entries[i] = (DmPropertiesDDF__PropertyDeclarationEntry*)luaL_checkdm_properties_ddf__property_declaration_entry(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // bool_entries
    lua_pushstring(L, "bool_entries");
    lua_gettable(L, narg);
    int bool_entries_size = lua_objlen(L, lua_gettop(L));
    int bool_entries_index = lua_gettop(L);
    msg->n_bool_entries = bool_entries_size;
    msg->bool_entries = (DmPropertiesDDF__PropertyDeclarationEntry**)malloc(sizeof(DmPropertiesDDF__PropertyDeclarationEntry*) * bool_entries_size);
    for (int i = 0; i < bool_entries_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, bool_entries_index);
        msg->bool_entries[i] = (DmPropertiesDDF__PropertyDeclarationEntry*)luaL_checkdm_properties_ddf__property_declaration_entry(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // float_values
    lua_pushstring(L, "float_values");
    lua_gettable(L, narg);
    int float_values_size = lua_objlen(L, lua_gettop(L));
    int float_values_index = lua_gettop(L);
    msg->n_float_values = float_values_size;
    msg->float_values = (float*)malloc(sizeof(float) * float_values_size);
    for (int i = 0; i < float_values_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, float_values_index);
        msg->float_values[i] = (float)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // hash_values
    lua_pushstring(L, "hash_values");
    lua_gettable(L, narg);
    int hash_values_size = lua_objlen(L, lua_gettop(L));
    int hash_values_index = lua_gettop(L);
    msg->n_hash_values = hash_values_size;
    msg->hash_values = (uint64_t*)malloc(sizeof(uint64_t) * hash_values_size);
    for (int i = 0; i < hash_values_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, hash_values_index);
        msg->hash_values[i] = (uint64_t)luaL_checknumber(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // string_values
    lua_pushstring(L, "string_values");
    lua_gettable(L, narg);
    int string_values_size = lua_objlen(L, lua_gettop(L));
    int string_values_index = lua_gettop(L);
    msg->n_string_values = string_values_size;
    msg->string_values = (char**)malloc(sizeof(char*) * string_values_size);
    for (int i = 0; i < string_values_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, string_values_index);
        msg->string_values[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__PropertyDesc* luaL_checkdm_game_object_ddf__property_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__PropertyDesc *msg = (DmGameObjectDDF__PropertyDesc*)malloc(sizeof(DmGameObjectDDF__PropertyDesc));
    dm_game_object_ddf__property_desc__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // value
    lua_pushstring(L, "value");
    lua_gettable(L, narg);
    msg->value = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (DmGameObjectDDF__PropertyType)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__ComponentDesc* luaL_checkdm_game_object_ddf__component_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__ComponentDesc *msg = (DmGameObjectDDF__ComponentDesc*)malloc(sizeof(DmGameObjectDDF__ComponentDesc));
    dm_game_object_ddf__component_desc__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // component
    lua_pushstring(L, "component");
    lua_gettable(L, narg);
    msg->component = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // properties
    lua_pushstring(L, "properties");
    lua_gettable(L, narg);
    int properties_size = lua_objlen(L, lua_gettop(L));
    int properties_index = lua_gettop(L);
    msg->n_properties = properties_size;
    msg->properties = (DmGameObjectDDF__PropertyDesc**)malloc(sizeof(DmGameObjectDDF__PropertyDesc*) * properties_size);
    for (int i = 0; i < properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, properties_index);
        msg->properties[i] = (DmGameObjectDDF__PropertyDesc*)luaL_checkdm_game_object_ddf__property_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // property_decls
    lua_pushstring(L, "property_decls");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->property_decls = (DmPropertiesDDF__PropertyDeclarations*)luaL_checkdm_properties_ddf__property_declarations(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->scale = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__EmbeddedComponentDesc* luaL_checkdm_game_object_ddf__embedded_component_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__EmbeddedComponentDesc *msg = (DmGameObjectDDF__EmbeddedComponentDesc*)malloc(sizeof(DmGameObjectDDF__EmbeddedComponentDesc));
    dm_game_object_ddf__embedded_component_desc__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // data
    lua_pushstring(L, "data");
    lua_gettable(L, narg);
    msg->data = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->scale = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__PrototypeDesc* luaL_checkdm_game_object_ddf__prototype_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__PrototypeDesc *msg = (DmGameObjectDDF__PrototypeDesc*)malloc(sizeof(DmGameObjectDDF__PrototypeDesc));
    dm_game_object_ddf__prototype_desc__init(msg);

    // components
    lua_pushstring(L, "components");
    lua_gettable(L, narg);
    int components_size = lua_objlen(L, lua_gettop(L));
    int components_index = lua_gettop(L);
    msg->n_components = components_size;
    msg->components = (DmGameObjectDDF__ComponentDesc**)malloc(sizeof(DmGameObjectDDF__ComponentDesc*) * components_size);
    for (int i = 0; i < components_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, components_index);
        msg->components[i] = (DmGameObjectDDF__ComponentDesc*)luaL_checkdm_game_object_ddf__component_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // embedded_components
    lua_pushstring(L, "embedded_components");
    lua_gettable(L, narg);
    int embedded_components_size = lua_objlen(L, lua_gettop(L));
    int embedded_components_index = lua_gettop(L);
    msg->n_embedded_components = embedded_components_size;
    msg->embedded_components = (DmGameObjectDDF__EmbeddedComponentDesc**)malloc(sizeof(DmGameObjectDDF__EmbeddedComponentDesc*) * embedded_components_size);
    for (int i = 0; i < embedded_components_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, embedded_components_index);
        msg->embedded_components[i] = (DmGameObjectDDF__EmbeddedComponentDesc*)luaL_checkdm_game_object_ddf__embedded_component_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // property_resources
    lua_pushstring(L, "property_resources");
    lua_gettable(L, narg);
    int property_resources_size = lua_objlen(L, lua_gettop(L));
    int property_resources_index = lua_gettop(L);
    msg->n_property_resources = property_resources_size;
    msg->property_resources = (char**)malloc(sizeof(char*) * property_resources_size);
    for (int i = 0; i < property_resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, property_resources_index);
        msg->property_resources[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__ComponentPropertyDesc* luaL_checkdm_game_object_ddf__component_property_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__ComponentPropertyDesc *msg = (DmGameObjectDDF__ComponentPropertyDesc*)malloc(sizeof(DmGameObjectDDF__ComponentPropertyDesc));
    dm_game_object_ddf__component_property_desc__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // properties
    lua_pushstring(L, "properties");
    lua_gettable(L, narg);
    int properties_size = lua_objlen(L, lua_gettop(L));
    int properties_index = lua_gettop(L);
    msg->n_properties = properties_size;
    msg->properties = (DmGameObjectDDF__PropertyDesc**)malloc(sizeof(DmGameObjectDDF__PropertyDesc*) * properties_size);
    for (int i = 0; i < properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, properties_index);
        msg->properties[i] = (DmGameObjectDDF__PropertyDesc*)luaL_checkdm_game_object_ddf__property_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // property_decls
    lua_pushstring(L, "property_decls");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->property_decls = (DmPropertiesDDF__PropertyDeclarations*)luaL_checkdm_properties_ddf__property_declarations(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__ComponenTypeDesc* luaL_checkdm_game_object_ddf__componen_type_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__ComponenTypeDesc *msg = (DmGameObjectDDF__ComponenTypeDesc*)malloc(sizeof(DmGameObjectDDF__ComponenTypeDesc));
    dm_game_object_ddf__componen_type_desc__init(msg);

    // name_hash
    lua_pushstring(L, "name_hash");
    lua_gettable(L, narg);
    msg->name_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // max_count
    lua_pushstring(L, "max_count");
    lua_gettable(L, narg);
    msg->max_count = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__InstanceDesc* luaL_checkdm_game_object_ddf__instance_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__InstanceDesc *msg = (DmGameObjectDDF__InstanceDesc*)malloc(sizeof(DmGameObjectDDF__InstanceDesc));
    dm_game_object_ddf__instance_desc__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // prototype
    lua_pushstring(L, "prototype");
    lua_gettable(L, narg);
    msg->prototype = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // children
    lua_pushstring(L, "children");
    lua_gettable(L, narg);
    int children_size = lua_objlen(L, lua_gettop(L));
    int children_index = lua_gettop(L);
    msg->n_children = children_size;
    msg->children = (char**)malloc(sizeof(char*) * children_size);
    for (int i = 0; i < children_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, children_index);
        msg->children[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // component_properties
    lua_pushstring(L, "component_properties");
    lua_gettable(L, narg);
    int component_properties_size = lua_objlen(L, lua_gettop(L));
    int component_properties_index = lua_gettop(L);
    msg->n_component_properties = component_properties_size;
    msg->component_properties = (DmGameObjectDDF__ComponentPropertyDesc**)malloc(sizeof(DmGameObjectDDF__ComponentPropertyDesc*) * component_properties_size);
    for (int i = 0; i < component_properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, component_properties_index);
        msg->component_properties[i] = (DmGameObjectDDF__ComponentPropertyDesc*)luaL_checkdm_game_object_ddf__component_property_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_scale = 1;
        msg->scale = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // scale3
    lua_pushstring(L, "scale3");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->scale3 = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__EmbeddedInstanceDesc* luaL_checkdm_game_object_ddf__embedded_instance_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__EmbeddedInstanceDesc *msg = (DmGameObjectDDF__EmbeddedInstanceDesc*)malloc(sizeof(DmGameObjectDDF__EmbeddedInstanceDesc));
    dm_game_object_ddf__embedded_instance_desc__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // children
    lua_pushstring(L, "children");
    lua_gettable(L, narg);
    int children_size = lua_objlen(L, lua_gettop(L));
    int children_index = lua_gettop(L);
    msg->n_children = children_size;
    msg->children = (char**)malloc(sizeof(char*) * children_size);
    for (int i = 0; i < children_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, children_index);
        msg->children[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // data
    lua_pushstring(L, "data");
    lua_gettable(L, narg);
    msg->data = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // component_properties
    lua_pushstring(L, "component_properties");
    lua_gettable(L, narg);
    int component_properties_size = lua_objlen(L, lua_gettop(L));
    int component_properties_index = lua_gettop(L);
    msg->n_component_properties = component_properties_size;
    msg->component_properties = (DmGameObjectDDF__ComponentPropertyDesc**)malloc(sizeof(DmGameObjectDDF__ComponentPropertyDesc*) * component_properties_size);
    for (int i = 0; i < component_properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, component_properties_index);
        msg->component_properties[i] = (DmGameObjectDDF__ComponentPropertyDesc*)luaL_checkdm_game_object_ddf__component_property_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_scale = 1;
        msg->scale = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // scale3
    lua_pushstring(L, "scale3");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->scale3 = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__InstancePropertyDesc* luaL_checkdm_game_object_ddf__instance_property_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__InstancePropertyDesc *msg = (DmGameObjectDDF__InstancePropertyDesc*)malloc(sizeof(DmGameObjectDDF__InstancePropertyDesc));
    dm_game_object_ddf__instance_property_desc__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // properties
    lua_pushstring(L, "properties");
    lua_gettable(L, narg);
    int properties_size = lua_objlen(L, lua_gettop(L));
    int properties_index = lua_gettop(L);
    msg->n_properties = properties_size;
    msg->properties = (DmGameObjectDDF__ComponentPropertyDesc**)malloc(sizeof(DmGameObjectDDF__ComponentPropertyDesc*) * properties_size);
    for (int i = 0; i < properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, properties_index);
        msg->properties[i] = (DmGameObjectDDF__ComponentPropertyDesc*)luaL_checkdm_game_object_ddf__component_property_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__CollectionInstanceDesc* luaL_checkdm_game_object_ddf__collection_instance_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__CollectionInstanceDesc *msg = (DmGameObjectDDF__CollectionInstanceDesc*)malloc(sizeof(DmGameObjectDDF__CollectionInstanceDesc));
    dm_game_object_ddf__collection_instance_desc__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // collection
    lua_pushstring(L, "collection");
    lua_gettable(L, narg);
    msg->collection = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_scale = 1;
        msg->scale = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // scale3
    lua_pushstring(L, "scale3");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->scale3 = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // instance_properties
    lua_pushstring(L, "instance_properties");
    lua_gettable(L, narg);
    int instance_properties_size = lua_objlen(L, lua_gettop(L));
    int instance_properties_index = lua_gettop(L);
    msg->n_instance_properties = instance_properties_size;
    msg->instance_properties = (DmGameObjectDDF__InstancePropertyDesc**)malloc(sizeof(DmGameObjectDDF__InstancePropertyDesc*) * instance_properties_size);
    for (int i = 0; i < instance_properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, instance_properties_index);
        msg->instance_properties[i] = (DmGameObjectDDF__InstancePropertyDesc*)luaL_checkdm_game_object_ddf__instance_property_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__CollectionDesc* luaL_checkdm_game_object_ddf__collection_desc(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__CollectionDesc *msg = (DmGameObjectDDF__CollectionDesc*)malloc(sizeof(DmGameObjectDDF__CollectionDesc));
    dm_game_object_ddf__collection_desc__init(msg);

    // name
    lua_pushstring(L, "name");
    lua_gettable(L, narg);
    msg->name = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // instances
    lua_pushstring(L, "instances");
    lua_gettable(L, narg);
    int instances_size = lua_objlen(L, lua_gettop(L));
    int instances_index = lua_gettop(L);
    msg->n_instances = instances_size;
    msg->instances = (DmGameObjectDDF__InstanceDesc**)malloc(sizeof(DmGameObjectDDF__InstanceDesc*) * instances_size);
    for (int i = 0; i < instances_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, instances_index);
        msg->instances[i] = (DmGameObjectDDF__InstanceDesc*)luaL_checkdm_game_object_ddf__instance_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // collection_instances
    lua_pushstring(L, "collection_instances");
    lua_gettable(L, narg);
    int collection_instances_size = lua_objlen(L, lua_gettop(L));
    int collection_instances_index = lua_gettop(L);
    msg->n_collection_instances = collection_instances_size;
    msg->collection_instances = (DmGameObjectDDF__CollectionInstanceDesc**)malloc(sizeof(DmGameObjectDDF__CollectionInstanceDesc*) * collection_instances_size);
    for (int i = 0; i < collection_instances_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, collection_instances_index);
        msg->collection_instances[i] = (DmGameObjectDDF__CollectionInstanceDesc*)luaL_checkdm_game_object_ddf__collection_instance_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // scale_along_z
    lua_pushstring(L, "scale_along_z");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_scale_along_z = 1;
        msg->scale_along_z = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // embedded_instances
    lua_pushstring(L, "embedded_instances");
    lua_gettable(L, narg);
    int embedded_instances_size = lua_objlen(L, lua_gettop(L));
    int embedded_instances_index = lua_gettop(L);
    msg->n_embedded_instances = embedded_instances_size;
    msg->embedded_instances = (DmGameObjectDDF__EmbeddedInstanceDesc**)malloc(sizeof(DmGameObjectDDF__EmbeddedInstanceDesc*) * embedded_instances_size);
    for (int i = 0; i < embedded_instances_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, embedded_instances_index);
        msg->embedded_instances[i] = (DmGameObjectDDF__EmbeddedInstanceDesc*)luaL_checkdm_game_object_ddf__embedded_instance_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // property_resources
    lua_pushstring(L, "property_resources");
    lua_gettable(L, narg);
    int property_resources_size = lua_objlen(L, lua_gettop(L));
    int property_resources_index = lua_gettop(L);
    msg->n_property_resources = property_resources_size;
    msg->property_resources = (char**)malloc(sizeof(char*) * property_resources_size);
    for (int i = 0; i < property_resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, property_resources_index);
        msg->property_resources[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // component_types
    lua_pushstring(L, "component_types");
    lua_gettable(L, narg);
    int component_types_size = lua_objlen(L, lua_gettop(L));
    int component_types_index = lua_gettop(L);
    msg->n_component_types = component_types_size;
    msg->component_types = (DmGameObjectDDF__ComponenTypeDesc**)malloc(sizeof(DmGameObjectDDF__ComponenTypeDesc*) * component_types_size);
    for (int i = 0; i < component_types_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, component_types_index);
        msg->component_types[i] = (DmGameObjectDDF__ComponenTypeDesc*)luaL_checkdm_game_object_ddf__componen_type_desc(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__AcquireInputFocus* luaL_checkdm_game_object_ddf__acquire_input_focus(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__AcquireInputFocus *msg = (DmGameObjectDDF__AcquireInputFocus*)malloc(sizeof(DmGameObjectDDF__AcquireInputFocus));
    dm_game_object_ddf__acquire_input_focus__init(msg);

    return msg;
}
static DmGameObjectDDF__ReleaseInputFocus* luaL_checkdm_game_object_ddf__release_input_focus(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__ReleaseInputFocus *msg = (DmGameObjectDDF__ReleaseInputFocus*)malloc(sizeof(DmGameObjectDDF__ReleaseInputFocus));
    dm_game_object_ddf__release_input_focus__init(msg);

    return msg;
}
static DmGameObjectDDF__RequestTransform* luaL_checkdm_game_object_ddf__request_transform(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__RequestTransform *msg = (DmGameObjectDDF__RequestTransform*)malloc(sizeof(DmGameObjectDDF__RequestTransform));
    dm_game_object_ddf__request_transform__init(msg);

    return msg;
}
static DmGameObjectDDF__TransformResponse* luaL_checkdm_game_object_ddf__transform_response(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__TransformResponse *msg = (DmGameObjectDDF__TransformResponse*)malloc(sizeof(DmGameObjectDDF__TransformResponse));
    dm_game_object_ddf__transform_response__init(msg);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    lua_pop(L, 1);

    // world_position
    lua_pushstring(L, "world_position");
    lua_gettable(L, narg);
    msg->world_position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // world_rotation
    lua_pushstring(L, "world_rotation");
    lua_gettable(L, narg);
    msg->world_rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    lua_pop(L, 1);

    // scale
    lua_pushstring(L, "scale");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_scale = 1;
        msg->scale = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // scale3
    lua_pushstring(L, "scale3");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->scale3 = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // world_scale
    lua_pushstring(L, "world_scale");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_world_scale = 1;
        msg->world_scale = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // world_scale3
    lua_pushstring(L, "world_scale3");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->world_scale3 = (DmMath__Vector3*)luaL_checkdm_math__vector3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__SetParent* luaL_checkdm_game_object_ddf__set_parent(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__SetParent *msg = (DmGameObjectDDF__SetParent*)malloc(sizeof(DmGameObjectDDF__SetParent));
    dm_game_object_ddf__set_parent__init(msg);

    // parent_id
    lua_pushstring(L, "parent_id");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_parent_id = 1;
        msg->parent_id = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // keep_world_transform
    lua_pushstring(L, "keep_world_transform");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_keep_world_transform = 1;
        msg->keep_world_transform = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmGameObjectDDF__Enable* luaL_checkdm_game_object_ddf__enable(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__Enable *msg = (DmGameObjectDDF__Enable*)malloc(sizeof(DmGameObjectDDF__Enable));
    dm_game_object_ddf__enable__init(msg);

    return msg;
}
static DmGameObjectDDF__Disable* luaL_checkdm_game_object_ddf__disable(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__Disable *msg = (DmGameObjectDDF__Disable*)malloc(sizeof(DmGameObjectDDF__Disable));
    dm_game_object_ddf__disable__init(msg);

    return msg;
}
static DmGameObjectDDF__ScriptMessage* luaL_checkdm_game_object_ddf__script_message(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmGameObjectDDF__ScriptMessage *msg = (DmGameObjectDDF__ScriptMessage*)malloc(sizeof(DmGameObjectDDF__ScriptMessage));
    dm_game_object_ddf__script_message__init(msg);

    // descriptor_hash
    lua_pushstring(L, "descriptor_hash");
    lua_gettable(L, narg);
    msg->descriptor_hash = (uint64_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // payload_size
    lua_pushstring(L, "payload_size");
    lua_gettable(L, narg);
    msg->payload_size = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // function
    lua_pushstring(L, "function");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_function = 1;
        msg->function = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // unref_function
    lua_pushstring(L, "unref_function");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_unref_function = 1;
        msg->unref_function = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmLuaDDF__LuaModule* luaL_checkdm_lua_ddf__lua_module(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmLuaDDF__LuaModule *msg = (DmLuaDDF__LuaModule*)malloc(sizeof(DmLuaDDF__LuaModule));
    dm_lua_ddf__lua_module__init(msg);

    // source
    lua_pushstring(L, "source");
    lua_gettable(L, narg);
    msg->source = (DmLuaDDF__LuaSource*)luaL_checkdm_lua_ddf__lua_source(L, lua_gettop(L));
    lua_pop(L, 1);

    // modules
    lua_pushstring(L, "modules");
    lua_gettable(L, narg);
    int modules_size = lua_objlen(L, lua_gettop(L));
    int modules_index = lua_gettop(L);
    msg->n_modules = modules_size;
    msg->modules = (char**)malloc(sizeof(char*) * modules_size);
    for (int i = 0; i < modules_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, modules_index);
        msg->modules[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // resources
    lua_pushstring(L, "resources");
    lua_gettable(L, narg);
    int resources_size = lua_objlen(L, lua_gettop(L));
    int resources_index = lua_gettop(L);
    msg->n_resources = resources_size;
    msg->resources = (char**)malloc(sizeof(char*) * resources_size);
    for (int i = 0; i < resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, resources_index);
        msg->resources[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // properties
    lua_pushstring(L, "properties");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->properties = (DmPropertiesDDF__PropertyDeclarations*)luaL_checkdm_properties_ddf__property_declarations(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // property_resources
    lua_pushstring(L, "property_resources");
    lua_gettable(L, narg);
    int property_resources_size = lua_objlen(L, lua_gettop(L));
    int property_resources_index = lua_gettop(L);
    msg->n_property_resources = property_resources_size;
    msg->property_resources = (char**)malloc(sizeof(char*) * property_resources_size);
    for (int i = 0; i < property_resources_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, property_resources_index);
        msg->property_resources[i] = (char*)luaL_checkstring(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmEngineDDF__HideApp* luaL_checkdm_engine_ddf__hide_app(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmEngineDDF__HideApp *msg = (DmEngineDDF__HideApp*)malloc(sizeof(DmEngineDDF__HideApp));
    dm_engine_ddf__hide_app__init(msg);

    return msg;
}
static DmEngineDDF__RunScript* luaL_checkdm_engine_ddf__run_script(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmEngineDDF__RunScript *msg = (DmEngineDDF__RunScript*)malloc(sizeof(DmEngineDDF__RunScript));
    dm_engine_ddf__run_script__init(msg);

    // module
    lua_pushstring(L, "module");
    lua_gettable(L, narg);
    msg->module = (DmLuaDDF__LuaModule*)luaL_checkdm_lua_ddf__lua_module(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmParticleDDF__SplinePoint* luaL_checkdm_particle_ddf__spline_point(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmParticleDDF__SplinePoint *msg = (DmParticleDDF__SplinePoint*)malloc(sizeof(DmParticleDDF__SplinePoint));
    dm_particle_ddf__spline_point__init(msg);

    // x
    lua_pushstring(L, "x");
    lua_gettable(L, narg);
    msg->x = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // y
    lua_pushstring(L, "y");
    lua_gettable(L, narg);
    msg->y = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // t_x
    lua_pushstring(L, "t_x");
    lua_gettable(L, narg);
    msg->t_x = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // t_y
    lua_pushstring(L, "t_y");
    lua_gettable(L, narg);
    msg->t_y = (float)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    return msg;
}
static DmParticleDDF__Modifier* luaL_checkdm_particle_ddf__modifier(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmParticleDDF__Modifier *msg = (DmParticleDDF__Modifier*)malloc(sizeof(DmParticleDDF__Modifier));
    dm_particle_ddf__modifier__init(msg);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (DmParticleDDF__ModifierType)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // use_direction
    lua_pushstring(L, "use_direction");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_use_direction = 1;
        msg->use_direction = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // properties
    lua_pushstring(L, "properties");
    lua_gettable(L, narg);
    int properties_size = lua_objlen(L, lua_gettop(L));
    int properties_index = lua_gettop(L);
    msg->n_properties = properties_size;
    msg->properties = (DmParticleDDF__Modifier__Property**)malloc(sizeof(DmParticleDDF__Modifier__Property*) * properties_size);
    for (int i = 0; i < properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, properties_index);
        msg->properties[i] = (DmParticleDDF__Modifier__Property*)luaL_checkdm_particle_ddf__modifier__property(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmParticleDDF__Modifier__Property* luaL_checkdm_particle_ddf__modifier__property(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmParticleDDF__Modifier__Property *msg = (DmParticleDDF__Modifier__Property*)malloc(sizeof(DmParticleDDF__Modifier__Property));
    dm_particle_ddf__modifier__property__init(msg);

    // key
    lua_pushstring(L, "key");
    lua_gettable(L, narg);
    msg->key = (DmParticleDDF__ModifierKey)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // points
    lua_pushstring(L, "points");
    lua_gettable(L, narg);
    int points_size = lua_objlen(L, lua_gettop(L));
    int points_index = lua_gettop(L);
    msg->n_points = points_size;
    msg->points = (DmParticleDDF__SplinePoint**)malloc(sizeof(DmParticleDDF__SplinePoint*) * points_size);
    for (int i = 0; i < points_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, points_index);
        msg->points[i] = (DmParticleDDF__SplinePoint*)luaL_checkdm_particle_ddf__spline_point(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // spread
    lua_pushstring(L, "spread");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_spread = 1;
        msg->spread = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmParticleDDF__Emitter* luaL_checkdm_particle_ddf__emitter(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmParticleDDF__Emitter *msg = (DmParticleDDF__Emitter*)malloc(sizeof(DmParticleDDF__Emitter));
    dm_particle_ddf__emitter__init(msg);

    // id
    lua_pushstring(L, "id");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->id = (char*)luaL_checkstring(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // mode
    lua_pushstring(L, "mode");
    lua_gettable(L, narg);
    msg->mode = (DmParticleDDF__PlayMode)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // duration
    lua_pushstring(L, "duration");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_duration = 1;
        msg->duration = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // space
    lua_pushstring(L, "space");
    lua_gettable(L, narg);
    msg->space = (DmParticleDDF__EmissionSpace)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // position
    lua_pushstring(L, "position");
    lua_gettable(L, narg);
    msg->position = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    lua_pop(L, 1);

    // rotation
    lua_pushstring(L, "rotation");
    lua_gettable(L, narg);
    msg->rotation = (DmMath__Quat*)luaL_checkdm_math__quat(L, lua_gettop(L));
    lua_pop(L, 1);

    // tile_source
    lua_pushstring(L, "tile_source");
    lua_gettable(L, narg);
    msg->tile_source = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // animation
    lua_pushstring(L, "animation");
    lua_gettable(L, narg);
    msg->animation = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // material
    lua_pushstring(L, "material");
    lua_gettable(L, narg);
    msg->material = (char*)luaL_checkstring(L, lua_gettop(L));
    lua_pop(L, 1);

    // blend_mode
    lua_pushstring(L, "blend_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_blend_mode = 1;
        msg->blend_mode = (DmParticleDDF__BlendMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // particle_orientation
    lua_pushstring(L, "particle_orientation");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_particle_orientation = 1;
        msg->particle_orientation = (DmParticleDDF__ParticleOrientation)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // inherit_velocity
    lua_pushstring(L, "inherit_velocity");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_inherit_velocity = 1;
        msg->inherit_velocity = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // max_particle_count
    lua_pushstring(L, "max_particle_count");
    lua_gettable(L, narg);
    msg->max_particle_count = (uint32_t)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // type
    lua_pushstring(L, "type");
    lua_gettable(L, narg);
    msg->type = (DmParticleDDF__EmitterType)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // start_delay
    lua_pushstring(L, "start_delay");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_start_delay = 1;
        msg->start_delay = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // properties
    lua_pushstring(L, "properties");
    lua_gettable(L, narg);
    int properties_size = lua_objlen(L, lua_gettop(L));
    int properties_index = lua_gettop(L);
    msg->n_properties = properties_size;
    msg->properties = (DmParticleDDF__Emitter__Property**)malloc(sizeof(DmParticleDDF__Emitter__Property*) * properties_size);
    for (int i = 0; i < properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, properties_index);
        msg->properties[i] = (DmParticleDDF__Emitter__Property*)luaL_checkdm_particle_ddf__emitter__property(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // particle_properties
    lua_pushstring(L, "particle_properties");
    lua_gettable(L, narg);
    int particle_properties_size = lua_objlen(L, lua_gettop(L));
    int particle_properties_index = lua_gettop(L);
    msg->n_particle_properties = particle_properties_size;
    msg->particle_properties = (DmParticleDDF__Emitter__ParticleProperty**)malloc(sizeof(DmParticleDDF__Emitter__ParticleProperty*) * particle_properties_size);
    for (int i = 0; i < particle_properties_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, particle_properties_index);
        msg->particle_properties[i] = (DmParticleDDF__Emitter__ParticleProperty*)luaL_checkdm_particle_ddf__emitter__particle_property(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // modifiers
    lua_pushstring(L, "modifiers");
    lua_gettable(L, narg);
    int modifiers_size = lua_objlen(L, lua_gettop(L));
    int modifiers_index = lua_gettop(L);
    msg->n_modifiers = modifiers_size;
    msg->modifiers = (DmParticleDDF__Modifier**)malloc(sizeof(DmParticleDDF__Modifier*) * modifiers_size);
    for (int i = 0; i < modifiers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, modifiers_index);
        msg->modifiers[i] = (DmParticleDDF__Modifier*)luaL_checkdm_particle_ddf__modifier(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // size_mode
    lua_pushstring(L, "size_mode");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_size_mode = 1;
        msg->size_mode = (DmParticleDDF__SizeMode)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // start_delay_spread
    lua_pushstring(L, "start_delay_spread");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_start_delay_spread = 1;
        msg->start_delay_spread = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // duration_spread
    lua_pushstring(L, "duration_spread");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_duration_spread = 1;
        msg->duration_spread = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // stretch_with_velocity
    lua_pushstring(L, "stretch_with_velocity");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_stretch_with_velocity = 1;
        msg->stretch_with_velocity = (bool)luaL_checkboolean(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // start_offset
    lua_pushstring(L, "start_offset");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_start_offset = 1;
        msg->start_offset = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    // pivot
    lua_pushstring(L, "pivot");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->pivot = (DmMath__Point3*)luaL_checkdm_math__point3(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmParticleDDF__Emitter__Property* luaL_checkdm_particle_ddf__emitter__property(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmParticleDDF__Emitter__Property *msg = (DmParticleDDF__Emitter__Property*)malloc(sizeof(DmParticleDDF__Emitter__Property));
    dm_particle_ddf__emitter__property__init(msg);

    // key
    lua_pushstring(L, "key");
    lua_gettable(L, narg);
    msg->key = (DmParticleDDF__EmitterKey)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // points
    lua_pushstring(L, "points");
    lua_gettable(L, narg);
    int points_size = lua_objlen(L, lua_gettop(L));
    int points_index = lua_gettop(L);
    msg->n_points = points_size;
    msg->points = (DmParticleDDF__SplinePoint**)malloc(sizeof(DmParticleDDF__SplinePoint*) * points_size);
    for (int i = 0; i < points_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, points_index);
        msg->points[i] = (DmParticleDDF__SplinePoint*)luaL_checkdm_particle_ddf__spline_point(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // spread
    lua_pushstring(L, "spread");
    lua_gettable(L, narg);
    if (!lua_isnil(L, lua_gettop(L)))
    {
        msg->has_spread = 1;
        msg->spread = (float)luaL_checknumber(L, lua_gettop(L));
    }
    lua_pop(L, 1);

    return msg;
}
static DmParticleDDF__Emitter__ParticleProperty* luaL_checkdm_particle_ddf__emitter__particle_property(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmParticleDDF__Emitter__ParticleProperty *msg = (DmParticleDDF__Emitter__ParticleProperty*)malloc(sizeof(DmParticleDDF__Emitter__ParticleProperty));
    dm_particle_ddf__emitter__particle_property__init(msg);

    // key
    lua_pushstring(L, "key");
    lua_gettable(L, narg);
    msg->key = (DmParticleDDF__ParticleKey)luaL_checknumber(L, lua_gettop(L));
    lua_pop(L, 1);

    // points
    lua_pushstring(L, "points");
    lua_gettable(L, narg);
    int points_size = lua_objlen(L, lua_gettop(L));
    int points_index = lua_gettop(L);
    msg->n_points = points_size;
    msg->points = (DmParticleDDF__SplinePoint**)malloc(sizeof(DmParticleDDF__SplinePoint*) * points_size);
    for (int i = 0; i < points_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, points_index);
        msg->points[i] = (DmParticleDDF__SplinePoint*)luaL_checkdm_particle_ddf__spline_point(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}
static DmParticleDDF__ParticleFX* luaL_checkdm_particle_ddf__particle_fx(lua_State* L, int narg)
{
    if (!lua_istable(L, narg)) {
        luaL_error(L, "Expected value at index %d to be a table", narg);
        return 0;
    }

    DmParticleDDF__ParticleFX *msg = (DmParticleDDF__ParticleFX*)malloc(sizeof(DmParticleDDF__ParticleFX));
    dm_particle_ddf__particle_fx__init(msg);

    // emitters
    lua_pushstring(L, "emitters");
    lua_gettable(L, narg);
    int emitters_size = lua_objlen(L, lua_gettop(L));
    int emitters_index = lua_gettop(L);
    msg->n_emitters = emitters_size;
    msg->emitters = (DmParticleDDF__Emitter**)malloc(sizeof(DmParticleDDF__Emitter*) * emitters_size);
    for (int i = 0; i < emitters_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, emitters_index);
        msg->emitters[i] = (DmParticleDDF__Emitter*)luaL_checkdm_particle_ddf__emitter(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    // modifiers
    lua_pushstring(L, "modifiers");
    lua_gettable(L, narg);
    int modifiers_size = lua_objlen(L, lua_gettop(L));
    int modifiers_index = lua_gettop(L);
    msg->n_modifiers = modifiers_size;
    msg->modifiers = (DmParticleDDF__Modifier**)malloc(sizeof(DmParticleDDF__Modifier*) * modifiers_size);
    for (int i = 0; i < modifiers_size; i++)
    {
        lua_pushnumber(L, i + 1);
        lua_gettable(L, modifiers_index);
        msg->modifiers[i] = (DmParticleDDF__Modifier*)luaL_checkdm_particle_ddf__modifier(L, lua_gettop(L));
        lua_pop(L, 1);
    }
    lua_pop(L, 1);

    return msg;
}



/******************************************************************************
 * FREE 
 ******************************************************************************/

static void free_dm_math__point3(DmMath__Point3* msg);
static void free_dm_math__vector3(DmMath__Vector3* msg);
static void free_dm_math__vector4(DmMath__Vector4* msg);
static void free_dm_math__quat(DmMath__Quat* msg);
static void free_dm_math__transform(DmMath__Transform* msg);
static void free_dm_math__matrix4(DmMath__Matrix4* msg);
static void free_dm_input_ddf__gamepad_modifier_t(DmInputDDF__GamepadModifierT* msg);
static void free_dm_input_ddf__gamepad_map_entry(DmInputDDF__GamepadMapEntry* msg);
static void free_dm_input_ddf__gamepad_map(DmInputDDF__GamepadMap* msg);
static void free_dm_input_ddf__gamepad_maps(DmInputDDF__GamepadMaps* msg);
static void free_dm_input_ddf__key_trigger(DmInputDDF__KeyTrigger* msg);
static void free_dm_input_ddf__mouse_trigger(DmInputDDF__MouseTrigger* msg);
static void free_dm_input_ddf__gamepad_trigger(DmInputDDF__GamepadTrigger* msg);
static void free_dm_input_ddf__touch_trigger(DmInputDDF__TouchTrigger* msg);
static void free_dm_input_ddf__text_trigger(DmInputDDF__TextTrigger* msg);
static void free_dm_input_ddf__input_binding(DmInputDDF__InputBinding* msg);
static void free_dm_render_ddf__render_prototype_desc(DmRenderDDF__RenderPrototypeDesc* msg);
static void free_dm_render_ddf__render_prototype_desc__material_desc(DmRenderDDF__RenderPrototypeDesc__MaterialDesc* msg);
static void free_dm_render_ddf__draw_text(DmRenderDDF__DrawText* msg);
static void free_dm_render_ddf__draw_debug_text(DmRenderDDF__DrawDebugText* msg);
static void free_dm_render_ddf__draw_line(DmRenderDDF__DrawLine* msg);
static void free_dm_render_ddf__window_resized(DmRenderDDF__WindowResized* msg);
static void free_dm_render_ddf__resize(DmRenderDDF__Resize* msg);
static void free_dm_render_ddf__clear_color(DmRenderDDF__ClearColor* msg);
static void free_dm_render_ddf__display_profile_qualifier(DmRenderDDF__DisplayProfileQualifier* msg);
static void free_dm_render_ddf__display_profile(DmRenderDDF__DisplayProfile* msg);
static void free_dm_render_ddf__display_profiles(DmRenderDDF__DisplayProfiles* msg);
static void free_dm_render_ddf__font_desc(DmRenderDDF__FontDesc* msg);
static void free_dm_render_ddf__font_map(DmRenderDDF__FontMap* msg);
static void free_dm_render_ddf__font_map__glyph(DmRenderDDF__FontMap__Glyph* msg);
static void free_dm_render_ddf__material_desc(DmRenderDDF__MaterialDesc* msg);
static void free_dm_render_ddf__material_desc__constant(DmRenderDDF__MaterialDesc__Constant* msg);
static void free_dm_render_ddf__material_desc__sampler(DmRenderDDF__MaterialDesc__Sampler* msg);
static void free_dm_script_ddf__lua_ref(DmScriptDDF__LuaRef* msg);
static void free_dm_system_ddf__exit(DmSystemDDF__Exit* msg);
static void free_dm_system_ddf__toggle_profile(DmSystemDDF__ToggleProfile* msg);
static void free_dm_system_ddf__toggle_physics_debug(DmSystemDDF__TogglePhysicsDebug* msg);
static void free_dm_system_ddf__start_record(DmSystemDDF__StartRecord* msg);
static void free_dm_system_ddf__stop_record(DmSystemDDF__StopRecord* msg);
static void free_dm_system_ddf__reboot(DmSystemDDF__Reboot* msg);
static void free_dm_system_ddf__set_vsync(DmSystemDDF__SetVsync* msg);
static void free_dm_system_ddf__set_update_frequency(DmSystemDDF__SetUpdateFrequency* msg);
static void free_dm_script_doc__parameter(DmScriptDoc__Parameter* msg);
static void free_dm_script_doc__member(DmScriptDoc__Member* msg);
static void free_dm_script_doc__return_value(DmScriptDoc__ReturnValue* msg);
static void free_dm_script_doc__element(DmScriptDoc__Element* msg);
static void free_dm_script_doc__info(DmScriptDoc__Info* msg);
static void free_dm_script_doc__document(DmScriptDoc__Document* msg);
static void free_dm_http_ddf__stop_http(DmHttpDDF__StopHttp* msg);
static void free_dm_http_ddf__http_request(DmHttpDDF__HttpRequest* msg);
static void free_dm_http_ddf__http_response(DmHttpDDF__HttpResponse* msg);
static void free_dm_lua_ddf__lua_source(DmLuaDDF__LuaSource* msg);
static void free_dm_rig_ddf__bone(DmRigDDF__Bone* msg);
static void free_dm_rig_ddf__ik(DmRigDDF__IK* msg);
static void free_dm_rig_ddf__skeleton(DmRigDDF__Skeleton* msg);
static void free_dm_rig_ddf__animation_track(DmRigDDF__AnimationTrack* msg);
static void free_dm_rig_ddf__event_key(DmRigDDF__EventKey* msg);
static void free_dm_rig_ddf__event_track(DmRigDDF__EventTrack* msg);
static void free_dm_rig_ddf__rig_animation(DmRigDDF__RigAnimation* msg);
static void free_dm_rig_ddf__animation_set(DmRigDDF__AnimationSet* msg);
static void free_dm_rig_ddf__animation_instance_desc(DmRigDDF__AnimationInstanceDesc* msg);
static void free_dm_rig_ddf__animation_set_desc(DmRigDDF__AnimationSetDesc* msg);
static void free_dm_rig_ddf__mesh(DmRigDDF__Mesh* msg);
static void free_dm_rig_ddf__model(DmRigDDF__Model* msg);
static void free_dm_rig_ddf__mesh_set(DmRigDDF__MeshSet* msg);
static void free_dm_rig_ddf__rig_scene(DmRigDDF__RigScene* msg);
static void free_dm_model_ddf__model_desc(DmModelDDF__ModelDesc* msg);
static void free_dm_model_ddf__model(DmModelDDF__Model* msg);
static void free_dm_model_ddf__reset_constant(DmModelDDF__ResetConstant* msg);
static void free_dm_model_ddf__set_texture(DmModelDDF__SetTexture* msg);
static void free_dm_model_ddf__model_play_animation(DmModelDDF__ModelPlayAnimation* msg);
static void free_dm_model_ddf__model_cancel_animation(DmModelDDF__ModelCancelAnimation* msg);
static void free_dm_model_ddf__model_animation_done(DmModelDDF__ModelAnimationDone* msg);
static void free_dm_mesh_ddf__mesh_desc(DmMeshDDF__MeshDesc* msg);
static void free_dm_game_system_ddf__label_desc(DmGameSystemDDF__LabelDesc* msg);
static void free_dm_game_system_ddf__set_text(DmGameSystemDDF__SetText* msg);
static void free_dm_game_system_ddf__convex_hull(DmGameSystemDDF__ConvexHull* msg);
static void free_dm_game_system_ddf__cue(DmGameSystemDDF__Cue* msg);
static void free_dm_game_system_ddf__animation(DmGameSystemDDF__Animation* msg);
static void free_dm_game_system_ddf__tile_set(DmGameSystemDDF__TileSet* msg);
static void free_dm_game_system_ddf__tile_cell(DmGameSystemDDF__TileCell* msg);
static void free_dm_game_system_ddf__tile_layer(DmGameSystemDDF__TileLayer* msg);
static void free_dm_game_system_ddf__tile_grid(DmGameSystemDDF__TileGrid* msg);
static void free_dm_game_system_ddf__set_tile(DmGameSystemDDF__SetTile* msg);
static void free_dm_game_system_ddf__set_constant_tile_map(DmGameSystemDDF__SetConstantTileMap* msg);
static void free_dm_game_system_ddf__reset_constant_tile_map(DmGameSystemDDF__ResetConstantTileMap* msg);
static void free_dm_game_system_ddf__atlas_image(DmGameSystemDDF__AtlasImage* msg);
static void free_dm_game_system_ddf__atlas_animation(DmGameSystemDDF__AtlasAnimation* msg);
static void free_dm_game_system_ddf__atlas(DmGameSystemDDF__Atlas* msg);
static void free_dm_buffer_ddf__stream_desc(DmBufferDDF__StreamDesc* msg);
static void free_dm_buffer_ddf__buffer_desc(DmBufferDDF__BufferDesc* msg);
static void free_dm_sound_ddf__sound_desc(DmSoundDDF__SoundDesc* msg);
static void free_dm_gamesys_ddf__camera_desc(DmGamesysDDF__CameraDesc* msg);
static void free_dm_gamesys_ddf__set_camera(DmGamesysDDF__SetCamera* msg);
static void free_dm_gamesys_ddf__acquire_camera_focus(DmGamesysDDF__AcquireCameraFocus* msg);
static void free_dm_gamesys_ddf__release_camera_focus(DmGamesysDDF__ReleaseCameraFocus* msg);
static void free_dm_game_system_ddf__sprite_desc(DmGameSystemDDF__SpriteDesc* msg);
static void free_dm_game_system_ddf__play_animation(DmGameSystemDDF__PlayAnimation* msg);
static void free_dm_game_system_ddf__animation_done(DmGameSystemDDF__AnimationDone* msg);
static void free_dm_game_system_ddf__set_flip_horizontal(DmGameSystemDDF__SetFlipHorizontal* msg);
static void free_dm_game_system_ddf__set_flip_vertical(DmGameSystemDDF__SetFlipVertical* msg);
static void free_dm_game_system_ddf__texture_set_animation(DmGameSystemDDF__TextureSetAnimation* msg);
static void free_dm_game_system_ddf__sprite_geometry(DmGameSystemDDF__SpriteGeometry* msg);
static void free_dm_game_system_ddf__texture_set(DmGameSystemDDF__TextureSet* msg);
static void free_dm_physics_ddf__convex_shape(DmPhysicsDDF__ConvexShape* msg);
static void free_dm_physics_ddf__collision_shape(DmPhysicsDDF__CollisionShape* msg);
static void free_dm_physics_ddf__collision_shape__shape(DmPhysicsDDF__CollisionShape__Shape* msg);
static void free_dm_physics_ddf__collision_object_desc(DmPhysicsDDF__CollisionObjectDesc* msg);
static void free_dm_physics_ddf__apply_force(DmPhysicsDDF__ApplyForce* msg);
static void free_dm_physics_ddf__collision_response(DmPhysicsDDF__CollisionResponse* msg);
static void free_dm_physics_ddf__contact_point_response(DmPhysicsDDF__ContactPointResponse* msg);
static void free_dm_physics_ddf__trigger_response(DmPhysicsDDF__TriggerResponse* msg);
static void free_dm_physics_ddf__request_ray_cast(DmPhysicsDDF__RequestRayCast* msg);
static void free_dm_physics_ddf__ray_cast_response(DmPhysicsDDF__RayCastResponse* msg);
static void free_dm_physics_ddf__ray_cast_missed(DmPhysicsDDF__RayCastMissed* msg);
static void free_dm_physics_ddf__request_velocity(DmPhysicsDDF__RequestVelocity* msg);
static void free_dm_physics_ddf__velocity_response(DmPhysicsDDF__VelocityResponse* msg);
static void free_dm_physics_ddf__set_grid_shape_hull(DmPhysicsDDF__SetGridShapeHull* msg);
static void free_dm_physics_ddf__enable_grid_shape_layer(DmPhysicsDDF__EnableGridShapeLayer* msg);
static void free_dm_game_system_ddf__factory_desc(DmGameSystemDDF__FactoryDesc* msg);
static void free_dm_game_system_ddf__collection_factory_desc(DmGameSystemDDF__CollectionFactoryDesc* msg);
static void free_dm_game_system_ddf__create(DmGameSystemDDF__Create* msg);
static void free_dm_game_system_ddf__collection_proxy_desc(DmGameSystemDDF__CollectionProxyDesc* msg);
static void free_dm_game_system_ddf__set_time_step(DmGameSystemDDF__SetTimeStep* msg);
static void free_dm_game_system_ddf__light_desc(DmGameSystemDDF__LightDesc* msg);
static void free_dm_game_system_ddf__set_light(DmGameSystemDDF__SetLight* msg);
static void free_dm_game_system_ddf__set_view_projection(DmGameSystemDDF__SetViewProjection* msg);
static void free_dm_game_system_ddf__play_sound(DmGameSystemDDF__PlaySound* msg);
static void free_dm_game_system_ddf__stop_sound(DmGameSystemDDF__StopSound* msg);
static void free_dm_game_system_ddf__pause_sound(DmGameSystemDDF__PauseSound* msg);
static void free_dm_game_system_ddf__sound_done(DmGameSystemDDF__SoundDone* msg);
static void free_dm_game_system_ddf__set_gain(DmGameSystemDDF__SetGain* msg);
static void free_dm_game_system_ddf__set_pan(DmGameSystemDDF__SetPan* msg);
static void free_dm_game_system_ddf__set_speed(DmGameSystemDDF__SetSpeed* msg);
static void free_dm_game_system_ddf__play_particle_fx(DmGameSystemDDF__PlayParticleFX* msg);
static void free_dm_game_system_ddf__stop_particle_fx(DmGameSystemDDF__StopParticleFX* msg);
static void free_dm_game_system_ddf__set_constant_particle_fx(DmGameSystemDDF__SetConstantParticleFX* msg);
static void free_dm_game_system_ddf__reset_constant_particle_fx(DmGameSystemDDF__ResetConstantParticleFX* msg);
static void free_dm_game_system_ddf__set_constant(DmGameSystemDDF__SetConstant* msg);
static void free_dm_game_system_ddf__reset_constant(DmGameSystemDDF__ResetConstant* msg);
static void free_dm_game_system_ddf__set_scale(DmGameSystemDDF__SetScale* msg);
static void free_dm_gui_ddf__node_desc(DmGuiDDF__NodeDesc* msg);
static void free_dm_gui_ddf__scene_desc(DmGuiDDF__SceneDesc* msg);
static void free_dm_gui_ddf__scene_desc__font_desc(DmGuiDDF__SceneDesc__FontDesc* msg);
static void free_dm_gui_ddf__scene_desc__texture_desc(DmGuiDDF__SceneDesc__TextureDesc* msg);
static void free_dm_gui_ddf__scene_desc__layer_desc(DmGuiDDF__SceneDesc__LayerDesc* msg);
static void free_dm_gui_ddf__scene_desc__layout_desc(DmGuiDDF__SceneDesc__LayoutDesc* msg);
static void free_dm_gui_ddf__scene_desc__spine_scene_desc(DmGuiDDF__SceneDesc__SpineSceneDesc* msg);
static void free_dm_gui_ddf__scene_desc__resource_desc(DmGuiDDF__SceneDesc__ResourceDesc* msg);
static void free_dm_gui_ddf__scene_desc__particle_fxdesc(DmGuiDDF__SceneDesc__ParticleFXDesc* msg);
static void free_dm_gui_ddf__layout_changed(DmGuiDDF__LayoutChanged* msg);
static void free_dm_live_update_ddf__hash_digest(DmLiveUpdateDDF__HashDigest* msg);
static void free_dm_live_update_ddf__manifest_header(DmLiveUpdateDDF__ManifestHeader* msg);
static void free_dm_live_update_ddf__resource_entry(DmLiveUpdateDDF__ResourceEntry* msg);
static void free_dm_live_update_ddf__manifest_data(DmLiveUpdateDDF__ManifestData* msg);
static void free_dm_live_update_ddf__manifest_file(DmLiveUpdateDDF__ManifestFile* msg);
static void free_dm_resource_ddf__reload(DmResourceDDF__Reload* msg);
static void free_dm_graphics__cubemap(DmGraphics__Cubemap* msg);
static void free_dm_graphics__texture_image(DmGraphics__TextureImage* msg);
static void free_dm_graphics__texture_image__image(DmGraphics__TextureImage__Image* msg);
static void free_dm_graphics__texture_format_alternative(DmGraphics__TextureFormatAlternative* msg);
static void free_dm_graphics__path_settings(DmGraphics__PathSettings* msg);
static void free_dm_graphics__platform_profile(DmGraphics__PlatformProfile* msg);
static void free_dm_graphics__texture_profile(DmGraphics__TextureProfile* msg);
static void free_dm_graphics__texture_profiles(DmGraphics__TextureProfiles* msg);
static void free_dm_graphics__shader_desc(DmGraphics__ShaderDesc* msg);
static void free_dm_graphics__shader_desc__resource_binding(DmGraphics__ShaderDesc__ResourceBinding* msg);
static void free_dm_graphics__shader_desc__shader(DmGraphics__ShaderDesc__Shader* msg);
static void free_dm_properties_ddf__property_declaration_entry(DmPropertiesDDF__PropertyDeclarationEntry* msg);
static void free_dm_properties_ddf__property_declarations(DmPropertiesDDF__PropertyDeclarations* msg);
static void free_dm_game_object_ddf__property_desc(DmGameObjectDDF__PropertyDesc* msg);
static void free_dm_game_object_ddf__component_desc(DmGameObjectDDF__ComponentDesc* msg);
static void free_dm_game_object_ddf__embedded_component_desc(DmGameObjectDDF__EmbeddedComponentDesc* msg);
static void free_dm_game_object_ddf__prototype_desc(DmGameObjectDDF__PrototypeDesc* msg);
static void free_dm_game_object_ddf__component_property_desc(DmGameObjectDDF__ComponentPropertyDesc* msg);
static void free_dm_game_object_ddf__componen_type_desc(DmGameObjectDDF__ComponenTypeDesc* msg);
static void free_dm_game_object_ddf__instance_desc(DmGameObjectDDF__InstanceDesc* msg);
static void free_dm_game_object_ddf__embedded_instance_desc(DmGameObjectDDF__EmbeddedInstanceDesc* msg);
static void free_dm_game_object_ddf__instance_property_desc(DmGameObjectDDF__InstancePropertyDesc* msg);
static void free_dm_game_object_ddf__collection_instance_desc(DmGameObjectDDF__CollectionInstanceDesc* msg);
static void free_dm_game_object_ddf__collection_desc(DmGameObjectDDF__CollectionDesc* msg);
static void free_dm_game_object_ddf__acquire_input_focus(DmGameObjectDDF__AcquireInputFocus* msg);
static void free_dm_game_object_ddf__release_input_focus(DmGameObjectDDF__ReleaseInputFocus* msg);
static void free_dm_game_object_ddf__request_transform(DmGameObjectDDF__RequestTransform* msg);
static void free_dm_game_object_ddf__transform_response(DmGameObjectDDF__TransformResponse* msg);
static void free_dm_game_object_ddf__set_parent(DmGameObjectDDF__SetParent* msg);
static void free_dm_game_object_ddf__enable(DmGameObjectDDF__Enable* msg);
static void free_dm_game_object_ddf__disable(DmGameObjectDDF__Disable* msg);
static void free_dm_game_object_ddf__script_message(DmGameObjectDDF__ScriptMessage* msg);
static void free_dm_lua_ddf__lua_module(DmLuaDDF__LuaModule* msg);
static void free_dm_engine_ddf__hide_app(DmEngineDDF__HideApp* msg);
static void free_dm_engine_ddf__run_script(DmEngineDDF__RunScript* msg);
static void free_dm_particle_ddf__spline_point(DmParticleDDF__SplinePoint* msg);
static void free_dm_particle_ddf__modifier(DmParticleDDF__Modifier* msg);
static void free_dm_particle_ddf__modifier__property(DmParticleDDF__Modifier__Property* msg);
static void free_dm_particle_ddf__emitter(DmParticleDDF__Emitter* msg);
static void free_dm_particle_ddf__emitter__property(DmParticleDDF__Emitter__Property* msg);
static void free_dm_particle_ddf__emitter__particle_property(DmParticleDDF__Emitter__ParticleProperty* msg);
static void free_dm_particle_ddf__particle_fx(DmParticleDDF__ParticleFX* msg);

static void free_ProtobufCBinaryData(ProtobufCBinaryData) {};
static void free_number(int32_t) {};
static void free_string(char*) {};
static void free_bool(bool) {};
static void free_boolean(bool) {};

static void free_dm_math__point3(DmMath__Point3* msg)
{
    free_number(msg->x);
    free_number(msg->y);
    free_number(msg->z);
    free_number(msg->d);
    free(msg);
}
static void free_dm_math__vector3(DmMath__Vector3* msg)
{
    free_number(msg->x);
    free_number(msg->y);
    free_number(msg->z);
    free_number(msg->d);
    free(msg);
}
static void free_dm_math__vector4(DmMath__Vector4* msg)
{
    free_number(msg->x);
    free_number(msg->y);
    free_number(msg->z);
    free_number(msg->w);
    free(msg);
}
static void free_dm_math__quat(DmMath__Quat* msg)
{
    free_number(msg->x);
    free_number(msg->y);
    free_number(msg->z);
    free_number(msg->w);
    free(msg);
}
static void free_dm_math__transform(DmMath__Transform* msg)
{
    free_dm_math__quat(msg->rotation);
    free_dm_math__vector3(msg->translation);
    free_dm_math__vector3(msg->scale);
    free(msg);
}
static void free_dm_math__matrix4(DmMath__Matrix4* msg)
{
    free_number(msg->m00);
    free_number(msg->m01);
    free_number(msg->m02);
    free_number(msg->m03);
    free_number(msg->m10);
    free_number(msg->m11);
    free_number(msg->m12);
    free_number(msg->m13);
    free_number(msg->m20);
    free_number(msg->m21);
    free_number(msg->m22);
    free_number(msg->m23);
    free_number(msg->m30);
    free_number(msg->m31);
    free_number(msg->m32);
    free_number(msg->m33);
    free(msg);
}
static void free_dm_input_ddf__gamepad_modifier_t(DmInputDDF__GamepadModifierT* msg)
{
    free_number(msg->mod);
    free(msg);
}
static void free_dm_input_ddf__gamepad_map_entry(DmInputDDF__GamepadMapEntry* msg)
{
    free_number(msg->input);
    free_number(msg->type);
    free_number(msg->index);
    int mod_size = msg->n_mod;
    for (int i = 0; i < mod_size; i++)
    {
        free_dm_input_ddf__gamepad_modifier_t(msg->mod[i]);
    }
    free(msg->mod);
    free_number(msg->hat_mask);
    free(msg);
}
static void free_dm_input_ddf__gamepad_map(DmInputDDF__GamepadMap* msg)
{
    free_string(msg->device);
    free_string(msg->platform);
    free_number(msg->dead_zone);
    int map_size = msg->n_map;
    for (int i = 0; i < map_size; i++)
    {
        free_dm_input_ddf__gamepad_map_entry(msg->map[i]);
    }
    free(msg->map);
    free(msg);
}
static void free_dm_input_ddf__gamepad_maps(DmInputDDF__GamepadMaps* msg)
{
    int driver_size = msg->n_driver;
    for (int i = 0; i < driver_size; i++)
    {
        free_dm_input_ddf__gamepad_map(msg->driver[i]);
    }
    free(msg->driver);
    free(msg);
}
static void free_dm_input_ddf__key_trigger(DmInputDDF__KeyTrigger* msg)
{
    free_number(msg->input);
    free_string(msg->action);
    free(msg);
}
static void free_dm_input_ddf__mouse_trigger(DmInputDDF__MouseTrigger* msg)
{
    free_number(msg->input);
    free_string(msg->action);
    free(msg);
}
static void free_dm_input_ddf__gamepad_trigger(DmInputDDF__GamepadTrigger* msg)
{
    free_number(msg->input);
    free_string(msg->action);
    free(msg);
}
static void free_dm_input_ddf__touch_trigger(DmInputDDF__TouchTrigger* msg)
{
    free_number(msg->input);
    free_string(msg->action);
    free(msg);
}
static void free_dm_input_ddf__text_trigger(DmInputDDF__TextTrigger* msg)
{
    free_number(msg->input);
    free_string(msg->action);
    free(msg);
}
static void free_dm_input_ddf__input_binding(DmInputDDF__InputBinding* msg)
{
    int key_trigger_size = msg->n_key_trigger;
    for (int i = 0; i < key_trigger_size; i++)
    {
        free_dm_input_ddf__key_trigger(msg->key_trigger[i]);
    }
    free(msg->key_trigger);
    int mouse_trigger_size = msg->n_mouse_trigger;
    for (int i = 0; i < mouse_trigger_size; i++)
    {
        free_dm_input_ddf__mouse_trigger(msg->mouse_trigger[i]);
    }
    free(msg->mouse_trigger);
    int gamepad_trigger_size = msg->n_gamepad_trigger;
    for (int i = 0; i < gamepad_trigger_size; i++)
    {
        free_dm_input_ddf__gamepad_trigger(msg->gamepad_trigger[i]);
    }
    free(msg->gamepad_trigger);
    int touch_trigger_size = msg->n_touch_trigger;
    for (int i = 0; i < touch_trigger_size; i++)
    {
        free_dm_input_ddf__touch_trigger(msg->touch_trigger[i]);
    }
    free(msg->touch_trigger);
    int text_trigger_size = msg->n_text_trigger;
    for (int i = 0; i < text_trigger_size; i++)
    {
        free_dm_input_ddf__text_trigger(msg->text_trigger[i]);
    }
    free(msg->text_trigger);
    free(msg);
}
static void free_dm_render_ddf__render_prototype_desc(DmRenderDDF__RenderPrototypeDesc* msg)
{
    free_string(msg->script);
    int materials_size = msg->n_materials;
    for (int i = 0; i < materials_size; i++)
    {
        free_dm_render_ddf__render_prototype_desc__material_desc(msg->materials[i]);
    }
    free(msg->materials);
    free(msg);
}
static void free_dm_render_ddf__render_prototype_desc__material_desc(DmRenderDDF__RenderPrototypeDesc__MaterialDesc* msg)
{
    free_string(msg->name);
    free_string(msg->material);
    free(msg);
}
static void free_dm_render_ddf__draw_text(DmRenderDDF__DrawText* msg)
{
    free_dm_math__point3(msg->position);
    free_string(msg->text);
    free(msg);
}
static void free_dm_render_ddf__draw_debug_text(DmRenderDDF__DrawDebugText* msg)
{
    free_dm_math__point3(msg->position);
    free_string(msg->text);
    free_dm_math__vector4(msg->color);
    free(msg);
}
static void free_dm_render_ddf__draw_line(DmRenderDDF__DrawLine* msg)
{
    free_dm_math__point3(msg->start_point);
    free_dm_math__point3(msg->end_point);
    free_dm_math__vector4(msg->color);
    free(msg);
}
static void free_dm_render_ddf__window_resized(DmRenderDDF__WindowResized* msg)
{
    free_number(msg->width);
    free_number(msg->height);
    free(msg);
}
static void free_dm_render_ddf__resize(DmRenderDDF__Resize* msg)
{
    free_number(msg->width);
    free_number(msg->height);
    free(msg);
}
static void free_dm_render_ddf__clear_color(DmRenderDDF__ClearColor* msg)
{
    free_dm_math__vector4(msg->color);
    free(msg);
}
static void free_dm_render_ddf__display_profile_qualifier(DmRenderDDF__DisplayProfileQualifier* msg)
{
    free_number(msg->width);
    free_number(msg->height);
    int device_models_size = msg->n_device_models;
    for (int i = 0; i < device_models_size; i++)
    {
        free_string(msg->device_models[i]);
    }
    free(msg->device_models);
    free(msg);
}
static void free_dm_render_ddf__display_profile(DmRenderDDF__DisplayProfile* msg)
{
    free_string(msg->name);
    int qualifiers_size = msg->n_qualifiers;
    for (int i = 0; i < qualifiers_size; i++)
    {
        free_dm_render_ddf__display_profile_qualifier(msg->qualifiers[i]);
    }
    free(msg->qualifiers);
    free(msg);
}
static void free_dm_render_ddf__display_profiles(DmRenderDDF__DisplayProfiles* msg)
{
    int profiles_size = msg->n_profiles;
    for (int i = 0; i < profiles_size; i++)
    {
        free_dm_render_ddf__display_profile(msg->profiles[i]);
    }
    free(msg->profiles);
    free(msg);
}
static void free_dm_render_ddf__font_desc(DmRenderDDF__FontDesc* msg)
{
    free_string(msg->font);
    free_string(msg->material);
    free_number(msg->size);
    free_number(msg->antialias);
    free_number(msg->alpha);
    free_number(msg->outline_alpha);
    free_number(msg->outline_width);
    free_number(msg->shadow_alpha);
    free_number(msg->shadow_blur);
    free_number(msg->shadow_x);
    free_number(msg->shadow_y);
    free_string(msg->extra_characters);
    free_number(msg->output_format);
    free_boolean(msg->all_chars);
    free_number(msg->cache_width);
    free_number(msg->cache_height);
    free_number(msg->render_mode);
    free(msg);
}
static void free_dm_render_ddf__font_map(DmRenderDDF__FontMap* msg)
{
    int glyphs_size = msg->n_glyphs;
    for (int i = 0; i < glyphs_size; i++)
    {
        free_dm_render_ddf__font_map__glyph(msg->glyphs[i]);
    }
    free(msg->glyphs);
    free_string(msg->material);
    free_number(msg->shadow_x);
    free_number(msg->shadow_y);
    free_number(msg->max_ascent);
    free_number(msg->max_descent);
    free_number(msg->image_format);
    free_number(msg->sdf_spread);
    free_number(msg->sdf_offset);
    free_number(msg->sdf_outline);
    free_number(msg->sdf_shadow);
    free_number(msg->cache_width);
    free_number(msg->cache_height);
    free_number(msg->glyph_padding);
    free_number(msg->cache_cell_width);
    free_number(msg->cache_cell_height);
    free_number(msg->glyph_channels);
    free_ProtobufCBinaryData(msg->glyph_data);
    free_number(msg->alpha);
    free_number(msg->outline_alpha);
    free_number(msg->shadow_alpha);
    free_number(msg->cache_cell_max_ascent);
    free_number(msg->layer_mask);
    free(msg);
}
static void free_dm_render_ddf__font_map__glyph(DmRenderDDF__FontMap__Glyph* msg)
{
    free_number(msg->character);
    free_number(msg->width);
    free_number(msg->advance);
    free_number(msg->left_bearing);
    free_number(msg->ascent);
    free_number(msg->descent);
    free_number(msg->x);
    free_number(msg->y);
    free_number(msg->glyph_data_offset);
    free_number(msg->glyph_data_size);
    free(msg);
}
static void free_dm_render_ddf__material_desc(DmRenderDDF__MaterialDesc* msg)
{
    free_string(msg->name);
    int tags_size = msg->n_tags;
    for (int i = 0; i < tags_size; i++)
    {
        free_string(msg->tags[i]);
    }
    free(msg->tags);
    free_string(msg->vertex_program);
    free_string(msg->fragment_program);
    free_number(msg->vertex_space);
    int vertex_constants_size = msg->n_vertex_constants;
    for (int i = 0; i < vertex_constants_size; i++)
    {
        free_dm_render_ddf__material_desc__constant(msg->vertex_constants[i]);
    }
    free(msg->vertex_constants);
    int fragment_constants_size = msg->n_fragment_constants;
    for (int i = 0; i < fragment_constants_size; i++)
    {
        free_dm_render_ddf__material_desc__constant(msg->fragment_constants[i]);
    }
    free(msg->fragment_constants);
    int textures_size = msg->n_textures;
    for (int i = 0; i < textures_size; i++)
    {
        free_string(msg->textures[i]);
    }
    free(msg->textures);
    int samplers_size = msg->n_samplers;
    for (int i = 0; i < samplers_size; i++)
    {
        free_dm_render_ddf__material_desc__sampler(msg->samplers[i]);
    }
    free(msg->samplers);
    free(msg);
}
static void free_dm_render_ddf__material_desc__constant(DmRenderDDF__MaterialDesc__Constant* msg)
{
    free_string(msg->name);
    free_number(msg->type);
    int value_size = msg->n_value;
    for (int i = 0; i < value_size; i++)
    {
        free_dm_math__vector4(msg->value[i]);
    }
    free(msg->value);
    free(msg);
}
static void free_dm_render_ddf__material_desc__sampler(DmRenderDDF__MaterialDesc__Sampler* msg)
{
    free_string(msg->name);
    free_number(msg->wrap_u);
    free_number(msg->wrap_v);
    free_number(msg->filter_min);
    free_number(msg->filter_mag);
    free_number(msg->max_anisotropy);
    free(msg);
}
static void free_dm_script_ddf__lua_ref(DmScriptDDF__LuaRef* msg)
{
    free_number(msg->ref);
    free_number(msg->context_table_ref);
    free(msg);
}
static void free_dm_system_ddf__exit(DmSystemDDF__Exit* msg)
{
    free_number(msg->code);
    free(msg);
}
static void free_dm_system_ddf__toggle_profile(DmSystemDDF__ToggleProfile* msg)
{
    free(msg);
}
static void free_dm_system_ddf__toggle_physics_debug(DmSystemDDF__TogglePhysicsDebug* msg)
{
    free(msg);
}
static void free_dm_system_ddf__start_record(DmSystemDDF__StartRecord* msg)
{
    free_string(msg->file_name);
    free_number(msg->frame_period);
    free_number(msg->fps);
    free(msg);
}
static void free_dm_system_ddf__stop_record(DmSystemDDF__StopRecord* msg)
{
    free(msg);
}
static void free_dm_system_ddf__reboot(DmSystemDDF__Reboot* msg)
{
    free_string(msg->arg1);
    free_string(msg->arg2);
    free_string(msg->arg3);
    free_string(msg->arg4);
    free_string(msg->arg5);
    free_string(msg->arg6);
    free(msg);
}
static void free_dm_system_ddf__set_vsync(DmSystemDDF__SetVsync* msg)
{
    free_number(msg->swap_interval);
    free(msg);
}
static void free_dm_system_ddf__set_update_frequency(DmSystemDDF__SetUpdateFrequency* msg)
{
    free_number(msg->frequency);
    free(msg);
}
static void free_dm_script_doc__parameter(DmScriptDoc__Parameter* msg)
{
    free_string(msg->name);
    free_string(msg->doc);
    int types_size = msg->n_types;
    for (int i = 0; i < types_size; i++)
    {
        free_string(msg->types[i]);
    }
    free(msg->types);
    free(msg);
}
static void free_dm_script_doc__member(DmScriptDoc__Member* msg)
{
    free_string(msg->name);
    free_string(msg->doc);
    free_string(msg->type);
    free(msg);
}
static void free_dm_script_doc__return_value(DmScriptDoc__ReturnValue* msg)
{
    free_string(msg->name);
    free_string(msg->doc);
    int types_size = msg->n_types;
    for (int i = 0; i < types_size; i++)
    {
        free_string(msg->types[i]);
    }
    free(msg->types);
    free(msg);
}
static void free_dm_script_doc__element(DmScriptDoc__Element* msg)
{
    free_number(msg->type);
    free_string(msg->name);
    free_string(msg->brief);
    free_string(msg->description);
    int returnvalues_size = msg->n_returnvalues;
    for (int i = 0; i < returnvalues_size; i++)
    {
        free_dm_script_doc__return_value(msg->returnvalues[i]);
    }
    free(msg->returnvalues);
    int parameters_size = msg->n_parameters;
    for (int i = 0; i < parameters_size; i++)
    {
        free_dm_script_doc__parameter(msg->parameters[i]);
    }
    free(msg->parameters);
    free_string(msg->examples);
    free_string(msg->replaces);
    free_string(msg->error);
    int tparams_size = msg->n_tparams;
    for (int i = 0; i < tparams_size; i++)
    {
        free_dm_script_doc__member(msg->tparams[i]);
    }
    free(msg->tparams);
    int members_size = msg->n_members;
    for (int i = 0; i < members_size; i++)
    {
        free_dm_script_doc__member(msg->members[i]);
    }
    free(msg->members);
    int notes_size = msg->n_notes;
    for (int i = 0; i < notes_size; i++)
    {
        free_string(msg->notes[i]);
    }
    free(msg->notes);
    free(msg);
}
static void free_dm_script_doc__info(DmScriptDoc__Info* msg)
{
    free_string(msg->namespace_);
    free_string(msg->name);
    free_string(msg->brief);
    free_string(msg->description);
    free_string(msg->path);
    free_string(msg->file);
    free(msg);
}
static void free_dm_script_doc__document(DmScriptDoc__Document* msg)
{
    int elements_size = msg->n_elements;
    for (int i = 0; i < elements_size; i++)
    {
        free_dm_script_doc__element(msg->elements[i]);
    }
    free(msg->elements);
    free_dm_script_doc__info(msg->info);
    free(msg);
}
static void free_dm_http_ddf__stop_http(DmHttpDDF__StopHttp* msg)
{
    free(msg);
}
static void free_dm_http_ddf__http_request(DmHttpDDF__HttpRequest* msg)
{
    free_string(msg->method);
    free_string(msg->url);
    free_number(msg->headers);
    free_number(msg->headers_length);
    free_number(msg->request);
    free_number(msg->request_length);
    free_number(msg->timeout);
    free_string(msg->path);
    free_boolean(msg->ignore_cache);
    free_boolean(msg->chunked_transfer);
    free(msg);
}
static void free_dm_http_ddf__http_response(DmHttpDDF__HttpResponse* msg)
{
    free_number(msg->status);
    free_number(msg->headers);
    free_number(msg->headers_length);
    free_number(msg->response);
    free_number(msg->response_length);
    free_string(msg->path);
    free(msg);
}
static void free_dm_lua_ddf__lua_source(DmLuaDDF__LuaSource* msg)
{
    free_ProtobufCBinaryData(msg->script);
    free_string(msg->filename);
    free_ProtobufCBinaryData(msg->bytecode);
    free_ProtobufCBinaryData(msg->delta);
    free_ProtobufCBinaryData(msg->bytecode_32);
    free_ProtobufCBinaryData(msg->bytecode_64);
    free(msg);
}
static void free_dm_rig_ddf__bone(DmRigDDF__Bone* msg)
{
    free_number(msg->parent);
    free_number(msg->id);
    free_string(msg->name);
    free_dm_math__transform(msg->local);
    free_dm_math__transform(msg->world);
    free_dm_math__transform(msg->inverse_bind_pose);
    free_number(msg->length);
    free(msg);
}
static void free_dm_rig_ddf__ik(DmRigDDF__IK* msg)
{
    free_number(msg->id);
    free_number(msg->parent);
    free_number(msg->child);
    free_number(msg->target);
    free_boolean(msg->positive);
    free_number(msg->mix);
    free(msg);
}
static void free_dm_rig_ddf__skeleton(DmRigDDF__Skeleton* msg)
{
    int bones_size = msg->n_bones;
    for (int i = 0; i < bones_size; i++)
    {
        free_dm_rig_ddf__bone(msg->bones[i]);
    }
    free(msg->bones);
    int iks_size = msg->n_iks;
    for (int i = 0; i < iks_size; i++)
    {
        free_dm_rig_ddf__ik(msg->iks[i]);
    }
    free(msg->iks);
    free(msg);
}
static void free_dm_rig_ddf__animation_track(DmRigDDF__AnimationTrack* msg)
{
    free_number(msg->bone_index);
    int positions_size = msg->n_positions;
    for (int i = 0; i < positions_size; i++)
    {
        free_number(msg->positions[i]);
    }
    free(msg->positions);
    int rotations_size = msg->n_rotations;
    for (int i = 0; i < rotations_size; i++)
    {
        free_number(msg->rotations[i]);
    }
    free(msg->rotations);
    int scale_size = msg->n_scale;
    for (int i = 0; i < scale_size; i++)
    {
        free_number(msg->scale[i]);
    }
    free(msg->scale);
    free(msg);
}
static void free_dm_rig_ddf__event_key(DmRigDDF__EventKey* msg)
{
    free_number(msg->t);
    free_number(msg->integer);
    free_number(msg->float_);
    free_number(msg->string);
    free(msg);
}
static void free_dm_rig_ddf__event_track(DmRigDDF__EventTrack* msg)
{
    free_number(msg->event_id);
    int keys_size = msg->n_keys;
    for (int i = 0; i < keys_size; i++)
    {
        free_dm_rig_ddf__event_key(msg->keys[i]);
    }
    free(msg->keys);
    free(msg);
}
static void free_dm_rig_ddf__rig_animation(DmRigDDF__RigAnimation* msg)
{
    free_number(msg->id);
    free_number(msg->duration);
    free_number(msg->sample_rate);
    int tracks_size = msg->n_tracks;
    for (int i = 0; i < tracks_size; i++)
    {
        free_dm_rig_ddf__animation_track(msg->tracks[i]);
    }
    free(msg->tracks);
    int event_tracks_size = msg->n_event_tracks;
    for (int i = 0; i < event_tracks_size; i++)
    {
        free_dm_rig_ddf__event_track(msg->event_tracks[i]);
    }
    free(msg->event_tracks);
    free(msg);
}
static void free_dm_rig_ddf__animation_set(DmRigDDF__AnimationSet* msg)
{
    int animations_size = msg->n_animations;
    for (int i = 0; i < animations_size; i++)
    {
        free_dm_rig_ddf__rig_animation(msg->animations[i]);
    }
    free(msg->animations);
    int bone_list_size = msg->n_bone_list;
    for (int i = 0; i < bone_list_size; i++)
    {
        free_number(msg->bone_list[i]);
    }
    free(msg->bone_list);
    free(msg);
}
static void free_dm_rig_ddf__animation_instance_desc(DmRigDDF__AnimationInstanceDesc* msg)
{
    free_string(msg->animation);
    free(msg);
}
static void free_dm_rig_ddf__animation_set_desc(DmRigDDF__AnimationSetDesc* msg)
{
    int animations_size = msg->n_animations;
    for (int i = 0; i < animations_size; i++)
    {
        free_dm_rig_ddf__animation_instance_desc(msg->animations[i]);
    }
    free(msg->animations);
    free_string(msg->skeleton);
    free(msg);
}
static void free_dm_rig_ddf__mesh(DmRigDDF__Mesh* msg)
{
    int positions_size = msg->n_positions;
    for (int i = 0; i < positions_size; i++)
    {
        free_number(msg->positions[i]);
    }
    free(msg->positions);
    int normals_size = msg->n_normals;
    for (int i = 0; i < normals_size; i++)
    {
        free_number(msg->normals[i]);
    }
    free(msg->normals);
    int tangents_size = msg->n_tangents;
    for (int i = 0; i < tangents_size; i++)
    {
        free_number(msg->tangents[i]);
    }
    free(msg->tangents);
    int colors_size = msg->n_colors;
    for (int i = 0; i < colors_size; i++)
    {
        free_number(msg->colors[i]);
    }
    free(msg->colors);
    int texcoord0_size = msg->n_texcoord0;
    for (int i = 0; i < texcoord0_size; i++)
    {
        free_number(msg->texcoord0[i]);
    }
    free(msg->texcoord0);
    free_number(msg->num_texcoord0_components);
    int texcoord1_size = msg->n_texcoord1;
    for (int i = 0; i < texcoord1_size; i++)
    {
        free_number(msg->texcoord1[i]);
    }
    free(msg->texcoord1);
    free_number(msg->num_texcoord1_components);
    free_ProtobufCBinaryData(msg->indices);
    free_number(msg->indices_format);
    int weights_size = msg->n_weights;
    for (int i = 0; i < weights_size; i++)
    {
        free_number(msg->weights[i]);
    }
    free(msg->weights);
    int bone_indices_size = msg->n_bone_indices;
    for (int i = 0; i < bone_indices_size; i++)
    {
        free_number(msg->bone_indices[i]);
    }
    free(msg->bone_indices);
    free_number(msg->material_index);
    free(msg);
}
static void free_dm_rig_ddf__model(DmRigDDF__Model* msg)
{
    free_dm_math__transform(msg->local);
    free_number(msg->id);
    int meshes_size = msg->n_meshes;
    for (int i = 0; i < meshes_size; i++)
    {
        free_dm_rig_ddf__mesh(msg->meshes[i]);
    }
    free(msg->meshes);
    free(msg);
}
static void free_dm_rig_ddf__mesh_set(DmRigDDF__MeshSet* msg)
{
    int models_size = msg->n_models;
    for (int i = 0; i < models_size; i++)
    {
        free_dm_rig_ddf__model(msg->models[i]);
    }
    free(msg->models);
    int materials_size = msg->n_materials;
    for (int i = 0; i < materials_size; i++)
    {
        free_string(msg->materials[i]);
    }
    free(msg->materials);
    int bone_list_size = msg->n_bone_list;
    for (int i = 0; i < bone_list_size; i++)
    {
        free_number(msg->bone_list[i]);
    }
    free(msg->bone_list);
    free_number(msg->max_bone_count);
    free(msg);
}
static void free_dm_rig_ddf__rig_scene(DmRigDDF__RigScene* msg)
{
    free_string(msg->skeleton);
    free_string(msg->animation_set);
    free_string(msg->mesh_set);
    free_string(msg->texture_set);
    free(msg);
}
static void free_dm_model_ddf__model_desc(DmModelDDF__ModelDesc* msg)
{
    free_string(msg->mesh);
    free_string(msg->material);
    int textures_size = msg->n_textures;
    for (int i = 0; i < textures_size; i++)
    {
        free_string(msg->textures[i]);
    }
    free(msg->textures);
    free_string(msg->skeleton);
    free_string(msg->animations);
    free_string(msg->default_animation);
    free_string(msg->name);
    free(msg);
}
static void free_dm_model_ddf__model(DmModelDDF__Model* msg)
{
    free_string(msg->rig_scene);
    free_string(msg->material);
    int textures_size = msg->n_textures;
    for (int i = 0; i < textures_size; i++)
    {
        free_string(msg->textures[i]);
    }
    free(msg->textures);
    free_string(msg->default_animation);
    free(msg);
}
static void free_dm_model_ddf__reset_constant(DmModelDDF__ResetConstant* msg)
{
    free_number(msg->name_hash);
    free(msg);
}
static void free_dm_model_ddf__set_texture(DmModelDDF__SetTexture* msg)
{
    free_number(msg->texture_hash);
    free_number(msg->texture_unit);
    free(msg);
}
static void free_dm_model_ddf__model_play_animation(DmModelDDF__ModelPlayAnimation* msg)
{
    free_number(msg->animation_id);
    free_number(msg->playback);
    free_number(msg->blend_duration);
    free_number(msg->offset);
    free_number(msg->playback_rate);
    free(msg);
}
static void free_dm_model_ddf__model_cancel_animation(DmModelDDF__ModelCancelAnimation* msg)
{
    free(msg);
}
static void free_dm_model_ddf__model_animation_done(DmModelDDF__ModelAnimationDone* msg)
{
    free_number(msg->animation_id);
    free_number(msg->playback);
    free(msg);
}
static void free_dm_mesh_ddf__mesh_desc(DmMeshDDF__MeshDesc* msg)
{
    free_string(msg->material);
    free_string(msg->vertices);
    int textures_size = msg->n_textures;
    for (int i = 0; i < textures_size; i++)
    {
        free_string(msg->textures[i]);
    }
    free(msg->textures);
    free_number(msg->primitive_type);
    free_string(msg->position_stream);
    free_string(msg->normal_stream);
    free(msg);
}
static void free_dm_game_system_ddf__label_desc(DmGameSystemDDF__LabelDesc* msg)
{
    free_dm_math__vector4(msg->size);
    free_dm_math__vector4(msg->scale);
    free_dm_math__vector4(msg->color);
    free_dm_math__vector4(msg->outline);
    free_dm_math__vector4(msg->shadow);
    free_number(msg->leading);
    free_number(msg->tracking);
    free_number(msg->pivot);
    free_number(msg->blend_mode);
    free_boolean(msg->line_break);
    free_string(msg->text);
    free_string(msg->font);
    free_string(msg->material);
    free(msg);
}
static void free_dm_game_system_ddf__set_text(DmGameSystemDDF__SetText* msg)
{
    free_string(msg->text);
    free(msg);
}
static void free_dm_game_system_ddf__convex_hull(DmGameSystemDDF__ConvexHull* msg)
{
    free_number(msg->index);
    free_number(msg->count);
    free_string(msg->collision_group);
    free(msg);
}
static void free_dm_game_system_ddf__cue(DmGameSystemDDF__Cue* msg)
{
    free_string(msg->id);
    free_number(msg->frame);
    free_number(msg->value);
    free(msg);
}
static void free_dm_game_system_ddf__animation(DmGameSystemDDF__Animation* msg)
{
    free_string(msg->id);
    free_number(msg->start_tile);
    free_number(msg->end_tile);
    free_number(msg->playback);
    free_number(msg->fps);
    free_number(msg->flip_horizontal);
    free_number(msg->flip_vertical);
    int cues_size = msg->n_cues;
    for (int i = 0; i < cues_size; i++)
    {
        free_dm_game_system_ddf__cue(msg->cues[i]);
    }
    free(msg->cues);
    free(msg);
}
static void free_dm_game_system_ddf__tile_set(DmGameSystemDDF__TileSet* msg)
{
    free_string(msg->image);
    free_number(msg->tile_width);
    free_number(msg->tile_height);
    free_number(msg->tile_margin);
    free_number(msg->tile_spacing);
    free_string(msg->collision);
    free_string(msg->material_tag);
    int convex_hulls_size = msg->n_convex_hulls;
    for (int i = 0; i < convex_hulls_size; i++)
    {
        free_dm_game_system_ddf__convex_hull(msg->convex_hulls[i]);
    }
    free(msg->convex_hulls);
    int convex_hull_points_size = msg->n_convex_hull_points;
    for (int i = 0; i < convex_hull_points_size; i++)
    {
        free_number(msg->convex_hull_points[i]);
    }
    free(msg->convex_hull_points);
    int collision_groups_size = msg->n_collision_groups;
    for (int i = 0; i < collision_groups_size; i++)
    {
        free_string(msg->collision_groups[i]);
    }
    free(msg->collision_groups);
    int animations_size = msg->n_animations;
    for (int i = 0; i < animations_size; i++)
    {
        free_dm_game_system_ddf__animation(msg->animations[i]);
    }
    free(msg->animations);
    free_number(msg->extrude_borders);
    free_number(msg->inner_padding);
    free_number(msg->sprite_trim_mode);
    free(msg);
}
static void free_dm_game_system_ddf__tile_cell(DmGameSystemDDF__TileCell* msg)
{
    free_number(msg->x);
    free_number(msg->y);
    free_number(msg->tile);
    free_number(msg->h_flip);
    free_number(msg->v_flip);
    free_number(msg->rotate90);
    free(msg);
}
static void free_dm_game_system_ddf__tile_layer(DmGameSystemDDF__TileLayer* msg)
{
    free_string(msg->id);
    free_number(msg->z);
    free_number(msg->is_visible);
    free_number(msg->id_hash);
    int cell_size = msg->n_cell;
    for (int i = 0; i < cell_size; i++)
    {
        free_dm_game_system_ddf__tile_cell(msg->cell[i]);
    }
    free(msg->cell);
    free(msg);
}
static void free_dm_game_system_ddf__tile_grid(DmGameSystemDDF__TileGrid* msg)
{
    free_string(msg->tile_set);
    int layers_size = msg->n_layers;
    for (int i = 0; i < layers_size; i++)
    {
        free_dm_game_system_ddf__tile_layer(msg->layers[i]);
    }
    free(msg->layers);
    free_string(msg->material);
    free_number(msg->blend_mode);
    free(msg);
}
static void free_dm_game_system_ddf__set_tile(DmGameSystemDDF__SetTile* msg)
{
    free_number(msg->layer_id);
    free_dm_math__point3(msg->position);
    free_number(msg->tile);
    free_number(msg->dx);
    free_number(msg->dy);
    free(msg);
}
static void free_dm_game_system_ddf__set_constant_tile_map(DmGameSystemDDF__SetConstantTileMap* msg)
{
    free_number(msg->name_hash);
    free_dm_math__vector4(msg->value);
    free(msg);
}
static void free_dm_game_system_ddf__reset_constant_tile_map(DmGameSystemDDF__ResetConstantTileMap* msg)
{
    free_number(msg->name_hash);
    free(msg);
}
static void free_dm_game_system_ddf__atlas_image(DmGameSystemDDF__AtlasImage* msg)
{
    free_string(msg->image);
    free_number(msg->sprite_trim_mode);
    free(msg);
}
static void free_dm_game_system_ddf__atlas_animation(DmGameSystemDDF__AtlasAnimation* msg)
{
    free_string(msg->id);
    int images_size = msg->n_images;
    for (int i = 0; i < images_size; i++)
    {
        free_dm_game_system_ddf__atlas_image(msg->images[i]);
    }
    free(msg->images);
    free_number(msg->playback);
    free_number(msg->fps);
    free_number(msg->flip_horizontal);
    free_number(msg->flip_vertical);
    free(msg);
}
static void free_dm_game_system_ddf__atlas(DmGameSystemDDF__Atlas* msg)
{
    int images_size = msg->n_images;
    for (int i = 0; i < images_size; i++)
    {
        free_dm_game_system_ddf__atlas_image(msg->images[i]);
    }
    free(msg->images);
    int animations_size = msg->n_animations;
    for (int i = 0; i < animations_size; i++)
    {
        free_dm_game_system_ddf__atlas_animation(msg->animations[i]);
    }
    free(msg->animations);
    free_number(msg->margin);
    free_number(msg->extrude_borders);
    free_number(msg->inner_padding);
    free(msg);
}
static void free_dm_buffer_ddf__stream_desc(DmBufferDDF__StreamDesc* msg)
{
    free_string(msg->name);
    free_number(msg->value_type);
    free_number(msg->value_count);
    int ui_size = msg->n_ui;
    for (int i = 0; i < ui_size; i++)
    {
        free_number(msg->ui[i]);
    }
    free(msg->ui);
    int i_size = msg->n_i;
    for (int i = 0; i < i_size; i++)
    {
        free_number(msg->i[i]);
    }
    free(msg->i);
    int ui64_size = msg->n_ui64;
    for (int i = 0; i < ui64_size; i++)
    {
        free_number(msg->ui64[i]);
    }
    free(msg->ui64);
    int i64_size = msg->n_i64;
    for (int i = 0; i < i64_size; i++)
    {
        free_number(msg->i64[i]);
    }
    free(msg->i64);
    int f_size = msg->n_f;
    for (int i = 0; i < f_size; i++)
    {
        free_number(msg->f[i]);
    }
    free(msg->f);
    free(msg);
}
static void free_dm_buffer_ddf__buffer_desc(DmBufferDDF__BufferDesc* msg)
{
    int streams_size = msg->n_streams;
    for (int i = 0; i < streams_size; i++)
    {
        free_dm_buffer_ddf__stream_desc(msg->streams[i]);
    }
    free(msg->streams);
    free(msg);
}
static void free_dm_sound_ddf__sound_desc(DmSoundDDF__SoundDesc* msg)
{
    free_string(msg->sound);
    free_number(msg->looping);
    free_string(msg->group);
    free_number(msg->gain);
    free_number(msg->pan);
    free_number(msg->speed);
    free_number(msg->loopcount);
    free(msg);
}
static void free_dm_gamesys_ddf__camera_desc(DmGamesysDDF__CameraDesc* msg)
{
    free_number(msg->aspect_ratio);
    free_number(msg->fov);
    free_number(msg->near_z);
    free_number(msg->far_z);
    free_number(msg->auto_aspect_ratio);
    free_number(msg->orthographic_projection);
    free_number(msg->orthographic_zoom);
    free(msg);
}
static void free_dm_gamesys_ddf__set_camera(DmGamesysDDF__SetCamera* msg)
{
    free_number(msg->aspect_ratio);
    free_number(msg->fov);
    free_number(msg->near_z);
    free_number(msg->far_z);
    free_number(msg->orthographic_projection);
    free_number(msg->orthographic_zoom);
    free(msg);
}
static void free_dm_gamesys_ddf__acquire_camera_focus(DmGamesysDDF__AcquireCameraFocus* msg)
{
    free(msg);
}
static void free_dm_gamesys_ddf__release_camera_focus(DmGamesysDDF__ReleaseCameraFocus* msg)
{
    free(msg);
}
static void free_dm_game_system_ddf__sprite_desc(DmGameSystemDDF__SpriteDesc* msg)
{
    free_string(msg->tile_set);
    free_string(msg->default_animation);
    free_string(msg->material);
    free_number(msg->blend_mode);
    free_dm_math__vector4(msg->slice9);
    free_dm_math__vector4(msg->size);
    free_number(msg->size_mode);
    free(msg);
}
static void free_dm_game_system_ddf__play_animation(DmGameSystemDDF__PlayAnimation* msg)
{
    free_number(msg->id);
    free_number(msg->offset);
    free_number(msg->playback_rate);
    free(msg);
}
static void free_dm_game_system_ddf__animation_done(DmGameSystemDDF__AnimationDone* msg)
{
    free_number(msg->current_tile);
    free_number(msg->id);
    free(msg);
}
static void free_dm_game_system_ddf__set_flip_horizontal(DmGameSystemDDF__SetFlipHorizontal* msg)
{
    free_number(msg->flip);
    free(msg);
}
static void free_dm_game_system_ddf__set_flip_vertical(DmGameSystemDDF__SetFlipVertical* msg)
{
    free_number(msg->flip);
    free(msg);
}
static void free_dm_game_system_ddf__texture_set_animation(DmGameSystemDDF__TextureSetAnimation* msg)
{
    free_string(msg->id);
    free_number(msg->width);
    free_number(msg->height);
    free_number(msg->start);
    free_number(msg->end);
    free_number(msg->fps);
    free_number(msg->playback);
    free_number(msg->flip_horizontal);
    free_number(msg->flip_vertical);
    free_number(msg->is_animation);
    free(msg);
}
static void free_dm_game_system_ddf__sprite_geometry(DmGameSystemDDF__SpriteGeometry* msg)
{
    free_number(msg->width);
    free_number(msg->height);
    int vertices_size = msg->n_vertices;
    for (int i = 0; i < vertices_size; i++)
    {
        free_number(msg->vertices[i]);
    }
    free(msg->vertices);
    int uvs_size = msg->n_uvs;
    for (int i = 0; i < uvs_size; i++)
    {
        free_number(msg->uvs[i]);
    }
    free(msg->uvs);
    int indices_size = msg->n_indices;
    for (int i = 0; i < indices_size; i++)
    {
        free_number(msg->indices[i]);
    }
    free(msg->indices);
    free(msg);
}
static void free_dm_game_system_ddf__texture_set(DmGameSystemDDF__TextureSet* msg)
{
    free_string(msg->texture);
    int animations_size = msg->n_animations;
    for (int i = 0; i < animations_size; i++)
    {
        free_dm_game_system_ddf__texture_set_animation(msg->animations[i]);
    }
    free(msg->animations);
    int convex_hulls_size = msg->n_convex_hulls;
    for (int i = 0; i < convex_hulls_size; i++)
    {
        free_dm_game_system_ddf__convex_hull(msg->convex_hulls[i]);
    }
    free(msg->convex_hulls);
    free_number(msg->tile_width);
    free_number(msg->tile_height);
    free_number(msg->tile_count);
    int collision_hull_points_size = msg->n_collision_hull_points;
    for (int i = 0; i < collision_hull_points_size; i++)
    {
        free_number(msg->collision_hull_points[i]);
    }
    free(msg->collision_hull_points);
    int collision_groups_size = msg->n_collision_groups;
    for (int i = 0; i < collision_groups_size; i++)
    {
        free_string(msg->collision_groups[i]);
    }
    free(msg->collision_groups);
    free_ProtobufCBinaryData(msg->tex_coords);
    free_ProtobufCBinaryData(msg->tex_dims);
    int geometries_size = msg->n_geometries;
    for (int i = 0; i < geometries_size; i++)
    {
        free_dm_game_system_ddf__sprite_geometry(msg->geometries[i]);
    }
    free(msg->geometries);
    free_number(msg->use_geometries);
    int frame_indices_size = msg->n_frame_indices;
    for (int i = 0; i < frame_indices_size; i++)
    {
        free_number(msg->frame_indices[i]);
    }
    free(msg->frame_indices);
    free(msg);
}
static void free_dm_physics_ddf__convex_shape(DmPhysicsDDF__ConvexShape* msg)
{
    free_number(msg->shape_type);
    int data_size = msg->n_data;
    for (int i = 0; i < data_size; i++)
    {
        free_number(msg->data[i]);
    }
    free(msg->data);
    free(msg);
}
static void free_dm_physics_ddf__collision_shape(DmPhysicsDDF__CollisionShape* msg)
{
    int shapes_size = msg->n_shapes;
    for (int i = 0; i < shapes_size; i++)
    {
        free_dm_physics_ddf__collision_shape__shape(msg->shapes[i]);
    }
    free(msg->shapes);
    int data_size = msg->n_data;
    for (int i = 0; i < data_size; i++)
    {
        free_number(msg->data[i]);
    }
    free(msg->data);
    free(msg);
}
static void free_dm_physics_ddf__collision_shape__shape(DmPhysicsDDF__CollisionShape__Shape* msg)
{
    free_number(msg->shape_type);
    free_dm_math__point3(msg->position);
    free_dm_math__quat(msg->rotation);
    free_number(msg->index);
    free_number(msg->count);
    free(msg);
}
static void free_dm_physics_ddf__collision_object_desc(DmPhysicsDDF__CollisionObjectDesc* msg)
{
    free_string(msg->collision_shape);
    free_number(msg->type);
    free_number(msg->mass);
    free_number(msg->friction);
    free_number(msg->restitution);
    free_string(msg->group);
    int mask_size = msg->n_mask;
    for (int i = 0; i < mask_size; i++)
    {
        free_string(msg->mask[i]);
    }
    free(msg->mask);
    free_dm_physics_ddf__collision_shape(msg->embedded_collision_shape);
    free_number(msg->linear_damping);
    free_number(msg->angular_damping);
    free_boolean(msg->locked_rotation);
    free_boolean(msg->bullet);
    free(msg);
}
static void free_dm_physics_ddf__apply_force(DmPhysicsDDF__ApplyForce* msg)
{
    free_dm_math__vector3(msg->force);
    free_dm_math__point3(msg->position);
    free(msg);
}
static void free_dm_physics_ddf__collision_response(DmPhysicsDDF__CollisionResponse* msg)
{
    free_number(msg->other_id);
    free_number(msg->group);
    free_dm_math__point3(msg->other_position);
    free_number(msg->other_group);
    free_number(msg->own_group);
    free(msg);
}
static void free_dm_physics_ddf__contact_point_response(DmPhysicsDDF__ContactPointResponse* msg)
{
    free_dm_math__point3(msg->position);
    free_dm_math__vector3(msg->normal);
    free_dm_math__vector3(msg->relative_velocity);
    free_number(msg->distance);
    free_number(msg->applied_impulse);
    free_number(msg->life_time);
    free_number(msg->mass);
    free_number(msg->other_mass);
    free_number(msg->other_id);
    free_dm_math__point3(msg->other_position);
    free_number(msg->group);
    free_number(msg->other_group);
    free_number(msg->own_group);
    free(msg);
}
static void free_dm_physics_ddf__trigger_response(DmPhysicsDDF__TriggerResponse* msg)
{
    free_number(msg->other_id);
    free_boolean(msg->enter);
    free_number(msg->group);
    free_number(msg->other_group);
    free_number(msg->own_group);
    free(msg);
}
static void free_dm_physics_ddf__request_ray_cast(DmPhysicsDDF__RequestRayCast* msg)
{
    free_dm_math__point3(msg->from);
    free_dm_math__point3(msg->to);
    free_number(msg->mask);
    free_number(msg->request_id);
    free(msg);
}
static void free_dm_physics_ddf__ray_cast_response(DmPhysicsDDF__RayCastResponse* msg)
{
    free_number(msg->fraction);
    free_dm_math__point3(msg->position);
    free_dm_math__vector3(msg->normal);
    free_number(msg->id);
    free_number(msg->group);
    free_number(msg->request_id);
    free(msg);
}
static void free_dm_physics_ddf__ray_cast_missed(DmPhysicsDDF__RayCastMissed* msg)
{
    free_number(msg->request_id);
    free(msg);
}
static void free_dm_physics_ddf__request_velocity(DmPhysicsDDF__RequestVelocity* msg)
{
    free(msg);
}
static void free_dm_physics_ddf__velocity_response(DmPhysicsDDF__VelocityResponse* msg)
{
    free_dm_math__vector3(msg->linear_velocity);
    free_dm_math__vector3(msg->angular_velocity);
    free(msg);
}
static void free_dm_physics_ddf__set_grid_shape_hull(DmPhysicsDDF__SetGridShapeHull* msg)
{
    free_number(msg->shape);
    free_number(msg->row);
    free_number(msg->column);
    free_number(msg->hull);
    free_number(msg->flip_horizontal);
    free_number(msg->flip_vertical);
    free_number(msg->rotate90);
    free(msg);
}
static void free_dm_physics_ddf__enable_grid_shape_layer(DmPhysicsDDF__EnableGridShapeLayer* msg)
{
    free_number(msg->shape);
    free_number(msg->enable);
    free(msg);
}
static void free_dm_game_system_ddf__factory_desc(DmGameSystemDDF__FactoryDesc* msg)
{
    free_string(msg->prototype);
    free_boolean(msg->load_dynamically);
    free(msg);
}
static void free_dm_game_system_ddf__collection_factory_desc(DmGameSystemDDF__CollectionFactoryDesc* msg)
{
    free_string(msg->prototype);
    free_boolean(msg->load_dynamically);
    free(msg);
}
static void free_dm_game_system_ddf__create(DmGameSystemDDF__Create* msg)
{
    free_dm_math__point3(msg->position);
    free_dm_math__quat(msg->rotation);
    free_number(msg->id);
    free_number(msg->scale);
    free_dm_math__vector3(msg->scale3);
    free_number(msg->index);
    free(msg);
}
static void free_dm_game_system_ddf__collection_proxy_desc(DmGameSystemDDF__CollectionProxyDesc* msg)
{
    free_string(msg->collection);
    free_boolean(msg->exclude);
    free(msg);
}
static void free_dm_game_system_ddf__set_time_step(DmGameSystemDDF__SetTimeStep* msg)
{
    free_number(msg->factor);
    free_number(msg->mode);
    free(msg);
}
static void free_dm_game_system_ddf__light_desc(DmGameSystemDDF__LightDesc* msg)
{
    free_string(msg->id);
    free_number(msg->type);
    free_number(msg->intensity);
    free_dm_math__vector3(msg->color);
    free_number(msg->range);
    free_number(msg->decay);
    free_number(msg->cone_angle);
    free_number(msg->penumbra_angle);
    free_number(msg->drop_off);
    free(msg);
}
static void free_dm_game_system_ddf__set_light(DmGameSystemDDF__SetLight* msg)
{
    free_dm_math__point3(msg->position);
    free_dm_math__quat(msg->rotation);
    free_dm_game_system_ddf__light_desc(msg->light);
    free(msg);
}
static void free_dm_game_system_ddf__set_view_projection(DmGameSystemDDF__SetViewProjection* msg)
{
    free_number(msg->id);
    free_dm_math__matrix4(msg->view);
    free_dm_math__matrix4(msg->projection);
    free(msg);
}
static void free_dm_game_system_ddf__play_sound(DmGameSystemDDF__PlaySound* msg)
{
    free_number(msg->delay);
    free_number(msg->gain);
    free_number(msg->pan);
    free_number(msg->speed);
    free_number(msg->play_id);
    free(msg);
}
static void free_dm_game_system_ddf__stop_sound(DmGameSystemDDF__StopSound* msg)
{
    free(msg);
}
static void free_dm_game_system_ddf__pause_sound(DmGameSystemDDF__PauseSound* msg)
{
    free_boolean(msg->pause);
    free(msg);
}
static void free_dm_game_system_ddf__sound_done(DmGameSystemDDF__SoundDone* msg)
{
    free_number(msg->play_id);
    free(msg);
}
static void free_dm_game_system_ddf__set_gain(DmGameSystemDDF__SetGain* msg)
{
    free_number(msg->gain);
    free(msg);
}
static void free_dm_game_system_ddf__set_pan(DmGameSystemDDF__SetPan* msg)
{
    free_number(msg->pan);
    free(msg);
}
static void free_dm_game_system_ddf__set_speed(DmGameSystemDDF__SetSpeed* msg)
{
    free_number(msg->speed);
    free(msg);
}
static void free_dm_game_system_ddf__play_particle_fx(DmGameSystemDDF__PlayParticleFX* msg)
{
    free(msg);
}
static void free_dm_game_system_ddf__stop_particle_fx(DmGameSystemDDF__StopParticleFX* msg)
{
    free_boolean(msg->clear_particles);
    free(msg);
}
static void free_dm_game_system_ddf__set_constant_particle_fx(DmGameSystemDDF__SetConstantParticleFX* msg)
{
    free_number(msg->emitter_id);
    free_number(msg->name_hash);
    free_dm_math__matrix4(msg->value);
    free_boolean(msg->is_matrix4);
    free(msg);
}
static void free_dm_game_system_ddf__reset_constant_particle_fx(DmGameSystemDDF__ResetConstantParticleFX* msg)
{
    free_number(msg->emitter_id);
    free_number(msg->name_hash);
    free(msg);
}
static void free_dm_game_system_ddf__set_constant(DmGameSystemDDF__SetConstant* msg)
{
    free_number(msg->name_hash);
    free_dm_math__vector4(msg->value);
    free_number(msg->index);
    free(msg);
}
static void free_dm_game_system_ddf__reset_constant(DmGameSystemDDF__ResetConstant* msg)
{
    free_number(msg->name_hash);
    free(msg);
}
static void free_dm_game_system_ddf__set_scale(DmGameSystemDDF__SetScale* msg)
{
    free_dm_math__vector3(msg->scale);
    free(msg);
}
static void free_dm_gui_ddf__node_desc(DmGuiDDF__NodeDesc* msg)
{
    free_dm_math__vector4(msg->position);
    free_dm_math__vector4(msg->rotation);
    free_dm_math__vector4(msg->scale);
    free_dm_math__vector4(msg->size);
    free_dm_math__vector4(msg->color);
    free_number(msg->type);
    free_number(msg->blend_mode);
    free_string(msg->text);
    free_string(msg->texture);
    free_string(msg->font);
    free_string(msg->id);
    free_number(msg->xanchor);
    free_number(msg->yanchor);
    free_number(msg->pivot);
    free_dm_math__vector4(msg->outline);
    free_dm_math__vector4(msg->shadow);
    free_number(msg->adjust_mode);
    free_boolean(msg->line_break);
    free_string(msg->parent);
    free_string(msg->layer);
    free_boolean(msg->inherit_alpha);
    free_dm_math__vector4(msg->slice9);
    free_number(msg->outerbounds);
    free_number(msg->innerradius);
    free_number(msg->perimetervertices);
    free_number(msg->piefillangle);
    free_number(msg->clipping_mode);
    free_boolean(msg->clipping_visible);
    free_boolean(msg->clipping_inverted);
    free_number(msg->alpha);
    free_number(msg->outline_alpha);
    free_number(msg->shadow_alpha);
    int overridden_fields_size = msg->n_overridden_fields;
    for (int i = 0; i < overridden_fields_size; i++)
    {
        free_number(msg->overridden_fields[i]);
    }
    free(msg->overridden_fields);
    free_string(msg->template_);
    free_boolean(msg->template_node_child);
    free_number(msg->text_leading);
    free_number(msg->text_tracking);
    free_number(msg->size_mode);
    free_string(msg->spine_scene);
    free_string(msg->spine_default_animation);
    free_string(msg->spine_skin);
    free_boolean(msg->spine_node_child);
    free_string(msg->particlefx);
    free_number(msg->custom_type);
    free_boolean(msg->enabled);
    free_boolean(msg->visible);
    free(msg);
}
static void free_dm_gui_ddf__scene_desc(DmGuiDDF__SceneDesc* msg)
{
    free_string(msg->script);
    int fonts_size = msg->n_fonts;
    for (int i = 0; i < fonts_size; i++)
    {
        free_dm_gui_ddf__scene_desc__font_desc(msg->fonts[i]);
    }
    free(msg->fonts);
    int textures_size = msg->n_textures;
    for (int i = 0; i < textures_size; i++)
    {
        free_dm_gui_ddf__scene_desc__texture_desc(msg->textures[i]);
    }
    free(msg->textures);
    free_dm_math__vector4(msg->background_color);
    int nodes_size = msg->n_nodes;
    for (int i = 0; i < nodes_size; i++)
    {
        free_dm_gui_ddf__node_desc(msg->nodes[i]);
    }
    free(msg->nodes);
    int layers_size = msg->n_layers;
    for (int i = 0; i < layers_size; i++)
    {
        free_dm_gui_ddf__scene_desc__layer_desc(msg->layers[i]);
    }
    free(msg->layers);
    free_string(msg->material);
    int layouts_size = msg->n_layouts;
    for (int i = 0; i < layouts_size; i++)
    {
        free_dm_gui_ddf__scene_desc__layout_desc(msg->layouts[i]);
    }
    free(msg->layouts);
    free_number(msg->adjust_reference);
    free_number(msg->max_nodes);
    int spine_scenes_size = msg->n_spine_scenes;
    for (int i = 0; i < spine_scenes_size; i++)
    {
        free_dm_gui_ddf__scene_desc__spine_scene_desc(msg->spine_scenes[i]);
    }
    free(msg->spine_scenes);
    int particlefxs_size = msg->n_particlefxs;
    for (int i = 0; i < particlefxs_size; i++)
    {
        free_dm_gui_ddf__scene_desc__particle_fxdesc(msg->particlefxs[i]);
    }
    free(msg->particlefxs);
    int resources_size = msg->n_resources;
    for (int i = 0; i < resources_size; i++)
    {
        free_dm_gui_ddf__scene_desc__resource_desc(msg->resources[i]);
    }
    free(msg->resources);
    free(msg);
}
static void free_dm_gui_ddf__scene_desc__font_desc(DmGuiDDF__SceneDesc__FontDesc* msg)
{
    free_string(msg->name);
    free_string(msg->font);
    free(msg);
}
static void free_dm_gui_ddf__scene_desc__texture_desc(DmGuiDDF__SceneDesc__TextureDesc* msg)
{
    free_string(msg->name);
    free_string(msg->texture);
    free(msg);
}
static void free_dm_gui_ddf__scene_desc__layer_desc(DmGuiDDF__SceneDesc__LayerDesc* msg)
{
    free_string(msg->name);
    free(msg);
}
static void free_dm_gui_ddf__scene_desc__layout_desc(DmGuiDDF__SceneDesc__LayoutDesc* msg)
{
    free_string(msg->name);
    int nodes_size = msg->n_nodes;
    for (int i = 0; i < nodes_size; i++)
    {
        free_dm_gui_ddf__node_desc(msg->nodes[i]);
    }
    free(msg->nodes);
    free(msg);
}
static void free_dm_gui_ddf__scene_desc__spine_scene_desc(DmGuiDDF__SceneDesc__SpineSceneDesc* msg)
{
    free_string(msg->name);
    free_string(msg->spine_scene);
    free(msg);
}
static void free_dm_gui_ddf__scene_desc__resource_desc(DmGuiDDF__SceneDesc__ResourceDesc* msg)
{
    free_string(msg->name);
    free_string(msg->path);
    free(msg);
}
static void free_dm_gui_ddf__scene_desc__particle_fxdesc(DmGuiDDF__SceneDesc__ParticleFXDesc* msg)
{
    free_string(msg->name);
    free_string(msg->particlefx);
    free(msg);
}
static void free_dm_gui_ddf__layout_changed(DmGuiDDF__LayoutChanged* msg)
{
    free_number(msg->id);
    free_number(msg->previous_id);
    free(msg);
}
static void free_dm_live_update_ddf__hash_digest(DmLiveUpdateDDF__HashDigest* msg)
{
    free_ProtobufCBinaryData(msg->data);
    free(msg);
}
static void free_dm_live_update_ddf__manifest_header(DmLiveUpdateDDF__ManifestHeader* msg)
{
    free_number(msg->magic_number);
    free_number(msg->version);
    free_number(msg->resource_hash_algorithm);
    free_number(msg->signature_hash_algorithm);
    free_number(msg->signature_sign_algorithm);
    free_dm_live_update_ddf__hash_digest(msg->project_identifier);
    free(msg);
}
static void free_dm_live_update_ddf__resource_entry(DmLiveUpdateDDF__ResourceEntry* msg)
{
    free_string(msg->url);
    free_number(msg->url_hash);
    free_dm_live_update_ddf__hash_digest(msg->hash);
    int dependants_size = msg->n_dependants;
    for (int i = 0; i < dependants_size; i++)
    {
        free_number(msg->dependants[i]);
    }
    free(msg->dependants);
    free_number(msg->flags);
    free(msg);
}
static void free_dm_live_update_ddf__manifest_data(DmLiveUpdateDDF__ManifestData* msg)
{
    free_dm_live_update_ddf__manifest_header(msg->header);
    int engine_versions_size = msg->n_engine_versions;
    for (int i = 0; i < engine_versions_size; i++)
    {
        free_dm_live_update_ddf__hash_digest(msg->engine_versions[i]);
    }
    free(msg->engine_versions);
    int resources_size = msg->n_resources;
    for (int i = 0; i < resources_size; i++)
    {
        free_dm_live_update_ddf__resource_entry(msg->resources[i]);
    }
    free(msg->resources);
    free(msg);
}
static void free_dm_live_update_ddf__manifest_file(DmLiveUpdateDDF__ManifestFile* msg)
{
    free_ProtobufCBinaryData(msg->data);
    free_ProtobufCBinaryData(msg->signature);
    free_ProtobufCBinaryData(msg->archive_identifier);
    free(msg);
}
static void free_dm_resource_ddf__reload(DmResourceDDF__Reload* msg)
{
    int resources_size = msg->n_resources;
    for (int i = 0; i < resources_size; i++)
    {
        free_string(msg->resources[i]);
    }
    free(msg->resources);
    free(msg);
}
static void free_dm_graphics__cubemap(DmGraphics__Cubemap* msg)
{
    free_string(msg->right);
    free_string(msg->left);
    free_string(msg->top);
    free_string(msg->bottom);
    free_string(msg->front);
    free_string(msg->back);
    free(msg);
}
static void free_dm_graphics__texture_image(DmGraphics__TextureImage* msg)
{
    int alternatives_size = msg->n_alternatives;
    for (int i = 0; i < alternatives_size; i++)
    {
        free_dm_graphics__texture_image__image(msg->alternatives[i]);
    }
    free(msg->alternatives);
    free_number(msg->type);
    free_number(msg->count);
    free(msg);
}
static void free_dm_graphics__texture_image__image(DmGraphics__TextureImage__Image* msg)
{
    free_number(msg->width);
    free_number(msg->height);
    free_number(msg->original_width);
    free_number(msg->original_height);
    free_number(msg->format);
    int mip_map_offset_size = msg->n_mip_map_offset;
    for (int i = 0; i < mip_map_offset_size; i++)
    {
        free_number(msg->mip_map_offset[i]);
    }
    free(msg->mip_map_offset);
    int mip_map_size_size = msg->n_mip_map_size;
    for (int i = 0; i < mip_map_size_size; i++)
    {
        free_number(msg->mip_map_size[i]);
    }
    free(msg->mip_map_size);
    free_ProtobufCBinaryData(msg->data);
    free_number(msg->compression_type);
    free_number(msg->compression_flags);
    int mip_map_size_compressed_size = msg->n_mip_map_size_compressed;
    for (int i = 0; i < mip_map_size_compressed_size; i++)
    {
        free_number(msg->mip_map_size_compressed[i]);
    }
    free(msg->mip_map_size_compressed);
    free(msg);
}
static void free_dm_graphics__texture_format_alternative(DmGraphics__TextureFormatAlternative* msg)
{
    free_number(msg->format);
    free_number(msg->compression_level);
    free_number(msg->compression_type);
    free(msg);
}
static void free_dm_graphics__path_settings(DmGraphics__PathSettings* msg)
{
    free_string(msg->path);
    free_string(msg->profile);
    free(msg);
}
static void free_dm_graphics__platform_profile(DmGraphics__PlatformProfile* msg)
{
    free_number(msg->os);
    int formats_size = msg->n_formats;
    for (int i = 0; i < formats_size; i++)
    {
        free_dm_graphics__texture_format_alternative(msg->formats[i]);
    }
    free(msg->formats);
    free_boolean(msg->mipmaps);
    free_number(msg->max_texture_size);
    free_boolean(msg->premultiply_alpha);
    free(msg);
}
static void free_dm_graphics__texture_profile(DmGraphics__TextureProfile* msg)
{
    free_string(msg->name);
    int platforms_size = msg->n_platforms;
    for (int i = 0; i < platforms_size; i++)
    {
        free_dm_graphics__platform_profile(msg->platforms[i]);
    }
    free(msg->platforms);
    free(msg);
}
static void free_dm_graphics__texture_profiles(DmGraphics__TextureProfiles* msg)
{
    int path_settings_size = msg->n_path_settings;
    for (int i = 0; i < path_settings_size; i++)
    {
        free_dm_graphics__path_settings(msg->path_settings[i]);
    }
    free(msg->path_settings);
    int profiles_size = msg->n_profiles;
    for (int i = 0; i < profiles_size; i++)
    {
        free_dm_graphics__texture_profile(msg->profiles[i]);
    }
    free(msg->profiles);
    free(msg);
}
static void free_dm_graphics__shader_desc(DmGraphics__ShaderDesc* msg)
{
    int shaders_size = msg->n_shaders;
    for (int i = 0; i < shaders_size; i++)
    {
        free_dm_graphics__shader_desc__shader(msg->shaders[i]);
    }
    free(msg->shaders);
    free(msg);
}
static void free_dm_graphics__shader_desc__resource_binding(DmGraphics__ShaderDesc__ResourceBinding* msg)
{
    free_string(msg->name);
    free_number(msg->type);
    free_number(msg->element_count);
    free_number(msg->set);
    free_number(msg->binding);
    free(msg);
}
static void free_dm_graphics__shader_desc__shader(DmGraphics__ShaderDesc__Shader* msg)
{
    free_number(msg->language);
    free_ProtobufCBinaryData(msg->source);
    int uniforms_size = msg->n_uniforms;
    for (int i = 0; i < uniforms_size; i++)
    {
        free_dm_graphics__shader_desc__resource_binding(msg->uniforms[i]);
    }
    free(msg->uniforms);
    int attributes_size = msg->n_attributes;
    for (int i = 0; i < attributes_size; i++)
    {
        free_dm_graphics__shader_desc__resource_binding(msg->attributes[i]);
    }
    free(msg->attributes);
    free(msg);
}
static void free_dm_properties_ddf__property_declaration_entry(DmPropertiesDDF__PropertyDeclarationEntry* msg)
{
    free_string(msg->key);
    free_number(msg->id);
    free_number(msg->index);
    int element_ids_size = msg->n_element_ids;
    for (int i = 0; i < element_ids_size; i++)
    {
        free_number(msg->element_ids[i]);
    }
    free(msg->element_ids);
    free(msg);
}
static void free_dm_properties_ddf__property_declarations(DmPropertiesDDF__PropertyDeclarations* msg)
{
    int number_entries_size = msg->n_number_entries;
    for (int i = 0; i < number_entries_size; i++)
    {
        free_dm_properties_ddf__property_declaration_entry(msg->number_entries[i]);
    }
    free(msg->number_entries);
    int hash_entries_size = msg->n_hash_entries;
    for (int i = 0; i < hash_entries_size; i++)
    {
        free_dm_properties_ddf__property_declaration_entry(msg->hash_entries[i]);
    }
    free(msg->hash_entries);
    int url_entries_size = msg->n_url_entries;
    for (int i = 0; i < url_entries_size; i++)
    {
        free_dm_properties_ddf__property_declaration_entry(msg->url_entries[i]);
    }
    free(msg->url_entries);
    int vector3_entries_size = msg->n_vector3_entries;
    for (int i = 0; i < vector3_entries_size; i++)
    {
        free_dm_properties_ddf__property_declaration_entry(msg->vector3_entries[i]);
    }
    free(msg->vector3_entries);
    int vector4_entries_size = msg->n_vector4_entries;
    for (int i = 0; i < vector4_entries_size; i++)
    {
        free_dm_properties_ddf__property_declaration_entry(msg->vector4_entries[i]);
    }
    free(msg->vector4_entries);
    int quat_entries_size = msg->n_quat_entries;
    for (int i = 0; i < quat_entries_size; i++)
    {
        free_dm_properties_ddf__property_declaration_entry(msg->quat_entries[i]);
    }
    free(msg->quat_entries);
    int bool_entries_size = msg->n_bool_entries;
    for (int i = 0; i < bool_entries_size; i++)
    {
        free_dm_properties_ddf__property_declaration_entry(msg->bool_entries[i]);
    }
    free(msg->bool_entries);
    int float_values_size = msg->n_float_values;
    for (int i = 0; i < float_values_size; i++)
    {
        free_number(msg->float_values[i]);
    }
    free(msg->float_values);
    int hash_values_size = msg->n_hash_values;
    for (int i = 0; i < hash_values_size; i++)
    {
        free_number(msg->hash_values[i]);
    }
    free(msg->hash_values);
    int string_values_size = msg->n_string_values;
    for (int i = 0; i < string_values_size; i++)
    {
        free_string(msg->string_values[i]);
    }
    free(msg->string_values);
    free(msg);
}
static void free_dm_game_object_ddf__property_desc(DmGameObjectDDF__PropertyDesc* msg)
{
    free_string(msg->id);
    free_string(msg->value);
    free_number(msg->type);
    free(msg);
}
static void free_dm_game_object_ddf__component_desc(DmGameObjectDDF__ComponentDesc* msg)
{
    free_string(msg->id);
    free_string(msg->component);
    free_dm_math__point3(msg->position);
    free_dm_math__quat(msg->rotation);
    int properties_size = msg->n_properties;
    for (int i = 0; i < properties_size; i++)
    {
        free_dm_game_object_ddf__property_desc(msg->properties[i]);
    }
    free(msg->properties);
    free_dm_properties_ddf__property_declarations(msg->property_decls);
    free_dm_math__vector3(msg->scale);
    free(msg);
}
static void free_dm_game_object_ddf__embedded_component_desc(DmGameObjectDDF__EmbeddedComponentDesc* msg)
{
    free_string(msg->id);
    free_string(msg->type);
    free_string(msg->data);
    free_dm_math__point3(msg->position);
    free_dm_math__quat(msg->rotation);
    free_dm_math__vector3(msg->scale);
    free(msg);
}
static void free_dm_game_object_ddf__prototype_desc(DmGameObjectDDF__PrototypeDesc* msg)
{
    int components_size = msg->n_components;
    for (int i = 0; i < components_size; i++)
    {
        free_dm_game_object_ddf__component_desc(msg->components[i]);
    }
    free(msg->components);
    int embedded_components_size = msg->n_embedded_components;
    for (int i = 0; i < embedded_components_size; i++)
    {
        free_dm_game_object_ddf__embedded_component_desc(msg->embedded_components[i]);
    }
    free(msg->embedded_components);
    int property_resources_size = msg->n_property_resources;
    for (int i = 0; i < property_resources_size; i++)
    {
        free_string(msg->property_resources[i]);
    }
    free(msg->property_resources);
    free(msg);
}
static void free_dm_game_object_ddf__component_property_desc(DmGameObjectDDF__ComponentPropertyDesc* msg)
{
    free_string(msg->id);
    int properties_size = msg->n_properties;
    for (int i = 0; i < properties_size; i++)
    {
        free_dm_game_object_ddf__property_desc(msg->properties[i]);
    }
    free(msg->properties);
    free_dm_properties_ddf__property_declarations(msg->property_decls);
    free(msg);
}
static void free_dm_game_object_ddf__componen_type_desc(DmGameObjectDDF__ComponenTypeDesc* msg)
{
    free_number(msg->name_hash);
    free_number(msg->max_count);
    free(msg);
}
static void free_dm_game_object_ddf__instance_desc(DmGameObjectDDF__InstanceDesc* msg)
{
    free_string(msg->id);
    free_string(msg->prototype);
    int children_size = msg->n_children;
    for (int i = 0; i < children_size; i++)
    {
        free_string(msg->children[i]);
    }
    free(msg->children);
    free_dm_math__point3(msg->position);
    free_dm_math__quat(msg->rotation);
    int component_properties_size = msg->n_component_properties;
    for (int i = 0; i < component_properties_size; i++)
    {
        free_dm_game_object_ddf__component_property_desc(msg->component_properties[i]);
    }
    free(msg->component_properties);
    free_number(msg->scale);
    free_dm_math__vector3(msg->scale3);
    free(msg);
}
static void free_dm_game_object_ddf__embedded_instance_desc(DmGameObjectDDF__EmbeddedInstanceDesc* msg)
{
    free_string(msg->id);
    int children_size = msg->n_children;
    for (int i = 0; i < children_size; i++)
    {
        free_string(msg->children[i]);
    }
    free(msg->children);
    free_string(msg->data);
    free_dm_math__point3(msg->position);
    free_dm_math__quat(msg->rotation);
    int component_properties_size = msg->n_component_properties;
    for (int i = 0; i < component_properties_size; i++)
    {
        free_dm_game_object_ddf__component_property_desc(msg->component_properties[i]);
    }
    free(msg->component_properties);
    free_number(msg->scale);
    free_dm_math__vector3(msg->scale3);
    free(msg);
}
static void free_dm_game_object_ddf__instance_property_desc(DmGameObjectDDF__InstancePropertyDesc* msg)
{
    free_string(msg->id);
    int properties_size = msg->n_properties;
    for (int i = 0; i < properties_size; i++)
    {
        free_dm_game_object_ddf__component_property_desc(msg->properties[i]);
    }
    free(msg->properties);
    free(msg);
}
static void free_dm_game_object_ddf__collection_instance_desc(DmGameObjectDDF__CollectionInstanceDesc* msg)
{
    free_string(msg->id);
    free_string(msg->collection);
    free_dm_math__point3(msg->position);
    free_dm_math__quat(msg->rotation);
    free_number(msg->scale);
    free_dm_math__vector3(msg->scale3);
    int instance_properties_size = msg->n_instance_properties;
    for (int i = 0; i < instance_properties_size; i++)
    {
        free_dm_game_object_ddf__instance_property_desc(msg->instance_properties[i]);
    }
    free(msg->instance_properties);
    free(msg);
}
static void free_dm_game_object_ddf__collection_desc(DmGameObjectDDF__CollectionDesc* msg)
{
    free_string(msg->name);
    int instances_size = msg->n_instances;
    for (int i = 0; i < instances_size; i++)
    {
        free_dm_game_object_ddf__instance_desc(msg->instances[i]);
    }
    free(msg->instances);
    int collection_instances_size = msg->n_collection_instances;
    for (int i = 0; i < collection_instances_size; i++)
    {
        free_dm_game_object_ddf__collection_instance_desc(msg->collection_instances[i]);
    }
    free(msg->collection_instances);
    free_number(msg->scale_along_z);
    int embedded_instances_size = msg->n_embedded_instances;
    for (int i = 0; i < embedded_instances_size; i++)
    {
        free_dm_game_object_ddf__embedded_instance_desc(msg->embedded_instances[i]);
    }
    free(msg->embedded_instances);
    int property_resources_size = msg->n_property_resources;
    for (int i = 0; i < property_resources_size; i++)
    {
        free_string(msg->property_resources[i]);
    }
    free(msg->property_resources);
    int component_types_size = msg->n_component_types;
    for (int i = 0; i < component_types_size; i++)
    {
        free_dm_game_object_ddf__componen_type_desc(msg->component_types[i]);
    }
    free(msg->component_types);
    free(msg);
}
static void free_dm_game_object_ddf__acquire_input_focus(DmGameObjectDDF__AcquireInputFocus* msg)
{
    free(msg);
}
static void free_dm_game_object_ddf__release_input_focus(DmGameObjectDDF__ReleaseInputFocus* msg)
{
    free(msg);
}
static void free_dm_game_object_ddf__request_transform(DmGameObjectDDF__RequestTransform* msg)
{
    free(msg);
}
static void free_dm_game_object_ddf__transform_response(DmGameObjectDDF__TransformResponse* msg)
{
    free_dm_math__point3(msg->position);
    free_dm_math__quat(msg->rotation);
    free_dm_math__point3(msg->world_position);
    free_dm_math__quat(msg->world_rotation);
    free_number(msg->scale);
    free_dm_math__vector3(msg->scale3);
    free_number(msg->world_scale);
    free_dm_math__vector3(msg->world_scale3);
    free(msg);
}
static void free_dm_game_object_ddf__set_parent(DmGameObjectDDF__SetParent* msg)
{
    free_number(msg->parent_id);
    free_number(msg->keep_world_transform);
    free(msg);
}
static void free_dm_game_object_ddf__enable(DmGameObjectDDF__Enable* msg)
{
    free(msg);
}
static void free_dm_game_object_ddf__disable(DmGameObjectDDF__Disable* msg)
{
    free(msg);
}
static void free_dm_game_object_ddf__script_message(DmGameObjectDDF__ScriptMessage* msg)
{
    free_number(msg->descriptor_hash);
    free_number(msg->payload_size);
    free_number(msg->function);
    free_boolean(msg->unref_function);
    free(msg);
}
static void free_dm_lua_ddf__lua_module(DmLuaDDF__LuaModule* msg)
{
    free_dm_lua_ddf__lua_source(msg->source);
    int modules_size = msg->n_modules;
    for (int i = 0; i < modules_size; i++)
    {
        free_string(msg->modules[i]);
    }
    free(msg->modules);
    int resources_size = msg->n_resources;
    for (int i = 0; i < resources_size; i++)
    {
        free_string(msg->resources[i]);
    }
    free(msg->resources);
    free_dm_properties_ddf__property_declarations(msg->properties);
    int property_resources_size = msg->n_property_resources;
    for (int i = 0; i < property_resources_size; i++)
    {
        free_string(msg->property_resources[i]);
    }
    free(msg->property_resources);
    free(msg);
}
static void free_dm_engine_ddf__hide_app(DmEngineDDF__HideApp* msg)
{
    free(msg);
}
static void free_dm_engine_ddf__run_script(DmEngineDDF__RunScript* msg)
{
    free_dm_lua_ddf__lua_module(msg->module);
    free(msg);
}
static void free_dm_particle_ddf__spline_point(DmParticleDDF__SplinePoint* msg)
{
    free_number(msg->x);
    free_number(msg->y);
    free_number(msg->t_x);
    free_number(msg->t_y);
    free(msg);
}
static void free_dm_particle_ddf__modifier(DmParticleDDF__Modifier* msg)
{
    free_number(msg->type);
    free_number(msg->use_direction);
    free_dm_math__point3(msg->position);
    free_dm_math__quat(msg->rotation);
    int properties_size = msg->n_properties;
    for (int i = 0; i < properties_size; i++)
    {
        free_dm_particle_ddf__modifier__property(msg->properties[i]);
    }
    free(msg->properties);
    free(msg);
}
static void free_dm_particle_ddf__modifier__property(DmParticleDDF__Modifier__Property* msg)
{
    free_number(msg->key);
    int points_size = msg->n_points;
    for (int i = 0; i < points_size; i++)
    {
        free_dm_particle_ddf__spline_point(msg->points[i]);
    }
    free(msg->points);
    free_number(msg->spread);
    free(msg);
}
static void free_dm_particle_ddf__emitter(DmParticleDDF__Emitter* msg)
{
    free_string(msg->id);
    free_number(msg->mode);
    free_number(msg->duration);
    free_number(msg->space);
    free_dm_math__point3(msg->position);
    free_dm_math__quat(msg->rotation);
    free_string(msg->tile_source);
    free_string(msg->animation);
    free_string(msg->material);
    free_number(msg->blend_mode);
    free_number(msg->particle_orientation);
    free_number(msg->inherit_velocity);
    free_number(msg->max_particle_count);
    free_number(msg->type);
    free_number(msg->start_delay);
    int properties_size = msg->n_properties;
    for (int i = 0; i < properties_size; i++)
    {
        free_dm_particle_ddf__emitter__property(msg->properties[i]);
    }
    free(msg->properties);
    int particle_properties_size = msg->n_particle_properties;
    for (int i = 0; i < particle_properties_size; i++)
    {
        free_dm_particle_ddf__emitter__particle_property(msg->particle_properties[i]);
    }
    free(msg->particle_properties);
    int modifiers_size = msg->n_modifiers;
    for (int i = 0; i < modifiers_size; i++)
    {
        free_dm_particle_ddf__modifier(msg->modifiers[i]);
    }
    free(msg->modifiers);
    free_number(msg->size_mode);
    free_number(msg->start_delay_spread);
    free_number(msg->duration_spread);
    free_boolean(msg->stretch_with_velocity);
    free_number(msg->start_offset);
    free_dm_math__point3(msg->pivot);
    free(msg);
}
static void free_dm_particle_ddf__emitter__property(DmParticleDDF__Emitter__Property* msg)
{
    free_number(msg->key);
    int points_size = msg->n_points;
    for (int i = 0; i < points_size; i++)
    {
        free_dm_particle_ddf__spline_point(msg->points[i]);
    }
    free(msg->points);
    free_number(msg->spread);
    free(msg);
}
static void free_dm_particle_ddf__emitter__particle_property(DmParticleDDF__Emitter__ParticleProperty* msg)
{
    free_number(msg->key);
    int points_size = msg->n_points;
    for (int i = 0; i < points_size; i++)
    {
        free_dm_particle_ddf__spline_point(msg->points[i]);
    }
    free(msg->points);
    free(msg);
}
static void free_dm_particle_ddf__particle_fx(DmParticleDDF__ParticleFX* msg)
{
    int emitters_size = msg->n_emitters;
    for (int i = 0; i < emitters_size; i++)
    {
        free_dm_particle_ddf__emitter(msg->emitters[i]);
    }
    free(msg->emitters);
    int modifiers_size = msg->n_modifiers;
    for (int i = 0; i < modifiers_size; i++)
    {
        free_dm_particle_ddf__modifier(msg->modifiers[i]);
    }
    free(msg->modifiers);
    free(msg);
}



/******************************************************************************
 * ENCODE AND DECODE
 ******************************************************************************/

// ddf/ddf_math.proto
static int DecodeDmMath__Point3(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmMath__Point3 *msg = dm_math__point3__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_math__point3(L, msg);
    dm_math__point3__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmMath__Point3(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmMath__Point3 *msg = luaL_checkdm_math__point3(L, 1);

    size_t point3_packed_size = dm_math__point3__get_packed_size(msg);
    char* buffer = (char*)malloc(point3_packed_size);
    dm_math__point3__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, point3_packed_size);
    free(buffer);

    free_dm_math__point3(msg);

    return 1;
}

// ddf/ddf_math.proto
static int DecodeDmMath__Vector3(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmMath__Vector3 *msg = dm_math__vector3__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_math__vector3(L, msg);
    dm_math__vector3__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmMath__Vector3(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmMath__Vector3 *msg = luaL_checkdm_math__vector3(L, 1);

    size_t vector3_packed_size = dm_math__vector3__get_packed_size(msg);
    char* buffer = (char*)malloc(vector3_packed_size);
    dm_math__vector3__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, vector3_packed_size);
    free(buffer);

    free_dm_math__vector3(msg);

    return 1;
}

// ddf/ddf_math.proto
static int DecodeDmMath__Vector4(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmMath__Vector4 *msg = dm_math__vector4__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_math__vector4(L, msg);
    dm_math__vector4__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmMath__Vector4(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmMath__Vector4 *msg = luaL_checkdm_math__vector4(L, 1);

    size_t vector4_packed_size = dm_math__vector4__get_packed_size(msg);
    char* buffer = (char*)malloc(vector4_packed_size);
    dm_math__vector4__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, vector4_packed_size);
    free(buffer);

    free_dm_math__vector4(msg);

    return 1;
}

// ddf/ddf_math.proto
static int DecodeDmMath__Quat(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmMath__Quat *msg = dm_math__quat__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_math__quat(L, msg);
    dm_math__quat__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmMath__Quat(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmMath__Quat *msg = luaL_checkdm_math__quat(L, 1);

    size_t quat_packed_size = dm_math__quat__get_packed_size(msg);
    char* buffer = (char*)malloc(quat_packed_size);
    dm_math__quat__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, quat_packed_size);
    free(buffer);

    free_dm_math__quat(msg);

    return 1;
}

// ddf/ddf_math.proto
static int DecodeDmMath__Transform(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmMath__Transform *msg = dm_math__transform__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_math__transform(L, msg);
    dm_math__transform__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmMath__Transform(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmMath__Transform *msg = luaL_checkdm_math__transform(L, 1);

    size_t transform_packed_size = dm_math__transform__get_packed_size(msg);
    char* buffer = (char*)malloc(transform_packed_size);
    dm_math__transform__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, transform_packed_size);
    free(buffer);

    free_dm_math__transform(msg);

    return 1;
}

// ddf/ddf_math.proto
static int DecodeDmMath__Matrix4(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmMath__Matrix4 *msg = dm_math__matrix4__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_math__matrix4(L, msg);
    dm_math__matrix4__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmMath__Matrix4(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmMath__Matrix4 *msg = luaL_checkdm_math__matrix4(L, 1);

    size_t matrix4_packed_size = dm_math__matrix4__get_packed_size(msg);
    char* buffer = (char*)malloc(matrix4_packed_size);
    dm_math__matrix4__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, matrix4_packed_size);
    free(buffer);

    free_dm_math__matrix4(msg);

    return 1;
}

// input/input_ddf.proto
static int DecodeDmInputDDF__GamepadModifierT(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmInputDDF__GamepadModifierT *msg = dm_input_ddf__gamepad_modifier_t__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_input_ddf__gamepad_modifier_t(L, msg);
    dm_input_ddf__gamepad_modifier_t__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmInputDDF__GamepadModifierT(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmInputDDF__GamepadModifierT *msg = luaL_checkdm_input_ddf__gamepad_modifier_t(L, 1);

    size_t gamepadmodifier_t_packed_size = dm_input_ddf__gamepad_modifier_t__get_packed_size(msg);
    char* buffer = (char*)malloc(gamepadmodifier_t_packed_size);
    dm_input_ddf__gamepad_modifier_t__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, gamepadmodifier_t_packed_size);
    free(buffer);

    free_dm_input_ddf__gamepad_modifier_t(msg);

    return 1;
}

// input/input_ddf.proto
static int DecodeDmInputDDF__GamepadMapEntry(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmInputDDF__GamepadMapEntry *msg = dm_input_ddf__gamepad_map_entry__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_input_ddf__gamepad_map_entry(L, msg);
    dm_input_ddf__gamepad_map_entry__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmInputDDF__GamepadMapEntry(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmInputDDF__GamepadMapEntry *msg = luaL_checkdm_input_ddf__gamepad_map_entry(L, 1);

    size_t gamepadmapentry_packed_size = dm_input_ddf__gamepad_map_entry__get_packed_size(msg);
    char* buffer = (char*)malloc(gamepadmapentry_packed_size);
    dm_input_ddf__gamepad_map_entry__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, gamepadmapentry_packed_size);
    free(buffer);

    free_dm_input_ddf__gamepad_map_entry(msg);

    return 1;
}

// input/input_ddf.proto
static int DecodeDmInputDDF__GamepadMap(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmInputDDF__GamepadMap *msg = dm_input_ddf__gamepad_map__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_input_ddf__gamepad_map(L, msg);
    dm_input_ddf__gamepad_map__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmInputDDF__GamepadMap(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmInputDDF__GamepadMap *msg = luaL_checkdm_input_ddf__gamepad_map(L, 1);

    size_t gamepadmap_packed_size = dm_input_ddf__gamepad_map__get_packed_size(msg);
    char* buffer = (char*)malloc(gamepadmap_packed_size);
    dm_input_ddf__gamepad_map__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, gamepadmap_packed_size);
    free(buffer);

    free_dm_input_ddf__gamepad_map(msg);

    return 1;
}

// input/input_ddf.proto
static int DecodeDmInputDDF__GamepadMaps(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmInputDDF__GamepadMaps *msg = dm_input_ddf__gamepad_maps__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_input_ddf__gamepad_maps(L, msg);
    dm_input_ddf__gamepad_maps__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmInputDDF__GamepadMaps(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmInputDDF__GamepadMaps *msg = luaL_checkdm_input_ddf__gamepad_maps(L, 1);

    size_t gamepadmaps_packed_size = dm_input_ddf__gamepad_maps__get_packed_size(msg);
    char* buffer = (char*)malloc(gamepadmaps_packed_size);
    dm_input_ddf__gamepad_maps__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, gamepadmaps_packed_size);
    free(buffer);

    free_dm_input_ddf__gamepad_maps(msg);

    return 1;
}

// input/input_ddf.proto
static int DecodeDmInputDDF__KeyTrigger(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmInputDDF__KeyTrigger *msg = dm_input_ddf__key_trigger__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_input_ddf__key_trigger(L, msg);
    dm_input_ddf__key_trigger__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmInputDDF__KeyTrigger(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmInputDDF__KeyTrigger *msg = luaL_checkdm_input_ddf__key_trigger(L, 1);

    size_t keytrigger_packed_size = dm_input_ddf__key_trigger__get_packed_size(msg);
    char* buffer = (char*)malloc(keytrigger_packed_size);
    dm_input_ddf__key_trigger__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, keytrigger_packed_size);
    free(buffer);

    free_dm_input_ddf__key_trigger(msg);

    return 1;
}

// input/input_ddf.proto
static int DecodeDmInputDDF__MouseTrigger(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmInputDDF__MouseTrigger *msg = dm_input_ddf__mouse_trigger__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_input_ddf__mouse_trigger(L, msg);
    dm_input_ddf__mouse_trigger__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmInputDDF__MouseTrigger(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmInputDDF__MouseTrigger *msg = luaL_checkdm_input_ddf__mouse_trigger(L, 1);

    size_t mousetrigger_packed_size = dm_input_ddf__mouse_trigger__get_packed_size(msg);
    char* buffer = (char*)malloc(mousetrigger_packed_size);
    dm_input_ddf__mouse_trigger__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, mousetrigger_packed_size);
    free(buffer);

    free_dm_input_ddf__mouse_trigger(msg);

    return 1;
}

// input/input_ddf.proto
static int DecodeDmInputDDF__GamepadTrigger(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmInputDDF__GamepadTrigger *msg = dm_input_ddf__gamepad_trigger__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_input_ddf__gamepad_trigger(L, msg);
    dm_input_ddf__gamepad_trigger__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmInputDDF__GamepadTrigger(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmInputDDF__GamepadTrigger *msg = luaL_checkdm_input_ddf__gamepad_trigger(L, 1);

    size_t gamepadtrigger_packed_size = dm_input_ddf__gamepad_trigger__get_packed_size(msg);
    char* buffer = (char*)malloc(gamepadtrigger_packed_size);
    dm_input_ddf__gamepad_trigger__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, gamepadtrigger_packed_size);
    free(buffer);

    free_dm_input_ddf__gamepad_trigger(msg);

    return 1;
}

// input/input_ddf.proto
static int DecodeDmInputDDF__TouchTrigger(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmInputDDF__TouchTrigger *msg = dm_input_ddf__touch_trigger__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_input_ddf__touch_trigger(L, msg);
    dm_input_ddf__touch_trigger__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmInputDDF__TouchTrigger(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmInputDDF__TouchTrigger *msg = luaL_checkdm_input_ddf__touch_trigger(L, 1);

    size_t touchtrigger_packed_size = dm_input_ddf__touch_trigger__get_packed_size(msg);
    char* buffer = (char*)malloc(touchtrigger_packed_size);
    dm_input_ddf__touch_trigger__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, touchtrigger_packed_size);
    free(buffer);

    free_dm_input_ddf__touch_trigger(msg);

    return 1;
}

// input/input_ddf.proto
static int DecodeDmInputDDF__TextTrigger(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmInputDDF__TextTrigger *msg = dm_input_ddf__text_trigger__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_input_ddf__text_trigger(L, msg);
    dm_input_ddf__text_trigger__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmInputDDF__TextTrigger(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmInputDDF__TextTrigger *msg = luaL_checkdm_input_ddf__text_trigger(L, 1);

    size_t texttrigger_packed_size = dm_input_ddf__text_trigger__get_packed_size(msg);
    char* buffer = (char*)malloc(texttrigger_packed_size);
    dm_input_ddf__text_trigger__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, texttrigger_packed_size);
    free(buffer);

    free_dm_input_ddf__text_trigger(msg);

    return 1;
}

// input/input_ddf.proto
static int DecodeDmInputDDF__InputBinding(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmInputDDF__InputBinding *msg = dm_input_ddf__input_binding__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_input_ddf__input_binding(L, msg);
    dm_input_ddf__input_binding__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmInputDDF__InputBinding(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmInputDDF__InputBinding *msg = luaL_checkdm_input_ddf__input_binding(L, 1);

    size_t inputbinding_packed_size = dm_input_ddf__input_binding__get_packed_size(msg);
    char* buffer = (char*)malloc(inputbinding_packed_size);
    dm_input_ddf__input_binding__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, inputbinding_packed_size);
    free(buffer);

    free_dm_input_ddf__input_binding(msg);

    return 1;
}

// render/render_ddf.proto
static int DecodeDmRenderDDF__RenderPrototypeDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__RenderPrototypeDesc *msg = dm_render_ddf__render_prototype_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__render_prototype_desc(L, msg);
    dm_render_ddf__render_prototype_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__RenderPrototypeDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__RenderPrototypeDesc *msg = luaL_checkdm_render_ddf__render_prototype_desc(L, 1);

    size_t renderprototypedesc_packed_size = dm_render_ddf__render_prototype_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(renderprototypedesc_packed_size);
    dm_render_ddf__render_prototype_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, renderprototypedesc_packed_size);
    free(buffer);

    free_dm_render_ddf__render_prototype_desc(msg);

    return 1;
}

// render/render_ddf.proto
static int DecodeDmRenderDDF__DrawText(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__DrawText *msg = dm_render_ddf__draw_text__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__draw_text(L, msg);
    dm_render_ddf__draw_text__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__DrawText(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__DrawText *msg = luaL_checkdm_render_ddf__draw_text(L, 1);

    size_t drawtext_packed_size = dm_render_ddf__draw_text__get_packed_size(msg);
    char* buffer = (char*)malloc(drawtext_packed_size);
    dm_render_ddf__draw_text__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, drawtext_packed_size);
    free(buffer);

    free_dm_render_ddf__draw_text(msg);

    return 1;
}

// render/render_ddf.proto
static int DecodeDmRenderDDF__DrawDebugText(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__DrawDebugText *msg = dm_render_ddf__draw_debug_text__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__draw_debug_text(L, msg);
    dm_render_ddf__draw_debug_text__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__DrawDebugText(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__DrawDebugText *msg = luaL_checkdm_render_ddf__draw_debug_text(L, 1);

    size_t drawdebugtext_packed_size = dm_render_ddf__draw_debug_text__get_packed_size(msg);
    char* buffer = (char*)malloc(drawdebugtext_packed_size);
    dm_render_ddf__draw_debug_text__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, drawdebugtext_packed_size);
    free(buffer);

    free_dm_render_ddf__draw_debug_text(msg);

    return 1;
}

// render/render_ddf.proto
static int DecodeDmRenderDDF__DrawLine(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__DrawLine *msg = dm_render_ddf__draw_line__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__draw_line(L, msg);
    dm_render_ddf__draw_line__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__DrawLine(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__DrawLine *msg = luaL_checkdm_render_ddf__draw_line(L, 1);

    size_t drawline_packed_size = dm_render_ddf__draw_line__get_packed_size(msg);
    char* buffer = (char*)malloc(drawline_packed_size);
    dm_render_ddf__draw_line__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, drawline_packed_size);
    free(buffer);

    free_dm_render_ddf__draw_line(msg);

    return 1;
}

// render/render_ddf.proto
static int DecodeDmRenderDDF__WindowResized(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__WindowResized *msg = dm_render_ddf__window_resized__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__window_resized(L, msg);
    dm_render_ddf__window_resized__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__WindowResized(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__WindowResized *msg = luaL_checkdm_render_ddf__window_resized(L, 1);

    size_t windowresized_packed_size = dm_render_ddf__window_resized__get_packed_size(msg);
    char* buffer = (char*)malloc(windowresized_packed_size);
    dm_render_ddf__window_resized__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, windowresized_packed_size);
    free(buffer);

    free_dm_render_ddf__window_resized(msg);

    return 1;
}

// render/render_ddf.proto
static int DecodeDmRenderDDF__Resize(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__Resize *msg = dm_render_ddf__resize__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__resize(L, msg);
    dm_render_ddf__resize__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__Resize(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__Resize *msg = luaL_checkdm_render_ddf__resize(L, 1);

    size_t resize_packed_size = dm_render_ddf__resize__get_packed_size(msg);
    char* buffer = (char*)malloc(resize_packed_size);
    dm_render_ddf__resize__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, resize_packed_size);
    free(buffer);

    free_dm_render_ddf__resize(msg);

    return 1;
}

// render/render_ddf.proto
static int DecodeDmRenderDDF__ClearColor(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__ClearColor *msg = dm_render_ddf__clear_color__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__clear_color(L, msg);
    dm_render_ddf__clear_color__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__ClearColor(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__ClearColor *msg = luaL_checkdm_render_ddf__clear_color(L, 1);

    size_t clearcolor_packed_size = dm_render_ddf__clear_color__get_packed_size(msg);
    char* buffer = (char*)malloc(clearcolor_packed_size);
    dm_render_ddf__clear_color__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, clearcolor_packed_size);
    free(buffer);

    free_dm_render_ddf__clear_color(msg);

    return 1;
}

// render/render_ddf.proto
static int DecodeDmRenderDDF__DisplayProfileQualifier(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__DisplayProfileQualifier *msg = dm_render_ddf__display_profile_qualifier__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__display_profile_qualifier(L, msg);
    dm_render_ddf__display_profile_qualifier__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__DisplayProfileQualifier(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__DisplayProfileQualifier *msg = luaL_checkdm_render_ddf__display_profile_qualifier(L, 1);

    size_t displayprofilequalifier_packed_size = dm_render_ddf__display_profile_qualifier__get_packed_size(msg);
    char* buffer = (char*)malloc(displayprofilequalifier_packed_size);
    dm_render_ddf__display_profile_qualifier__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, displayprofilequalifier_packed_size);
    free(buffer);

    free_dm_render_ddf__display_profile_qualifier(msg);

    return 1;
}

// render/render_ddf.proto
static int DecodeDmRenderDDF__DisplayProfile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__DisplayProfile *msg = dm_render_ddf__display_profile__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__display_profile(L, msg);
    dm_render_ddf__display_profile__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__DisplayProfile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__DisplayProfile *msg = luaL_checkdm_render_ddf__display_profile(L, 1);

    size_t displayprofile_packed_size = dm_render_ddf__display_profile__get_packed_size(msg);
    char* buffer = (char*)malloc(displayprofile_packed_size);
    dm_render_ddf__display_profile__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, displayprofile_packed_size);
    free(buffer);

    free_dm_render_ddf__display_profile(msg);

    return 1;
}

// render/render_ddf.proto
static int DecodeDmRenderDDF__DisplayProfiles(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__DisplayProfiles *msg = dm_render_ddf__display_profiles__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__display_profiles(L, msg);
    dm_render_ddf__display_profiles__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__DisplayProfiles(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__DisplayProfiles *msg = luaL_checkdm_render_ddf__display_profiles(L, 1);

    size_t displayprofiles_packed_size = dm_render_ddf__display_profiles__get_packed_size(msg);
    char* buffer = (char*)malloc(displayprofiles_packed_size);
    dm_render_ddf__display_profiles__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, displayprofiles_packed_size);
    free(buffer);

    free_dm_render_ddf__display_profiles(msg);

    return 1;
}

// render/font_ddf.proto
static int DecodeDmRenderDDF__FontDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__FontDesc *msg = dm_render_ddf__font_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__font_desc(L, msg);
    dm_render_ddf__font_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__FontDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__FontDesc *msg = luaL_checkdm_render_ddf__font_desc(L, 1);

    size_t fontdesc_packed_size = dm_render_ddf__font_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(fontdesc_packed_size);
    dm_render_ddf__font_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, fontdesc_packed_size);
    free(buffer);

    free_dm_render_ddf__font_desc(msg);

    return 1;
}

// render/font_ddf.proto
static int DecodeDmRenderDDF__FontMap(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__FontMap *msg = dm_render_ddf__font_map__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__font_map(L, msg);
    dm_render_ddf__font_map__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__FontMap(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__FontMap *msg = luaL_checkdm_render_ddf__font_map(L, 1);

    size_t fontmap_packed_size = dm_render_ddf__font_map__get_packed_size(msg);
    char* buffer = (char*)malloc(fontmap_packed_size);
    dm_render_ddf__font_map__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, fontmap_packed_size);
    free(buffer);

    free_dm_render_ddf__font_map(msg);

    return 1;
}

// render/material_ddf.proto
static int DecodeDmRenderDDF__MaterialDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRenderDDF__MaterialDesc *msg = dm_render_ddf__material_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_render_ddf__material_desc(L, msg);
    dm_render_ddf__material_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRenderDDF__MaterialDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRenderDDF__MaterialDesc *msg = luaL_checkdm_render_ddf__material_desc(L, 1);

    size_t materialdesc_packed_size = dm_render_ddf__material_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(materialdesc_packed_size);
    dm_render_ddf__material_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, materialdesc_packed_size);
    free(buffer);

    free_dm_render_ddf__material_desc(msg);

    return 1;
}

// script/ddf_script.proto
static int DecodeDmScriptDDF__LuaRef(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmScriptDDF__LuaRef *msg = dm_script_ddf__lua_ref__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_script_ddf__lua_ref(L, msg);
    dm_script_ddf__lua_ref__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmScriptDDF__LuaRef(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmScriptDDF__LuaRef *msg = luaL_checkdm_script_ddf__lua_ref(L, 1);

    size_t luaref_packed_size = dm_script_ddf__lua_ref__get_packed_size(msg);
    char* buffer = (char*)malloc(luaref_packed_size);
    dm_script_ddf__lua_ref__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, luaref_packed_size);
    free(buffer);

    free_dm_script_ddf__lua_ref(msg);

    return 1;
}

// script/sys_ddf.proto
static int DecodeDmSystemDDF__Exit(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmSystemDDF__Exit *msg = dm_system_ddf__exit__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_system_ddf__exit(L, msg);
    dm_system_ddf__exit__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmSystemDDF__Exit(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmSystemDDF__Exit *msg = luaL_checkdm_system_ddf__exit(L, 1);

    size_t exit_packed_size = dm_system_ddf__exit__get_packed_size(msg);
    char* buffer = (char*)malloc(exit_packed_size);
    dm_system_ddf__exit__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, exit_packed_size);
    free(buffer);

    free_dm_system_ddf__exit(msg);

    return 1;
}

// script/sys_ddf.proto
static int DecodeDmSystemDDF__ToggleProfile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmSystemDDF__ToggleProfile *msg = dm_system_ddf__toggle_profile__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_system_ddf__toggle_profile(L, msg);
    dm_system_ddf__toggle_profile__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmSystemDDF__ToggleProfile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmSystemDDF__ToggleProfile *msg = luaL_checkdm_system_ddf__toggle_profile(L, 1);

    size_t toggleprofile_packed_size = dm_system_ddf__toggle_profile__get_packed_size(msg);
    char* buffer = (char*)malloc(toggleprofile_packed_size);
    dm_system_ddf__toggle_profile__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, toggleprofile_packed_size);
    free(buffer);

    free_dm_system_ddf__toggle_profile(msg);

    return 1;
}

// script/sys_ddf.proto
static int DecodeDmSystemDDF__TogglePhysicsDebug(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmSystemDDF__TogglePhysicsDebug *msg = dm_system_ddf__toggle_physics_debug__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_system_ddf__toggle_physics_debug(L, msg);
    dm_system_ddf__toggle_physics_debug__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmSystemDDF__TogglePhysicsDebug(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmSystemDDF__TogglePhysicsDebug *msg = luaL_checkdm_system_ddf__toggle_physics_debug(L, 1);

    size_t togglephysicsdebug_packed_size = dm_system_ddf__toggle_physics_debug__get_packed_size(msg);
    char* buffer = (char*)malloc(togglephysicsdebug_packed_size);
    dm_system_ddf__toggle_physics_debug__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, togglephysicsdebug_packed_size);
    free(buffer);

    free_dm_system_ddf__toggle_physics_debug(msg);

    return 1;
}

// script/sys_ddf.proto
static int DecodeDmSystemDDF__StartRecord(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmSystemDDF__StartRecord *msg = dm_system_ddf__start_record__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_system_ddf__start_record(L, msg);
    dm_system_ddf__start_record__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmSystemDDF__StartRecord(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmSystemDDF__StartRecord *msg = luaL_checkdm_system_ddf__start_record(L, 1);

    size_t startrecord_packed_size = dm_system_ddf__start_record__get_packed_size(msg);
    char* buffer = (char*)malloc(startrecord_packed_size);
    dm_system_ddf__start_record__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, startrecord_packed_size);
    free(buffer);

    free_dm_system_ddf__start_record(msg);

    return 1;
}

// script/sys_ddf.proto
static int DecodeDmSystemDDF__StopRecord(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmSystemDDF__StopRecord *msg = dm_system_ddf__stop_record__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_system_ddf__stop_record(L, msg);
    dm_system_ddf__stop_record__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmSystemDDF__StopRecord(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmSystemDDF__StopRecord *msg = luaL_checkdm_system_ddf__stop_record(L, 1);

    size_t stoprecord_packed_size = dm_system_ddf__stop_record__get_packed_size(msg);
    char* buffer = (char*)malloc(stoprecord_packed_size);
    dm_system_ddf__stop_record__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, stoprecord_packed_size);
    free(buffer);

    free_dm_system_ddf__stop_record(msg);

    return 1;
}

// script/sys_ddf.proto
static int DecodeDmSystemDDF__Reboot(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmSystemDDF__Reboot *msg = dm_system_ddf__reboot__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_system_ddf__reboot(L, msg);
    dm_system_ddf__reboot__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmSystemDDF__Reboot(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmSystemDDF__Reboot *msg = luaL_checkdm_system_ddf__reboot(L, 1);

    size_t reboot_packed_size = dm_system_ddf__reboot__get_packed_size(msg);
    char* buffer = (char*)malloc(reboot_packed_size);
    dm_system_ddf__reboot__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, reboot_packed_size);
    free(buffer);

    free_dm_system_ddf__reboot(msg);

    return 1;
}

// script/sys_ddf.proto
static int DecodeDmSystemDDF__SetVsync(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmSystemDDF__SetVsync *msg = dm_system_ddf__set_vsync__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_system_ddf__set_vsync(L, msg);
    dm_system_ddf__set_vsync__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmSystemDDF__SetVsync(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmSystemDDF__SetVsync *msg = luaL_checkdm_system_ddf__set_vsync(L, 1);

    size_t setvsync_packed_size = dm_system_ddf__set_vsync__get_packed_size(msg);
    char* buffer = (char*)malloc(setvsync_packed_size);
    dm_system_ddf__set_vsync__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setvsync_packed_size);
    free(buffer);

    free_dm_system_ddf__set_vsync(msg);

    return 1;
}

// script/sys_ddf.proto
static int DecodeDmSystemDDF__SetUpdateFrequency(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmSystemDDF__SetUpdateFrequency *msg = dm_system_ddf__set_update_frequency__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_system_ddf__set_update_frequency(L, msg);
    dm_system_ddf__set_update_frequency__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmSystemDDF__SetUpdateFrequency(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmSystemDDF__SetUpdateFrequency *msg = luaL_checkdm_system_ddf__set_update_frequency(L, 1);

    size_t setupdatefrequency_packed_size = dm_system_ddf__set_update_frequency__get_packed_size(msg);
    char* buffer = (char*)malloc(setupdatefrequency_packed_size);
    dm_system_ddf__set_update_frequency__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setupdatefrequency_packed_size);
    free(buffer);

    free_dm_system_ddf__set_update_frequency(msg);

    return 1;
}

// script/script_doc_ddf.proto
static int DecodeDmScriptDoc__Parameter(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmScriptDoc__Parameter *msg = dm_script_doc__parameter__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_script_doc__parameter(L, msg);
    dm_script_doc__parameter__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmScriptDoc__Parameter(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmScriptDoc__Parameter *msg = luaL_checkdm_script_doc__parameter(L, 1);

    size_t parameter_packed_size = dm_script_doc__parameter__get_packed_size(msg);
    char* buffer = (char*)malloc(parameter_packed_size);
    dm_script_doc__parameter__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, parameter_packed_size);
    free(buffer);

    free_dm_script_doc__parameter(msg);

    return 1;
}

// script/script_doc_ddf.proto
static int DecodeDmScriptDoc__Member(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmScriptDoc__Member *msg = dm_script_doc__member__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_script_doc__member(L, msg);
    dm_script_doc__member__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmScriptDoc__Member(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmScriptDoc__Member *msg = luaL_checkdm_script_doc__member(L, 1);

    size_t member_packed_size = dm_script_doc__member__get_packed_size(msg);
    char* buffer = (char*)malloc(member_packed_size);
    dm_script_doc__member__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, member_packed_size);
    free(buffer);

    free_dm_script_doc__member(msg);

    return 1;
}

// script/script_doc_ddf.proto
static int DecodeDmScriptDoc__ReturnValue(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmScriptDoc__ReturnValue *msg = dm_script_doc__return_value__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_script_doc__return_value(L, msg);
    dm_script_doc__return_value__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmScriptDoc__ReturnValue(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmScriptDoc__ReturnValue *msg = luaL_checkdm_script_doc__return_value(L, 1);

    size_t returnvalue_packed_size = dm_script_doc__return_value__get_packed_size(msg);
    char* buffer = (char*)malloc(returnvalue_packed_size);
    dm_script_doc__return_value__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, returnvalue_packed_size);
    free(buffer);

    free_dm_script_doc__return_value(msg);

    return 1;
}

// script/script_doc_ddf.proto
static int DecodeDmScriptDoc__Element(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmScriptDoc__Element *msg = dm_script_doc__element__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_script_doc__element(L, msg);
    dm_script_doc__element__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmScriptDoc__Element(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmScriptDoc__Element *msg = luaL_checkdm_script_doc__element(L, 1);

    size_t element_packed_size = dm_script_doc__element__get_packed_size(msg);
    char* buffer = (char*)malloc(element_packed_size);
    dm_script_doc__element__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, element_packed_size);
    free(buffer);

    free_dm_script_doc__element(msg);

    return 1;
}

// script/script_doc_ddf.proto
static int DecodeDmScriptDoc__Info(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmScriptDoc__Info *msg = dm_script_doc__info__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_script_doc__info(L, msg);
    dm_script_doc__info__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmScriptDoc__Info(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmScriptDoc__Info *msg = luaL_checkdm_script_doc__info(L, 1);

    size_t info_packed_size = dm_script_doc__info__get_packed_size(msg);
    char* buffer = (char*)malloc(info_packed_size);
    dm_script_doc__info__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, info_packed_size);
    free(buffer);

    free_dm_script_doc__info(msg);

    return 1;
}

// script/script_doc_ddf.proto
static int DecodeDmScriptDoc__Document(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmScriptDoc__Document *msg = dm_script_doc__document__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_script_doc__document(L, msg);
    dm_script_doc__document__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmScriptDoc__Document(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmScriptDoc__Document *msg = luaL_checkdm_script_doc__document(L, 1);

    size_t document_packed_size = dm_script_doc__document__get_packed_size(msg);
    char* buffer = (char*)malloc(document_packed_size);
    dm_script_doc__document__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, document_packed_size);
    free(buffer);

    free_dm_script_doc__document(msg);

    return 1;
}

// script/http_ddf.proto
static int DecodeDmHttpDDF__StopHttp(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmHttpDDF__StopHttp *msg = dm_http_ddf__stop_http__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_http_ddf__stop_http(L, msg);
    dm_http_ddf__stop_http__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmHttpDDF__StopHttp(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmHttpDDF__StopHttp *msg = luaL_checkdm_http_ddf__stop_http(L, 1);

    size_t stophttp_packed_size = dm_http_ddf__stop_http__get_packed_size(msg);
    char* buffer = (char*)malloc(stophttp_packed_size);
    dm_http_ddf__stop_http__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, stophttp_packed_size);
    free(buffer);

    free_dm_http_ddf__stop_http(msg);

    return 1;
}

// script/http_ddf.proto
static int DecodeDmHttpDDF__HttpRequest(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmHttpDDF__HttpRequest *msg = dm_http_ddf__http_request__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_http_ddf__http_request(L, msg);
    dm_http_ddf__http_request__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmHttpDDF__HttpRequest(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmHttpDDF__HttpRequest *msg = luaL_checkdm_http_ddf__http_request(L, 1);

    size_t httprequest_packed_size = dm_http_ddf__http_request__get_packed_size(msg);
    char* buffer = (char*)malloc(httprequest_packed_size);
    dm_http_ddf__http_request__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, httprequest_packed_size);
    free(buffer);

    free_dm_http_ddf__http_request(msg);

    return 1;
}

// script/http_ddf.proto
static int DecodeDmHttpDDF__HttpResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmHttpDDF__HttpResponse *msg = dm_http_ddf__http_response__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_http_ddf__http_response(L, msg);
    dm_http_ddf__http_response__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmHttpDDF__HttpResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmHttpDDF__HttpResponse *msg = luaL_checkdm_http_ddf__http_response(L, 1);

    size_t httpresponse_packed_size = dm_http_ddf__http_response__get_packed_size(msg);
    char* buffer = (char*)malloc(httpresponse_packed_size);
    dm_http_ddf__http_response__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, httpresponse_packed_size);
    free(buffer);

    free_dm_http_ddf__http_response(msg);

    return 1;
}

// script/lua_source_ddf.proto
static int DecodeDmLuaDDF__LuaSource(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmLuaDDF__LuaSource *msg = dm_lua_ddf__lua_source__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_lua_ddf__lua_source(L, msg);
    dm_lua_ddf__lua_source__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmLuaDDF__LuaSource(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmLuaDDF__LuaSource *msg = luaL_checkdm_lua_ddf__lua_source(L, 1);

    size_t luasource_packed_size = dm_lua_ddf__lua_source__get_packed_size(msg);
    char* buffer = (char*)malloc(luasource_packed_size);
    dm_lua_ddf__lua_source__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, luasource_packed_size);
    free(buffer);

    free_dm_lua_ddf__lua_source(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__Bone(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__Bone *msg = dm_rig_ddf__bone__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__bone(L, msg);
    dm_rig_ddf__bone__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__Bone(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__Bone *msg = luaL_checkdm_rig_ddf__bone(L, 1);

    size_t bone_packed_size = dm_rig_ddf__bone__get_packed_size(msg);
    char* buffer = (char*)malloc(bone_packed_size);
    dm_rig_ddf__bone__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, bone_packed_size);
    free(buffer);

    free_dm_rig_ddf__bone(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__IK(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__IK *msg = dm_rig_ddf__ik__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__ik(L, msg);
    dm_rig_ddf__ik__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__IK(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__IK *msg = luaL_checkdm_rig_ddf__ik(L, 1);

    size_t ik_packed_size = dm_rig_ddf__ik__get_packed_size(msg);
    char* buffer = (char*)malloc(ik_packed_size);
    dm_rig_ddf__ik__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, ik_packed_size);
    free(buffer);

    free_dm_rig_ddf__ik(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__Skeleton(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__Skeleton *msg = dm_rig_ddf__skeleton__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__skeleton(L, msg);
    dm_rig_ddf__skeleton__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__Skeleton(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__Skeleton *msg = luaL_checkdm_rig_ddf__skeleton(L, 1);

    size_t skeleton_packed_size = dm_rig_ddf__skeleton__get_packed_size(msg);
    char* buffer = (char*)malloc(skeleton_packed_size);
    dm_rig_ddf__skeleton__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, skeleton_packed_size);
    free(buffer);

    free_dm_rig_ddf__skeleton(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__AnimationTrack(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__AnimationTrack *msg = dm_rig_ddf__animation_track__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__animation_track(L, msg);
    dm_rig_ddf__animation_track__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__AnimationTrack(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__AnimationTrack *msg = luaL_checkdm_rig_ddf__animation_track(L, 1);

    size_t animationtrack_packed_size = dm_rig_ddf__animation_track__get_packed_size(msg);
    char* buffer = (char*)malloc(animationtrack_packed_size);
    dm_rig_ddf__animation_track__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, animationtrack_packed_size);
    free(buffer);

    free_dm_rig_ddf__animation_track(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__EventKey(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__EventKey *msg = dm_rig_ddf__event_key__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__event_key(L, msg);
    dm_rig_ddf__event_key__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__EventKey(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__EventKey *msg = luaL_checkdm_rig_ddf__event_key(L, 1);

    size_t eventkey_packed_size = dm_rig_ddf__event_key__get_packed_size(msg);
    char* buffer = (char*)malloc(eventkey_packed_size);
    dm_rig_ddf__event_key__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, eventkey_packed_size);
    free(buffer);

    free_dm_rig_ddf__event_key(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__EventTrack(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__EventTrack *msg = dm_rig_ddf__event_track__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__event_track(L, msg);
    dm_rig_ddf__event_track__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__EventTrack(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__EventTrack *msg = luaL_checkdm_rig_ddf__event_track(L, 1);

    size_t eventtrack_packed_size = dm_rig_ddf__event_track__get_packed_size(msg);
    char* buffer = (char*)malloc(eventtrack_packed_size);
    dm_rig_ddf__event_track__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, eventtrack_packed_size);
    free(buffer);

    free_dm_rig_ddf__event_track(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__RigAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__RigAnimation *msg = dm_rig_ddf__rig_animation__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__rig_animation(L, msg);
    dm_rig_ddf__rig_animation__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__RigAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__RigAnimation *msg = luaL_checkdm_rig_ddf__rig_animation(L, 1);

    size_t riganimation_packed_size = dm_rig_ddf__rig_animation__get_packed_size(msg);
    char* buffer = (char*)malloc(riganimation_packed_size);
    dm_rig_ddf__rig_animation__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, riganimation_packed_size);
    free(buffer);

    free_dm_rig_ddf__rig_animation(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__AnimationSet(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__AnimationSet *msg = dm_rig_ddf__animation_set__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__animation_set(L, msg);
    dm_rig_ddf__animation_set__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__AnimationSet(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__AnimationSet *msg = luaL_checkdm_rig_ddf__animation_set(L, 1);

    size_t animationset_packed_size = dm_rig_ddf__animation_set__get_packed_size(msg);
    char* buffer = (char*)malloc(animationset_packed_size);
    dm_rig_ddf__animation_set__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, animationset_packed_size);
    free(buffer);

    free_dm_rig_ddf__animation_set(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__AnimationInstanceDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__AnimationInstanceDesc *msg = dm_rig_ddf__animation_instance_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__animation_instance_desc(L, msg);
    dm_rig_ddf__animation_instance_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__AnimationInstanceDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__AnimationInstanceDesc *msg = luaL_checkdm_rig_ddf__animation_instance_desc(L, 1);

    size_t animationinstancedesc_packed_size = dm_rig_ddf__animation_instance_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(animationinstancedesc_packed_size);
    dm_rig_ddf__animation_instance_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, animationinstancedesc_packed_size);
    free(buffer);

    free_dm_rig_ddf__animation_instance_desc(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__AnimationSetDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__AnimationSetDesc *msg = dm_rig_ddf__animation_set_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__animation_set_desc(L, msg);
    dm_rig_ddf__animation_set_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__AnimationSetDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__AnimationSetDesc *msg = luaL_checkdm_rig_ddf__animation_set_desc(L, 1);

    size_t animationsetdesc_packed_size = dm_rig_ddf__animation_set_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(animationsetdesc_packed_size);
    dm_rig_ddf__animation_set_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, animationsetdesc_packed_size);
    free(buffer);

    free_dm_rig_ddf__animation_set_desc(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__Mesh(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__Mesh *msg = dm_rig_ddf__mesh__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__mesh(L, msg);
    dm_rig_ddf__mesh__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__Mesh(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__Mesh *msg = luaL_checkdm_rig_ddf__mesh(L, 1);

    size_t mesh_packed_size = dm_rig_ddf__mesh__get_packed_size(msg);
    char* buffer = (char*)malloc(mesh_packed_size);
    dm_rig_ddf__mesh__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, mesh_packed_size);
    free(buffer);

    free_dm_rig_ddf__mesh(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__Model(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__Model *msg = dm_rig_ddf__model__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__model(L, msg);
    dm_rig_ddf__model__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__Model(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__Model *msg = luaL_checkdm_rig_ddf__model(L, 1);

    size_t model_packed_size = dm_rig_ddf__model__get_packed_size(msg);
    char* buffer = (char*)malloc(model_packed_size);
    dm_rig_ddf__model__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, model_packed_size);
    free(buffer);

    free_dm_rig_ddf__model(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__MeshSet(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__MeshSet *msg = dm_rig_ddf__mesh_set__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__mesh_set(L, msg);
    dm_rig_ddf__mesh_set__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__MeshSet(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__MeshSet *msg = luaL_checkdm_rig_ddf__mesh_set(L, 1);

    size_t meshset_packed_size = dm_rig_ddf__mesh_set__get_packed_size(msg);
    char* buffer = (char*)malloc(meshset_packed_size);
    dm_rig_ddf__mesh_set__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, meshset_packed_size);
    free(buffer);

    free_dm_rig_ddf__mesh_set(msg);

    return 1;
}

// rig/rig_ddf.proto
static int DecodeDmRigDDF__RigScene(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmRigDDF__RigScene *msg = dm_rig_ddf__rig_scene__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_rig_ddf__rig_scene(L, msg);
    dm_rig_ddf__rig_scene__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmRigDDF__RigScene(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmRigDDF__RigScene *msg = luaL_checkdm_rig_ddf__rig_scene(L, 1);

    size_t rigscene_packed_size = dm_rig_ddf__rig_scene__get_packed_size(msg);
    char* buffer = (char*)malloc(rigscene_packed_size);
    dm_rig_ddf__rig_scene__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, rigscene_packed_size);
    free(buffer);

    free_dm_rig_ddf__rig_scene(msg);

    return 1;
}

// gamesys/model_ddf.proto
static int DecodeDmModelDDF__ModelDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmModelDDF__ModelDesc *msg = dm_model_ddf__model_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_model_ddf__model_desc(L, msg);
    dm_model_ddf__model_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmModelDDF__ModelDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmModelDDF__ModelDesc *msg = luaL_checkdm_model_ddf__model_desc(L, 1);

    size_t modeldesc_packed_size = dm_model_ddf__model_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(modeldesc_packed_size);
    dm_model_ddf__model_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, modeldesc_packed_size);
    free(buffer);

    free_dm_model_ddf__model_desc(msg);

    return 1;
}

// gamesys/model_ddf.proto
static int DecodeDmModelDDF__Model(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmModelDDF__Model *msg = dm_model_ddf__model__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_model_ddf__model(L, msg);
    dm_model_ddf__model__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmModelDDF__Model(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmModelDDF__Model *msg = luaL_checkdm_model_ddf__model(L, 1);

    size_t model_packed_size = dm_model_ddf__model__get_packed_size(msg);
    char* buffer = (char*)malloc(model_packed_size);
    dm_model_ddf__model__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, model_packed_size);
    free(buffer);

    free_dm_model_ddf__model(msg);

    return 1;
}

// gamesys/model_ddf.proto
static int DecodeDmModelDDF__ResetConstant(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmModelDDF__ResetConstant *msg = dm_model_ddf__reset_constant__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_model_ddf__reset_constant(L, msg);
    dm_model_ddf__reset_constant__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmModelDDF__ResetConstant(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmModelDDF__ResetConstant *msg = luaL_checkdm_model_ddf__reset_constant(L, 1);

    size_t resetconstant_packed_size = dm_model_ddf__reset_constant__get_packed_size(msg);
    char* buffer = (char*)malloc(resetconstant_packed_size);
    dm_model_ddf__reset_constant__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, resetconstant_packed_size);
    free(buffer);

    free_dm_model_ddf__reset_constant(msg);

    return 1;
}

// gamesys/model_ddf.proto
static int DecodeDmModelDDF__SetTexture(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmModelDDF__SetTexture *msg = dm_model_ddf__set_texture__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_model_ddf__set_texture(L, msg);
    dm_model_ddf__set_texture__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmModelDDF__SetTexture(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmModelDDF__SetTexture *msg = luaL_checkdm_model_ddf__set_texture(L, 1);

    size_t settexture_packed_size = dm_model_ddf__set_texture__get_packed_size(msg);
    char* buffer = (char*)malloc(settexture_packed_size);
    dm_model_ddf__set_texture__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, settexture_packed_size);
    free(buffer);

    free_dm_model_ddf__set_texture(msg);

    return 1;
}

// gamesys/model_ddf.proto
static int DecodeDmModelDDF__ModelPlayAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmModelDDF__ModelPlayAnimation *msg = dm_model_ddf__model_play_animation__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_model_ddf__model_play_animation(L, msg);
    dm_model_ddf__model_play_animation__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmModelDDF__ModelPlayAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmModelDDF__ModelPlayAnimation *msg = luaL_checkdm_model_ddf__model_play_animation(L, 1);

    size_t modelplayanimation_packed_size = dm_model_ddf__model_play_animation__get_packed_size(msg);
    char* buffer = (char*)malloc(modelplayanimation_packed_size);
    dm_model_ddf__model_play_animation__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, modelplayanimation_packed_size);
    free(buffer);

    free_dm_model_ddf__model_play_animation(msg);

    return 1;
}

// gamesys/model_ddf.proto
static int DecodeDmModelDDF__ModelCancelAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmModelDDF__ModelCancelAnimation *msg = dm_model_ddf__model_cancel_animation__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_model_ddf__model_cancel_animation(L, msg);
    dm_model_ddf__model_cancel_animation__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmModelDDF__ModelCancelAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmModelDDF__ModelCancelAnimation *msg = luaL_checkdm_model_ddf__model_cancel_animation(L, 1);

    size_t modelcancelanimation_packed_size = dm_model_ddf__model_cancel_animation__get_packed_size(msg);
    char* buffer = (char*)malloc(modelcancelanimation_packed_size);
    dm_model_ddf__model_cancel_animation__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, modelcancelanimation_packed_size);
    free(buffer);

    free_dm_model_ddf__model_cancel_animation(msg);

    return 1;
}

// gamesys/model_ddf.proto
static int DecodeDmModelDDF__ModelAnimationDone(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmModelDDF__ModelAnimationDone *msg = dm_model_ddf__model_animation_done__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_model_ddf__model_animation_done(L, msg);
    dm_model_ddf__model_animation_done__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmModelDDF__ModelAnimationDone(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmModelDDF__ModelAnimationDone *msg = luaL_checkdm_model_ddf__model_animation_done(L, 1);

    size_t modelanimationdone_packed_size = dm_model_ddf__model_animation_done__get_packed_size(msg);
    char* buffer = (char*)malloc(modelanimationdone_packed_size);
    dm_model_ddf__model_animation_done__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, modelanimationdone_packed_size);
    free(buffer);

    free_dm_model_ddf__model_animation_done(msg);

    return 1;
}

// gamesys/mesh_ddf.proto
static int DecodeDmMeshDDF__MeshDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmMeshDDF__MeshDesc *msg = dm_mesh_ddf__mesh_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_mesh_ddf__mesh_desc(L, msg);
    dm_mesh_ddf__mesh_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmMeshDDF__MeshDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmMeshDDF__MeshDesc *msg = luaL_checkdm_mesh_ddf__mesh_desc(L, 1);

    size_t meshdesc_packed_size = dm_mesh_ddf__mesh_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(meshdesc_packed_size);
    dm_mesh_ddf__mesh_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, meshdesc_packed_size);
    free(buffer);

    free_dm_mesh_ddf__mesh_desc(msg);

    return 1;
}

// gamesys/label_ddf.proto
static int DecodeDmGameSystemDDF__LabelDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__LabelDesc *msg = dm_game_system_ddf__label_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__label_desc(L, msg);
    dm_game_system_ddf__label_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__LabelDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__LabelDesc *msg = luaL_checkdm_game_system_ddf__label_desc(L, 1);

    size_t labeldesc_packed_size = dm_game_system_ddf__label_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(labeldesc_packed_size);
    dm_game_system_ddf__label_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, labeldesc_packed_size);
    free(buffer);

    free_dm_game_system_ddf__label_desc(msg);

    return 1;
}

// gamesys/label_ddf.proto
static int DecodeDmGameSystemDDF__SetText(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetText *msg = dm_game_system_ddf__set_text__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_text(L, msg);
    dm_game_system_ddf__set_text__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetText(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetText *msg = luaL_checkdm_game_system_ddf__set_text(L, 1);

    size_t settext_packed_size = dm_game_system_ddf__set_text__get_packed_size(msg);
    char* buffer = (char*)malloc(settext_packed_size);
    dm_game_system_ddf__set_text__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, settext_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_text(msg);

    return 1;
}

// gamesys/tile_ddf.proto
static int DecodeDmGameSystemDDF__ConvexHull(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__ConvexHull *msg = dm_game_system_ddf__convex_hull__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__convex_hull(L, msg);
    dm_game_system_ddf__convex_hull__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__ConvexHull(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__ConvexHull *msg = luaL_checkdm_game_system_ddf__convex_hull(L, 1);

    size_t convexhull_packed_size = dm_game_system_ddf__convex_hull__get_packed_size(msg);
    char* buffer = (char*)malloc(convexhull_packed_size);
    dm_game_system_ddf__convex_hull__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, convexhull_packed_size);
    free(buffer);

    free_dm_game_system_ddf__convex_hull(msg);

    return 1;
}

// gamesys/tile_ddf.proto
static int DecodeDmGameSystemDDF__Cue(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__Cue *msg = dm_game_system_ddf__cue__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__cue(L, msg);
    dm_game_system_ddf__cue__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__Cue(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__Cue *msg = luaL_checkdm_game_system_ddf__cue(L, 1);

    size_t cue_packed_size = dm_game_system_ddf__cue__get_packed_size(msg);
    char* buffer = (char*)malloc(cue_packed_size);
    dm_game_system_ddf__cue__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, cue_packed_size);
    free(buffer);

    free_dm_game_system_ddf__cue(msg);

    return 1;
}

// gamesys/tile_ddf.proto
static int DecodeDmGameSystemDDF__Animation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__Animation *msg = dm_game_system_ddf__animation__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__animation(L, msg);
    dm_game_system_ddf__animation__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__Animation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__Animation *msg = luaL_checkdm_game_system_ddf__animation(L, 1);

    size_t animation_packed_size = dm_game_system_ddf__animation__get_packed_size(msg);
    char* buffer = (char*)malloc(animation_packed_size);
    dm_game_system_ddf__animation__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, animation_packed_size);
    free(buffer);

    free_dm_game_system_ddf__animation(msg);

    return 1;
}

// gamesys/tile_ddf.proto
static int DecodeDmGameSystemDDF__TileSet(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__TileSet *msg = dm_game_system_ddf__tile_set__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__tile_set(L, msg);
    dm_game_system_ddf__tile_set__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__TileSet(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__TileSet *msg = luaL_checkdm_game_system_ddf__tile_set(L, 1);

    size_t tileset_packed_size = dm_game_system_ddf__tile_set__get_packed_size(msg);
    char* buffer = (char*)malloc(tileset_packed_size);
    dm_game_system_ddf__tile_set__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, tileset_packed_size);
    free(buffer);

    free_dm_game_system_ddf__tile_set(msg);

    return 1;
}

// gamesys/tile_ddf.proto
static int DecodeDmGameSystemDDF__TileCell(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__TileCell *msg = dm_game_system_ddf__tile_cell__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__tile_cell(L, msg);
    dm_game_system_ddf__tile_cell__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__TileCell(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__TileCell *msg = luaL_checkdm_game_system_ddf__tile_cell(L, 1);

    size_t tilecell_packed_size = dm_game_system_ddf__tile_cell__get_packed_size(msg);
    char* buffer = (char*)malloc(tilecell_packed_size);
    dm_game_system_ddf__tile_cell__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, tilecell_packed_size);
    free(buffer);

    free_dm_game_system_ddf__tile_cell(msg);

    return 1;
}

// gamesys/tile_ddf.proto
static int DecodeDmGameSystemDDF__TileLayer(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__TileLayer *msg = dm_game_system_ddf__tile_layer__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__tile_layer(L, msg);
    dm_game_system_ddf__tile_layer__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__TileLayer(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__TileLayer *msg = luaL_checkdm_game_system_ddf__tile_layer(L, 1);

    size_t tilelayer_packed_size = dm_game_system_ddf__tile_layer__get_packed_size(msg);
    char* buffer = (char*)malloc(tilelayer_packed_size);
    dm_game_system_ddf__tile_layer__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, tilelayer_packed_size);
    free(buffer);

    free_dm_game_system_ddf__tile_layer(msg);

    return 1;
}

// gamesys/tile_ddf.proto
static int DecodeDmGameSystemDDF__TileGrid(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__TileGrid *msg = dm_game_system_ddf__tile_grid__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__tile_grid(L, msg);
    dm_game_system_ddf__tile_grid__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__TileGrid(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__TileGrid *msg = luaL_checkdm_game_system_ddf__tile_grid(L, 1);

    size_t tilegrid_packed_size = dm_game_system_ddf__tile_grid__get_packed_size(msg);
    char* buffer = (char*)malloc(tilegrid_packed_size);
    dm_game_system_ddf__tile_grid__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, tilegrid_packed_size);
    free(buffer);

    free_dm_game_system_ddf__tile_grid(msg);

    return 1;
}

// gamesys/tile_ddf.proto
static int DecodeDmGameSystemDDF__SetTile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetTile *msg = dm_game_system_ddf__set_tile__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_tile(L, msg);
    dm_game_system_ddf__set_tile__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetTile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetTile *msg = luaL_checkdm_game_system_ddf__set_tile(L, 1);

    size_t settile_packed_size = dm_game_system_ddf__set_tile__get_packed_size(msg);
    char* buffer = (char*)malloc(settile_packed_size);
    dm_game_system_ddf__set_tile__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, settile_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_tile(msg);

    return 1;
}

// gamesys/tile_ddf.proto
static int DecodeDmGameSystemDDF__SetConstantTileMap(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetConstantTileMap *msg = dm_game_system_ddf__set_constant_tile_map__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_constant_tile_map(L, msg);
    dm_game_system_ddf__set_constant_tile_map__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetConstantTileMap(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetConstantTileMap *msg = luaL_checkdm_game_system_ddf__set_constant_tile_map(L, 1);

    size_t setconstanttilemap_packed_size = dm_game_system_ddf__set_constant_tile_map__get_packed_size(msg);
    char* buffer = (char*)malloc(setconstanttilemap_packed_size);
    dm_game_system_ddf__set_constant_tile_map__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setconstanttilemap_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_constant_tile_map(msg);

    return 1;
}

// gamesys/tile_ddf.proto
static int DecodeDmGameSystemDDF__ResetConstantTileMap(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__ResetConstantTileMap *msg = dm_game_system_ddf__reset_constant_tile_map__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__reset_constant_tile_map(L, msg);
    dm_game_system_ddf__reset_constant_tile_map__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__ResetConstantTileMap(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__ResetConstantTileMap *msg = luaL_checkdm_game_system_ddf__reset_constant_tile_map(L, 1);

    size_t resetconstanttilemap_packed_size = dm_game_system_ddf__reset_constant_tile_map__get_packed_size(msg);
    char* buffer = (char*)malloc(resetconstanttilemap_packed_size);
    dm_game_system_ddf__reset_constant_tile_map__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, resetconstanttilemap_packed_size);
    free(buffer);

    free_dm_game_system_ddf__reset_constant_tile_map(msg);

    return 1;
}

// gamesys/atlas_ddf.proto
static int DecodeDmGameSystemDDF__AtlasImage(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__AtlasImage *msg = dm_game_system_ddf__atlas_image__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__atlas_image(L, msg);
    dm_game_system_ddf__atlas_image__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__AtlasImage(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__AtlasImage *msg = luaL_checkdm_game_system_ddf__atlas_image(L, 1);

    size_t atlasimage_packed_size = dm_game_system_ddf__atlas_image__get_packed_size(msg);
    char* buffer = (char*)malloc(atlasimage_packed_size);
    dm_game_system_ddf__atlas_image__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, atlasimage_packed_size);
    free(buffer);

    free_dm_game_system_ddf__atlas_image(msg);

    return 1;
}

// gamesys/atlas_ddf.proto
static int DecodeDmGameSystemDDF__AtlasAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__AtlasAnimation *msg = dm_game_system_ddf__atlas_animation__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__atlas_animation(L, msg);
    dm_game_system_ddf__atlas_animation__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__AtlasAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__AtlasAnimation *msg = luaL_checkdm_game_system_ddf__atlas_animation(L, 1);

    size_t atlasanimation_packed_size = dm_game_system_ddf__atlas_animation__get_packed_size(msg);
    char* buffer = (char*)malloc(atlasanimation_packed_size);
    dm_game_system_ddf__atlas_animation__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, atlasanimation_packed_size);
    free(buffer);

    free_dm_game_system_ddf__atlas_animation(msg);

    return 1;
}

// gamesys/atlas_ddf.proto
static int DecodeDmGameSystemDDF__Atlas(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__Atlas *msg = dm_game_system_ddf__atlas__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__atlas(L, msg);
    dm_game_system_ddf__atlas__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__Atlas(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__Atlas *msg = luaL_checkdm_game_system_ddf__atlas(L, 1);

    size_t atlas_packed_size = dm_game_system_ddf__atlas__get_packed_size(msg);
    char* buffer = (char*)malloc(atlas_packed_size);
    dm_game_system_ddf__atlas__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, atlas_packed_size);
    free(buffer);

    free_dm_game_system_ddf__atlas(msg);

    return 1;
}

// gamesys/buffer_ddf.proto
static int DecodeDmBufferDDF__StreamDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmBufferDDF__StreamDesc *msg = dm_buffer_ddf__stream_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_buffer_ddf__stream_desc(L, msg);
    dm_buffer_ddf__stream_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmBufferDDF__StreamDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmBufferDDF__StreamDesc *msg = luaL_checkdm_buffer_ddf__stream_desc(L, 1);

    size_t streamdesc_packed_size = dm_buffer_ddf__stream_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(streamdesc_packed_size);
    dm_buffer_ddf__stream_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, streamdesc_packed_size);
    free(buffer);

    free_dm_buffer_ddf__stream_desc(msg);

    return 1;
}

// gamesys/buffer_ddf.proto
static int DecodeDmBufferDDF__BufferDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmBufferDDF__BufferDesc *msg = dm_buffer_ddf__buffer_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_buffer_ddf__buffer_desc(L, msg);
    dm_buffer_ddf__buffer_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmBufferDDF__BufferDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmBufferDDF__BufferDesc *msg = luaL_checkdm_buffer_ddf__buffer_desc(L, 1);

    size_t bufferdesc_packed_size = dm_buffer_ddf__buffer_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(bufferdesc_packed_size);
    dm_buffer_ddf__buffer_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, bufferdesc_packed_size);
    free(buffer);

    free_dm_buffer_ddf__buffer_desc(msg);

    return 1;
}

// gamesys/sound_ddf.proto
static int DecodeDmSoundDDF__SoundDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmSoundDDF__SoundDesc *msg = dm_sound_ddf__sound_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_sound_ddf__sound_desc(L, msg);
    dm_sound_ddf__sound_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmSoundDDF__SoundDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmSoundDDF__SoundDesc *msg = luaL_checkdm_sound_ddf__sound_desc(L, 1);

    size_t sounddesc_packed_size = dm_sound_ddf__sound_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(sounddesc_packed_size);
    dm_sound_ddf__sound_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, sounddesc_packed_size);
    free(buffer);

    free_dm_sound_ddf__sound_desc(msg);

    return 1;
}

// gamesys/camera_ddf.proto
static int DecodeDmGamesysDDF__CameraDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGamesysDDF__CameraDesc *msg = dm_gamesys_ddf__camera_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_gamesys_ddf__camera_desc(L, msg);
    dm_gamesys_ddf__camera_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGamesysDDF__CameraDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGamesysDDF__CameraDesc *msg = luaL_checkdm_gamesys_ddf__camera_desc(L, 1);

    size_t cameradesc_packed_size = dm_gamesys_ddf__camera_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(cameradesc_packed_size);
    dm_gamesys_ddf__camera_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, cameradesc_packed_size);
    free(buffer);

    free_dm_gamesys_ddf__camera_desc(msg);

    return 1;
}

// gamesys/camera_ddf.proto
static int DecodeDmGamesysDDF__SetCamera(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGamesysDDF__SetCamera *msg = dm_gamesys_ddf__set_camera__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_gamesys_ddf__set_camera(L, msg);
    dm_gamesys_ddf__set_camera__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGamesysDDF__SetCamera(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGamesysDDF__SetCamera *msg = luaL_checkdm_gamesys_ddf__set_camera(L, 1);

    size_t setcamera_packed_size = dm_gamesys_ddf__set_camera__get_packed_size(msg);
    char* buffer = (char*)malloc(setcamera_packed_size);
    dm_gamesys_ddf__set_camera__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setcamera_packed_size);
    free(buffer);

    free_dm_gamesys_ddf__set_camera(msg);

    return 1;
}

// gamesys/camera_ddf.proto
static int DecodeDmGamesysDDF__AcquireCameraFocus(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGamesysDDF__AcquireCameraFocus *msg = dm_gamesys_ddf__acquire_camera_focus__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_gamesys_ddf__acquire_camera_focus(L, msg);
    dm_gamesys_ddf__acquire_camera_focus__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGamesysDDF__AcquireCameraFocus(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGamesysDDF__AcquireCameraFocus *msg = luaL_checkdm_gamesys_ddf__acquire_camera_focus(L, 1);

    size_t acquirecamerafocus_packed_size = dm_gamesys_ddf__acquire_camera_focus__get_packed_size(msg);
    char* buffer = (char*)malloc(acquirecamerafocus_packed_size);
    dm_gamesys_ddf__acquire_camera_focus__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, acquirecamerafocus_packed_size);
    free(buffer);

    free_dm_gamesys_ddf__acquire_camera_focus(msg);

    return 1;
}

// gamesys/camera_ddf.proto
static int DecodeDmGamesysDDF__ReleaseCameraFocus(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGamesysDDF__ReleaseCameraFocus *msg = dm_gamesys_ddf__release_camera_focus__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_gamesys_ddf__release_camera_focus(L, msg);
    dm_gamesys_ddf__release_camera_focus__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGamesysDDF__ReleaseCameraFocus(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGamesysDDF__ReleaseCameraFocus *msg = luaL_checkdm_gamesys_ddf__release_camera_focus(L, 1);

    size_t releasecamerafocus_packed_size = dm_gamesys_ddf__release_camera_focus__get_packed_size(msg);
    char* buffer = (char*)malloc(releasecamerafocus_packed_size);
    dm_gamesys_ddf__release_camera_focus__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, releasecamerafocus_packed_size);
    free(buffer);

    free_dm_gamesys_ddf__release_camera_focus(msg);

    return 1;
}

// gamesys/sprite_ddf.proto
static int DecodeDmGameSystemDDF__SpriteDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SpriteDesc *msg = dm_game_system_ddf__sprite_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__sprite_desc(L, msg);
    dm_game_system_ddf__sprite_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SpriteDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SpriteDesc *msg = luaL_checkdm_game_system_ddf__sprite_desc(L, 1);

    size_t spritedesc_packed_size = dm_game_system_ddf__sprite_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(spritedesc_packed_size);
    dm_game_system_ddf__sprite_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, spritedesc_packed_size);
    free(buffer);

    free_dm_game_system_ddf__sprite_desc(msg);

    return 1;
}

// gamesys/sprite_ddf.proto
static int DecodeDmGameSystemDDF__PlayAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__PlayAnimation *msg = dm_game_system_ddf__play_animation__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__play_animation(L, msg);
    dm_game_system_ddf__play_animation__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__PlayAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__PlayAnimation *msg = luaL_checkdm_game_system_ddf__play_animation(L, 1);

    size_t playanimation_packed_size = dm_game_system_ddf__play_animation__get_packed_size(msg);
    char* buffer = (char*)malloc(playanimation_packed_size);
    dm_game_system_ddf__play_animation__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, playanimation_packed_size);
    free(buffer);

    free_dm_game_system_ddf__play_animation(msg);

    return 1;
}

// gamesys/sprite_ddf.proto
static int DecodeDmGameSystemDDF__AnimationDone(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__AnimationDone *msg = dm_game_system_ddf__animation_done__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__animation_done(L, msg);
    dm_game_system_ddf__animation_done__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__AnimationDone(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__AnimationDone *msg = luaL_checkdm_game_system_ddf__animation_done(L, 1);

    size_t animationdone_packed_size = dm_game_system_ddf__animation_done__get_packed_size(msg);
    char* buffer = (char*)malloc(animationdone_packed_size);
    dm_game_system_ddf__animation_done__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, animationdone_packed_size);
    free(buffer);

    free_dm_game_system_ddf__animation_done(msg);

    return 1;
}

// gamesys/sprite_ddf.proto
static int DecodeDmGameSystemDDF__SetFlipHorizontal(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetFlipHorizontal *msg = dm_game_system_ddf__set_flip_horizontal__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_flip_horizontal(L, msg);
    dm_game_system_ddf__set_flip_horizontal__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetFlipHorizontal(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetFlipHorizontal *msg = luaL_checkdm_game_system_ddf__set_flip_horizontal(L, 1);

    size_t setfliphorizontal_packed_size = dm_game_system_ddf__set_flip_horizontal__get_packed_size(msg);
    char* buffer = (char*)malloc(setfliphorizontal_packed_size);
    dm_game_system_ddf__set_flip_horizontal__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setfliphorizontal_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_flip_horizontal(msg);

    return 1;
}

// gamesys/sprite_ddf.proto
static int DecodeDmGameSystemDDF__SetFlipVertical(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetFlipVertical *msg = dm_game_system_ddf__set_flip_vertical__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_flip_vertical(L, msg);
    dm_game_system_ddf__set_flip_vertical__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetFlipVertical(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetFlipVertical *msg = luaL_checkdm_game_system_ddf__set_flip_vertical(L, 1);

    size_t setflipvertical_packed_size = dm_game_system_ddf__set_flip_vertical__get_packed_size(msg);
    char* buffer = (char*)malloc(setflipvertical_packed_size);
    dm_game_system_ddf__set_flip_vertical__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setflipvertical_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_flip_vertical(msg);

    return 1;
}

// gamesys/texture_set_ddf.proto
static int DecodeDmGameSystemDDF__TextureSetAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__TextureSetAnimation *msg = dm_game_system_ddf__texture_set_animation__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__texture_set_animation(L, msg);
    dm_game_system_ddf__texture_set_animation__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__TextureSetAnimation(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__TextureSetAnimation *msg = luaL_checkdm_game_system_ddf__texture_set_animation(L, 1);

    size_t texturesetanimation_packed_size = dm_game_system_ddf__texture_set_animation__get_packed_size(msg);
    char* buffer = (char*)malloc(texturesetanimation_packed_size);
    dm_game_system_ddf__texture_set_animation__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, texturesetanimation_packed_size);
    free(buffer);

    free_dm_game_system_ddf__texture_set_animation(msg);

    return 1;
}

// gamesys/texture_set_ddf.proto
static int DecodeDmGameSystemDDF__SpriteGeometry(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SpriteGeometry *msg = dm_game_system_ddf__sprite_geometry__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__sprite_geometry(L, msg);
    dm_game_system_ddf__sprite_geometry__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SpriteGeometry(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SpriteGeometry *msg = luaL_checkdm_game_system_ddf__sprite_geometry(L, 1);

    size_t spritegeometry_packed_size = dm_game_system_ddf__sprite_geometry__get_packed_size(msg);
    char* buffer = (char*)malloc(spritegeometry_packed_size);
    dm_game_system_ddf__sprite_geometry__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, spritegeometry_packed_size);
    free(buffer);

    free_dm_game_system_ddf__sprite_geometry(msg);

    return 1;
}

// gamesys/texture_set_ddf.proto
static int DecodeDmGameSystemDDF__TextureSet(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__TextureSet *msg = dm_game_system_ddf__texture_set__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__texture_set(L, msg);
    dm_game_system_ddf__texture_set__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__TextureSet(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__TextureSet *msg = luaL_checkdm_game_system_ddf__texture_set(L, 1);

    size_t textureset_packed_size = dm_game_system_ddf__texture_set__get_packed_size(msg);
    char* buffer = (char*)malloc(textureset_packed_size);
    dm_game_system_ddf__texture_set__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, textureset_packed_size);
    free(buffer);

    free_dm_game_system_ddf__texture_set(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__ConvexShape(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__ConvexShape *msg = dm_physics_ddf__convex_shape__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__convex_shape(L, msg);
    dm_physics_ddf__convex_shape__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__ConvexShape(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__ConvexShape *msg = luaL_checkdm_physics_ddf__convex_shape(L, 1);

    size_t convexshape_packed_size = dm_physics_ddf__convex_shape__get_packed_size(msg);
    char* buffer = (char*)malloc(convexshape_packed_size);
    dm_physics_ddf__convex_shape__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, convexshape_packed_size);
    free(buffer);

    free_dm_physics_ddf__convex_shape(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__CollisionShape(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__CollisionShape *msg = dm_physics_ddf__collision_shape__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__collision_shape(L, msg);
    dm_physics_ddf__collision_shape__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__CollisionShape(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__CollisionShape *msg = luaL_checkdm_physics_ddf__collision_shape(L, 1);

    size_t collisionshape_packed_size = dm_physics_ddf__collision_shape__get_packed_size(msg);
    char* buffer = (char*)malloc(collisionshape_packed_size);
    dm_physics_ddf__collision_shape__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, collisionshape_packed_size);
    free(buffer);

    free_dm_physics_ddf__collision_shape(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__CollisionObjectDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__CollisionObjectDesc *msg = dm_physics_ddf__collision_object_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__collision_object_desc(L, msg);
    dm_physics_ddf__collision_object_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__CollisionObjectDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__CollisionObjectDesc *msg = luaL_checkdm_physics_ddf__collision_object_desc(L, 1);

    size_t collisionobjectdesc_packed_size = dm_physics_ddf__collision_object_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(collisionobjectdesc_packed_size);
    dm_physics_ddf__collision_object_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, collisionobjectdesc_packed_size);
    free(buffer);

    free_dm_physics_ddf__collision_object_desc(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__ApplyForce(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__ApplyForce *msg = dm_physics_ddf__apply_force__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__apply_force(L, msg);
    dm_physics_ddf__apply_force__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__ApplyForce(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__ApplyForce *msg = luaL_checkdm_physics_ddf__apply_force(L, 1);

    size_t applyforce_packed_size = dm_physics_ddf__apply_force__get_packed_size(msg);
    char* buffer = (char*)malloc(applyforce_packed_size);
    dm_physics_ddf__apply_force__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, applyforce_packed_size);
    free(buffer);

    free_dm_physics_ddf__apply_force(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__CollisionResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__CollisionResponse *msg = dm_physics_ddf__collision_response__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__collision_response(L, msg);
    dm_physics_ddf__collision_response__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__CollisionResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__CollisionResponse *msg = luaL_checkdm_physics_ddf__collision_response(L, 1);

    size_t collisionresponse_packed_size = dm_physics_ddf__collision_response__get_packed_size(msg);
    char* buffer = (char*)malloc(collisionresponse_packed_size);
    dm_physics_ddf__collision_response__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, collisionresponse_packed_size);
    free(buffer);

    free_dm_physics_ddf__collision_response(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__ContactPointResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__ContactPointResponse *msg = dm_physics_ddf__contact_point_response__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__contact_point_response(L, msg);
    dm_physics_ddf__contact_point_response__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__ContactPointResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__ContactPointResponse *msg = luaL_checkdm_physics_ddf__contact_point_response(L, 1);

    size_t contactpointresponse_packed_size = dm_physics_ddf__contact_point_response__get_packed_size(msg);
    char* buffer = (char*)malloc(contactpointresponse_packed_size);
    dm_physics_ddf__contact_point_response__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, contactpointresponse_packed_size);
    free(buffer);

    free_dm_physics_ddf__contact_point_response(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__TriggerResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__TriggerResponse *msg = dm_physics_ddf__trigger_response__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__trigger_response(L, msg);
    dm_physics_ddf__trigger_response__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__TriggerResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__TriggerResponse *msg = luaL_checkdm_physics_ddf__trigger_response(L, 1);

    size_t triggerresponse_packed_size = dm_physics_ddf__trigger_response__get_packed_size(msg);
    char* buffer = (char*)malloc(triggerresponse_packed_size);
    dm_physics_ddf__trigger_response__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, triggerresponse_packed_size);
    free(buffer);

    free_dm_physics_ddf__trigger_response(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__RequestRayCast(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__RequestRayCast *msg = dm_physics_ddf__request_ray_cast__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__request_ray_cast(L, msg);
    dm_physics_ddf__request_ray_cast__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__RequestRayCast(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__RequestRayCast *msg = luaL_checkdm_physics_ddf__request_ray_cast(L, 1);

    size_t requestraycast_packed_size = dm_physics_ddf__request_ray_cast__get_packed_size(msg);
    char* buffer = (char*)malloc(requestraycast_packed_size);
    dm_physics_ddf__request_ray_cast__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, requestraycast_packed_size);
    free(buffer);

    free_dm_physics_ddf__request_ray_cast(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__RayCastResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__RayCastResponse *msg = dm_physics_ddf__ray_cast_response__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__ray_cast_response(L, msg);
    dm_physics_ddf__ray_cast_response__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__RayCastResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__RayCastResponse *msg = luaL_checkdm_physics_ddf__ray_cast_response(L, 1);

    size_t raycastresponse_packed_size = dm_physics_ddf__ray_cast_response__get_packed_size(msg);
    char* buffer = (char*)malloc(raycastresponse_packed_size);
    dm_physics_ddf__ray_cast_response__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, raycastresponse_packed_size);
    free(buffer);

    free_dm_physics_ddf__ray_cast_response(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__RayCastMissed(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__RayCastMissed *msg = dm_physics_ddf__ray_cast_missed__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__ray_cast_missed(L, msg);
    dm_physics_ddf__ray_cast_missed__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__RayCastMissed(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__RayCastMissed *msg = luaL_checkdm_physics_ddf__ray_cast_missed(L, 1);

    size_t raycastmissed_packed_size = dm_physics_ddf__ray_cast_missed__get_packed_size(msg);
    char* buffer = (char*)malloc(raycastmissed_packed_size);
    dm_physics_ddf__ray_cast_missed__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, raycastmissed_packed_size);
    free(buffer);

    free_dm_physics_ddf__ray_cast_missed(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__RequestVelocity(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__RequestVelocity *msg = dm_physics_ddf__request_velocity__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__request_velocity(L, msg);
    dm_physics_ddf__request_velocity__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__RequestVelocity(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__RequestVelocity *msg = luaL_checkdm_physics_ddf__request_velocity(L, 1);

    size_t requestvelocity_packed_size = dm_physics_ddf__request_velocity__get_packed_size(msg);
    char* buffer = (char*)malloc(requestvelocity_packed_size);
    dm_physics_ddf__request_velocity__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, requestvelocity_packed_size);
    free(buffer);

    free_dm_physics_ddf__request_velocity(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__VelocityResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__VelocityResponse *msg = dm_physics_ddf__velocity_response__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__velocity_response(L, msg);
    dm_physics_ddf__velocity_response__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__VelocityResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__VelocityResponse *msg = luaL_checkdm_physics_ddf__velocity_response(L, 1);

    size_t velocityresponse_packed_size = dm_physics_ddf__velocity_response__get_packed_size(msg);
    char* buffer = (char*)malloc(velocityresponse_packed_size);
    dm_physics_ddf__velocity_response__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, velocityresponse_packed_size);
    free(buffer);

    free_dm_physics_ddf__velocity_response(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__SetGridShapeHull(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__SetGridShapeHull *msg = dm_physics_ddf__set_grid_shape_hull__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__set_grid_shape_hull(L, msg);
    dm_physics_ddf__set_grid_shape_hull__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__SetGridShapeHull(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__SetGridShapeHull *msg = luaL_checkdm_physics_ddf__set_grid_shape_hull(L, 1);

    size_t setgridshapehull_packed_size = dm_physics_ddf__set_grid_shape_hull__get_packed_size(msg);
    char* buffer = (char*)malloc(setgridshapehull_packed_size);
    dm_physics_ddf__set_grid_shape_hull__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setgridshapehull_packed_size);
    free(buffer);

    free_dm_physics_ddf__set_grid_shape_hull(msg);

    return 1;
}

// gamesys/physics_ddf.proto
static int DecodeDmPhysicsDDF__EnableGridShapeLayer(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPhysicsDDF__EnableGridShapeLayer *msg = dm_physics_ddf__enable_grid_shape_layer__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_physics_ddf__enable_grid_shape_layer(L, msg);
    dm_physics_ddf__enable_grid_shape_layer__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPhysicsDDF__EnableGridShapeLayer(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPhysicsDDF__EnableGridShapeLayer *msg = luaL_checkdm_physics_ddf__enable_grid_shape_layer(L, 1);

    size_t enablegridshapelayer_packed_size = dm_physics_ddf__enable_grid_shape_layer__get_packed_size(msg);
    char* buffer = (char*)malloc(enablegridshapelayer_packed_size);
    dm_physics_ddf__enable_grid_shape_layer__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, enablegridshapelayer_packed_size);
    free(buffer);

    free_dm_physics_ddf__enable_grid_shape_layer(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__FactoryDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__FactoryDesc *msg = dm_game_system_ddf__factory_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__factory_desc(L, msg);
    dm_game_system_ddf__factory_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__FactoryDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__FactoryDesc *msg = luaL_checkdm_game_system_ddf__factory_desc(L, 1);

    size_t factorydesc_packed_size = dm_game_system_ddf__factory_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(factorydesc_packed_size);
    dm_game_system_ddf__factory_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, factorydesc_packed_size);
    free(buffer);

    free_dm_game_system_ddf__factory_desc(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__CollectionFactoryDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__CollectionFactoryDesc *msg = dm_game_system_ddf__collection_factory_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__collection_factory_desc(L, msg);
    dm_game_system_ddf__collection_factory_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__CollectionFactoryDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__CollectionFactoryDesc *msg = luaL_checkdm_game_system_ddf__collection_factory_desc(L, 1);

    size_t collectionfactorydesc_packed_size = dm_game_system_ddf__collection_factory_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(collectionfactorydesc_packed_size);
    dm_game_system_ddf__collection_factory_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, collectionfactorydesc_packed_size);
    free(buffer);

    free_dm_game_system_ddf__collection_factory_desc(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__Create(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__Create *msg = dm_game_system_ddf__create__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__create(L, msg);
    dm_game_system_ddf__create__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__Create(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__Create *msg = luaL_checkdm_game_system_ddf__create(L, 1);

    size_t create_packed_size = dm_game_system_ddf__create__get_packed_size(msg);
    char* buffer = (char*)malloc(create_packed_size);
    dm_game_system_ddf__create__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, create_packed_size);
    free(buffer);

    free_dm_game_system_ddf__create(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__CollectionProxyDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__CollectionProxyDesc *msg = dm_game_system_ddf__collection_proxy_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__collection_proxy_desc(L, msg);
    dm_game_system_ddf__collection_proxy_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__CollectionProxyDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__CollectionProxyDesc *msg = luaL_checkdm_game_system_ddf__collection_proxy_desc(L, 1);

    size_t collectionproxydesc_packed_size = dm_game_system_ddf__collection_proxy_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(collectionproxydesc_packed_size);
    dm_game_system_ddf__collection_proxy_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, collectionproxydesc_packed_size);
    free(buffer);

    free_dm_game_system_ddf__collection_proxy_desc(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__SetTimeStep(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetTimeStep *msg = dm_game_system_ddf__set_time_step__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_time_step(L, msg);
    dm_game_system_ddf__set_time_step__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetTimeStep(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetTimeStep *msg = luaL_checkdm_game_system_ddf__set_time_step(L, 1);

    size_t settimestep_packed_size = dm_game_system_ddf__set_time_step__get_packed_size(msg);
    char* buffer = (char*)malloc(settimestep_packed_size);
    dm_game_system_ddf__set_time_step__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, settimestep_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_time_step(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__LightDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__LightDesc *msg = dm_game_system_ddf__light_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__light_desc(L, msg);
    dm_game_system_ddf__light_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__LightDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__LightDesc *msg = luaL_checkdm_game_system_ddf__light_desc(L, 1);

    size_t lightdesc_packed_size = dm_game_system_ddf__light_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(lightdesc_packed_size);
    dm_game_system_ddf__light_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, lightdesc_packed_size);
    free(buffer);

    free_dm_game_system_ddf__light_desc(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__SetLight(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetLight *msg = dm_game_system_ddf__set_light__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_light(L, msg);
    dm_game_system_ddf__set_light__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetLight(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetLight *msg = luaL_checkdm_game_system_ddf__set_light(L, 1);

    size_t setlight_packed_size = dm_game_system_ddf__set_light__get_packed_size(msg);
    char* buffer = (char*)malloc(setlight_packed_size);
    dm_game_system_ddf__set_light__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setlight_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_light(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__SetViewProjection(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetViewProjection *msg = dm_game_system_ddf__set_view_projection__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_view_projection(L, msg);
    dm_game_system_ddf__set_view_projection__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetViewProjection(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetViewProjection *msg = luaL_checkdm_game_system_ddf__set_view_projection(L, 1);

    size_t setviewprojection_packed_size = dm_game_system_ddf__set_view_projection__get_packed_size(msg);
    char* buffer = (char*)malloc(setviewprojection_packed_size);
    dm_game_system_ddf__set_view_projection__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setviewprojection_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_view_projection(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__PlaySound(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__PlaySound *msg = dm_game_system_ddf__play_sound__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__play_sound(L, msg);
    dm_game_system_ddf__play_sound__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__PlaySound(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__PlaySound *msg = luaL_checkdm_game_system_ddf__play_sound(L, 1);

    size_t playsound_packed_size = dm_game_system_ddf__play_sound__get_packed_size(msg);
    char* buffer = (char*)malloc(playsound_packed_size);
    dm_game_system_ddf__play_sound__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, playsound_packed_size);
    free(buffer);

    free_dm_game_system_ddf__play_sound(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__StopSound(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__StopSound *msg = dm_game_system_ddf__stop_sound__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__stop_sound(L, msg);
    dm_game_system_ddf__stop_sound__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__StopSound(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__StopSound *msg = luaL_checkdm_game_system_ddf__stop_sound(L, 1);

    size_t stopsound_packed_size = dm_game_system_ddf__stop_sound__get_packed_size(msg);
    char* buffer = (char*)malloc(stopsound_packed_size);
    dm_game_system_ddf__stop_sound__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, stopsound_packed_size);
    free(buffer);

    free_dm_game_system_ddf__stop_sound(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__PauseSound(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__PauseSound *msg = dm_game_system_ddf__pause_sound__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__pause_sound(L, msg);
    dm_game_system_ddf__pause_sound__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__PauseSound(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__PauseSound *msg = luaL_checkdm_game_system_ddf__pause_sound(L, 1);

    size_t pausesound_packed_size = dm_game_system_ddf__pause_sound__get_packed_size(msg);
    char* buffer = (char*)malloc(pausesound_packed_size);
    dm_game_system_ddf__pause_sound__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, pausesound_packed_size);
    free(buffer);

    free_dm_game_system_ddf__pause_sound(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__SoundDone(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SoundDone *msg = dm_game_system_ddf__sound_done__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__sound_done(L, msg);
    dm_game_system_ddf__sound_done__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SoundDone(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SoundDone *msg = luaL_checkdm_game_system_ddf__sound_done(L, 1);

    size_t sounddone_packed_size = dm_game_system_ddf__sound_done__get_packed_size(msg);
    char* buffer = (char*)malloc(sounddone_packed_size);
    dm_game_system_ddf__sound_done__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, sounddone_packed_size);
    free(buffer);

    free_dm_game_system_ddf__sound_done(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__SetGain(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetGain *msg = dm_game_system_ddf__set_gain__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_gain(L, msg);
    dm_game_system_ddf__set_gain__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetGain(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetGain *msg = luaL_checkdm_game_system_ddf__set_gain(L, 1);

    size_t setgain_packed_size = dm_game_system_ddf__set_gain__get_packed_size(msg);
    char* buffer = (char*)malloc(setgain_packed_size);
    dm_game_system_ddf__set_gain__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setgain_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_gain(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__SetPan(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetPan *msg = dm_game_system_ddf__set_pan__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_pan(L, msg);
    dm_game_system_ddf__set_pan__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetPan(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetPan *msg = luaL_checkdm_game_system_ddf__set_pan(L, 1);

    size_t setpan_packed_size = dm_game_system_ddf__set_pan__get_packed_size(msg);
    char* buffer = (char*)malloc(setpan_packed_size);
    dm_game_system_ddf__set_pan__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setpan_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_pan(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__SetSpeed(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetSpeed *msg = dm_game_system_ddf__set_speed__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_speed(L, msg);
    dm_game_system_ddf__set_speed__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetSpeed(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetSpeed *msg = luaL_checkdm_game_system_ddf__set_speed(L, 1);

    size_t setspeed_packed_size = dm_game_system_ddf__set_speed__get_packed_size(msg);
    char* buffer = (char*)malloc(setspeed_packed_size);
    dm_game_system_ddf__set_speed__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setspeed_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_speed(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__PlayParticleFX(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__PlayParticleFX *msg = dm_game_system_ddf__play_particle_fx__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__play_particle_fx(L, msg);
    dm_game_system_ddf__play_particle_fx__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__PlayParticleFX(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__PlayParticleFX *msg = luaL_checkdm_game_system_ddf__play_particle_fx(L, 1);

    size_t playparticlefx_packed_size = dm_game_system_ddf__play_particle_fx__get_packed_size(msg);
    char* buffer = (char*)malloc(playparticlefx_packed_size);
    dm_game_system_ddf__play_particle_fx__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, playparticlefx_packed_size);
    free(buffer);

    free_dm_game_system_ddf__play_particle_fx(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__StopParticleFX(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__StopParticleFX *msg = dm_game_system_ddf__stop_particle_fx__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__stop_particle_fx(L, msg);
    dm_game_system_ddf__stop_particle_fx__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__StopParticleFX(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__StopParticleFX *msg = luaL_checkdm_game_system_ddf__stop_particle_fx(L, 1);

    size_t stopparticlefx_packed_size = dm_game_system_ddf__stop_particle_fx__get_packed_size(msg);
    char* buffer = (char*)malloc(stopparticlefx_packed_size);
    dm_game_system_ddf__stop_particle_fx__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, stopparticlefx_packed_size);
    free(buffer);

    free_dm_game_system_ddf__stop_particle_fx(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__SetConstantParticleFX(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetConstantParticleFX *msg = dm_game_system_ddf__set_constant_particle_fx__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_constant_particle_fx(L, msg);
    dm_game_system_ddf__set_constant_particle_fx__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetConstantParticleFX(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetConstantParticleFX *msg = luaL_checkdm_game_system_ddf__set_constant_particle_fx(L, 1);

    size_t setconstantparticlefx_packed_size = dm_game_system_ddf__set_constant_particle_fx__get_packed_size(msg);
    char* buffer = (char*)malloc(setconstantparticlefx_packed_size);
    dm_game_system_ddf__set_constant_particle_fx__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setconstantparticlefx_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_constant_particle_fx(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__ResetConstantParticleFX(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__ResetConstantParticleFX *msg = dm_game_system_ddf__reset_constant_particle_fx__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__reset_constant_particle_fx(L, msg);
    dm_game_system_ddf__reset_constant_particle_fx__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__ResetConstantParticleFX(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__ResetConstantParticleFX *msg = luaL_checkdm_game_system_ddf__reset_constant_particle_fx(L, 1);

    size_t resetconstantparticlefx_packed_size = dm_game_system_ddf__reset_constant_particle_fx__get_packed_size(msg);
    char* buffer = (char*)malloc(resetconstantparticlefx_packed_size);
    dm_game_system_ddf__reset_constant_particle_fx__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, resetconstantparticlefx_packed_size);
    free(buffer);

    free_dm_game_system_ddf__reset_constant_particle_fx(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__SetConstant(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetConstant *msg = dm_game_system_ddf__set_constant__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_constant(L, msg);
    dm_game_system_ddf__set_constant__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetConstant(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetConstant *msg = luaL_checkdm_game_system_ddf__set_constant(L, 1);

    size_t setconstant_packed_size = dm_game_system_ddf__set_constant__get_packed_size(msg);
    char* buffer = (char*)malloc(setconstant_packed_size);
    dm_game_system_ddf__set_constant__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setconstant_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_constant(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__ResetConstant(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__ResetConstant *msg = dm_game_system_ddf__reset_constant__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__reset_constant(L, msg);
    dm_game_system_ddf__reset_constant__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__ResetConstant(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__ResetConstant *msg = luaL_checkdm_game_system_ddf__reset_constant(L, 1);

    size_t resetconstant_packed_size = dm_game_system_ddf__reset_constant__get_packed_size(msg);
    char* buffer = (char*)malloc(resetconstant_packed_size);
    dm_game_system_ddf__reset_constant__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, resetconstant_packed_size);
    free(buffer);

    free_dm_game_system_ddf__reset_constant(msg);

    return 1;
}

// gamesys/gamesys_ddf.proto
static int DecodeDmGameSystemDDF__SetScale(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameSystemDDF__SetScale *msg = dm_game_system_ddf__set_scale__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_system_ddf__set_scale(L, msg);
    dm_game_system_ddf__set_scale__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameSystemDDF__SetScale(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameSystemDDF__SetScale *msg = luaL_checkdm_game_system_ddf__set_scale(L, 1);

    size_t setscale_packed_size = dm_game_system_ddf__set_scale__get_packed_size(msg);
    char* buffer = (char*)malloc(setscale_packed_size);
    dm_game_system_ddf__set_scale__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setscale_packed_size);
    free(buffer);

    free_dm_game_system_ddf__set_scale(msg);

    return 1;
}

// gamesys/gui_ddf.proto
static int DecodeDmGuiDDF__NodeDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGuiDDF__NodeDesc *msg = dm_gui_ddf__node_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_gui_ddf__node_desc(L, msg);
    dm_gui_ddf__node_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGuiDDF__NodeDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGuiDDF__NodeDesc *msg = luaL_checkdm_gui_ddf__node_desc(L, 1);

    size_t nodedesc_packed_size = dm_gui_ddf__node_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(nodedesc_packed_size);
    dm_gui_ddf__node_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, nodedesc_packed_size);
    free(buffer);

    free_dm_gui_ddf__node_desc(msg);

    return 1;
}

// gamesys/gui_ddf.proto
static int DecodeDmGuiDDF__SceneDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGuiDDF__SceneDesc *msg = dm_gui_ddf__scene_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_gui_ddf__scene_desc(L, msg);
    dm_gui_ddf__scene_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGuiDDF__SceneDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGuiDDF__SceneDesc *msg = luaL_checkdm_gui_ddf__scene_desc(L, 1);

    size_t scenedesc_packed_size = dm_gui_ddf__scene_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(scenedesc_packed_size);
    dm_gui_ddf__scene_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, scenedesc_packed_size);
    free(buffer);

    free_dm_gui_ddf__scene_desc(msg);

    return 1;
}

// gamesys/gui_ddf.proto
static int DecodeDmGuiDDF__LayoutChanged(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGuiDDF__LayoutChanged *msg = dm_gui_ddf__layout_changed__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_gui_ddf__layout_changed(L, msg);
    dm_gui_ddf__layout_changed__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGuiDDF__LayoutChanged(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGuiDDF__LayoutChanged *msg = luaL_checkdm_gui_ddf__layout_changed(L, 1);

    size_t layoutchanged_packed_size = dm_gui_ddf__layout_changed__get_packed_size(msg);
    char* buffer = (char*)malloc(layoutchanged_packed_size);
    dm_gui_ddf__layout_changed__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, layoutchanged_packed_size);
    free(buffer);

    free_dm_gui_ddf__layout_changed(msg);

    return 1;
}

// resource/liveupdate_ddf.proto
static int DecodeDmLiveUpdateDDF__HashDigest(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmLiveUpdateDDF__HashDigest *msg = dm_live_update_ddf__hash_digest__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_live_update_ddf__hash_digest(L, msg);
    dm_live_update_ddf__hash_digest__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmLiveUpdateDDF__HashDigest(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmLiveUpdateDDF__HashDigest *msg = luaL_checkdm_live_update_ddf__hash_digest(L, 1);

    size_t hashdigest_packed_size = dm_live_update_ddf__hash_digest__get_packed_size(msg);
    char* buffer = (char*)malloc(hashdigest_packed_size);
    dm_live_update_ddf__hash_digest__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, hashdigest_packed_size);
    free(buffer);

    free_dm_live_update_ddf__hash_digest(msg);

    return 1;
}

// resource/liveupdate_ddf.proto
static int DecodeDmLiveUpdateDDF__ManifestHeader(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmLiveUpdateDDF__ManifestHeader *msg = dm_live_update_ddf__manifest_header__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_live_update_ddf__manifest_header(L, msg);
    dm_live_update_ddf__manifest_header__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmLiveUpdateDDF__ManifestHeader(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmLiveUpdateDDF__ManifestHeader *msg = luaL_checkdm_live_update_ddf__manifest_header(L, 1);

    size_t manifestheader_packed_size = dm_live_update_ddf__manifest_header__get_packed_size(msg);
    char* buffer = (char*)malloc(manifestheader_packed_size);
    dm_live_update_ddf__manifest_header__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, manifestheader_packed_size);
    free(buffer);

    free_dm_live_update_ddf__manifest_header(msg);

    return 1;
}

// resource/liveupdate_ddf.proto
static int DecodeDmLiveUpdateDDF__ResourceEntry(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmLiveUpdateDDF__ResourceEntry *msg = dm_live_update_ddf__resource_entry__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_live_update_ddf__resource_entry(L, msg);
    dm_live_update_ddf__resource_entry__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmLiveUpdateDDF__ResourceEntry(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmLiveUpdateDDF__ResourceEntry *msg = luaL_checkdm_live_update_ddf__resource_entry(L, 1);

    size_t resourceentry_packed_size = dm_live_update_ddf__resource_entry__get_packed_size(msg);
    char* buffer = (char*)malloc(resourceentry_packed_size);
    dm_live_update_ddf__resource_entry__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, resourceentry_packed_size);
    free(buffer);

    free_dm_live_update_ddf__resource_entry(msg);

    return 1;
}

// resource/liveupdate_ddf.proto
static int DecodeDmLiveUpdateDDF__ManifestData(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmLiveUpdateDDF__ManifestData *msg = dm_live_update_ddf__manifest_data__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_live_update_ddf__manifest_data(L, msg);
    dm_live_update_ddf__manifest_data__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmLiveUpdateDDF__ManifestData(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmLiveUpdateDDF__ManifestData *msg = luaL_checkdm_live_update_ddf__manifest_data(L, 1);

    size_t manifestdata_packed_size = dm_live_update_ddf__manifest_data__get_packed_size(msg);
    char* buffer = (char*)malloc(manifestdata_packed_size);
    dm_live_update_ddf__manifest_data__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, manifestdata_packed_size);
    free(buffer);

    free_dm_live_update_ddf__manifest_data(msg);

    return 1;
}

// resource/liveupdate_ddf.proto
static int DecodeDmLiveUpdateDDF__ManifestFile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmLiveUpdateDDF__ManifestFile *msg = dm_live_update_ddf__manifest_file__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_live_update_ddf__manifest_file(L, msg);
    dm_live_update_ddf__manifest_file__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmLiveUpdateDDF__ManifestFile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmLiveUpdateDDF__ManifestFile *msg = luaL_checkdm_live_update_ddf__manifest_file(L, 1);

    size_t manifestfile_packed_size = dm_live_update_ddf__manifest_file__get_packed_size(msg);
    char* buffer = (char*)malloc(manifestfile_packed_size);
    dm_live_update_ddf__manifest_file__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, manifestfile_packed_size);
    free(buffer);

    free_dm_live_update_ddf__manifest_file(msg);

    return 1;
}

// resource/resource_ddf.proto
static int DecodeDmResourceDDF__Reload(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmResourceDDF__Reload *msg = dm_resource_ddf__reload__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_resource_ddf__reload(L, msg);
    dm_resource_ddf__reload__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmResourceDDF__Reload(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmResourceDDF__Reload *msg = luaL_checkdm_resource_ddf__reload(L, 1);

    size_t reload_packed_size = dm_resource_ddf__reload__get_packed_size(msg);
    char* buffer = (char*)malloc(reload_packed_size);
    dm_resource_ddf__reload__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, reload_packed_size);
    free(buffer);

    free_dm_resource_ddf__reload(msg);

    return 1;
}

// graphics/graphics_ddf.proto
static int DecodeDmGraphics__Cubemap(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGraphics__Cubemap *msg = dm_graphics__cubemap__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_graphics__cubemap(L, msg);
    dm_graphics__cubemap__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGraphics__Cubemap(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGraphics__Cubemap *msg = luaL_checkdm_graphics__cubemap(L, 1);

    size_t cubemap_packed_size = dm_graphics__cubemap__get_packed_size(msg);
    char* buffer = (char*)malloc(cubemap_packed_size);
    dm_graphics__cubemap__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, cubemap_packed_size);
    free(buffer);

    free_dm_graphics__cubemap(msg);

    return 1;
}

// graphics/graphics_ddf.proto
static int DecodeDmGraphics__TextureImage(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGraphics__TextureImage *msg = dm_graphics__texture_image__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_graphics__texture_image(L, msg);
    dm_graphics__texture_image__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGraphics__TextureImage(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGraphics__TextureImage *msg = luaL_checkdm_graphics__texture_image(L, 1);

    size_t textureimage_packed_size = dm_graphics__texture_image__get_packed_size(msg);
    char* buffer = (char*)malloc(textureimage_packed_size);
    dm_graphics__texture_image__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, textureimage_packed_size);
    free(buffer);

    free_dm_graphics__texture_image(msg);

    return 1;
}

// graphics/graphics_ddf.proto
static int DecodeDmGraphics__TextureFormatAlternative(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGraphics__TextureFormatAlternative *msg = dm_graphics__texture_format_alternative__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_graphics__texture_format_alternative(L, msg);
    dm_graphics__texture_format_alternative__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGraphics__TextureFormatAlternative(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGraphics__TextureFormatAlternative *msg = luaL_checkdm_graphics__texture_format_alternative(L, 1);

    size_t textureformatalternative_packed_size = dm_graphics__texture_format_alternative__get_packed_size(msg);
    char* buffer = (char*)malloc(textureformatalternative_packed_size);
    dm_graphics__texture_format_alternative__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, textureformatalternative_packed_size);
    free(buffer);

    free_dm_graphics__texture_format_alternative(msg);

    return 1;
}

// graphics/graphics_ddf.proto
static int DecodeDmGraphics__PathSettings(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGraphics__PathSettings *msg = dm_graphics__path_settings__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_graphics__path_settings(L, msg);
    dm_graphics__path_settings__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGraphics__PathSettings(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGraphics__PathSettings *msg = luaL_checkdm_graphics__path_settings(L, 1);

    size_t pathsettings_packed_size = dm_graphics__path_settings__get_packed_size(msg);
    char* buffer = (char*)malloc(pathsettings_packed_size);
    dm_graphics__path_settings__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, pathsettings_packed_size);
    free(buffer);

    free_dm_graphics__path_settings(msg);

    return 1;
}

// graphics/graphics_ddf.proto
static int DecodeDmGraphics__PlatformProfile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGraphics__PlatformProfile *msg = dm_graphics__platform_profile__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_graphics__platform_profile(L, msg);
    dm_graphics__platform_profile__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGraphics__PlatformProfile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGraphics__PlatformProfile *msg = luaL_checkdm_graphics__platform_profile(L, 1);

    size_t platformprofile_packed_size = dm_graphics__platform_profile__get_packed_size(msg);
    char* buffer = (char*)malloc(platformprofile_packed_size);
    dm_graphics__platform_profile__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, platformprofile_packed_size);
    free(buffer);

    free_dm_graphics__platform_profile(msg);

    return 1;
}

// graphics/graphics_ddf.proto
static int DecodeDmGraphics__TextureProfile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGraphics__TextureProfile *msg = dm_graphics__texture_profile__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_graphics__texture_profile(L, msg);
    dm_graphics__texture_profile__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGraphics__TextureProfile(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGraphics__TextureProfile *msg = luaL_checkdm_graphics__texture_profile(L, 1);

    size_t textureprofile_packed_size = dm_graphics__texture_profile__get_packed_size(msg);
    char* buffer = (char*)malloc(textureprofile_packed_size);
    dm_graphics__texture_profile__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, textureprofile_packed_size);
    free(buffer);

    free_dm_graphics__texture_profile(msg);

    return 1;
}

// graphics/graphics_ddf.proto
static int DecodeDmGraphics__TextureProfiles(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGraphics__TextureProfiles *msg = dm_graphics__texture_profiles__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_graphics__texture_profiles(L, msg);
    dm_graphics__texture_profiles__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGraphics__TextureProfiles(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGraphics__TextureProfiles *msg = luaL_checkdm_graphics__texture_profiles(L, 1);

    size_t textureprofiles_packed_size = dm_graphics__texture_profiles__get_packed_size(msg);
    char* buffer = (char*)malloc(textureprofiles_packed_size);
    dm_graphics__texture_profiles__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, textureprofiles_packed_size);
    free(buffer);

    free_dm_graphics__texture_profiles(msg);

    return 1;
}

// graphics/graphics_ddf.proto
static int DecodeDmGraphics__ShaderDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGraphics__ShaderDesc *msg = dm_graphics__shader_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_graphics__shader_desc(L, msg);
    dm_graphics__shader_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGraphics__ShaderDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGraphics__ShaderDesc *msg = luaL_checkdm_graphics__shader_desc(L, 1);

    size_t shaderdesc_packed_size = dm_graphics__shader_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(shaderdesc_packed_size);
    dm_graphics__shader_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, shaderdesc_packed_size);
    free(buffer);

    free_dm_graphics__shader_desc(msg);

    return 1;
}

// gameobject/properties_ddf.proto
static int DecodeDmPropertiesDDF__PropertyDeclarationEntry(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPropertiesDDF__PropertyDeclarationEntry *msg = dm_properties_ddf__property_declaration_entry__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_properties_ddf__property_declaration_entry(L, msg);
    dm_properties_ddf__property_declaration_entry__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPropertiesDDF__PropertyDeclarationEntry(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPropertiesDDF__PropertyDeclarationEntry *msg = luaL_checkdm_properties_ddf__property_declaration_entry(L, 1);

    size_t propertydeclarationentry_packed_size = dm_properties_ddf__property_declaration_entry__get_packed_size(msg);
    char* buffer = (char*)malloc(propertydeclarationentry_packed_size);
    dm_properties_ddf__property_declaration_entry__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, propertydeclarationentry_packed_size);
    free(buffer);

    free_dm_properties_ddf__property_declaration_entry(msg);

    return 1;
}

// gameobject/properties_ddf.proto
static int DecodeDmPropertiesDDF__PropertyDeclarations(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmPropertiesDDF__PropertyDeclarations *msg = dm_properties_ddf__property_declarations__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_properties_ddf__property_declarations(L, msg);
    dm_properties_ddf__property_declarations__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmPropertiesDDF__PropertyDeclarations(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmPropertiesDDF__PropertyDeclarations *msg = luaL_checkdm_properties_ddf__property_declarations(L, 1);

    size_t propertydeclarations_packed_size = dm_properties_ddf__property_declarations__get_packed_size(msg);
    char* buffer = (char*)malloc(propertydeclarations_packed_size);
    dm_properties_ddf__property_declarations__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, propertydeclarations_packed_size);
    free(buffer);

    free_dm_properties_ddf__property_declarations(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__PropertyDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__PropertyDesc *msg = dm_game_object_ddf__property_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__property_desc(L, msg);
    dm_game_object_ddf__property_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__PropertyDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__PropertyDesc *msg = luaL_checkdm_game_object_ddf__property_desc(L, 1);

    size_t propertydesc_packed_size = dm_game_object_ddf__property_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(propertydesc_packed_size);
    dm_game_object_ddf__property_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, propertydesc_packed_size);
    free(buffer);

    free_dm_game_object_ddf__property_desc(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__ComponentDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__ComponentDesc *msg = dm_game_object_ddf__component_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__component_desc(L, msg);
    dm_game_object_ddf__component_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__ComponentDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__ComponentDesc *msg = luaL_checkdm_game_object_ddf__component_desc(L, 1);

    size_t componentdesc_packed_size = dm_game_object_ddf__component_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(componentdesc_packed_size);
    dm_game_object_ddf__component_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, componentdesc_packed_size);
    free(buffer);

    free_dm_game_object_ddf__component_desc(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__EmbeddedComponentDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__EmbeddedComponentDesc *msg = dm_game_object_ddf__embedded_component_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__embedded_component_desc(L, msg);
    dm_game_object_ddf__embedded_component_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__EmbeddedComponentDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__EmbeddedComponentDesc *msg = luaL_checkdm_game_object_ddf__embedded_component_desc(L, 1);

    size_t embeddedcomponentdesc_packed_size = dm_game_object_ddf__embedded_component_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(embeddedcomponentdesc_packed_size);
    dm_game_object_ddf__embedded_component_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, embeddedcomponentdesc_packed_size);
    free(buffer);

    free_dm_game_object_ddf__embedded_component_desc(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__PrototypeDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__PrototypeDesc *msg = dm_game_object_ddf__prototype_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__prototype_desc(L, msg);
    dm_game_object_ddf__prototype_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__PrototypeDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__PrototypeDesc *msg = luaL_checkdm_game_object_ddf__prototype_desc(L, 1);

    size_t prototypedesc_packed_size = dm_game_object_ddf__prototype_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(prototypedesc_packed_size);
    dm_game_object_ddf__prototype_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, prototypedesc_packed_size);
    free(buffer);

    free_dm_game_object_ddf__prototype_desc(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__ComponentPropertyDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__ComponentPropertyDesc *msg = dm_game_object_ddf__component_property_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__component_property_desc(L, msg);
    dm_game_object_ddf__component_property_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__ComponentPropertyDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__ComponentPropertyDesc *msg = luaL_checkdm_game_object_ddf__component_property_desc(L, 1);

    size_t componentpropertydesc_packed_size = dm_game_object_ddf__component_property_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(componentpropertydesc_packed_size);
    dm_game_object_ddf__component_property_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, componentpropertydesc_packed_size);
    free(buffer);

    free_dm_game_object_ddf__component_property_desc(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__ComponenTypeDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__ComponenTypeDesc *msg = dm_game_object_ddf__componen_type_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__componen_type_desc(L, msg);
    dm_game_object_ddf__componen_type_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__ComponenTypeDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__ComponenTypeDesc *msg = luaL_checkdm_game_object_ddf__componen_type_desc(L, 1);

    size_t componentypedesc_packed_size = dm_game_object_ddf__componen_type_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(componentypedesc_packed_size);
    dm_game_object_ddf__componen_type_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, componentypedesc_packed_size);
    free(buffer);

    free_dm_game_object_ddf__componen_type_desc(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__InstanceDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__InstanceDesc *msg = dm_game_object_ddf__instance_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__instance_desc(L, msg);
    dm_game_object_ddf__instance_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__InstanceDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__InstanceDesc *msg = luaL_checkdm_game_object_ddf__instance_desc(L, 1);

    size_t instancedesc_packed_size = dm_game_object_ddf__instance_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(instancedesc_packed_size);
    dm_game_object_ddf__instance_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, instancedesc_packed_size);
    free(buffer);

    free_dm_game_object_ddf__instance_desc(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__EmbeddedInstanceDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__EmbeddedInstanceDesc *msg = dm_game_object_ddf__embedded_instance_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__embedded_instance_desc(L, msg);
    dm_game_object_ddf__embedded_instance_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__EmbeddedInstanceDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__EmbeddedInstanceDesc *msg = luaL_checkdm_game_object_ddf__embedded_instance_desc(L, 1);

    size_t embeddedinstancedesc_packed_size = dm_game_object_ddf__embedded_instance_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(embeddedinstancedesc_packed_size);
    dm_game_object_ddf__embedded_instance_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, embeddedinstancedesc_packed_size);
    free(buffer);

    free_dm_game_object_ddf__embedded_instance_desc(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__InstancePropertyDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__InstancePropertyDesc *msg = dm_game_object_ddf__instance_property_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__instance_property_desc(L, msg);
    dm_game_object_ddf__instance_property_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__InstancePropertyDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__InstancePropertyDesc *msg = luaL_checkdm_game_object_ddf__instance_property_desc(L, 1);

    size_t instancepropertydesc_packed_size = dm_game_object_ddf__instance_property_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(instancepropertydesc_packed_size);
    dm_game_object_ddf__instance_property_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, instancepropertydesc_packed_size);
    free(buffer);

    free_dm_game_object_ddf__instance_property_desc(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__CollectionInstanceDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__CollectionInstanceDesc *msg = dm_game_object_ddf__collection_instance_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__collection_instance_desc(L, msg);
    dm_game_object_ddf__collection_instance_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__CollectionInstanceDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__CollectionInstanceDesc *msg = luaL_checkdm_game_object_ddf__collection_instance_desc(L, 1);

    size_t collectioninstancedesc_packed_size = dm_game_object_ddf__collection_instance_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(collectioninstancedesc_packed_size);
    dm_game_object_ddf__collection_instance_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, collectioninstancedesc_packed_size);
    free(buffer);

    free_dm_game_object_ddf__collection_instance_desc(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__CollectionDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__CollectionDesc *msg = dm_game_object_ddf__collection_desc__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__collection_desc(L, msg);
    dm_game_object_ddf__collection_desc__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__CollectionDesc(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__CollectionDesc *msg = luaL_checkdm_game_object_ddf__collection_desc(L, 1);

    size_t collectiondesc_packed_size = dm_game_object_ddf__collection_desc__get_packed_size(msg);
    char* buffer = (char*)malloc(collectiondesc_packed_size);
    dm_game_object_ddf__collection_desc__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, collectiondesc_packed_size);
    free(buffer);

    free_dm_game_object_ddf__collection_desc(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__AcquireInputFocus(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__AcquireInputFocus *msg = dm_game_object_ddf__acquire_input_focus__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__acquire_input_focus(L, msg);
    dm_game_object_ddf__acquire_input_focus__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__AcquireInputFocus(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__AcquireInputFocus *msg = luaL_checkdm_game_object_ddf__acquire_input_focus(L, 1);

    size_t acquireinputfocus_packed_size = dm_game_object_ddf__acquire_input_focus__get_packed_size(msg);
    char* buffer = (char*)malloc(acquireinputfocus_packed_size);
    dm_game_object_ddf__acquire_input_focus__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, acquireinputfocus_packed_size);
    free(buffer);

    free_dm_game_object_ddf__acquire_input_focus(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__ReleaseInputFocus(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__ReleaseInputFocus *msg = dm_game_object_ddf__release_input_focus__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__release_input_focus(L, msg);
    dm_game_object_ddf__release_input_focus__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__ReleaseInputFocus(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__ReleaseInputFocus *msg = luaL_checkdm_game_object_ddf__release_input_focus(L, 1);

    size_t releaseinputfocus_packed_size = dm_game_object_ddf__release_input_focus__get_packed_size(msg);
    char* buffer = (char*)malloc(releaseinputfocus_packed_size);
    dm_game_object_ddf__release_input_focus__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, releaseinputfocus_packed_size);
    free(buffer);

    free_dm_game_object_ddf__release_input_focus(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__RequestTransform(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__RequestTransform *msg = dm_game_object_ddf__request_transform__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__request_transform(L, msg);
    dm_game_object_ddf__request_transform__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__RequestTransform(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__RequestTransform *msg = luaL_checkdm_game_object_ddf__request_transform(L, 1);

    size_t requesttransform_packed_size = dm_game_object_ddf__request_transform__get_packed_size(msg);
    char* buffer = (char*)malloc(requesttransform_packed_size);
    dm_game_object_ddf__request_transform__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, requesttransform_packed_size);
    free(buffer);

    free_dm_game_object_ddf__request_transform(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__TransformResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__TransformResponse *msg = dm_game_object_ddf__transform_response__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__transform_response(L, msg);
    dm_game_object_ddf__transform_response__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__TransformResponse(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__TransformResponse *msg = luaL_checkdm_game_object_ddf__transform_response(L, 1);

    size_t transformresponse_packed_size = dm_game_object_ddf__transform_response__get_packed_size(msg);
    char* buffer = (char*)malloc(transformresponse_packed_size);
    dm_game_object_ddf__transform_response__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, transformresponse_packed_size);
    free(buffer);

    free_dm_game_object_ddf__transform_response(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__SetParent(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__SetParent *msg = dm_game_object_ddf__set_parent__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__set_parent(L, msg);
    dm_game_object_ddf__set_parent__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__SetParent(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__SetParent *msg = luaL_checkdm_game_object_ddf__set_parent(L, 1);

    size_t setparent_packed_size = dm_game_object_ddf__set_parent__get_packed_size(msg);
    char* buffer = (char*)malloc(setparent_packed_size);
    dm_game_object_ddf__set_parent__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, setparent_packed_size);
    free(buffer);

    free_dm_game_object_ddf__set_parent(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__Enable(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__Enable *msg = dm_game_object_ddf__enable__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__enable(L, msg);
    dm_game_object_ddf__enable__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__Enable(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__Enable *msg = luaL_checkdm_game_object_ddf__enable(L, 1);

    size_t enable_packed_size = dm_game_object_ddf__enable__get_packed_size(msg);
    char* buffer = (char*)malloc(enable_packed_size);
    dm_game_object_ddf__enable__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, enable_packed_size);
    free(buffer);

    free_dm_game_object_ddf__enable(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__Disable(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__Disable *msg = dm_game_object_ddf__disable__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__disable(L, msg);
    dm_game_object_ddf__disable__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__Disable(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__Disable *msg = luaL_checkdm_game_object_ddf__disable(L, 1);

    size_t disable_packed_size = dm_game_object_ddf__disable__get_packed_size(msg);
    char* buffer = (char*)malloc(disable_packed_size);
    dm_game_object_ddf__disable__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, disable_packed_size);
    free(buffer);

    free_dm_game_object_ddf__disable(msg);

    return 1;
}

// gameobject/gameobject_ddf.proto
static int DecodeDmGameObjectDDF__ScriptMessage(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmGameObjectDDF__ScriptMessage *msg = dm_game_object_ddf__script_message__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_game_object_ddf__script_message(L, msg);
    dm_game_object_ddf__script_message__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmGameObjectDDF__ScriptMessage(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmGameObjectDDF__ScriptMessage *msg = luaL_checkdm_game_object_ddf__script_message(L, 1);

    size_t scriptmessage_packed_size = dm_game_object_ddf__script_message__get_packed_size(msg);
    char* buffer = (char*)malloc(scriptmessage_packed_size);
    dm_game_object_ddf__script_message__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, scriptmessage_packed_size);
    free(buffer);

    free_dm_game_object_ddf__script_message(msg);

    return 1;
}

// gameobject/lua_ddf.proto
static int DecodeDmLuaDDF__LuaModule(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmLuaDDF__LuaModule *msg = dm_lua_ddf__lua_module__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_lua_ddf__lua_module(L, msg);
    dm_lua_ddf__lua_module__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmLuaDDF__LuaModule(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmLuaDDF__LuaModule *msg = luaL_checkdm_lua_ddf__lua_module(L, 1);

    size_t luamodule_packed_size = dm_lua_ddf__lua_module__get_packed_size(msg);
    char* buffer = (char*)malloc(luamodule_packed_size);
    dm_lua_ddf__lua_module__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, luamodule_packed_size);
    free(buffer);

    free_dm_lua_ddf__lua_module(msg);

    return 1;
}

// engine/engine_ddf.proto
static int DecodeDmEngineDDF__HideApp(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmEngineDDF__HideApp *msg = dm_engine_ddf__hide_app__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_engine_ddf__hide_app(L, msg);
    dm_engine_ddf__hide_app__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmEngineDDF__HideApp(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmEngineDDF__HideApp *msg = luaL_checkdm_engine_ddf__hide_app(L, 1);

    size_t hideapp_packed_size = dm_engine_ddf__hide_app__get_packed_size(msg);
    char* buffer = (char*)malloc(hideapp_packed_size);
    dm_engine_ddf__hide_app__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, hideapp_packed_size);
    free(buffer);

    free_dm_engine_ddf__hide_app(msg);

    return 1;
}

// engine/engine_ddf.proto
static int DecodeDmEngineDDF__RunScript(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmEngineDDF__RunScript *msg = dm_engine_ddf__run_script__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_engine_ddf__run_script(L, msg);
    dm_engine_ddf__run_script__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmEngineDDF__RunScript(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmEngineDDF__RunScript *msg = luaL_checkdm_engine_ddf__run_script(L, 1);

    size_t runscript_packed_size = dm_engine_ddf__run_script__get_packed_size(msg);
    char* buffer = (char*)malloc(runscript_packed_size);
    dm_engine_ddf__run_script__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, runscript_packed_size);
    free(buffer);

    free_dm_engine_ddf__run_script(msg);

    return 1;
}

// particle/particle_ddf.proto
static int DecodeDmParticleDDF__SplinePoint(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmParticleDDF__SplinePoint *msg = dm_particle_ddf__spline_point__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_particle_ddf__spline_point(L, msg);
    dm_particle_ddf__spline_point__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmParticleDDF__SplinePoint(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmParticleDDF__SplinePoint *msg = luaL_checkdm_particle_ddf__spline_point(L, 1);

    size_t splinepoint_packed_size = dm_particle_ddf__spline_point__get_packed_size(msg);
    char* buffer = (char*)malloc(splinepoint_packed_size);
    dm_particle_ddf__spline_point__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, splinepoint_packed_size);
    free(buffer);

    free_dm_particle_ddf__spline_point(msg);

    return 1;
}

// particle/particle_ddf.proto
static int DecodeDmParticleDDF__Modifier(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmParticleDDF__Modifier *msg = dm_particle_ddf__modifier__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_particle_ddf__modifier(L, msg);
    dm_particle_ddf__modifier__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmParticleDDF__Modifier(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmParticleDDF__Modifier *msg = luaL_checkdm_particle_ddf__modifier(L, 1);

    size_t modifier_packed_size = dm_particle_ddf__modifier__get_packed_size(msg);
    char* buffer = (char*)malloc(modifier_packed_size);
    dm_particle_ddf__modifier__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, modifier_packed_size);
    free(buffer);

    free_dm_particle_ddf__modifier(msg);

    return 1;
}

// particle/particle_ddf.proto
static int DecodeDmParticleDDF__Emitter(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmParticleDDF__Emitter *msg = dm_particle_ddf__emitter__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_particle_ddf__emitter(L, msg);
    dm_particle_ddf__emitter__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmParticleDDF__Emitter(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmParticleDDF__Emitter *msg = luaL_checkdm_particle_ddf__emitter(L, 1);

    size_t emitter_packed_size = dm_particle_ddf__emitter__get_packed_size(msg);
    char* buffer = (char*)malloc(emitter_packed_size);
    dm_particle_ddf__emitter__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, emitter_packed_size);
    free(buffer);

    free_dm_particle_ddf__emitter(msg);

    return 1;
}

// particle/particle_ddf.proto
static int DecodeDmParticleDDF__ParticleFX(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    size_t data_length;
    const char* data = luaL_checklstring(L, 1, &data_length);

    DmParticleDDF__ParticleFX *msg = dm_particle_ddf__particle_fx__unpack(0, data_length, (uint8_t*)data);
    lua_pushdm_particle_ddf__particle_fx(L, msg);
    dm_particle_ddf__particle_fx__free_unpacked(msg, 0);

    return 1;
}
static int EncodeDmParticleDDF__ParticleFX(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 1);
    DmParticleDDF__ParticleFX *msg = luaL_checkdm_particle_ddf__particle_fx(L, 1);

    size_t particlefx_packed_size = dm_particle_ddf__particle_fx__get_packed_size(msg);
    char* buffer = (char*)malloc(particlefx_packed_size);
    dm_particle_ddf__particle_fx__pack(msg, (uint8_t*)buffer);

    lua_pushlstring(L, buffer, particlefx_packed_size);
    free(buffer);

    free_dm_particle_ddf__particle_fx(msg);

    return 1;
}


static const luaL_reg Module_methods[] =
{
    {"encode_dmmath_point3", EncodeDmMath__Point3 },
    {"decode_dmmath_point3", DecodeDmMath__Point3 },
    {"encode_dmmath_vector3", EncodeDmMath__Vector3 },
    {"decode_dmmath_vector3", DecodeDmMath__Vector3 },
    {"encode_dmmath_vector4", EncodeDmMath__Vector4 },
    {"decode_dmmath_vector4", DecodeDmMath__Vector4 },
    {"encode_dmmath_quat", EncodeDmMath__Quat },
    {"decode_dmmath_quat", DecodeDmMath__Quat },
    {"encode_dmmath_transform", EncodeDmMath__Transform },
    {"decode_dmmath_transform", DecodeDmMath__Transform },
    {"encode_dmmath_matrix4", EncodeDmMath__Matrix4 },
    {"decode_dmmath_matrix4", DecodeDmMath__Matrix4 },
    {"encode_dminputddf_gamepadmodifier_t", EncodeDmInputDDF__GamepadModifierT },
    {"decode_dminputddf_gamepadmodifier_t", DecodeDmInputDDF__GamepadModifierT },
    {"encode_dminputddf_gamepadmapentry", EncodeDmInputDDF__GamepadMapEntry },
    {"decode_dminputddf_gamepadmapentry", DecodeDmInputDDF__GamepadMapEntry },
    {"encode_dminputddf_gamepadmap", EncodeDmInputDDF__GamepadMap },
    {"decode_dminputddf_gamepadmap", DecodeDmInputDDF__GamepadMap },
    {"encode_dminputddf_gamepadmaps", EncodeDmInputDDF__GamepadMaps },
    {"decode_dminputddf_gamepadmaps", DecodeDmInputDDF__GamepadMaps },
    {"encode_dminputddf_keytrigger", EncodeDmInputDDF__KeyTrigger },
    {"decode_dminputddf_keytrigger", DecodeDmInputDDF__KeyTrigger },
    {"encode_dminputddf_mousetrigger", EncodeDmInputDDF__MouseTrigger },
    {"decode_dminputddf_mousetrigger", DecodeDmInputDDF__MouseTrigger },
    {"encode_dminputddf_gamepadtrigger", EncodeDmInputDDF__GamepadTrigger },
    {"decode_dminputddf_gamepadtrigger", DecodeDmInputDDF__GamepadTrigger },
    {"encode_dminputddf_touchtrigger", EncodeDmInputDDF__TouchTrigger },
    {"decode_dminputddf_touchtrigger", DecodeDmInputDDF__TouchTrigger },
    {"encode_dminputddf_texttrigger", EncodeDmInputDDF__TextTrigger },
    {"decode_dminputddf_texttrigger", DecodeDmInputDDF__TextTrigger },
    {"encode_dminputddf_inputbinding", EncodeDmInputDDF__InputBinding },
    {"decode_dminputddf_inputbinding", DecodeDmInputDDF__InputBinding },
    {"encode_dmrenderddf_renderprototypedesc", EncodeDmRenderDDF__RenderPrototypeDesc },
    {"decode_dmrenderddf_renderprototypedesc", DecodeDmRenderDDF__RenderPrototypeDesc },
    {"encode_dmrenderddf_drawtext", EncodeDmRenderDDF__DrawText },
    {"decode_dmrenderddf_drawtext", DecodeDmRenderDDF__DrawText },
    {"encode_dmrenderddf_drawdebugtext", EncodeDmRenderDDF__DrawDebugText },
    {"decode_dmrenderddf_drawdebugtext", DecodeDmRenderDDF__DrawDebugText },
    {"encode_dmrenderddf_drawline", EncodeDmRenderDDF__DrawLine },
    {"decode_dmrenderddf_drawline", DecodeDmRenderDDF__DrawLine },
    {"encode_dmrenderddf_windowresized", EncodeDmRenderDDF__WindowResized },
    {"decode_dmrenderddf_windowresized", DecodeDmRenderDDF__WindowResized },
    {"encode_dmrenderddf_resize", EncodeDmRenderDDF__Resize },
    {"decode_dmrenderddf_resize", DecodeDmRenderDDF__Resize },
    {"encode_dmrenderddf_clearcolor", EncodeDmRenderDDF__ClearColor },
    {"decode_dmrenderddf_clearcolor", DecodeDmRenderDDF__ClearColor },
    {"encode_dmrenderddf_displayprofilequalifier", EncodeDmRenderDDF__DisplayProfileQualifier },
    {"decode_dmrenderddf_displayprofilequalifier", DecodeDmRenderDDF__DisplayProfileQualifier },
    {"encode_dmrenderddf_displayprofile", EncodeDmRenderDDF__DisplayProfile },
    {"decode_dmrenderddf_displayprofile", DecodeDmRenderDDF__DisplayProfile },
    {"encode_dmrenderddf_displayprofiles", EncodeDmRenderDDF__DisplayProfiles },
    {"decode_dmrenderddf_displayprofiles", DecodeDmRenderDDF__DisplayProfiles },
    {"encode_dmrenderddf_fontdesc", EncodeDmRenderDDF__FontDesc },
    {"decode_dmrenderddf_fontdesc", DecodeDmRenderDDF__FontDesc },
    {"encode_dmrenderddf_fontmap", EncodeDmRenderDDF__FontMap },
    {"decode_dmrenderddf_fontmap", DecodeDmRenderDDF__FontMap },
    {"encode_dmrenderddf_materialdesc", EncodeDmRenderDDF__MaterialDesc },
    {"decode_dmrenderddf_materialdesc", DecodeDmRenderDDF__MaterialDesc },
    {"encode_dmscriptddf_luaref", EncodeDmScriptDDF__LuaRef },
    {"decode_dmscriptddf_luaref", DecodeDmScriptDDF__LuaRef },
    {"encode_dmsystemddf_exit", EncodeDmSystemDDF__Exit },
    {"decode_dmsystemddf_exit", DecodeDmSystemDDF__Exit },
    {"encode_dmsystemddf_toggleprofile", EncodeDmSystemDDF__ToggleProfile },
    {"decode_dmsystemddf_toggleprofile", DecodeDmSystemDDF__ToggleProfile },
    {"encode_dmsystemddf_togglephysicsdebug", EncodeDmSystemDDF__TogglePhysicsDebug },
    {"decode_dmsystemddf_togglephysicsdebug", DecodeDmSystemDDF__TogglePhysicsDebug },
    {"encode_dmsystemddf_startrecord", EncodeDmSystemDDF__StartRecord },
    {"decode_dmsystemddf_startrecord", DecodeDmSystemDDF__StartRecord },
    {"encode_dmsystemddf_stoprecord", EncodeDmSystemDDF__StopRecord },
    {"decode_dmsystemddf_stoprecord", DecodeDmSystemDDF__StopRecord },
    {"encode_dmsystemddf_reboot", EncodeDmSystemDDF__Reboot },
    {"decode_dmsystemddf_reboot", DecodeDmSystemDDF__Reboot },
    {"encode_dmsystemddf_setvsync", EncodeDmSystemDDF__SetVsync },
    {"decode_dmsystemddf_setvsync", DecodeDmSystemDDF__SetVsync },
    {"encode_dmsystemddf_setupdatefrequency", EncodeDmSystemDDF__SetUpdateFrequency },
    {"decode_dmsystemddf_setupdatefrequency", DecodeDmSystemDDF__SetUpdateFrequency },
    {"encode_dmscriptdoc_parameter", EncodeDmScriptDoc__Parameter },
    {"decode_dmscriptdoc_parameter", DecodeDmScriptDoc__Parameter },
    {"encode_dmscriptdoc_member", EncodeDmScriptDoc__Member },
    {"decode_dmscriptdoc_member", DecodeDmScriptDoc__Member },
    {"encode_dmscriptdoc_returnvalue", EncodeDmScriptDoc__ReturnValue },
    {"decode_dmscriptdoc_returnvalue", DecodeDmScriptDoc__ReturnValue },
    {"encode_dmscriptdoc_element", EncodeDmScriptDoc__Element },
    {"decode_dmscriptdoc_element", DecodeDmScriptDoc__Element },
    {"encode_dmscriptdoc_info", EncodeDmScriptDoc__Info },
    {"decode_dmscriptdoc_info", DecodeDmScriptDoc__Info },
    {"encode_dmscriptdoc_document", EncodeDmScriptDoc__Document },
    {"decode_dmscriptdoc_document", DecodeDmScriptDoc__Document },
    {"encode_dmhttpddf_stophttp", EncodeDmHttpDDF__StopHttp },
    {"decode_dmhttpddf_stophttp", DecodeDmHttpDDF__StopHttp },
    {"encode_dmhttpddf_httprequest", EncodeDmHttpDDF__HttpRequest },
    {"decode_dmhttpddf_httprequest", DecodeDmHttpDDF__HttpRequest },
    {"encode_dmhttpddf_httpresponse", EncodeDmHttpDDF__HttpResponse },
    {"decode_dmhttpddf_httpresponse", DecodeDmHttpDDF__HttpResponse },
    {"encode_dmluaddf_luasource", EncodeDmLuaDDF__LuaSource },
    {"decode_dmluaddf_luasource", DecodeDmLuaDDF__LuaSource },
    {"encode_dmrigddf_bone", EncodeDmRigDDF__Bone },
    {"decode_dmrigddf_bone", DecodeDmRigDDF__Bone },
    {"encode_dmrigddf_ik", EncodeDmRigDDF__IK },
    {"decode_dmrigddf_ik", DecodeDmRigDDF__IK },
    {"encode_dmrigddf_skeleton", EncodeDmRigDDF__Skeleton },
    {"decode_dmrigddf_skeleton", DecodeDmRigDDF__Skeleton },
    {"encode_dmrigddf_animationtrack", EncodeDmRigDDF__AnimationTrack },
    {"decode_dmrigddf_animationtrack", DecodeDmRigDDF__AnimationTrack },
    {"encode_dmrigddf_eventkey", EncodeDmRigDDF__EventKey },
    {"decode_dmrigddf_eventkey", DecodeDmRigDDF__EventKey },
    {"encode_dmrigddf_eventtrack", EncodeDmRigDDF__EventTrack },
    {"decode_dmrigddf_eventtrack", DecodeDmRigDDF__EventTrack },
    {"encode_dmrigddf_riganimation", EncodeDmRigDDF__RigAnimation },
    {"decode_dmrigddf_riganimation", DecodeDmRigDDF__RigAnimation },
    {"encode_dmrigddf_animationset", EncodeDmRigDDF__AnimationSet },
    {"decode_dmrigddf_animationset", DecodeDmRigDDF__AnimationSet },
    {"encode_dmrigddf_animationinstancedesc", EncodeDmRigDDF__AnimationInstanceDesc },
    {"decode_dmrigddf_animationinstancedesc", DecodeDmRigDDF__AnimationInstanceDesc },
    {"encode_dmrigddf_animationsetdesc", EncodeDmRigDDF__AnimationSetDesc },
    {"decode_dmrigddf_animationsetdesc", DecodeDmRigDDF__AnimationSetDesc },
    {"encode_dmrigddf_mesh", EncodeDmRigDDF__Mesh },
    {"decode_dmrigddf_mesh", DecodeDmRigDDF__Mesh },
    {"encode_dmrigddf_model", EncodeDmRigDDF__Model },
    {"decode_dmrigddf_model", DecodeDmRigDDF__Model },
    {"encode_dmrigddf_meshset", EncodeDmRigDDF__MeshSet },
    {"decode_dmrigddf_meshset", DecodeDmRigDDF__MeshSet },
    {"encode_dmrigddf_rigscene", EncodeDmRigDDF__RigScene },
    {"decode_dmrigddf_rigscene", DecodeDmRigDDF__RigScene },
    {"encode_dmmodelddf_modeldesc", EncodeDmModelDDF__ModelDesc },
    {"decode_dmmodelddf_modeldesc", DecodeDmModelDDF__ModelDesc },
    {"encode_dmmodelddf_model", EncodeDmModelDDF__Model },
    {"decode_dmmodelddf_model", DecodeDmModelDDF__Model },
    {"encode_dmmodelddf_resetconstant", EncodeDmModelDDF__ResetConstant },
    {"decode_dmmodelddf_resetconstant", DecodeDmModelDDF__ResetConstant },
    {"encode_dmmodelddf_settexture", EncodeDmModelDDF__SetTexture },
    {"decode_dmmodelddf_settexture", DecodeDmModelDDF__SetTexture },
    {"encode_dmmodelddf_modelplayanimation", EncodeDmModelDDF__ModelPlayAnimation },
    {"decode_dmmodelddf_modelplayanimation", DecodeDmModelDDF__ModelPlayAnimation },
    {"encode_dmmodelddf_modelcancelanimation", EncodeDmModelDDF__ModelCancelAnimation },
    {"decode_dmmodelddf_modelcancelanimation", DecodeDmModelDDF__ModelCancelAnimation },
    {"encode_dmmodelddf_modelanimationdone", EncodeDmModelDDF__ModelAnimationDone },
    {"decode_dmmodelddf_modelanimationdone", DecodeDmModelDDF__ModelAnimationDone },
    {"encode_dmmeshddf_meshdesc", EncodeDmMeshDDF__MeshDesc },
    {"decode_dmmeshddf_meshdesc", DecodeDmMeshDDF__MeshDesc },
    {"encode_dmgamesystemddf_labeldesc", EncodeDmGameSystemDDF__LabelDesc },
    {"decode_dmgamesystemddf_labeldesc", DecodeDmGameSystemDDF__LabelDesc },
    {"encode_dmgamesystemddf_settext", EncodeDmGameSystemDDF__SetText },
    {"decode_dmgamesystemddf_settext", DecodeDmGameSystemDDF__SetText },
    {"encode_dmgamesystemddf_convexhull", EncodeDmGameSystemDDF__ConvexHull },
    {"decode_dmgamesystemddf_convexhull", DecodeDmGameSystemDDF__ConvexHull },
    {"encode_dmgamesystemddf_cue", EncodeDmGameSystemDDF__Cue },
    {"decode_dmgamesystemddf_cue", DecodeDmGameSystemDDF__Cue },
    {"encode_dmgamesystemddf_animation", EncodeDmGameSystemDDF__Animation },
    {"decode_dmgamesystemddf_animation", DecodeDmGameSystemDDF__Animation },
    {"encode_dmgamesystemddf_tileset", EncodeDmGameSystemDDF__TileSet },
    {"decode_dmgamesystemddf_tileset", DecodeDmGameSystemDDF__TileSet },
    {"encode_dmgamesystemddf_tilecell", EncodeDmGameSystemDDF__TileCell },
    {"decode_dmgamesystemddf_tilecell", DecodeDmGameSystemDDF__TileCell },
    {"encode_dmgamesystemddf_tilelayer", EncodeDmGameSystemDDF__TileLayer },
    {"decode_dmgamesystemddf_tilelayer", DecodeDmGameSystemDDF__TileLayer },
    {"encode_dmgamesystemddf_tilegrid", EncodeDmGameSystemDDF__TileGrid },
    {"decode_dmgamesystemddf_tilegrid", DecodeDmGameSystemDDF__TileGrid },
    {"encode_dmgamesystemddf_settile", EncodeDmGameSystemDDF__SetTile },
    {"decode_dmgamesystemddf_settile", DecodeDmGameSystemDDF__SetTile },
    {"encode_dmgamesystemddf_setconstanttilemap", EncodeDmGameSystemDDF__SetConstantTileMap },
    {"decode_dmgamesystemddf_setconstanttilemap", DecodeDmGameSystemDDF__SetConstantTileMap },
    {"encode_dmgamesystemddf_resetconstanttilemap", EncodeDmGameSystemDDF__ResetConstantTileMap },
    {"decode_dmgamesystemddf_resetconstanttilemap", DecodeDmGameSystemDDF__ResetConstantTileMap },
    {"encode_dmgamesystemddf_atlasimage", EncodeDmGameSystemDDF__AtlasImage },
    {"decode_dmgamesystemddf_atlasimage", DecodeDmGameSystemDDF__AtlasImage },
    {"encode_dmgamesystemddf_atlasanimation", EncodeDmGameSystemDDF__AtlasAnimation },
    {"decode_dmgamesystemddf_atlasanimation", DecodeDmGameSystemDDF__AtlasAnimation },
    {"encode_dmgamesystemddf_atlas", EncodeDmGameSystemDDF__Atlas },
    {"decode_dmgamesystemddf_atlas", DecodeDmGameSystemDDF__Atlas },
    {"encode_dmbufferddf_streamdesc", EncodeDmBufferDDF__StreamDesc },
    {"decode_dmbufferddf_streamdesc", DecodeDmBufferDDF__StreamDesc },
    {"encode_dmbufferddf_bufferdesc", EncodeDmBufferDDF__BufferDesc },
    {"decode_dmbufferddf_bufferdesc", DecodeDmBufferDDF__BufferDesc },
    {"encode_dmsoundddf_sounddesc", EncodeDmSoundDDF__SoundDesc },
    {"decode_dmsoundddf_sounddesc", DecodeDmSoundDDF__SoundDesc },
    {"encode_dmgamesysddf_cameradesc", EncodeDmGamesysDDF__CameraDesc },
    {"decode_dmgamesysddf_cameradesc", DecodeDmGamesysDDF__CameraDesc },
    {"encode_dmgamesysddf_setcamera", EncodeDmGamesysDDF__SetCamera },
    {"decode_dmgamesysddf_setcamera", DecodeDmGamesysDDF__SetCamera },
    {"encode_dmgamesysddf_acquirecamerafocus", EncodeDmGamesysDDF__AcquireCameraFocus },
    {"decode_dmgamesysddf_acquirecamerafocus", DecodeDmGamesysDDF__AcquireCameraFocus },
    {"encode_dmgamesysddf_releasecamerafocus", EncodeDmGamesysDDF__ReleaseCameraFocus },
    {"decode_dmgamesysddf_releasecamerafocus", DecodeDmGamesysDDF__ReleaseCameraFocus },
    {"encode_dmgamesystemddf_spritedesc", EncodeDmGameSystemDDF__SpriteDesc },
    {"decode_dmgamesystemddf_spritedesc", DecodeDmGameSystemDDF__SpriteDesc },
    {"encode_dmgamesystemddf_playanimation", EncodeDmGameSystemDDF__PlayAnimation },
    {"decode_dmgamesystemddf_playanimation", DecodeDmGameSystemDDF__PlayAnimation },
    {"encode_dmgamesystemddf_animationdone", EncodeDmGameSystemDDF__AnimationDone },
    {"decode_dmgamesystemddf_animationdone", DecodeDmGameSystemDDF__AnimationDone },
    {"encode_dmgamesystemddf_setfliphorizontal", EncodeDmGameSystemDDF__SetFlipHorizontal },
    {"decode_dmgamesystemddf_setfliphorizontal", DecodeDmGameSystemDDF__SetFlipHorizontal },
    {"encode_dmgamesystemddf_setflipvertical", EncodeDmGameSystemDDF__SetFlipVertical },
    {"decode_dmgamesystemddf_setflipvertical", DecodeDmGameSystemDDF__SetFlipVertical },
    {"encode_dmgamesystemddf_texturesetanimation", EncodeDmGameSystemDDF__TextureSetAnimation },
    {"decode_dmgamesystemddf_texturesetanimation", DecodeDmGameSystemDDF__TextureSetAnimation },
    {"encode_dmgamesystemddf_spritegeometry", EncodeDmGameSystemDDF__SpriteGeometry },
    {"decode_dmgamesystemddf_spritegeometry", DecodeDmGameSystemDDF__SpriteGeometry },
    {"encode_dmgamesystemddf_textureset", EncodeDmGameSystemDDF__TextureSet },
    {"decode_dmgamesystemddf_textureset", DecodeDmGameSystemDDF__TextureSet },
    {"encode_dmphysicsddf_convexshape", EncodeDmPhysicsDDF__ConvexShape },
    {"decode_dmphysicsddf_convexshape", DecodeDmPhysicsDDF__ConvexShape },
    {"encode_dmphysicsddf_collisionshape", EncodeDmPhysicsDDF__CollisionShape },
    {"decode_dmphysicsddf_collisionshape", DecodeDmPhysicsDDF__CollisionShape },
    {"encode_dmphysicsddf_collisionobjectdesc", EncodeDmPhysicsDDF__CollisionObjectDesc },
    {"decode_dmphysicsddf_collisionobjectdesc", DecodeDmPhysicsDDF__CollisionObjectDesc },
    {"encode_dmphysicsddf_applyforce", EncodeDmPhysicsDDF__ApplyForce },
    {"decode_dmphysicsddf_applyforce", DecodeDmPhysicsDDF__ApplyForce },
    {"encode_dmphysicsddf_collisionresponse", EncodeDmPhysicsDDF__CollisionResponse },
    {"decode_dmphysicsddf_collisionresponse", DecodeDmPhysicsDDF__CollisionResponse },
    {"encode_dmphysicsddf_contactpointresponse", EncodeDmPhysicsDDF__ContactPointResponse },
    {"decode_dmphysicsddf_contactpointresponse", DecodeDmPhysicsDDF__ContactPointResponse },
    {"encode_dmphysicsddf_triggerresponse", EncodeDmPhysicsDDF__TriggerResponse },
    {"decode_dmphysicsddf_triggerresponse", DecodeDmPhysicsDDF__TriggerResponse },
    {"encode_dmphysicsddf_requestraycast", EncodeDmPhysicsDDF__RequestRayCast },
    {"decode_dmphysicsddf_requestraycast", DecodeDmPhysicsDDF__RequestRayCast },
    {"encode_dmphysicsddf_raycastresponse", EncodeDmPhysicsDDF__RayCastResponse },
    {"decode_dmphysicsddf_raycastresponse", DecodeDmPhysicsDDF__RayCastResponse },
    {"encode_dmphysicsddf_raycastmissed", EncodeDmPhysicsDDF__RayCastMissed },
    {"decode_dmphysicsddf_raycastmissed", DecodeDmPhysicsDDF__RayCastMissed },
    {"encode_dmphysicsddf_requestvelocity", EncodeDmPhysicsDDF__RequestVelocity },
    {"decode_dmphysicsddf_requestvelocity", DecodeDmPhysicsDDF__RequestVelocity },
    {"encode_dmphysicsddf_velocityresponse", EncodeDmPhysicsDDF__VelocityResponse },
    {"decode_dmphysicsddf_velocityresponse", DecodeDmPhysicsDDF__VelocityResponse },
    {"encode_dmphysicsddf_setgridshapehull", EncodeDmPhysicsDDF__SetGridShapeHull },
    {"decode_dmphysicsddf_setgridshapehull", DecodeDmPhysicsDDF__SetGridShapeHull },
    {"encode_dmphysicsddf_enablegridshapelayer", EncodeDmPhysicsDDF__EnableGridShapeLayer },
    {"decode_dmphysicsddf_enablegridshapelayer", DecodeDmPhysicsDDF__EnableGridShapeLayer },
    {"encode_dmgamesystemddf_factorydesc", EncodeDmGameSystemDDF__FactoryDesc },
    {"decode_dmgamesystemddf_factorydesc", DecodeDmGameSystemDDF__FactoryDesc },
    {"encode_dmgamesystemddf_collectionfactorydesc", EncodeDmGameSystemDDF__CollectionFactoryDesc },
    {"decode_dmgamesystemddf_collectionfactorydesc", DecodeDmGameSystemDDF__CollectionFactoryDesc },
    {"encode_dmgamesystemddf_create", EncodeDmGameSystemDDF__Create },
    {"decode_dmgamesystemddf_create", DecodeDmGameSystemDDF__Create },
    {"encode_dmgamesystemddf_collectionproxydesc", EncodeDmGameSystemDDF__CollectionProxyDesc },
    {"decode_dmgamesystemddf_collectionproxydesc", DecodeDmGameSystemDDF__CollectionProxyDesc },
    {"encode_dmgamesystemddf_settimestep", EncodeDmGameSystemDDF__SetTimeStep },
    {"decode_dmgamesystemddf_settimestep", DecodeDmGameSystemDDF__SetTimeStep },
    {"encode_dmgamesystemddf_lightdesc", EncodeDmGameSystemDDF__LightDesc },
    {"decode_dmgamesystemddf_lightdesc", DecodeDmGameSystemDDF__LightDesc },
    {"encode_dmgamesystemddf_setlight", EncodeDmGameSystemDDF__SetLight },
    {"decode_dmgamesystemddf_setlight", DecodeDmGameSystemDDF__SetLight },
    {"encode_dmgamesystemddf_setviewprojection", EncodeDmGameSystemDDF__SetViewProjection },
    {"decode_dmgamesystemddf_setviewprojection", DecodeDmGameSystemDDF__SetViewProjection },
    {"encode_dmgamesystemddf_playsound", EncodeDmGameSystemDDF__PlaySound },
    {"decode_dmgamesystemddf_playsound", DecodeDmGameSystemDDF__PlaySound },
    {"encode_dmgamesystemddf_stopsound", EncodeDmGameSystemDDF__StopSound },
    {"decode_dmgamesystemddf_stopsound", DecodeDmGameSystemDDF__StopSound },
    {"encode_dmgamesystemddf_pausesound", EncodeDmGameSystemDDF__PauseSound },
    {"decode_dmgamesystemddf_pausesound", DecodeDmGameSystemDDF__PauseSound },
    {"encode_dmgamesystemddf_sounddone", EncodeDmGameSystemDDF__SoundDone },
    {"decode_dmgamesystemddf_sounddone", DecodeDmGameSystemDDF__SoundDone },
    {"encode_dmgamesystemddf_setgain", EncodeDmGameSystemDDF__SetGain },
    {"decode_dmgamesystemddf_setgain", DecodeDmGameSystemDDF__SetGain },
    {"encode_dmgamesystemddf_setpan", EncodeDmGameSystemDDF__SetPan },
    {"decode_dmgamesystemddf_setpan", DecodeDmGameSystemDDF__SetPan },
    {"encode_dmgamesystemddf_setspeed", EncodeDmGameSystemDDF__SetSpeed },
    {"decode_dmgamesystemddf_setspeed", DecodeDmGameSystemDDF__SetSpeed },
    {"encode_dmgamesystemddf_playparticlefx", EncodeDmGameSystemDDF__PlayParticleFX },
    {"decode_dmgamesystemddf_playparticlefx", DecodeDmGameSystemDDF__PlayParticleFX },
    {"encode_dmgamesystemddf_stopparticlefx", EncodeDmGameSystemDDF__StopParticleFX },
    {"decode_dmgamesystemddf_stopparticlefx", DecodeDmGameSystemDDF__StopParticleFX },
    {"encode_dmgamesystemddf_setconstantparticlefx", EncodeDmGameSystemDDF__SetConstantParticleFX },
    {"decode_dmgamesystemddf_setconstantparticlefx", DecodeDmGameSystemDDF__SetConstantParticleFX },
    {"encode_dmgamesystemddf_resetconstantparticlefx", EncodeDmGameSystemDDF__ResetConstantParticleFX },
    {"decode_dmgamesystemddf_resetconstantparticlefx", DecodeDmGameSystemDDF__ResetConstantParticleFX },
    {"encode_dmgamesystemddf_setconstant", EncodeDmGameSystemDDF__SetConstant },
    {"decode_dmgamesystemddf_setconstant", DecodeDmGameSystemDDF__SetConstant },
    {"encode_dmgamesystemddf_resetconstant", EncodeDmGameSystemDDF__ResetConstant },
    {"decode_dmgamesystemddf_resetconstant", DecodeDmGameSystemDDF__ResetConstant },
    {"encode_dmgamesystemddf_setscale", EncodeDmGameSystemDDF__SetScale },
    {"decode_dmgamesystemddf_setscale", DecodeDmGameSystemDDF__SetScale },
    {"encode_dmguiddf_nodedesc", EncodeDmGuiDDF__NodeDesc },
    {"decode_dmguiddf_nodedesc", DecodeDmGuiDDF__NodeDesc },
    {"encode_dmguiddf_scenedesc", EncodeDmGuiDDF__SceneDesc },
    {"decode_dmguiddf_scenedesc", DecodeDmGuiDDF__SceneDesc },
    {"encode_dmguiddf_layoutchanged", EncodeDmGuiDDF__LayoutChanged },
    {"decode_dmguiddf_layoutchanged", DecodeDmGuiDDF__LayoutChanged },
    {"encode_dmliveupdateddf_hashdigest", EncodeDmLiveUpdateDDF__HashDigest },
    {"decode_dmliveupdateddf_hashdigest", DecodeDmLiveUpdateDDF__HashDigest },
    {"encode_dmliveupdateddf_manifestheader", EncodeDmLiveUpdateDDF__ManifestHeader },
    {"decode_dmliveupdateddf_manifestheader", DecodeDmLiveUpdateDDF__ManifestHeader },
    {"encode_dmliveupdateddf_resourceentry", EncodeDmLiveUpdateDDF__ResourceEntry },
    {"decode_dmliveupdateddf_resourceentry", DecodeDmLiveUpdateDDF__ResourceEntry },
    {"encode_dmliveupdateddf_manifestdata", EncodeDmLiveUpdateDDF__ManifestData },
    {"decode_dmliveupdateddf_manifestdata", DecodeDmLiveUpdateDDF__ManifestData },
    {"encode_dmliveupdateddf_manifestfile", EncodeDmLiveUpdateDDF__ManifestFile },
    {"decode_dmliveupdateddf_manifestfile", DecodeDmLiveUpdateDDF__ManifestFile },
    {"encode_dmresourceddf_reload", EncodeDmResourceDDF__Reload },
    {"decode_dmresourceddf_reload", DecodeDmResourceDDF__Reload },
    {"encode_dmgraphics_cubemap", EncodeDmGraphics__Cubemap },
    {"decode_dmgraphics_cubemap", DecodeDmGraphics__Cubemap },
    {"encode_dmgraphics_textureimage", EncodeDmGraphics__TextureImage },
    {"decode_dmgraphics_textureimage", DecodeDmGraphics__TextureImage },
    {"encode_dmgraphics_textureformatalternative", EncodeDmGraphics__TextureFormatAlternative },
    {"decode_dmgraphics_textureformatalternative", DecodeDmGraphics__TextureFormatAlternative },
    {"encode_dmgraphics_pathsettings", EncodeDmGraphics__PathSettings },
    {"decode_dmgraphics_pathsettings", DecodeDmGraphics__PathSettings },
    {"encode_dmgraphics_platformprofile", EncodeDmGraphics__PlatformProfile },
    {"decode_dmgraphics_platformprofile", DecodeDmGraphics__PlatformProfile },
    {"encode_dmgraphics_textureprofile", EncodeDmGraphics__TextureProfile },
    {"decode_dmgraphics_textureprofile", DecodeDmGraphics__TextureProfile },
    {"encode_dmgraphics_textureprofiles", EncodeDmGraphics__TextureProfiles },
    {"decode_dmgraphics_textureprofiles", DecodeDmGraphics__TextureProfiles },
    {"encode_dmgraphics_shaderdesc", EncodeDmGraphics__ShaderDesc },
    {"decode_dmgraphics_shaderdesc", DecodeDmGraphics__ShaderDesc },
    {"encode_dmpropertiesddf_propertydeclarationentry", EncodeDmPropertiesDDF__PropertyDeclarationEntry },
    {"decode_dmpropertiesddf_propertydeclarationentry", DecodeDmPropertiesDDF__PropertyDeclarationEntry },
    {"encode_dmpropertiesddf_propertydeclarations", EncodeDmPropertiesDDF__PropertyDeclarations },
    {"decode_dmpropertiesddf_propertydeclarations", DecodeDmPropertiesDDF__PropertyDeclarations },
    {"encode_dmgameobjectddf_propertydesc", EncodeDmGameObjectDDF__PropertyDesc },
    {"decode_dmgameobjectddf_propertydesc", DecodeDmGameObjectDDF__PropertyDesc },
    {"encode_dmgameobjectddf_componentdesc", EncodeDmGameObjectDDF__ComponentDesc },
    {"decode_dmgameobjectddf_componentdesc", DecodeDmGameObjectDDF__ComponentDesc },
    {"encode_dmgameobjectddf_embeddedcomponentdesc", EncodeDmGameObjectDDF__EmbeddedComponentDesc },
    {"decode_dmgameobjectddf_embeddedcomponentdesc", DecodeDmGameObjectDDF__EmbeddedComponentDesc },
    {"encode_dmgameobjectddf_prototypedesc", EncodeDmGameObjectDDF__PrototypeDesc },
    {"decode_dmgameobjectddf_prototypedesc", DecodeDmGameObjectDDF__PrototypeDesc },
    {"encode_dmgameobjectddf_componentpropertydesc", EncodeDmGameObjectDDF__ComponentPropertyDesc },
    {"decode_dmgameobjectddf_componentpropertydesc", DecodeDmGameObjectDDF__ComponentPropertyDesc },
    {"encode_dmgameobjectddf_componentypedesc", EncodeDmGameObjectDDF__ComponenTypeDesc },
    {"decode_dmgameobjectddf_componentypedesc", DecodeDmGameObjectDDF__ComponenTypeDesc },
    {"encode_dmgameobjectddf_instancedesc", EncodeDmGameObjectDDF__InstanceDesc },
    {"decode_dmgameobjectddf_instancedesc", DecodeDmGameObjectDDF__InstanceDesc },
    {"encode_dmgameobjectddf_embeddedinstancedesc", EncodeDmGameObjectDDF__EmbeddedInstanceDesc },
    {"decode_dmgameobjectddf_embeddedinstancedesc", DecodeDmGameObjectDDF__EmbeddedInstanceDesc },
    {"encode_dmgameobjectddf_instancepropertydesc", EncodeDmGameObjectDDF__InstancePropertyDesc },
    {"decode_dmgameobjectddf_instancepropertydesc", DecodeDmGameObjectDDF__InstancePropertyDesc },
    {"encode_dmgameobjectddf_collectioninstancedesc", EncodeDmGameObjectDDF__CollectionInstanceDesc },
    {"decode_dmgameobjectddf_collectioninstancedesc", DecodeDmGameObjectDDF__CollectionInstanceDesc },
    {"encode_dmgameobjectddf_collectiondesc", EncodeDmGameObjectDDF__CollectionDesc },
    {"decode_dmgameobjectddf_collectiondesc", DecodeDmGameObjectDDF__CollectionDesc },
    {"encode_dmgameobjectddf_acquireinputfocus", EncodeDmGameObjectDDF__AcquireInputFocus },
    {"decode_dmgameobjectddf_acquireinputfocus", DecodeDmGameObjectDDF__AcquireInputFocus },
    {"encode_dmgameobjectddf_releaseinputfocus", EncodeDmGameObjectDDF__ReleaseInputFocus },
    {"decode_dmgameobjectddf_releaseinputfocus", DecodeDmGameObjectDDF__ReleaseInputFocus },
    {"encode_dmgameobjectddf_requesttransform", EncodeDmGameObjectDDF__RequestTransform },
    {"decode_dmgameobjectddf_requesttransform", DecodeDmGameObjectDDF__RequestTransform },
    {"encode_dmgameobjectddf_transformresponse", EncodeDmGameObjectDDF__TransformResponse },
    {"decode_dmgameobjectddf_transformresponse", DecodeDmGameObjectDDF__TransformResponse },
    {"encode_dmgameobjectddf_setparent", EncodeDmGameObjectDDF__SetParent },
    {"decode_dmgameobjectddf_setparent", DecodeDmGameObjectDDF__SetParent },
    {"encode_dmgameobjectddf_enable", EncodeDmGameObjectDDF__Enable },
    {"decode_dmgameobjectddf_enable", DecodeDmGameObjectDDF__Enable },
    {"encode_dmgameobjectddf_disable", EncodeDmGameObjectDDF__Disable },
    {"decode_dmgameobjectddf_disable", DecodeDmGameObjectDDF__Disable },
    {"encode_dmgameobjectddf_scriptmessage", EncodeDmGameObjectDDF__ScriptMessage },
    {"decode_dmgameobjectddf_scriptmessage", DecodeDmGameObjectDDF__ScriptMessage },
    {"encode_dmluaddf_luamodule", EncodeDmLuaDDF__LuaModule },
    {"decode_dmluaddf_luamodule", DecodeDmLuaDDF__LuaModule },
    {"encode_dmengineddf_hideapp", EncodeDmEngineDDF__HideApp },
    {"decode_dmengineddf_hideapp", DecodeDmEngineDDF__HideApp },
    {"encode_dmengineddf_runscript", EncodeDmEngineDDF__RunScript },
    {"decode_dmengineddf_runscript", DecodeDmEngineDDF__RunScript },
    {"encode_dmparticleddf_splinepoint", EncodeDmParticleDDF__SplinePoint },
    {"decode_dmparticleddf_splinepoint", DecodeDmParticleDDF__SplinePoint },
    {"encode_dmparticleddf_modifier", EncodeDmParticleDDF__Modifier },
    {"decode_dmparticleddf_modifier", DecodeDmParticleDDF__Modifier },
    {"encode_dmparticleddf_emitter", EncodeDmParticleDDF__Emitter },
    {"decode_dmparticleddf_emitter", DecodeDmParticleDDF__Emitter },
    {"encode_dmparticleddf_particlefx", EncodeDmParticleDDF__ParticleFX },
    {"decode_dmparticleddf_particlefx", DecodeDmParticleDDF__ParticleFX },
    {0,0}
};

static void LuaInit(lua_State* L)
{
    DM_LUA_STACK_CHECK(L, 0);
    int top = lua_gettop(L);
    luaL_register(L, MODULE_NAME, Module_methods);

    #define SETCONSTANT(name, val) \
    lua_pushnumber(L, (lua_Number) val); \
    lua_setfield(L, -2, #name);

    // Key
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_SPACE, DM_INPUT_DDF__KEY__KEY_SPACE);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_EXCLAIM, DM_INPUT_DDF__KEY__KEY_EXCLAIM);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_QUOTEDBL, DM_INPUT_DDF__KEY__KEY_QUOTEDBL);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_HASH, DM_INPUT_DDF__KEY__KEY_HASH);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_DOLLAR, DM_INPUT_DDF__KEY__KEY_DOLLAR);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_AMPERSAND, DM_INPUT_DDF__KEY__KEY_AMPERSAND);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_QUOTE, DM_INPUT_DDF__KEY__KEY_QUOTE);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_LPAREN, DM_INPUT_DDF__KEY__KEY_LPAREN);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_RPAREN, DM_INPUT_DDF__KEY__KEY_RPAREN);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_ASTERISK, DM_INPUT_DDF__KEY__KEY_ASTERISK);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_PLUS, DM_INPUT_DDF__KEY__KEY_PLUS);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_COMMA, DM_INPUT_DDF__KEY__KEY_COMMA);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_MINUS, DM_INPUT_DDF__KEY__KEY_MINUS);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_PERIOD, DM_INPUT_DDF__KEY__KEY_PERIOD);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_SLASH, DM_INPUT_DDF__KEY__KEY_SLASH);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_0, DM_INPUT_DDF__KEY__KEY_0);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_1, DM_INPUT_DDF__KEY__KEY_1);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_2, DM_INPUT_DDF__KEY__KEY_2);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_3, DM_INPUT_DDF__KEY__KEY_3);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_4, DM_INPUT_DDF__KEY__KEY_4);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_5, DM_INPUT_DDF__KEY__KEY_5);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_6, DM_INPUT_DDF__KEY__KEY_6);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_7, DM_INPUT_DDF__KEY__KEY_7);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_8, DM_INPUT_DDF__KEY__KEY_8);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_9, DM_INPUT_DDF__KEY__KEY_9);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_COLON, DM_INPUT_DDF__KEY__KEY_COLON);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_SEMICOLON, DM_INPUT_DDF__KEY__KEY_SEMICOLON);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_LESS, DM_INPUT_DDF__KEY__KEY_LESS);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_EQUALS, DM_INPUT_DDF__KEY__KEY_EQUALS);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_GREATER, DM_INPUT_DDF__KEY__KEY_GREATER);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_QUESTION, DM_INPUT_DDF__KEY__KEY_QUESTION);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_AT, DM_INPUT_DDF__KEY__KEY_AT);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_A, DM_INPUT_DDF__KEY__KEY_A);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_B, DM_INPUT_DDF__KEY__KEY_B);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_C, DM_INPUT_DDF__KEY__KEY_C);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_D, DM_INPUT_DDF__KEY__KEY_D);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_E, DM_INPUT_DDF__KEY__KEY_E);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F, DM_INPUT_DDF__KEY__KEY_F);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_G, DM_INPUT_DDF__KEY__KEY_G);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_H, DM_INPUT_DDF__KEY__KEY_H);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_I, DM_INPUT_DDF__KEY__KEY_I);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_J, DM_INPUT_DDF__KEY__KEY_J);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_K, DM_INPUT_DDF__KEY__KEY_K);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_L, DM_INPUT_DDF__KEY__KEY_L);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_M, DM_INPUT_DDF__KEY__KEY_M);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_N, DM_INPUT_DDF__KEY__KEY_N);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_O, DM_INPUT_DDF__KEY__KEY_O);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_P, DM_INPUT_DDF__KEY__KEY_P);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_Q, DM_INPUT_DDF__KEY__KEY_Q);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_R, DM_INPUT_DDF__KEY__KEY_R);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_S, DM_INPUT_DDF__KEY__KEY_S);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_T, DM_INPUT_DDF__KEY__KEY_T);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_U, DM_INPUT_DDF__KEY__KEY_U);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_V, DM_INPUT_DDF__KEY__KEY_V);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_W, DM_INPUT_DDF__KEY__KEY_W);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_X, DM_INPUT_DDF__KEY__KEY_X);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_Y, DM_INPUT_DDF__KEY__KEY_Y);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_Z, DM_INPUT_DDF__KEY__KEY_Z);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_LBRACKET, DM_INPUT_DDF__KEY__KEY_LBRACKET);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_BACKSLASH, DM_INPUT_DDF__KEY__KEY_BACKSLASH);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_RBRACKET, DM_INPUT_DDF__KEY__KEY_RBRACKET);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_CARET, DM_INPUT_DDF__KEY__KEY_CARET);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_UNDERSCORE, DM_INPUT_DDF__KEY__KEY_UNDERSCORE);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_BACKQUOTE, DM_INPUT_DDF__KEY__KEY_BACKQUOTE);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_LBRACE, DM_INPUT_DDF__KEY__KEY_LBRACE);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_PIPE, DM_INPUT_DDF__KEY__KEY_PIPE);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_RBRACE, DM_INPUT_DDF__KEY__KEY_RBRACE);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_TILDE, DM_INPUT_DDF__KEY__KEY_TILDE);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_ESC, DM_INPUT_DDF__KEY__KEY_ESC);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F1, DM_INPUT_DDF__KEY__KEY_F1);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F2, DM_INPUT_DDF__KEY__KEY_F2);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F3, DM_INPUT_DDF__KEY__KEY_F3);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F4, DM_INPUT_DDF__KEY__KEY_F4);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F5, DM_INPUT_DDF__KEY__KEY_F5);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F6, DM_INPUT_DDF__KEY__KEY_F6);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F7, DM_INPUT_DDF__KEY__KEY_F7);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F8, DM_INPUT_DDF__KEY__KEY_F8);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F9, DM_INPUT_DDF__KEY__KEY_F9);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F10, DM_INPUT_DDF__KEY__KEY_F10);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F11, DM_INPUT_DDF__KEY__KEY_F11);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_F12, DM_INPUT_DDF__KEY__KEY_F12);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_UP, DM_INPUT_DDF__KEY__KEY_UP);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_DOWN, DM_INPUT_DDF__KEY__KEY_DOWN);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_LEFT, DM_INPUT_DDF__KEY__KEY_LEFT);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_RIGHT, DM_INPUT_DDF__KEY__KEY_RIGHT);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_LSHIFT, DM_INPUT_DDF__KEY__KEY_LSHIFT);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_RSHIFT, DM_INPUT_DDF__KEY__KEY_RSHIFT);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_LCTRL, DM_INPUT_DDF__KEY__KEY_LCTRL);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_RCTRL, DM_INPUT_DDF__KEY__KEY_RCTRL);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_LALT, DM_INPUT_DDF__KEY__KEY_LALT);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_RALT, DM_INPUT_DDF__KEY__KEY_RALT);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_TAB, DM_INPUT_DDF__KEY__KEY_TAB);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_ENTER, DM_INPUT_DDF__KEY__KEY_ENTER);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_BACKSPACE, DM_INPUT_DDF__KEY__KEY_BACKSPACE);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_INSERT, DM_INPUT_DDF__KEY__KEY_INSERT);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_DEL, DM_INPUT_DDF__KEY__KEY_DEL);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_PAGEUP, DM_INPUT_DDF__KEY__KEY_PAGEUP);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_PAGEDOWN, DM_INPUT_DDF__KEY__KEY_PAGEDOWN);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_HOME, DM_INPUT_DDF__KEY__KEY_HOME);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_END, DM_INPUT_DDF__KEY__KEY_END);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_0, DM_INPUT_DDF__KEY__KEY_KP_0);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_1, DM_INPUT_DDF__KEY__KEY_KP_1);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_2, DM_INPUT_DDF__KEY__KEY_KP_2);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_3, DM_INPUT_DDF__KEY__KEY_KP_3);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_4, DM_INPUT_DDF__KEY__KEY_KP_4);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_5, DM_INPUT_DDF__KEY__KEY_KP_5);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_6, DM_INPUT_DDF__KEY__KEY_KP_6);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_7, DM_INPUT_DDF__KEY__KEY_KP_7);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_8, DM_INPUT_DDF__KEY__KEY_KP_8);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_9, DM_INPUT_DDF__KEY__KEY_KP_9);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_DIVIDE, DM_INPUT_DDF__KEY__KEY_KP_DIVIDE);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_MULTIPLY, DM_INPUT_DDF__KEY__KEY_KP_MULTIPLY);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_SUBTRACT, DM_INPUT_DDF__KEY__KEY_KP_SUBTRACT);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_ADD, DM_INPUT_DDF__KEY__KEY_KP_ADD);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_DECIMAL, DM_INPUT_DDF__KEY__KEY_KP_DECIMAL);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_EQUAL, DM_INPUT_DDF__KEY__KEY_KP_EQUAL);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_ENTER, DM_INPUT_DDF__KEY__KEY_KP_ENTER);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_KP_NUM_LOCK, DM_INPUT_DDF__KEY__KEY_KP_NUM_LOCK);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_CAPS_LOCK, DM_INPUT_DDF__KEY__KEY_CAPS_LOCK);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_SCROLL_LOCK, DM_INPUT_DDF__KEY__KEY_SCROLL_LOCK);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_PAUSE, DM_INPUT_DDF__KEY__KEY_PAUSE);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_LSUPER, DM_INPUT_DDF__KEY__KEY_LSUPER);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_RSUPER, DM_INPUT_DDF__KEY__KEY_RSUPER);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_MENU, DM_INPUT_DDF__KEY__KEY_MENU);
    SETCONSTANT(DM_INPUT_DDF__KEY_KEY_BACK, DM_INPUT_DDF__KEY__KEY_BACK);
    SETCONSTANT(DM_INPUT_DDF__KEY_MAX_KEY_COUNT, DM_INPUT_DDF__KEY__MAX_KEY_COUNT);
    // Mouse
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_WHEEL_UP, DM_INPUT_DDF__MOUSE__MOUSE_WHEEL_UP);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_WHEEL_DOWN, DM_INPUT_DDF__MOUSE__MOUSE_WHEEL_DOWN);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_LEFT, DM_INPUT_DDF__MOUSE__MOUSE_BUTTON_LEFT);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_MIDDLE, DM_INPUT_DDF__MOUSE__MOUSE_BUTTON_MIDDLE);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_RIGHT, DM_INPUT_DDF__MOUSE__MOUSE_BUTTON_RIGHT);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_1, DM_INPUT_DDF__MOUSE__MOUSE_BUTTON_1);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_2, DM_INPUT_DDF__MOUSE__MOUSE_BUTTON_2);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_3, DM_INPUT_DDF__MOUSE__MOUSE_BUTTON_3);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_4, DM_INPUT_DDF__MOUSE__MOUSE_BUTTON_4);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_5, DM_INPUT_DDF__MOUSE__MOUSE_BUTTON_5);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_6, DM_INPUT_DDF__MOUSE__MOUSE_BUTTON_6);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_7, DM_INPUT_DDF__MOUSE__MOUSE_BUTTON_7);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_8, DM_INPUT_DDF__MOUSE__MOUSE_BUTTON_8);
    SETCONSTANT(DM_INPUT_DDF__MOUSE_MAX_MOUSE_COUNT, DM_INPUT_DDF__MOUSE__MAX_MOUSE_COUNT);
    // Gamepad
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_LEFT, DM_INPUT_DDF__GAMEPAD__GAMEPAD_LSTICK_LEFT);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_RIGHT, DM_INPUT_DDF__GAMEPAD__GAMEPAD_LSTICK_RIGHT);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_DOWN, DM_INPUT_DDF__GAMEPAD__GAMEPAD_LSTICK_DOWN);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_UP, DM_INPUT_DDF__GAMEPAD__GAMEPAD_LSTICK_UP);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_CLICK, DM_INPUT_DDF__GAMEPAD__GAMEPAD_LSTICK_CLICK);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_LTRIGGER, DM_INPUT_DDF__GAMEPAD__GAMEPAD_LTRIGGER);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSHOULDER, DM_INPUT_DDF__GAMEPAD__GAMEPAD_LSHOULDER);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_LEFT, DM_INPUT_DDF__GAMEPAD__GAMEPAD_LPAD_LEFT);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_RIGHT, DM_INPUT_DDF__GAMEPAD__GAMEPAD_LPAD_RIGHT);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_DOWN, DM_INPUT_DDF__GAMEPAD__GAMEPAD_LPAD_DOWN);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_UP, DM_INPUT_DDF__GAMEPAD__GAMEPAD_LPAD_UP);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_LEFT, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RSTICK_LEFT);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_RIGHT, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RSTICK_RIGHT);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_DOWN, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RSTICK_DOWN);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_UP, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RSTICK_UP);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_CLICK, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RSTICK_CLICK);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RTRIGGER, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RTRIGGER);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSHOULDER, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RSHOULDER);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_LEFT, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RPAD_LEFT);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_RIGHT, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RPAD_RIGHT);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_DOWN, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RPAD_DOWN);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_UP, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RPAD_UP);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_START, DM_INPUT_DDF__GAMEPAD__GAMEPAD_START);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_BACK, DM_INPUT_DDF__GAMEPAD__GAMEPAD_BACK);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_GUIDE, DM_INPUT_DDF__GAMEPAD__GAMEPAD_GUIDE);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_CONNECTED, DM_INPUT_DDF__GAMEPAD__GAMEPAD_CONNECTED);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_DISCONNECTED, DM_INPUT_DDF__GAMEPAD__GAMEPAD_DISCONNECTED);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_GAMEPAD_RAW, DM_INPUT_DDF__GAMEPAD__GAMEPAD_RAW);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_MAX_GAMEPAD_COUNT, DM_INPUT_DDF__GAMEPAD__MAX_GAMEPAD_COUNT);
    // GamepadType
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_AXIS, DM_INPUT_DDF__GAMEPAD_TYPE__GAMEPAD_TYPE_AXIS);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_BUTTON, DM_INPUT_DDF__GAMEPAD_TYPE__GAMEPAD_TYPE_BUTTON);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_HAT, DM_INPUT_DDF__GAMEPAD_TYPE__GAMEPAD_TYPE_HAT);
    // GamepadModifier
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_NEGATE, DM_INPUT_DDF__GAMEPAD_MODIFIER__GAMEPAD_MODIFIER_NEGATE);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_SCALE, DM_INPUT_DDF__GAMEPAD_MODIFIER__GAMEPAD_MODIFIER_SCALE);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_CLAMP, DM_INPUT_DDF__GAMEPAD_MODIFIER__GAMEPAD_MODIFIER_CLAMP);
    SETCONSTANT(DM_INPUT_DDF__GAMEPAD_MODIFIER_MAX_GAMEPAD_MODIFIER_COUNT, DM_INPUT_DDF__GAMEPAD_MODIFIER__MAX_GAMEPAD_MODIFIER_COUNT);
    // Touch
    SETCONSTANT(DM_INPUT_DDF__TOUCH_TOUCH_MULTI, DM_INPUT_DDF__TOUCH__TOUCH_MULTI);
    SETCONSTANT(DM_INPUT_DDF__TOUCH_MAX_TOUCH_COUNT, DM_INPUT_DDF__TOUCH__MAX_TOUCH_COUNT);
    // Text
    SETCONSTANT(DM_INPUT_DDF__TEXT_TEXT, DM_INPUT_DDF__TEXT__TEXT);
    SETCONSTANT(DM_INPUT_DDF__TEXT_MARKED_TEXT, DM_INPUT_DDF__TEXT__MARKED_TEXT);
    SETCONSTANT(DM_INPUT_DDF__TEXT_MAX_TEXT_COUNT, DM_INPUT_DDF__TEXT__MAX_TEXT_COUNT);
    // FontTextureFormat
    SETCONSTANT(DM_RENDER_DDF__FONT_TEXTURE_FORMAT_TYPE_BITMAP, DM_RENDER_DDF__FONT_TEXTURE_FORMAT__TYPE_BITMAP);
    SETCONSTANT(DM_RENDER_DDF__FONT_TEXTURE_FORMAT_TYPE_DISTANCE_FIELD, DM_RENDER_DDF__FONT_TEXTURE_FORMAT__TYPE_DISTANCE_FIELD);
    // FontRenderMode
    SETCONSTANT(DM_RENDER_DDF__FONT_RENDER_MODE_MODE_SINGLE_LAYER, DM_RENDER_DDF__FONT_RENDER_MODE__MODE_SINGLE_LAYER);
    SETCONSTANT(DM_RENDER_DDF__FONT_RENDER_MODE_MODE_MULTI_LAYER, DM_RENDER_DDF__FONT_RENDER_MODE__MODE_MULTI_LAYER);
    // ConstantType
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_USER, DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_USER);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_VIEWPROJ, DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_VIEWPROJ);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLD, DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_WORLD);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_TEXTURE, DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_TEXTURE);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_VIEW, DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_VIEW);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_PROJECTION, DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_PROJECTION);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_NORMAL, DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_NORMAL);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLDVIEW, DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_WORLDVIEW);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLDVIEWPROJ, DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_WORLDVIEWPROJ);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_USER_MATRIX4, DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE__CONSTANT_TYPE_USER_MATRIX4);
    // VertexSpace
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE_VERTEX_SPACE_WORLD, DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE__VERTEX_SPACE_WORLD);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE_VERTEX_SPACE_LOCAL, DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE__VERTEX_SPACE_LOCAL);
    // WrapMode
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_REPEAT, DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE__WRAP_MODE_REPEAT);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_MIRRORED_REPEAT, DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE__WRAP_MODE_MIRRORED_REPEAT);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_CLAMP_TO_EDGE, DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE__WRAP_MODE_CLAMP_TO_EDGE);
    // FilterModeMin
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST, DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_NEAREST);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR, DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_LINEAR);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST_MIPMAP_NEAREST, DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_NEAREST_MIPMAP_NEAREST);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST_MIPMAP_LINEAR, DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_NEAREST_MIPMAP_LINEAR);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR_MIPMAP_NEAREST, DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_LINEAR_MIPMAP_NEAREST);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR_MIPMAP_LINEAR, DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN__FILTER_MODE_MIN_LINEAR_MIPMAP_LINEAR);
    // FilterModeMag
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG_FILTER_MODE_MAG_NEAREST, DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG__FILTER_MODE_MAG_NEAREST);
    SETCONSTANT(DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG_FILTER_MODE_MAG_LINEAR, DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG__FILTER_MODE_MAG_LINEAR);
    // Type
    SETCONSTANT(DM_SCRIPT_DOC__TYPE_FUNCTION, DM_SCRIPT_DOC__TYPE__FUNCTION);
    SETCONSTANT(DM_SCRIPT_DOC__TYPE_VARIABLE, DM_SCRIPT_DOC__TYPE__VARIABLE);
    SETCONSTANT(DM_SCRIPT_DOC__TYPE_MESSAGE, DM_SCRIPT_DOC__TYPE__MESSAGE);
    SETCONSTANT(DM_SCRIPT_DOC__TYPE_NAMESPACE, DM_SCRIPT_DOC__TYPE__NAMESPACE);
    SETCONSTANT(DM_SCRIPT_DOC__TYPE_PROPERTY, DM_SCRIPT_DOC__TYPE__PROPERTY);
    SETCONSTANT(DM_SCRIPT_DOC__TYPE_PACKAGE, DM_SCRIPT_DOC__TYPE__PACKAGE);
    SETCONSTANT(DM_SCRIPT_DOC__TYPE_STRUCT, DM_SCRIPT_DOC__TYPE__STRUCT);
    SETCONSTANT(DM_SCRIPT_DOC__TYPE_MACRO, DM_SCRIPT_DOC__TYPE__MACRO);
    SETCONSTANT(DM_SCRIPT_DOC__TYPE_ENUM, DM_SCRIPT_DOC__TYPE__ENUM);
    SETCONSTANT(DM_SCRIPT_DOC__TYPE_TYPEDEF, DM_SCRIPT_DOC__TYPE__TYPEDEF);
    SETCONSTANT(DM_SCRIPT_DOC__TYPE_CLASS, DM_SCRIPT_DOC__TYPE__CLASS);
    // IndexBufferFormat
    SETCONSTANT(DM_RIG_DDF__INDEX_BUFFER_FORMAT_INDEXBUFFER_FORMAT_16, DM_RIG_DDF__INDEX_BUFFER_FORMAT__INDEXBUFFER_FORMAT_16);
    SETCONSTANT(DM_RIG_DDF__INDEX_BUFFER_FORMAT_INDEXBUFFER_FORMAT_32, DM_RIG_DDF__INDEX_BUFFER_FORMAT__INDEXBUFFER_FORMAT_32);
    // PrimitiveType
    SETCONSTANT(DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_LINES, DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE__PRIMITIVE_LINES);
    SETCONSTANT(DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_TRIANGLES, DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE__PRIMITIVE_TRIANGLES);
    SETCONSTANT(DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_TRIANGLE_STRIP, DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE__PRIMITIVE_TRIANGLE_STRIP);
    // BlendMode
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_ALPHA, DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE__BLEND_MODE_ALPHA);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_ADD, DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE__BLEND_MODE_ADD);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_MULT, DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE__BLEND_MODE_MULT);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_SCREEN, DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE__BLEND_MODE_SCREEN);
    // Pivot
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_CENTER, DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT__PIVOT_CENTER);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_N, DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT__PIVOT_N);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_NE, DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT__PIVOT_NE);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_E, DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT__PIVOT_E);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_SE, DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT__PIVOT_SE);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_S, DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT__PIVOT_S);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_SW, DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT__PIVOT_SW);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_W, DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT__PIVOT_W);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_NW, DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT__PIVOT_NW);
    // Playback
    SETCONSTANT(DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_NONE, DM_GAME_SYSTEM_DDF__PLAYBACK__PLAYBACK_NONE);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_FORWARD, DM_GAME_SYSTEM_DDF__PLAYBACK__PLAYBACK_ONCE_FORWARD);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_BACKWARD, DM_GAME_SYSTEM_DDF__PLAYBACK__PLAYBACK_ONCE_BACKWARD);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_PINGPONG, DM_GAME_SYSTEM_DDF__PLAYBACK__PLAYBACK_ONCE_PINGPONG);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_FORWARD, DM_GAME_SYSTEM_DDF__PLAYBACK__PLAYBACK_LOOP_FORWARD);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_BACKWARD, DM_GAME_SYSTEM_DDF__PLAYBACK__PLAYBACK_LOOP_BACKWARD);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_PINGPONG, DM_GAME_SYSTEM_DDF__PLAYBACK__PLAYBACK_LOOP_PINGPONG);
    // SpriteTrimmingMode
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_OFF, DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE__SPRITE_TRIM_MODE_OFF);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_4, DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE__SPRITE_TRIM_MODE_4);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_5, DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE__SPRITE_TRIM_MODE_5);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_6, DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE__SPRITE_TRIM_MODE_6);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_7, DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE__SPRITE_TRIM_MODE_7);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_8, DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE__SPRITE_TRIM_MODE_8);
    // BlendMode
    SETCONSTANT(DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ALPHA, DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE__BLEND_MODE_ALPHA);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ADD, DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE__BLEND_MODE_ADD);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ADD_ALPHA, DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE__BLEND_MODE_ADD_ALPHA);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_MULT, DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE__BLEND_MODE_MULT);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_SCREEN, DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE__BLEND_MODE_SCREEN);
    // ValueType
    SETCONSTANT(DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT8, DM_BUFFER_DDF__VALUE_TYPE__VALUE_TYPE_UINT8);
    SETCONSTANT(DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT16, DM_BUFFER_DDF__VALUE_TYPE__VALUE_TYPE_UINT16);
    SETCONSTANT(DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT32, DM_BUFFER_DDF__VALUE_TYPE__VALUE_TYPE_UINT32);
    SETCONSTANT(DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT64, DM_BUFFER_DDF__VALUE_TYPE__VALUE_TYPE_UINT64);
    SETCONSTANT(DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT8, DM_BUFFER_DDF__VALUE_TYPE__VALUE_TYPE_INT8);
    SETCONSTANT(DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT16, DM_BUFFER_DDF__VALUE_TYPE__VALUE_TYPE_INT16);
    SETCONSTANT(DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT32, DM_BUFFER_DDF__VALUE_TYPE__VALUE_TYPE_INT32);
    SETCONSTANT(DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT64, DM_BUFFER_DDF__VALUE_TYPE__VALUE_TYPE_INT64);
    SETCONSTANT(DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_FLOAT32, DM_BUFFER_DDF__VALUE_TYPE__VALUE_TYPE_FLOAT32);
    // BlendMode
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ALPHA, DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE__BLEND_MODE_ALPHA);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ADD, DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE__BLEND_MODE_ADD);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ADD_ALPHA, DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE__BLEND_MODE_ADD_ALPHA);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_MULT, DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE__BLEND_MODE_MULT);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_SCREEN, DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE__BLEND_MODE_SCREEN);
    // SizeMode
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_DESC__SIZE_MODE_SIZE_MODE_MANUAL, DM_GAME_SYSTEM_DDF__SPRITE_DESC__SIZE_MODE__SIZE_MODE_MANUAL);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__SPRITE_DESC__SIZE_MODE_SIZE_MODE_AUTO, DM_GAME_SYSTEM_DDF__SPRITE_DESC__SIZE_MODE__SIZE_MODE_AUTO);
    // CollisionObjectType
    SETCONSTANT(DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_DYNAMIC, DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE__COLLISION_OBJECT_TYPE_DYNAMIC);
    SETCONSTANT(DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_KINEMATIC, DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE__COLLISION_OBJECT_TYPE_KINEMATIC);
    SETCONSTANT(DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_STATIC, DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE__COLLISION_OBJECT_TYPE_STATIC);
    SETCONSTANT(DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_TRIGGER, DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE__COLLISION_OBJECT_TYPE_TRIGGER);
    // Type
    SETCONSTANT(DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_SPHERE, DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE__TYPE_SPHERE);
    SETCONSTANT(DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_BOX, DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE__TYPE_BOX);
    SETCONSTANT(DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_CAPSULE, DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE__TYPE_CAPSULE);
    SETCONSTANT(DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_HULL, DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE__TYPE_HULL);
    // Type
    SETCONSTANT(DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_SPHERE, DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE__TYPE_SPHERE);
    SETCONSTANT(DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_BOX, DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE__TYPE_BOX);
    SETCONSTANT(DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_CAPSULE, DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE__TYPE_CAPSULE);
    SETCONSTANT(DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_HULL, DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE__TYPE_HULL);
    // TimeStepMode
    SETCONSTANT(DM_GAME_SYSTEM_DDF__TIME_STEP_MODE_TIME_STEP_MODE_CONTINUOUS, DM_GAME_SYSTEM_DDF__TIME_STEP_MODE__TIME_STEP_MODE_CONTINUOUS);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__TIME_STEP_MODE_TIME_STEP_MODE_DISCRETE, DM_GAME_SYSTEM_DDF__TIME_STEP_MODE__TIME_STEP_MODE_DISCRETE);
    // LightType
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LIGHT_TYPE_POINT, DM_GAME_SYSTEM_DDF__LIGHT_TYPE__POINT);
    SETCONSTANT(DM_GAME_SYSTEM_DDF__LIGHT_TYPE_SPOT, DM_GAME_SYSTEM_DDF__LIGHT_TYPE__SPOT);
    // Type
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__TYPE_TYPE_BOX, DM_GUI_DDF__NODE_DESC__TYPE__TYPE_BOX);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__TYPE_TYPE_TEXT, DM_GUI_DDF__NODE_DESC__TYPE__TYPE_TEXT);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__TYPE_TYPE_PIE, DM_GUI_DDF__NODE_DESC__TYPE__TYPE_PIE);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__TYPE_TYPE_TEMPLATE, DM_GUI_DDF__NODE_DESC__TYPE__TYPE_TEMPLATE);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__TYPE_TYPE_SPINE, DM_GUI_DDF__NODE_DESC__TYPE__TYPE_SPINE);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__TYPE_TYPE_PARTICLEFX, DM_GUI_DDF__NODE_DESC__TYPE__TYPE_PARTICLEFX);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__TYPE_TYPE_CUSTOM, DM_GUI_DDF__NODE_DESC__TYPE__TYPE_CUSTOM);
    // BlendMode
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ALPHA, DM_GUI_DDF__NODE_DESC__BLEND_MODE__BLEND_MODE_ALPHA);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ADD, DM_GUI_DDF__NODE_DESC__BLEND_MODE__BLEND_MODE_ADD);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ADD_ALPHA, DM_GUI_DDF__NODE_DESC__BLEND_MODE__BLEND_MODE_ADD_ALPHA);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_MULT, DM_GUI_DDF__NODE_DESC__BLEND_MODE__BLEND_MODE_MULT);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_SCREEN, DM_GUI_DDF__NODE_DESC__BLEND_MODE__BLEND_MODE_SCREEN);
    // ClippingMode
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__CLIPPING_MODE_CLIPPING_MODE_NONE, DM_GUI_DDF__NODE_DESC__CLIPPING_MODE__CLIPPING_MODE_NONE);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__CLIPPING_MODE_CLIPPING_MODE_STENCIL, DM_GUI_DDF__NODE_DESC__CLIPPING_MODE__CLIPPING_MODE_STENCIL);
    // XAnchor
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_NONE, DM_GUI_DDF__NODE_DESC__XANCHOR__XANCHOR_NONE);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_LEFT, DM_GUI_DDF__NODE_DESC__XANCHOR__XANCHOR_LEFT);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_RIGHT, DM_GUI_DDF__NODE_DESC__XANCHOR__XANCHOR_RIGHT);
    // YAnchor
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_NONE, DM_GUI_DDF__NODE_DESC__YANCHOR__YANCHOR_NONE);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_TOP, DM_GUI_DDF__NODE_DESC__YANCHOR__YANCHOR_TOP);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_BOTTOM, DM_GUI_DDF__NODE_DESC__YANCHOR__YANCHOR_BOTTOM);
    // Pivot
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_CENTER, DM_GUI_DDF__NODE_DESC__PIVOT__PIVOT_CENTER);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_N, DM_GUI_DDF__NODE_DESC__PIVOT__PIVOT_N);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_NE, DM_GUI_DDF__NODE_DESC__PIVOT__PIVOT_NE);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_E, DM_GUI_DDF__NODE_DESC__PIVOT__PIVOT_E);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_SE, DM_GUI_DDF__NODE_DESC__PIVOT__PIVOT_SE);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_S, DM_GUI_DDF__NODE_DESC__PIVOT__PIVOT_S);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_SW, DM_GUI_DDF__NODE_DESC__PIVOT__PIVOT_SW);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_W, DM_GUI_DDF__NODE_DESC__PIVOT__PIVOT_W);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_NW, DM_GUI_DDF__NODE_DESC__PIVOT__PIVOT_NW);
    // AdjustMode
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_FIT, DM_GUI_DDF__NODE_DESC__ADJUST_MODE__ADJUST_MODE_FIT);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_ZOOM, DM_GUI_DDF__NODE_DESC__ADJUST_MODE__ADJUST_MODE_ZOOM);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_STRETCH, DM_GUI_DDF__NODE_DESC__ADJUST_MODE__ADJUST_MODE_STRETCH);
    // SizeMode
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__SIZE_MODE_SIZE_MODE_MANUAL, DM_GUI_DDF__NODE_DESC__SIZE_MODE__SIZE_MODE_MANUAL);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__SIZE_MODE_SIZE_MODE_AUTO, DM_GUI_DDF__NODE_DESC__SIZE_MODE__SIZE_MODE_AUTO);
    // PieBounds
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__PIE_BOUNDS_PIEBOUNDS_RECTANGLE, DM_GUI_DDF__NODE_DESC__PIE_BOUNDS__PIEBOUNDS_RECTANGLE);
    SETCONSTANT(DM_GUI_DDF__NODE_DESC__PIE_BOUNDS_PIEBOUNDS_ELLIPSE, DM_GUI_DDF__NODE_DESC__PIE_BOUNDS__PIEBOUNDS_ELLIPSE);
    // AdjustReference
    SETCONSTANT(DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_LEGACY, DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE__ADJUST_REFERENCE_LEGACY);
    SETCONSTANT(DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_PARENT, DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE__ADJUST_REFERENCE_PARENT);
    SETCONSTANT(DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_DISABLED, DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE__ADJUST_REFERENCE_DISABLED);
    // HashAlgorithm
    SETCONSTANT(DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_UNKNOWN, DM_LIVE_UPDATE_DDF__HASH_ALGORITHM__HASH_UNKNOWN);
    SETCONSTANT(DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_MD5, DM_LIVE_UPDATE_DDF__HASH_ALGORITHM__HASH_MD5);
    SETCONSTANT(DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA1, DM_LIVE_UPDATE_DDF__HASH_ALGORITHM__HASH_SHA1);
    SETCONSTANT(DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA256, DM_LIVE_UPDATE_DDF__HASH_ALGORITHM__HASH_SHA256);
    SETCONSTANT(DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA512, DM_LIVE_UPDATE_DDF__HASH_ALGORITHM__HASH_SHA512);
    // SignAlgorithm
    SETCONSTANT(DM_LIVE_UPDATE_DDF__SIGN_ALGORITHM_SIGN_UNKNOWN, DM_LIVE_UPDATE_DDF__SIGN_ALGORITHM__SIGN_UNKNOWN);
    SETCONSTANT(DM_LIVE_UPDATE_DDF__SIGN_ALGORITHM_SIGN_RSA, DM_LIVE_UPDATE_DDF__SIGN_ALGORITHM__SIGN_RSA);
    // ResourceEntryFlag
    SETCONSTANT(DM_LIVE_UPDATE_DDF__RESOURCE_ENTRY_FLAG_BUNDLED, DM_LIVE_UPDATE_DDF__RESOURCE_ENTRY_FLAG__BUNDLED);
    SETCONSTANT(DM_LIVE_UPDATE_DDF__RESOURCE_ENTRY_FLAG_EXCLUDED, DM_LIVE_UPDATE_DDF__RESOURCE_ENTRY_FLAG__EXCLUDED);
    // Type
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TYPE_TYPE_2D, DM_GRAPHICS__TEXTURE_IMAGE__TYPE__TYPE_2D);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TYPE_TYPE_CUBEMAP, DM_GRAPHICS__TEXTURE_IMAGE__TYPE__TYPE_CUBEMAP);
    // CompressionType
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_DEFAULT, DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE__COMPRESSION_TYPE_DEFAULT);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_WEBP, DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE__COMPRESSION_TYPE_WEBP);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_WEBP_LOSSY, DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE__COMPRESSION_TYPE_WEBP_LOSSY);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_BASIS_UASTC, DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE__COMPRESSION_TYPE_BASIS_UASTC);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_BASIS_ETC1S, DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE__COMPRESSION_TYPE_BASIS_ETC1S);
    // CompressionFlags
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_FLAGS_COMPRESSION_FLAG_ALPHA_CLEAN, DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_FLAGS__COMPRESSION_FLAG_ALPHA_CLEAN);
    // TextureFormat
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_LUMINANCE, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_LUMINANCE);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGB);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGBA);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_PVRTC_2BPPV1, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGB_PVRTC_2BPPV1);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_PVRTC_4BPPV1, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGB_PVRTC_4BPPV1);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_PVRTC_2BPPV1, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGBA_PVRTC_2BPPV1);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_PVRTC_4BPPV1, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGBA_PVRTC_4BPPV1);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_ETC1, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGB_ETC1);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_16BPP, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGB_16BPP);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_16BPP, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGBA_16BPP);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_LUMINANCE_ALPHA, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_LUMINANCE_ALPHA);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_ETC2, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGBA_ETC2);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_ASTC_4x4, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGBA_ASTC_4x4);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_BC1, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGB_BC1);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_BC3, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGBA_BC3);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_R_BC4, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_R_BC4);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RG_BC5, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RG_BC5);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_BC7, DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT__TEXTURE_FORMAT_RGBA_BC7);
    // CompressionLevel
    SETCONSTANT(DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_FAST, DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL__FAST);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_NORMAL, DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL__NORMAL);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_HIGH, DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL__HIGH);
    SETCONSTANT(DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_BEST, DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL__BEST);
    // OS
    SETCONSTANT(DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_GENERIC, DM_GRAPHICS__PLATFORM_PROFILE__OS__OS_ID_GENERIC);
    SETCONSTANT(DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_WINDOWS, DM_GRAPHICS__PLATFORM_PROFILE__OS__OS_ID_WINDOWS);
    SETCONSTANT(DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_OSX, DM_GRAPHICS__PLATFORM_PROFILE__OS__OS_ID_OSX);
    SETCONSTANT(DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_LINUX, DM_GRAPHICS__PLATFORM_PROFILE__OS__OS_ID_LINUX);
    SETCONSTANT(DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_IOS, DM_GRAPHICS__PLATFORM_PROFILE__OS__OS_ID_IOS);
    SETCONSTANT(DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_ANDROID, DM_GRAPHICS__PLATFORM_PROFILE__OS__OS_ID_ANDROID);
    SETCONSTANT(DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_WEB, DM_GRAPHICS__PLATFORM_PROFILE__OS__OS_ID_WEB);
    SETCONSTANT(DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_SWITCH, DM_GRAPHICS__PLATFORM_PROFILE__OS__OS_ID_SWITCH);
    SETCONSTANT(DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_PS4, DM_GRAPHICS__PLATFORM_PROFILE__OS__OS_ID_PS4);
    // Language
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLSL_SM120, DM_GRAPHICS__SHADER_DESC__LANGUAGE__LANGUAGE_GLSL_SM120);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLSL_SM140, DM_GRAPHICS__SHADER_DESC__LANGUAGE__LANGUAGE_GLSL_SM140);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLES_SM100, DM_GRAPHICS__SHADER_DESC__LANGUAGE__LANGUAGE_GLES_SM100);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLES_SM300, DM_GRAPHICS__SHADER_DESC__LANGUAGE__LANGUAGE_GLES_SM300);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_SPIRV, DM_GRAPHICS__SHADER_DESC__LANGUAGE__LANGUAGE_SPIRV);
    // ShaderDataType
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_UNKNOWN, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_UNKNOWN);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_INT, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_INT);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_UINT, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_UINT);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_FLOAT, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_FLOAT);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC2, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_VEC2);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC3, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_VEC3);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC4, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_VEC4);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT2, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_MAT2);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT3, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_MAT3);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT4, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_MAT4);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER2D, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_SAMPLER2D);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER3D, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_SAMPLER3D);
    SETCONSTANT(DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER_CUBE, DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE__SHADER_TYPE_SAMPLER_CUBE);
    // PropertyType
    SETCONSTANT(DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_NUMBER, DM_GAME_OBJECT_DDF__PROPERTY_TYPE__PROPERTY_TYPE_NUMBER);
    SETCONSTANT(DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_HASH, DM_GAME_OBJECT_DDF__PROPERTY_TYPE__PROPERTY_TYPE_HASH);
    SETCONSTANT(DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_URL, DM_GAME_OBJECT_DDF__PROPERTY_TYPE__PROPERTY_TYPE_URL);
    SETCONSTANT(DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_VECTOR3, DM_GAME_OBJECT_DDF__PROPERTY_TYPE__PROPERTY_TYPE_VECTOR3);
    SETCONSTANT(DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_VECTOR4, DM_GAME_OBJECT_DDF__PROPERTY_TYPE__PROPERTY_TYPE_VECTOR4);
    SETCONSTANT(DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_QUAT, DM_GAME_OBJECT_DDF__PROPERTY_TYPE__PROPERTY_TYPE_QUAT);
    SETCONSTANT(DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_BOOLEAN, DM_GAME_OBJECT_DDF__PROPERTY_TYPE__PROPERTY_TYPE_BOOLEAN);
    SETCONSTANT(DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_MATRIX4, DM_GAME_OBJECT_DDF__PROPERTY_TYPE__PROPERTY_TYPE_MATRIX4);
    SETCONSTANT(DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_COUNT, DM_GAME_OBJECT_DDF__PROPERTY_TYPE__PROPERTY_TYPE_COUNT);
    // EmitterType
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_CIRCLE, DM_PARTICLE_DDF__EMITTER_TYPE__EMITTER_TYPE_CIRCLE);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_2DCONE, DM_PARTICLE_DDF__EMITTER_TYPE__EMITTER_TYPE_2DCONE);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_BOX, DM_PARTICLE_DDF__EMITTER_TYPE__EMITTER_TYPE_BOX);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_SPHERE, DM_PARTICLE_DDF__EMITTER_TYPE__EMITTER_TYPE_SPHERE);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_CONE, DM_PARTICLE_DDF__EMITTER_TYPE__EMITTER_TYPE_CONE);
    // PlayMode
    SETCONSTANT(DM_PARTICLE_DDF__PLAY_MODE_PLAY_MODE_ONCE, DM_PARTICLE_DDF__PLAY_MODE__PLAY_MODE_ONCE);
    SETCONSTANT(DM_PARTICLE_DDF__PLAY_MODE_PLAY_MODE_LOOP, DM_PARTICLE_DDF__PLAY_MODE__PLAY_MODE_LOOP);
    // EmissionSpace
    SETCONSTANT(DM_PARTICLE_DDF__EMISSION_SPACE_EMISSION_SPACE_WORLD, DM_PARTICLE_DDF__EMISSION_SPACE__EMISSION_SPACE_WORLD);
    SETCONSTANT(DM_PARTICLE_DDF__EMISSION_SPACE_EMISSION_SPACE_EMITTER, DM_PARTICLE_DDF__EMISSION_SPACE__EMISSION_SPACE_EMITTER);
    // EmitterKey
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SPAWN_RATE, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_SPAWN_RATE);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_X, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_SIZE_X);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_Y, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_SIZE_Y);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_Z, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_SIZE_Z);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_LIFE_TIME, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_PARTICLE_LIFE_TIME);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_SPEED, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_PARTICLE_SPEED);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_SIZE, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_PARTICLE_SIZE);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_RED, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_PARTICLE_RED);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_GREEN, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_PARTICLE_GREEN);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_BLUE, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_PARTICLE_BLUE);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ALPHA, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_PARTICLE_ALPHA);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ROTATION, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_PARTICLE_ROTATION);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_STRETCH_FACTOR_X, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_PARTICLE_STRETCH_FACTOR_X);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_STRETCH_FACTOR_Y, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_PARTICLE_STRETCH_FACTOR_Y);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ANGULAR_VELOCITY, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_PARTICLE_ANGULAR_VELOCITY);
    SETCONSTANT(DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_COUNT, DM_PARTICLE_DDF__EMITTER_KEY__EMITTER_KEY_COUNT);
    // ParticleKey
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_SCALE, DM_PARTICLE_DDF__PARTICLE_KEY__PARTICLE_KEY_SCALE);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_RED, DM_PARTICLE_DDF__PARTICLE_KEY__PARTICLE_KEY_RED);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_GREEN, DM_PARTICLE_DDF__PARTICLE_KEY__PARTICLE_KEY_GREEN);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_BLUE, DM_PARTICLE_DDF__PARTICLE_KEY__PARTICLE_KEY_BLUE);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ALPHA, DM_PARTICLE_DDF__PARTICLE_KEY__PARTICLE_KEY_ALPHA);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ROTATION, DM_PARTICLE_DDF__PARTICLE_KEY__PARTICLE_KEY_ROTATION);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_STRETCH_FACTOR_X, DM_PARTICLE_DDF__PARTICLE_KEY__PARTICLE_KEY_STRETCH_FACTOR_X);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_STRETCH_FACTOR_Y, DM_PARTICLE_DDF__PARTICLE_KEY__PARTICLE_KEY_STRETCH_FACTOR_Y);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ANGULAR_VELOCITY, DM_PARTICLE_DDF__PARTICLE_KEY__PARTICLE_KEY_ANGULAR_VELOCITY);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_COUNT, DM_PARTICLE_DDF__PARTICLE_KEY__PARTICLE_KEY_COUNT);
    // ModifierType
    SETCONSTANT(DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_ACCELERATION, DM_PARTICLE_DDF__MODIFIER_TYPE__MODIFIER_TYPE_ACCELERATION);
    SETCONSTANT(DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_DRAG, DM_PARTICLE_DDF__MODIFIER_TYPE__MODIFIER_TYPE_DRAG);
    SETCONSTANT(DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_RADIAL, DM_PARTICLE_DDF__MODIFIER_TYPE__MODIFIER_TYPE_RADIAL);
    SETCONSTANT(DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_VORTEX, DM_PARTICLE_DDF__MODIFIER_TYPE__MODIFIER_TYPE_VORTEX);
    // ModifierKey
    SETCONSTANT(DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_MAGNITUDE, DM_PARTICLE_DDF__MODIFIER_KEY__MODIFIER_KEY_MAGNITUDE);
    SETCONSTANT(DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_MAX_DISTANCE, DM_PARTICLE_DDF__MODIFIER_KEY__MODIFIER_KEY_MAX_DISTANCE);
    SETCONSTANT(DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_COUNT, DM_PARTICLE_DDF__MODIFIER_KEY__MODIFIER_KEY_COUNT);
    // BlendMode
    SETCONSTANT(DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ALPHA, DM_PARTICLE_DDF__BLEND_MODE__BLEND_MODE_ALPHA);
    SETCONSTANT(DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ADD, DM_PARTICLE_DDF__BLEND_MODE__BLEND_MODE_ADD);
    SETCONSTANT(DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ADD_ALPHA, DM_PARTICLE_DDF__BLEND_MODE__BLEND_MODE_ADD_ALPHA);
    SETCONSTANT(DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_MULT, DM_PARTICLE_DDF__BLEND_MODE__BLEND_MODE_MULT);
    SETCONSTANT(DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_SCREEN, DM_PARTICLE_DDF__BLEND_MODE__BLEND_MODE_SCREEN);
    // SizeMode
    SETCONSTANT(DM_PARTICLE_DDF__SIZE_MODE_SIZE_MODE_MANUAL, DM_PARTICLE_DDF__SIZE_MODE__SIZE_MODE_MANUAL);
    SETCONSTANT(DM_PARTICLE_DDF__SIZE_MODE_SIZE_MODE_AUTO, DM_PARTICLE_DDF__SIZE_MODE__SIZE_MODE_AUTO);
    // ParticleOrientation
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_DEFAULT, DM_PARTICLE_DDF__PARTICLE_ORIENTATION__PARTICLE_ORIENTATION_DEFAULT);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_INITIAL_DIRECTION, DM_PARTICLE_DDF__PARTICLE_ORIENTATION__PARTICLE_ORIENTATION_INITIAL_DIRECTION);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_MOVEMENT_DIRECTION, DM_PARTICLE_DDF__PARTICLE_ORIENTATION__PARTICLE_ORIENTATION_MOVEMENT_DIRECTION);
    SETCONSTANT(DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_ANGULAR_VELOCITY, DM_PARTICLE_DDF__PARTICLE_ORIENTATION__PARTICLE_ORIENTATION_ANGULAR_VELOCITY);
    #undef SETCONSTANT

    lua_pop(L, 1);
}

static dmExtension::Result InitializeProto(dmExtension::Params* params)
{
    LuaInit(params->m_L);
    return dmExtension::RESULT_OK;
}

static dmExtension::Result FinalizProto(dmExtension::Params* params)
{
    return dmExtension::RESULT_OK;
}

DM_DECLARE_EXTENSION(EXTENSION_NAME, LIB_NAME, 0, 0, InitializeProto, 0, 0, FinalizProto)
