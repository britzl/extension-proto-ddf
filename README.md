# extension-proto-ddf
This extension provides Lua bindings to encode and decode the Defold Data Format (ddf).

## Message encode/decode
##### `local str = ddf.encode_dmmath_point3(tbl)`
* `x` (`number`) (optional)
* `y` (`number`) (optional)
* `z` (`number`) (optional)
* `d` (`number`) (optional)
##### `local tbl = ddf.decode_dmmath_point3(str)`

##### `local str = ddf.encode_dmmath_vector3(tbl)`
* `x` (`number`) (optional)
* `y` (`number`) (optional)
* `z` (`number`) (optional)
* `d` (`number`) (optional)
##### `local tbl = ddf.decode_dmmath_vector3(str)`

##### `local str = ddf.encode_dmmath_vector4(tbl)`
* `x` (`number`) (optional)
* `y` (`number`) (optional)
* `z` (`number`) (optional)
* `w` (`number`) (optional)
##### `local tbl = ddf.decode_dmmath_vector4(str)`

##### `local str = ddf.encode_dmmath_quat(tbl)`
* `x` (`number`) (optional)
* `y` (`number`) (optional)
* `z` (`number`) (optional)
* `w` (`number`) (optional)
##### `local tbl = ddf.decode_dmmath_quat(str)`

##### `local str = ddf.encode_dmmath_transform(tbl)`
* `rotation` (`dm_math__quat`) (optional)
* `translation` (`dm_math__vector3`) (optional)
* `scale` (`dm_math__vector3`) (optional)
##### `local tbl = ddf.decode_dmmath_transform(str)`

##### `local str = ddf.encode_dmmath_matrix4(tbl)`
* `m00` (`number`) (optional)
* `m01` (`number`) (optional)
* `m02` (`number`) (optional)
* `m03` (`number`) (optional)
* `m10` (`number`) (optional)
* `m11` (`number`) (optional)
* `m12` (`number`) (optional)
* `m13` (`number`) (optional)
* `m20` (`number`) (optional)
* `m21` (`number`) (optional)
* `m22` (`number`) (optional)
* `m23` (`number`) (optional)
* `m30` (`number`) (optional)
* `m31` (`number`) (optional)
* `m32` (`number`) (optional)
* `m33` (`number`) (optional)
##### `local tbl = ddf.decode_dmmath_matrix4(str)`

##### `local str = ddf.encode_dminputddf_gamepadmodifier_t(tbl)`
* `mod` (`number`)
##### `local tbl = ddf.decode_dminputddf_gamepadmodifier_t(str)`

##### `local str = ddf.encode_dminputddf_gamepadmapentry(tbl)`
* `input` (`number`)
* `type` (`number`)
* `index` (`number`)
* `mod` (array of `dm_input_ddf__gamepad_modifier_t`)
* `hat_mask` (`number`) (optional)
##### `local tbl = ddf.decode_dminputddf_gamepadmapentry(str)`

##### `local str = ddf.encode_dminputddf_gamepadmap(tbl)`
* `device` (`string`)
* `platform` (`string`)
* `dead_zone` (`number`)
* `map` (array of `dm_input_ddf__gamepad_map_entry`)
##### `local tbl = ddf.decode_dminputddf_gamepadmap(str)`

##### `local str = ddf.encode_dminputddf_gamepadmaps(tbl)`
* `driver` (array of `dm_input_ddf__gamepad_map`)
##### `local tbl = ddf.decode_dminputddf_gamepadmaps(str)`

##### `local str = ddf.encode_dminputddf_keytrigger(tbl)`
* `input` (`number`)
* `action` (`string`)
##### `local tbl = ddf.decode_dminputddf_keytrigger(str)`

##### `local str = ddf.encode_dminputddf_mousetrigger(tbl)`
* `input` (`number`)
* `action` (`string`)
##### `local tbl = ddf.decode_dminputddf_mousetrigger(str)`

##### `local str = ddf.encode_dminputddf_gamepadtrigger(tbl)`
* `input` (`number`)
* `action` (`string`)
##### `local tbl = ddf.decode_dminputddf_gamepadtrigger(str)`

##### `local str = ddf.encode_dminputddf_touchtrigger(tbl)`
* `input` (`number`)
* `action` (`string`)
##### `local tbl = ddf.decode_dminputddf_touchtrigger(str)`

##### `local str = ddf.encode_dminputddf_texttrigger(tbl)`
* `input` (`number`)
* `action` (`string`)
##### `local tbl = ddf.decode_dminputddf_texttrigger(str)`

##### `local str = ddf.encode_dminputddf_inputbinding(tbl)`
* `key_trigger` (array of `dm_input_ddf__key_trigger`)
* `mouse_trigger` (array of `dm_input_ddf__mouse_trigger`)
* `gamepad_trigger` (array of `dm_input_ddf__gamepad_trigger`)
* `touch_trigger` (array of `dm_input_ddf__touch_trigger`)
* `text_trigger` (array of `dm_input_ddf__text_trigger`)
##### `local tbl = ddf.decode_dminputddf_inputbinding(str)`

##### `local str = ddf.encode_dmrenderddf_renderprototypedesc(tbl)`
* `script` (`string`)
* `materials` (array of `dm_render_ddf__render_prototype_desc__material_desc`)
##### `local tbl = ddf.decode_dmrenderddf_renderprototypedesc(str)`

##### `local str = ddf.encode_dmrenderddf.renderprototypedesc_materialdesc(tbl)`
* `name` (`string`)
* `material` (`string`)
##### `local tbl = ddf.decode_dmrenderddf.renderprototypedesc_materialdesc(str)`

##### `local str = ddf.encode_dmrenderddf_drawtext(tbl)`
* `position` (`dm_math__point3`)
* `text` (`string`)
##### `local tbl = ddf.decode_dmrenderddf_drawtext(str)`

##### `local str = ddf.encode_dmrenderddf_drawdebugtext(tbl)`
* `position` (`dm_math__point3`)
* `text` (`string`)
* `color` (`dm_math__vector4`)
##### `local tbl = ddf.decode_dmrenderddf_drawdebugtext(str)`

##### `local str = ddf.encode_dmrenderddf_drawline(tbl)`
* `start_point` (`dm_math__point3`)
* `end_point` (`dm_math__point3`)
* `color` (`dm_math__vector4`)
##### `local tbl = ddf.decode_dmrenderddf_drawline(str)`

##### `local str = ddf.encode_dmrenderddf_windowresized(tbl)`
* `width` (`number`)
* `height` (`number`)
##### `local tbl = ddf.decode_dmrenderddf_windowresized(str)`

##### `local str = ddf.encode_dmrenderddf_resize(tbl)`
* `width` (`number`)
* `height` (`number`)
##### `local tbl = ddf.decode_dmrenderddf_resize(str)`

##### `local str = ddf.encode_dmrenderddf_clearcolor(tbl)`
* `color` (`dm_math__vector4`)
##### `local tbl = ddf.decode_dmrenderddf_clearcolor(str)`

##### `local str = ddf.encode_dmrenderddf_displayprofilequalifier(tbl)`
* `width` (`number`)
* `height` (`number`)
* `device_models` (array of `string`)
##### `local tbl = ddf.decode_dmrenderddf_displayprofilequalifier(str)`

##### `local str = ddf.encode_dmrenderddf_displayprofile(tbl)`
* `name` (`string`)
* `qualifiers` (array of `dm_render_ddf__display_profile_qualifier`)
##### `local tbl = ddf.decode_dmrenderddf_displayprofile(str)`

##### `local str = ddf.encode_dmrenderddf_displayprofiles(tbl)`
* `profiles` (array of `dm_render_ddf__display_profile`)
##### `local tbl = ddf.decode_dmrenderddf_displayprofiles(str)`

##### `local str = ddf.encode_dmrenderddf_fontdesc(tbl)`
* `font` (`string`)
* `material` (`string`)
* `size` (`number`)
* `antialias` (`number`) (optional)
* `alpha` (`number`) (optional)
* `outline_alpha` (`number`) (optional)
* `outline_width` (`number`) (optional)
* `shadow_alpha` (`number`) (optional)
* `shadow_blur` (`number`) (optional)
* `shadow_x` (`number`) (optional)
* `shadow_y` (`number`) (optional)
* `extra_characters` (`string`) (optional)
* `output_format` (`number`) (optional)
* `all_chars` (`boolean`) (optional)
* `cache_width` (`number`) (optional)
* `cache_height` (`number`) (optional)
* `render_mode` (`number`) (optional)
##### `local tbl = ddf.decode_dmrenderddf_fontdesc(str)`

##### `local str = ddf.encode_dmrenderddf_fontmap(tbl)`
* `glyphs` (array of `dm_render_ddf__font_map__glyph`)
* `material` (`string`)
* `shadow_x` (`number`) (optional)
* `shadow_y` (`number`) (optional)
* `max_ascent` (`number`)
* `max_descent` (`number`)
* `image_format` (`number`) (optional)
* `sdf_spread` (`number`) (optional)
* `sdf_offset` (`number`) (optional)
* `sdf_outline` (`number`) (optional)
* `sdf_shadow` (`number`) (optional)
* `cache_width` (`number`) (optional)
* `cache_height` (`number`) (optional)
* `glyph_padding` (`number`) (optional)
* `cache_cell_width` (`number`) (optional)
* `cache_cell_height` (`number`) (optional)
* `glyph_channels` (`number`) (optional)
* `glyph_data` (`ProtobufCBinaryData`) (optional)
* `alpha` (`number`) (optional)
* `outline_alpha` (`number`) (optional)
* `shadow_alpha` (`number`) (optional)
* `cache_cell_max_ascent` (`number`) (optional)
* `layer_mask` (`number`) (optional)
##### `local tbl = ddf.decode_dmrenderddf_fontmap(str)`

##### `local str = ddf.encode_dmrenderddf.fontmap_glyph(tbl)`
* `character` (`number`)
* `width` (`number`) (optional)
* `advance` (`number`) (optional)
* `left_bearing` (`number`) (optional)
* `ascent` (`number`) (optional)
* `descent` (`number`) (optional)
* `x` (`number`) (optional)
* `y` (`number`) (optional)
* `glyph_data_offset` (`number`) (optional)
* `glyph_data_size` (`number`) (optional)
##### `local tbl = ddf.decode_dmrenderddf.fontmap_glyph(str)`

##### `local str = ddf.encode_dmrenderddf_materialdesc(tbl)`
* `name` (`string`)
* `tags` (array of `string`)
* `vertex_program` (`string`)
* `fragment_program` (`string`)
* `vertex_space` (`number`) (optional)
* `vertex_constants` (array of `dm_render_ddf__material_desc__constant`)
* `fragment_constants` (array of `dm_render_ddf__material_desc__constant`)
* `textures` (array of `string`)
* `samplers` (array of `dm_render_ddf__material_desc__sampler`)
##### `local tbl = ddf.decode_dmrenderddf_materialdesc(str)`

##### `local str = ddf.encode_dmrenderddf.materialdesc_constant(tbl)`
* `name` (`string`)
* `type` (`number`)
* `value` (array of `dm_math__vector4`)
##### `local tbl = ddf.decode_dmrenderddf.materialdesc_constant(str)`

##### `local str = ddf.encode_dmrenderddf.materialdesc_sampler(tbl)`
* `name` (`string`)
* `wrap_u` (`number`)
* `wrap_v` (`number`)
* `filter_min` (`number`)
* `filter_mag` (`number`)
* `max_anisotropy` (`number`) (optional)
##### `local tbl = ddf.decode_dmrenderddf.materialdesc_sampler(str)`

##### `local str = ddf.encode_dmscriptddf_luaref(tbl)`
* `ref` (`number`)
* `context_table_ref` (`number`)
##### `local tbl = ddf.decode_dmscriptddf_luaref(str)`

##### `local str = ddf.encode_dmsystemddf_exit(tbl)`
* `code` (`number`)
##### `local tbl = ddf.decode_dmsystemddf_exit(str)`

##### `local str = ddf.encode_dmsystemddf_toggleprofile(tbl)`
##### `local tbl = ddf.decode_dmsystemddf_toggleprofile(str)`

##### `local str = ddf.encode_dmsystemddf_togglephysicsdebug(tbl)`
##### `local tbl = ddf.decode_dmsystemddf_togglephysicsdebug(str)`

##### `local str = ddf.encode_dmsystemddf_startrecord(tbl)`
* `file_name` (`string`)
* `frame_period` (`number`) (optional)
* `fps` (`number`) (optional)
##### `local tbl = ddf.decode_dmsystemddf_startrecord(str)`

##### `local str = ddf.encode_dmsystemddf_stoprecord(tbl)`
##### `local tbl = ddf.decode_dmsystemddf_stoprecord(str)`

##### `local str = ddf.encode_dmsystemddf_reboot(tbl)`
* `arg1` (`string`) (optional)
* `arg2` (`string`) (optional)
* `arg3` (`string`) (optional)
* `arg4` (`string`) (optional)
* `arg5` (`string`) (optional)
* `arg6` (`string`) (optional)
##### `local tbl = ddf.decode_dmsystemddf_reboot(str)`

##### `local str = ddf.encode_dmsystemddf_setvsync(tbl)`
* `swap_interval` (`number`)
##### `local tbl = ddf.decode_dmsystemddf_setvsync(str)`

##### `local str = ddf.encode_dmsystemddf_setupdatefrequency(tbl)`
* `frequency` (`number`)
##### `local tbl = ddf.decode_dmsystemddf_setupdatefrequency(str)`

##### `local str = ddf.encode_dmscriptdoc_parameter(tbl)`
* `name` (`string`)
* `doc` (`string`)
* `types` (array of `string`)
##### `local tbl = ddf.decode_dmscriptdoc_parameter(str)`

##### `local str = ddf.encode_dmscriptdoc_member(tbl)`
* `name` (`string`)
* `doc` (`string`)
* `type` (`string`)
##### `local tbl = ddf.decode_dmscriptdoc_member(str)`

##### `local str = ddf.encode_dmscriptdoc_returnvalue(tbl)`
* `name` (`string`)
* `doc` (`string`)
* `types` (array of `string`)
##### `local tbl = ddf.decode_dmscriptdoc_returnvalue(str)`

##### `local str = ddf.encode_dmscriptdoc_element(tbl)`
* `type` (`number`)
* `name` (`string`)
* `brief` (`string`)
* `description` (`string`)
* `returnvalues` (array of `dm_script_doc__return_value`)
* `parameters` (array of `dm_script_doc__parameter`)
* `examples` (`string`) (optional)
* `replaces` (`string`) (optional)
* `error` (`string`) (optional)
* `tparams` (array of `dm_script_doc__member`)
* `members` (array of `dm_script_doc__member`)
* `notes` (array of `string`)
##### `local tbl = ddf.decode_dmscriptdoc_element(str)`

##### `local str = ddf.encode_dmscriptdoc_info(tbl)`
* `namespace` (`string`)
* `name` (`string`)
* `brief` (`string`)
* `description` (`string`)
* `path` (`string`)
* `file` (`string`)
##### `local tbl = ddf.decode_dmscriptdoc_info(str)`

##### `local str = ddf.encode_dmscriptdoc_document(tbl)`
* `elements` (array of `dm_script_doc__element`)
* `info` (`dm_script_doc__info`) (optional)
##### `local tbl = ddf.decode_dmscriptdoc_document(str)`

##### `local str = ddf.encode_dmhttpddf_stophttp(tbl)`
##### `local tbl = ddf.decode_dmhttpddf_stophttp(str)`

##### `local str = ddf.encode_dmhttpddf_httprequest(tbl)`
* `method` (`string`)
* `url` (`string`)
* `headers` (`number`)
* `headers_length` (`number`)
* `request` (`number`)
* `request_length` (`number`)
* `timeout` (`number`) (optional)
* `path` (`string`) (optional)
* `ignore_cache` (`boolean`) (optional)
* `chunked_transfer` (`boolean`) (optional)
##### `local tbl = ddf.decode_dmhttpddf_httprequest(str)`

##### `local str = ddf.encode_dmhttpddf_httpresponse(tbl)`
* `status` (`number`)
* `headers` (`number`)
* `headers_length` (`number`)
* `response` (`number`)
* `response_length` (`number`)
* `path` (`string`)
##### `local tbl = ddf.decode_dmhttpddf_httpresponse(str)`

##### `local str = ddf.encode_dmluaddf_luasource(tbl)`
* `script` (`ProtobufCBinaryData`) (optional)
* `filename` (`string`)
* `bytecode` (`ProtobufCBinaryData`) (optional)
* `delta` (`ProtobufCBinaryData`) (optional)
* `bytecode_32` (`ProtobufCBinaryData`) (optional)
* `bytecode_64` (`ProtobufCBinaryData`) (optional)
##### `local tbl = ddf.decode_dmluaddf_luasource(str)`

##### `local str = ddf.encode_dmrigddf_bone(tbl)`
* `parent` (`number`)
* `id` (`number`)
* `name` (`string`)
* `local` (`dm_math__transform`)
* `world` (`dm_math__transform`)
* `inverse_bind_pose` (`dm_math__transform`)
* `length` (`number`) (optional)
##### `local tbl = ddf.decode_dmrigddf_bone(str)`

##### `local str = ddf.encode_dmrigddf_ik(tbl)`
* `id` (`number`)
* `parent` (`number`)
* `child` (`number`)
* `target` (`number`)
* `positive` (`boolean`) (optional)
* `mix` (`number`) (optional)
##### `local tbl = ddf.decode_dmrigddf_ik(str)`

##### `local str = ddf.encode_dmrigddf_skeleton(tbl)`
* `bones` (array of `dm_rig_ddf__bone`)
* `iks` (array of `dm_rig_ddf__ik`)
##### `local tbl = ddf.decode_dmrigddf_skeleton(str)`

##### `local str = ddf.encode_dmrigddf_animationtrack(tbl)`
* `bone_index` (`number`)
* `positions` (array of `number`)
* `rotations` (array of `number`)
* `scale` (array of `number`)
##### `local tbl = ddf.decode_dmrigddf_animationtrack(str)`

##### `local str = ddf.encode_dmrigddf_eventkey(tbl)`
* `t` (`number`)
* `integer` (`number`) (optional)
* `float` (`number`) (optional)
* `string` (`number`) (optional)
##### `local tbl = ddf.decode_dmrigddf_eventkey(str)`

##### `local str = ddf.encode_dmrigddf_eventtrack(tbl)`
* `event_id` (`number`)
* `keys` (array of `dm_rig_ddf__event_key`)
##### `local tbl = ddf.decode_dmrigddf_eventtrack(str)`

##### `local str = ddf.encode_dmrigddf_riganimation(tbl)`
* `id` (`number`)
* `duration` (`number`)
* `sample_rate` (`number`)
* `tracks` (array of `dm_rig_ddf__animation_track`)
* `event_tracks` (array of `dm_rig_ddf__event_track`)
##### `local tbl = ddf.decode_dmrigddf_riganimation(str)`

##### `local str = ddf.encode_dmrigddf_animationset(tbl)`
* `animations` (array of `dm_rig_ddf__rig_animation`)
* `bone_list` (array of `number`)
##### `local tbl = ddf.decode_dmrigddf_animationset(str)`

##### `local str = ddf.encode_dmrigddf_animationinstancedesc(tbl)`
* `animation` (`string`)
##### `local tbl = ddf.decode_dmrigddf_animationinstancedesc(str)`

##### `local str = ddf.encode_dmrigddf_animationsetdesc(tbl)`
* `animations` (array of `dm_rig_ddf__animation_instance_desc`)
* `skeleton` (`string`) (optional)
##### `local tbl = ddf.decode_dmrigddf_animationsetdesc(str)`

##### `local str = ddf.encode_dmrigddf_mesh(tbl)`
* `positions` (array of `number`)
* `normals` (array of `number`)
* `tangents` (array of `number`)
* `colors` (array of `number`)
* `texcoord0` (array of `number`)
* `num_texcoord0_components` (`number`) (optional)
* `texcoord1` (array of `number`)
* `num_texcoord1_components` (`number`) (optional)
* `indices` (`ProtobufCBinaryData`) (optional)
* `indices_format` (`number`) (optional)
* `weights` (array of `number`)
* `bone_indices` (array of `number`)
* `material_index` (`number`) (optional)
##### `local tbl = ddf.decode_dmrigddf_mesh(str)`

##### `local str = ddf.encode_dmrigddf_model(tbl)`
* `local` (`dm_math__transform`)
* `id` (`number`)
* `meshes` (array of `dm_rig_ddf__mesh`)
##### `local tbl = ddf.decode_dmrigddf_model(str)`

##### `local str = ddf.encode_dmrigddf_meshset(tbl)`
* `models` (array of `dm_rig_ddf__model`)
* `materials` (array of `string`)
* `bone_list` (array of `number`)
* `max_bone_count` (`number`) (optional)
##### `local tbl = ddf.decode_dmrigddf_meshset(str)`

##### `local str = ddf.encode_dmrigddf_rigscene(tbl)`
* `skeleton` (`string`) (optional)
* `animation_set` (`string`) (optional)
* `mesh_set` (`string`)
* `texture_set` (`string`) (optional)
##### `local tbl = ddf.decode_dmrigddf_rigscene(str)`

##### `local str = ddf.encode_dmmodelddf_modeldesc(tbl)`
* `mesh` (`string`)
* `material` (`string`)
* `textures` (array of `string`)
* `skeleton` (`string`) (optional)
* `animations` (`string`) (optional)
* `default_animation` (`string`) (optional)
* `name` (`string`) (optional)
##### `local tbl = ddf.decode_dmmodelddf_modeldesc(str)`

##### `local str = ddf.encode_dmmodelddf_model(tbl)`
* `rig_scene` (`string`)
* `material` (`string`)
* `textures` (array of `string`)
* `default_animation` (`string`) (optional)
##### `local tbl = ddf.decode_dmmodelddf_model(str)`

##### `local str = ddf.encode_dmmodelddf_resetconstant(tbl)`
* `name_hash` (`number`)
##### `local tbl = ddf.decode_dmmodelddf_resetconstant(str)`

##### `local str = ddf.encode_dmmodelddf_settexture(tbl)`
* `texture_hash` (`number`)
* `texture_unit` (`number`)
##### `local tbl = ddf.decode_dmmodelddf_settexture(str)`

##### `local str = ddf.encode_dmmodelddf_modelplayanimation(tbl)`
* `animation_id` (`number`)
* `playback` (`number`)
* `blend_duration` (`number`) (optional)
* `offset` (`number`) (optional)
* `playback_rate` (`number`) (optional)
##### `local tbl = ddf.decode_dmmodelddf_modelplayanimation(str)`

##### `local str = ddf.encode_dmmodelddf_modelcancelanimation(tbl)`
##### `local tbl = ddf.decode_dmmodelddf_modelcancelanimation(str)`

##### `local str = ddf.encode_dmmodelddf_modelanimationdone(tbl)`
* `animation_id` (`number`)
* `playback` (`number`)
##### `local tbl = ddf.decode_dmmodelddf_modelanimationdone(str)`

##### `local str = ddf.encode_dmmeshddf_meshdesc(tbl)`
* `material` (`string`)
* `vertices` (`string`)
* `textures` (array of `string`)
* `primitive_type` (`number`) (optional)
* `position_stream` (`string`) (optional)
* `normal_stream` (`string`) (optional)
##### `local tbl = ddf.decode_dmmeshddf_meshdesc(str)`

##### `local str = ddf.encode_dmgamesystemddf_labeldesc(tbl)`
* `size` (`dm_math__vector4`)
* `scale` (`dm_math__vector4`) (optional)
* `color` (`dm_math__vector4`)
* `outline` (`dm_math__vector4`)
* `shadow` (`dm_math__vector4`)
* `leading` (`number`)
* `tracking` (`number`)
* `pivot` (`number`)
* `blend_mode` (`number`)
* `line_break` (`boolean`)
* `text` (`string`)
* `font` (`string`)
* `material` (`string`)
##### `local tbl = ddf.decode_dmgamesystemddf_labeldesc(str)`

##### `local str = ddf.encode_dmgamesystemddf_settext(tbl)`
* `text` (`string`)
##### `local tbl = ddf.decode_dmgamesystemddf_settext(str)`

##### `local str = ddf.encode_dmgamesystemddf_convexhull(tbl)`
* `index` (`number`)
* `count` (`number`)
* `collision_group` (`string`)
##### `local tbl = ddf.decode_dmgamesystemddf_convexhull(str)`

##### `local str = ddf.encode_dmgamesystemddf_cue(tbl)`
* `id` (`string`)
* `frame` (`number`)
* `value` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_cue(str)`

##### `local str = ddf.encode_dmgamesystemddf_animation(tbl)`
* `id` (`string`)
* `start_tile` (`number`)
* `end_tile` (`number`)
* `playback` (`number`) (optional)
* `fps` (`number`) (optional)
* `flip_horizontal` (`number`) (optional)
* `flip_vertical` (`number`) (optional)
* `cues` (array of `dm_game_system_ddf__cue`)
##### `local tbl = ddf.decode_dmgamesystemddf_animation(str)`

##### `local str = ddf.encode_dmgamesystemddf_tileset(tbl)`
* `image` (`string`)
* `tile_width` (`number`)
* `tile_height` (`number`)
* `tile_margin` (`number`)
* `tile_spacing` (`number`)
* `collision` (`string`) (optional)
* `material_tag` (`string`)
* `convex_hulls` (array of `dm_game_system_ddf__convex_hull`)
* `convex_hull_points` (array of `number`)
* `collision_groups` (array of `string`)
* `animations` (array of `dm_game_system_ddf__animation`)
* `extrude_borders` (`number`) (optional)
* `inner_padding` (`number`) (optional)
* `sprite_trim_mode` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_tileset(str)`

##### `local str = ddf.encode_dmgamesystemddf_tilecell(tbl)`
* `x` (`number`)
* `y` (`number`)
* `tile` (`number`)
* `h_flip` (`number`) (optional)
* `v_flip` (`number`) (optional)
* `rotate90` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_tilecell(str)`

##### `local str = ddf.encode_dmgamesystemddf_tilelayer(tbl)`
* `id` (`string`)
* `z` (`number`)
* `is_visible` (`number`)
* `id_hash` (`number`) (optional)
* `cell` (array of `dm_game_system_ddf__tile_cell`)
##### `local tbl = ddf.decode_dmgamesystemddf_tilelayer(str)`

##### `local str = ddf.encode_dmgamesystemddf_tilegrid(tbl)`
* `tile_set` (`string`)
* `layers` (array of `dm_game_system_ddf__tile_layer`)
* `material` (`string`) (optional)
* `blend_mode` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_tilegrid(str)`

##### `local str = ddf.encode_dmgamesystemddf_settile(tbl)`
* `layer_id` (`number`)
* `position` (`dm_math__point3`)
* `tile` (`number`) (optional)
* `dx` (`number`) (optional)
* `dy` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_settile(str)`

##### `local str = ddf.encode_dmgamesystemddf_setconstanttilemap(tbl)`
* `name_hash` (`number`)
* `value` (`dm_math__vector4`)
##### `local tbl = ddf.decode_dmgamesystemddf_setconstanttilemap(str)`

##### `local str = ddf.encode_dmgamesystemddf_resetconstanttilemap(tbl)`
* `name_hash` (`number`)
##### `local tbl = ddf.decode_dmgamesystemddf_resetconstanttilemap(str)`

##### `local str = ddf.encode_dmgamesystemddf_atlasimage(tbl)`
* `image` (`string`)
* `sprite_trim_mode` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_atlasimage(str)`

##### `local str = ddf.encode_dmgamesystemddf_atlasanimation(tbl)`
* `id` (`string`)
* `images` (array of `dm_game_system_ddf__atlas_image`)
* `playback` (`number`) (optional)
* `fps` (`number`) (optional)
* `flip_horizontal` (`number`) (optional)
* `flip_vertical` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_atlasanimation(str)`

##### `local str = ddf.encode_dmgamesystemddf_atlas(tbl)`
* `images` (array of `dm_game_system_ddf__atlas_image`)
* `animations` (array of `dm_game_system_ddf__atlas_animation`)
* `margin` (`number`) (optional)
* `extrude_borders` (`number`) (optional)
* `inner_padding` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_atlas(str)`

##### `local str = ddf.encode_dmbufferddf_streamdesc(tbl)`
* `name` (`string`)
* `value_type` (`number`)
* `value_count` (`number`)
* `ui` (array of `number`)
* `i` (array of `number`)
* `ui64` (array of `number`)
* `i64` (array of `number`)
* `f` (array of `number`)
##### `local tbl = ddf.decode_dmbufferddf_streamdesc(str)`

##### `local str = ddf.encode_dmbufferddf_bufferdesc(tbl)`
* `streams` (array of `dm_buffer_ddf__stream_desc`)
##### `local tbl = ddf.decode_dmbufferddf_bufferdesc(str)`

##### `local str = ddf.encode_dmsoundddf_sounddesc(tbl)`
* `sound` (`string`)
* `looping` (`number`) (optional)
* `group` (`string`) (optional)
* `gain` (`number`) (optional)
* `pan` (`number`) (optional)
* `speed` (`number`) (optional)
* `loopcount` (`number`) (optional)
##### `local tbl = ddf.decode_dmsoundddf_sounddesc(str)`

##### `local str = ddf.encode_dmgamesysddf_cameradesc(tbl)`
* `aspect_ratio` (`number`)
* `fov` (`number`)
* `near_z` (`number`)
* `far_z` (`number`)
* `auto_aspect_ratio` (`number`) (optional)
* `orthographic_projection` (`number`) (optional)
* `orthographic_zoom` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesysddf_cameradesc(str)`

##### `local str = ddf.encode_dmgamesysddf_setcamera(tbl)`
* `aspect_ratio` (`number`)
* `fov` (`number`)
* `near_z` (`number`)
* `far_z` (`number`)
* `orthographic_projection` (`number`) (optional)
* `orthographic_zoom` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesysddf_setcamera(str)`

##### `local str = ddf.encode_dmgamesysddf_acquirecamerafocus(tbl)`
##### `local tbl = ddf.decode_dmgamesysddf_acquirecamerafocus(str)`

##### `local str = ddf.encode_dmgamesysddf_releasecamerafocus(tbl)`
##### `local tbl = ddf.decode_dmgamesysddf_releasecamerafocus(str)`

##### `local str = ddf.encode_dmgamesystemddf_spritedesc(tbl)`
* `tile_set` (`string`)
* `default_animation` (`string`)
* `material` (`string`) (optional)
* `blend_mode` (`number`) (optional)
* `slice9` (`dm_math__vector4`) (optional)
* `size` (`dm_math__vector4`) (optional)
* `size_mode` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_spritedesc(str)`

##### `local str = ddf.encode_dmgamesystemddf_playanimation(tbl)`
* `id` (`number`)
* `offset` (`number`) (optional)
* `playback_rate` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_playanimation(str)`

##### `local str = ddf.encode_dmgamesystemddf_animationdone(tbl)`
* `current_tile` (`number`)
* `id` (`number`)
##### `local tbl = ddf.decode_dmgamesystemddf_animationdone(str)`

##### `local str = ddf.encode_dmgamesystemddf_setfliphorizontal(tbl)`
* `flip` (`number`)
##### `local tbl = ddf.decode_dmgamesystemddf_setfliphorizontal(str)`

##### `local str = ddf.encode_dmgamesystemddf_setflipvertical(tbl)`
* `flip` (`number`)
##### `local tbl = ddf.decode_dmgamesystemddf_setflipvertical(str)`

##### `local str = ddf.encode_dmgamesystemddf_texturesetanimation(tbl)`
* `id` (`string`)
* `width` (`number`)
* `height` (`number`)
* `start` (`number`)
* `end` (`number`)
* `fps` (`number`) (optional)
* `playback` (`number`) (optional)
* `flip_horizontal` (`number`) (optional)
* `flip_vertical` (`number`) (optional)
* `is_animation` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_texturesetanimation(str)`

##### `local str = ddf.encode_dmgamesystemddf_spritegeometry(tbl)`
* `width` (`number`)
* `height` (`number`)
* `vertices` (array of `number`)
* `uvs` (array of `number`)
* `indices` (array of `number`)
##### `local tbl = ddf.decode_dmgamesystemddf_spritegeometry(str)`

##### `local str = ddf.encode_dmgamesystemddf_textureset(tbl)`
* `texture` (`string`)
* `animations` (array of `dm_game_system_ddf__texture_set_animation`)
* `convex_hulls` (array of `dm_game_system_ddf__convex_hull`)
* `tile_width` (`number`) (optional)
* `tile_height` (`number`) (optional)
* `tile_count` (`number`) (optional)
* `collision_hull_points` (array of `number`)
* `collision_groups` (array of `string`)
* `tex_coords` (`ProtobufCBinaryData`)
* `tex_dims` (`ProtobufCBinaryData`) (optional)
* `geometries` (array of `dm_game_system_ddf__sprite_geometry`)
* `use_geometries` (`number`) (optional)
* `frame_indices` (array of `number`)
##### `local tbl = ddf.decode_dmgamesystemddf_textureset(str)`

##### `local str = ddf.encode_dmphysicsddf_convexshape(tbl)`
* `shape_type` (`number`)
* `data` (array of `number`)
##### `local tbl = ddf.decode_dmphysicsddf_convexshape(str)`

##### `local str = ddf.encode_dmphysicsddf_collisionshape(tbl)`
* `shapes` (array of `dm_physics_ddf__collision_shape__shape`)
* `data` (array of `number`)
##### `local tbl = ddf.decode_dmphysicsddf_collisionshape(str)`

##### `local str = ddf.encode_dmphysicsddf.collisionshape_shape(tbl)`
* `shape_type` (`number`)
* `position` (`dm_math__point3`)
* `rotation` (`dm_math__quat`)
* `index` (`number`)
* `count` (`number`)
##### `local tbl = ddf.decode_dmphysicsddf.collisionshape_shape(str)`

##### `local str = ddf.encode_dmphysicsddf_collisionobjectdesc(tbl)`
* `collision_shape` (`string`) (optional)
* `type` (`number`)
* `mass` (`number`)
* `friction` (`number`)
* `restitution` (`number`)
* `group` (`string`)
* `mask` (array of `string`)
* `embedded_collision_shape` (`dm_physics_ddf__collision_shape`) (optional)
* `linear_damping` (`number`) (optional)
* `angular_damping` (`number`) (optional)
* `locked_rotation` (`boolean`) (optional)
* `bullet` (`boolean`) (optional)
##### `local tbl = ddf.decode_dmphysicsddf_collisionobjectdesc(str)`

##### `local str = ddf.encode_dmphysicsddf_applyforce(tbl)`
* `force` (`dm_math__vector3`)
* `position` (`dm_math__point3`)
##### `local tbl = ddf.decode_dmphysicsddf_applyforce(str)`

##### `local str = ddf.encode_dmphysicsddf_collisionresponse(tbl)`
* `other_id` (`number`)
* `group` (`number`)
* `other_position` (`dm_math__point3`)
* `other_group` (`number`)
* `own_group` (`number`)
##### `local tbl = ddf.decode_dmphysicsddf_collisionresponse(str)`

##### `local str = ddf.encode_dmphysicsddf_contactpointresponse(tbl)`
* `position` (`dm_math__point3`)
* `normal` (`dm_math__vector3`)
* `relative_velocity` (`dm_math__vector3`)
* `distance` (`number`)
* `applied_impulse` (`number`)
* `life_time` (`number`)
* `mass` (`number`)
* `other_mass` (`number`)
* `other_id` (`number`)
* `other_position` (`dm_math__point3`)
* `group` (`number`)
* `other_group` (`number`)
* `own_group` (`number`)
##### `local tbl = ddf.decode_dmphysicsddf_contactpointresponse(str)`

##### `local str = ddf.encode_dmphysicsddf_triggerresponse(tbl)`
* `other_id` (`number`)
* `enter` (`boolean`)
* `group` (`number`)
* `other_group` (`number`)
* `own_group` (`number`)
##### `local tbl = ddf.decode_dmphysicsddf_triggerresponse(str)`

##### `local str = ddf.encode_dmphysicsddf_requestraycast(tbl)`
* `from` (`dm_math__point3`)
* `to` (`dm_math__point3`)
* `mask` (`number`)
* `request_id` (`number`)
##### `local tbl = ddf.decode_dmphysicsddf_requestraycast(str)`

##### `local str = ddf.encode_dmphysicsddf_raycastresponse(tbl)`
* `fraction` (`number`)
* `position` (`dm_math__point3`)
* `normal` (`dm_math__vector3`)
* `id` (`number`)
* `group` (`number`)
* `request_id` (`number`)
##### `local tbl = ddf.decode_dmphysicsddf_raycastresponse(str)`

##### `local str = ddf.encode_dmphysicsddf_raycastmissed(tbl)`
* `request_id` (`number`)
##### `local tbl = ddf.decode_dmphysicsddf_raycastmissed(str)`

##### `local str = ddf.encode_dmphysicsddf_requestvelocity(tbl)`
##### `local tbl = ddf.decode_dmphysicsddf_requestvelocity(str)`

##### `local str = ddf.encode_dmphysicsddf_velocityresponse(tbl)`
* `linear_velocity` (`dm_math__vector3`)
* `angular_velocity` (`dm_math__vector3`)
##### `local tbl = ddf.decode_dmphysicsddf_velocityresponse(str)`

##### `local str = ddf.encode_dmphysicsddf_setgridshapehull(tbl)`
* `shape` (`number`)
* `row` (`number`)
* `column` (`number`)
* `hull` (`number`)
* `flip_horizontal` (`number`)
* `flip_vertical` (`number`)
* `rotate90` (`number`)
##### `local tbl = ddf.decode_dmphysicsddf_setgridshapehull(str)`

##### `local str = ddf.encode_dmphysicsddf_enablegridshapelayer(tbl)`
* `shape` (`number`)
* `enable` (`number`)
##### `local tbl = ddf.decode_dmphysicsddf_enablegridshapelayer(str)`

##### `local str = ddf.encode_dmgamesystemddf_factorydesc(tbl)`
* `prototype` (`string`)
* `load_dynamically` (`boolean`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_factorydesc(str)`

##### `local str = ddf.encode_dmgamesystemddf_collectionfactorydesc(tbl)`
* `prototype` (`string`)
* `load_dynamically` (`boolean`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_collectionfactorydesc(str)`

##### `local str = ddf.encode_dmgamesystemddf_create(tbl)`
* `position` (`dm_math__point3`)
* `rotation` (`dm_math__quat`)
* `id` (`number`) (optional)
* `scale` (`number`) (optional)
* `scale3` (`dm_math__vector3`) (optional)
* `index` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_create(str)`

##### `local str = ddf.encode_dmgamesystemddf_collectionproxydesc(tbl)`
* `collection` (`string`)
* `exclude` (`boolean`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_collectionproxydesc(str)`

##### `local str = ddf.encode_dmgamesystemddf_settimestep(tbl)`
* `factor` (`number`)
* `mode` (`number`)
##### `local tbl = ddf.decode_dmgamesystemddf_settimestep(str)`

##### `local str = ddf.encode_dmgamesystemddf_lightdesc(tbl)`
* `id` (`string`)
* `type` (`number`)
* `intensity` (`number`)
* `color` (`dm_math__vector3`)
* `range` (`number`)
* `decay` (`number`)
* `cone_angle` (`number`) (optional)
* `penumbra_angle` (`number`) (optional)
* `drop_off` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_lightdesc(str)`

##### `local str = ddf.encode_dmgamesystemddf_setlight(tbl)`
* `position` (`dm_math__point3`)
* `rotation` (`dm_math__quat`)
* `light` (`dm_game_system_ddf__light_desc`)
##### `local tbl = ddf.decode_dmgamesystemddf_setlight(str)`

##### `local str = ddf.encode_dmgamesystemddf_setviewprojection(tbl)`
* `id` (`number`)
* `view` (`dm_math__matrix4`)
* `projection` (`dm_math__matrix4`)
##### `local tbl = ddf.decode_dmgamesystemddf_setviewprojection(str)`

##### `local str = ddf.encode_dmgamesystemddf_playsound(tbl)`
* `delay` (`number`) (optional)
* `gain` (`number`) (optional)
* `pan` (`number`) (optional)
* `speed` (`number`) (optional)
* `play_id` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_playsound(str)`

##### `local str = ddf.encode_dmgamesystemddf_stopsound(tbl)`
##### `local tbl = ddf.decode_dmgamesystemddf_stopsound(str)`

##### `local str = ddf.encode_dmgamesystemddf_pausesound(tbl)`
* `pause` (`boolean`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_pausesound(str)`

##### `local str = ddf.encode_dmgamesystemddf_sounddone(tbl)`
* `play_id` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_sounddone(str)`

##### `local str = ddf.encode_dmgamesystemddf_setgain(tbl)`
* `gain` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_setgain(str)`

##### `local str = ddf.encode_dmgamesystemddf_setpan(tbl)`
* `pan` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_setpan(str)`

##### `local str = ddf.encode_dmgamesystemddf_setspeed(tbl)`
* `speed` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_setspeed(str)`

##### `local str = ddf.encode_dmgamesystemddf_playparticlefx(tbl)`
##### `local tbl = ddf.decode_dmgamesystemddf_playparticlefx(str)`

##### `local str = ddf.encode_dmgamesystemddf_stopparticlefx(tbl)`
* `clear_particles` (`boolean`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_stopparticlefx(str)`

##### `local str = ddf.encode_dmgamesystemddf_setconstantparticlefx(tbl)`
* `emitter_id` (`number`)
* `name_hash` (`number`)
* `value` (`dm_math__matrix4`)
* `is_matrix4` (`boolean`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_setconstantparticlefx(str)`

##### `local str = ddf.encode_dmgamesystemddf_resetconstantparticlefx(tbl)`
* `emitter_id` (`number`)
* `name_hash` (`number`)
##### `local tbl = ddf.decode_dmgamesystemddf_resetconstantparticlefx(str)`

##### `local str = ddf.encode_dmgamesystemddf_setconstant(tbl)`
* `name_hash` (`number`)
* `value` (`dm_math__vector4`)
* `index` (`number`) (optional)
##### `local tbl = ddf.decode_dmgamesystemddf_setconstant(str)`

##### `local str = ddf.encode_dmgamesystemddf_resetconstant(tbl)`
* `name_hash` (`number`)
##### `local tbl = ddf.decode_dmgamesystemddf_resetconstant(str)`

##### `local str = ddf.encode_dmgamesystemddf_setscale(tbl)`
* `scale` (`dm_math__vector3`)
##### `local tbl = ddf.decode_dmgamesystemddf_setscale(str)`

##### `local str = ddf.encode_dmguiddf_nodedesc(tbl)`
* `position` (`dm_math__vector4`) (optional)
* `rotation` (`dm_math__vector4`) (optional)
* `scale` (`dm_math__vector4`) (optional)
* `size` (`dm_math__vector4`) (optional)
* `color` (`dm_math__vector4`) (optional)
* `type` (`number`) (optional)
* `blend_mode` (`number`) (optional)
* `text` (`string`) (optional)
* `texture` (`string`) (optional)
* `font` (`string`) (optional)
* `id` (`string`) (optional)
* `xanchor` (`number`) (optional)
* `yanchor` (`number`) (optional)
* `pivot` (`number`) (optional)
* `outline` (`dm_math__vector4`) (optional)
* `shadow` (`dm_math__vector4`) (optional)
* `adjust_mode` (`number`) (optional)
* `line_break` (`boolean`) (optional)
* `parent` (`string`) (optional)
* `layer` (`string`) (optional)
* `inherit_alpha` (`boolean`) (optional)
* `slice9` (`dm_math__vector4`) (optional)
* `outerBounds` (`number`) (optional)
* `innerRadius` (`number`) (optional)
* `perimeterVertices` (`number`) (optional)
* `pieFillAngle` (`number`) (optional)
* `clipping_mode` (`number`) (optional)
* `clipping_visible` (`boolean`) (optional)
* `clipping_inverted` (`boolean`) (optional)
* `alpha` (`number`) (optional)
* `outline_alpha` (`number`) (optional)
* `shadow_alpha` (`number`) (optional)
* `overridden_fields` (array of `number`)
* `template` (`string`) (optional)
* `template_node_child` (`boolean`) (optional)
* `text_leading` (`number`) (optional)
* `text_tracking` (`number`) (optional)
* `size_mode` (`number`) (optional)
* `spine_scene` (`string`) (optional)
* `spine_default_animation` (`string`) (optional)
* `spine_skin` (`string`) (optional)
* `spine_node_child` (`boolean`) (optional)
* `particlefx` (`string`) (optional)
* `custom_type` (`number`) (optional)
* `enabled` (`boolean`) (optional)
* `visible` (`boolean`) (optional)
##### `local tbl = ddf.decode_dmguiddf_nodedesc(str)`

##### `local str = ddf.encode_dmguiddf_scenedesc(tbl)`
* `script` (`string`)
* `fonts` (array of `dm_gui_ddf__scene_desc__font_desc`)
* `textures` (array of `dm_gui_ddf__scene_desc__texture_desc`)
* `background_color` (`dm_math__vector4`) (optional)
* `nodes` (array of `dm_gui_ddf__node_desc`)
* `layers` (array of `dm_gui_ddf__scene_desc__layer_desc`)
* `material` (`string`) (optional)
* `layouts` (array of `dm_gui_ddf__scene_desc__layout_desc`)
* `adjust_reference` (`number`) (optional)
* `max_nodes` (`number`) (optional)
* `spine_scenes` (array of `dm_gui_ddf__scene_desc__spine_scene_desc`)
* `particlefxs` (array of `dm_gui_ddf__scene_desc__particle_fxdesc`)
* `resources` (array of `dm_gui_ddf__scene_desc__resource_desc`)
##### `local tbl = ddf.decode_dmguiddf_scenedesc(str)`

##### `local str = ddf.encode_dmguiddf.scenedesc_fontdesc(tbl)`
* `name` (`string`)
* `font` (`string`)
##### `local tbl = ddf.decode_dmguiddf.scenedesc_fontdesc(str)`

##### `local str = ddf.encode_dmguiddf.scenedesc_texturedesc(tbl)`
* `name` (`string`)
* `texture` (`string`)
##### `local tbl = ddf.decode_dmguiddf.scenedesc_texturedesc(str)`

##### `local str = ddf.encode_dmguiddf.scenedesc_layerdesc(tbl)`
* `name` (`string`)
##### `local tbl = ddf.decode_dmguiddf.scenedesc_layerdesc(str)`

##### `local str = ddf.encode_dmguiddf.scenedesc_layoutdesc(tbl)`
* `name` (`string`)
* `nodes` (array of `dm_gui_ddf__node_desc`)
##### `local tbl = ddf.decode_dmguiddf.scenedesc_layoutdesc(str)`

##### `local str = ddf.encode_dmguiddf.scenedesc_spinescenedesc(tbl)`
* `name` (`string`)
* `spine_scene` (`string`)
##### `local tbl = ddf.decode_dmguiddf.scenedesc_spinescenedesc(str)`

##### `local str = ddf.encode_dmguiddf.scenedesc_resourcedesc(tbl)`
* `name` (`string`)
* `path` (`string`)
##### `local tbl = ddf.decode_dmguiddf.scenedesc_resourcedesc(str)`

##### `local str = ddf.encode_dmguiddf.scenedesc_particlefxdesc(tbl)`
* `name` (`string`)
* `particlefx` (`string`)
##### `local tbl = ddf.decode_dmguiddf.scenedesc_particlefxdesc(str)`

##### `local str = ddf.encode_dmguiddf_layoutchanged(tbl)`
* `id` (`number`)
* `previous_id` (`number`)
##### `local tbl = ddf.decode_dmguiddf_layoutchanged(str)`

##### `local str = ddf.encode_dmliveupdateddf_hashdigest(tbl)`
* `data` (`ProtobufCBinaryData`)
##### `local tbl = ddf.decode_dmliveupdateddf_hashdigest(str)`

##### `local str = ddf.encode_dmliveupdateddf_manifestheader(tbl)`
* `magic_number` (`number`)
* `version` (`number`)
* `resource_hash_algorithm` (`number`)
* `signature_hash_algorithm` (`number`)
* `signature_sign_algorithm` (`number`)
* `project_identifier` (`dm_live_update_ddf__hash_digest`)
##### `local tbl = ddf.decode_dmliveupdateddf_manifestheader(str)`

##### `local str = ddf.encode_dmliveupdateddf_resourceentry(tbl)`
* `url` (`string`)
* `url_hash` (`number`)
* `hash` (`dm_live_update_ddf__hash_digest`)
* `dependants` (array of `number`)
* `flags` (`number`)
##### `local tbl = ddf.decode_dmliveupdateddf_resourceentry(str)`

##### `local str = ddf.encode_dmliveupdateddf_manifestdata(tbl)`
* `header` (`dm_live_update_ddf__manifest_header`)
* `engine_versions` (array of `dm_live_update_ddf__hash_digest`)
* `resources` (array of `dm_live_update_ddf__resource_entry`)
##### `local tbl = ddf.decode_dmliveupdateddf_manifestdata(str)`

##### `local str = ddf.encode_dmliveupdateddf_manifestfile(tbl)`
* `data` (`ProtobufCBinaryData`)
* `signature` (`ProtobufCBinaryData`)
* `archive_identifier` (`ProtobufCBinaryData`)
##### `local tbl = ddf.decode_dmliveupdateddf_manifestfile(str)`

##### `local str = ddf.encode_dmresourceddf_reload(tbl)`
* `resources` (array of `string`)
##### `local tbl = ddf.decode_dmresourceddf_reload(str)`

##### `local str = ddf.encode_dmgraphics_cubemap(tbl)`
* `right` (`string`)
* `left` (`string`)
* `top` (`string`)
* `bottom` (`string`)
* `front` (`string`)
* `back` (`string`)
##### `local tbl = ddf.decode_dmgraphics_cubemap(str)`

##### `local str = ddf.encode_dmgraphics_textureimage(tbl)`
* `alternatives` (array of `dm_graphics__texture_image__image`)
* `type` (`number`)
* `count` (`number`)
##### `local tbl = ddf.decode_dmgraphics_textureimage(str)`

##### `local str = ddf.encode_dmgraphics.textureimage_image(tbl)`
* `width` (`number`)
* `height` (`number`)
* `original_width` (`number`)
* `original_height` (`number`)
* `format` (`number`)
* `mip_map_offset` (array of `number`)
* `mip_map_size` (array of `number`)
* `data` (`ProtobufCBinaryData`)
* `compression_type` (`number`) (optional)
* `compression_flags` (`number`) (optional)
* `mip_map_size_compressed` (array of `number`)
##### `local tbl = ddf.decode_dmgraphics.textureimage_image(str)`

##### `local str = ddf.encode_dmgraphics_textureformatalternative(tbl)`
* `format` (`number`)
* `compression_level` (`number`)
* `compression_type` (`number`) (optional)
##### `local tbl = ddf.decode_dmgraphics_textureformatalternative(str)`

##### `local str = ddf.encode_dmgraphics_pathsettings(tbl)`
* `path` (`string`)
* `profile` (`string`)
##### `local tbl = ddf.decode_dmgraphics_pathsettings(str)`

##### `local str = ddf.encode_dmgraphics_platformprofile(tbl)`
* `os` (`number`)
* `formats` (array of `dm_graphics__texture_format_alternative`)
* `mipmaps` (`boolean`)
* `max_texture_size` (`number`) (optional)
* `premultiply_alpha` (`boolean`) (optional)
##### `local tbl = ddf.decode_dmgraphics_platformprofile(str)`

##### `local str = ddf.encode_dmgraphics_textureprofile(tbl)`
* `name` (`string`)
* `platforms` (array of `dm_graphics__platform_profile`)
##### `local tbl = ddf.decode_dmgraphics_textureprofile(str)`

##### `local str = ddf.encode_dmgraphics_textureprofiles(tbl)`
* `path_settings` (array of `dm_graphics__path_settings`)
* `profiles` (array of `dm_graphics__texture_profile`)
##### `local tbl = ddf.decode_dmgraphics_textureprofiles(str)`

##### `local str = ddf.encode_dmgraphics_shaderdesc(tbl)`
* `shaders` (array of `dm_graphics__shader_desc__shader`)
##### `local tbl = ddf.decode_dmgraphics_shaderdesc(str)`

##### `local str = ddf.encode_dmgraphics.shaderdesc_resourcebinding(tbl)`
* `name` (`string`)
* `type` (`number`)
* `element_count` (`number`) (optional)
* `set` (`number`) (optional)
* `binding` (`number`) (optional)
##### `local tbl = ddf.decode_dmgraphics.shaderdesc_resourcebinding(str)`

##### `local str = ddf.encode_dmgraphics.shaderdesc_shader(tbl)`
* `language` (`number`)
* `source` (`ProtobufCBinaryData`) (optional)
* `uniforms` (array of `dm_graphics__shader_desc__resource_binding`)
* `attributes` (array of `dm_graphics__shader_desc__resource_binding`)
##### `local tbl = ddf.decode_dmgraphics.shaderdesc_shader(str)`

##### `local str = ddf.encode_dmpropertiesddf_propertydeclarationentry(tbl)`
* `key` (`string`)
* `id` (`number`)
* `index` (`number`)
* `element_ids` (array of `number`)
##### `local tbl = ddf.decode_dmpropertiesddf_propertydeclarationentry(str)`

##### `local str = ddf.encode_dmpropertiesddf_propertydeclarations(tbl)`
* `number_entries` (array of `dm_properties_ddf__property_declaration_entry`)
* `hash_entries` (array of `dm_properties_ddf__property_declaration_entry`)
* `url_entries` (array of `dm_properties_ddf__property_declaration_entry`)
* `vector3_entries` (array of `dm_properties_ddf__property_declaration_entry`)
* `vector4_entries` (array of `dm_properties_ddf__property_declaration_entry`)
* `quat_entries` (array of `dm_properties_ddf__property_declaration_entry`)
* `bool_entries` (array of `dm_properties_ddf__property_declaration_entry`)
* `float_values` (array of `number`)
* `hash_values` (array of `number`)
* `string_values` (array of `string`)
##### `local tbl = ddf.decode_dmpropertiesddf_propertydeclarations(str)`

##### `local str = ddf.encode_dmgameobjectddf_propertydesc(tbl)`
* `id` (`string`)
* `value` (`string`)
* `type` (`number`)
##### `local tbl = ddf.decode_dmgameobjectddf_propertydesc(str)`

##### `local str = ddf.encode_dmgameobjectddf_componentdesc(tbl)`
* `id` (`string`)
* `component` (`string`)
* `position` (`dm_math__point3`) (optional)
* `rotation` (`dm_math__quat`) (optional)
* `properties` (array of `dm_game_object_ddf__property_desc`)
* `property_decls` (`dm_properties_ddf__property_declarations`) (optional)
* `scale` (`dm_math__vector3`) (optional)
##### `local tbl = ddf.decode_dmgameobjectddf_componentdesc(str)`

##### `local str = ddf.encode_dmgameobjectddf_embeddedcomponentdesc(tbl)`
* `id` (`string`)
* `type` (`string`)
* `data` (`string`)
* `position` (`dm_math__point3`) (optional)
* `rotation` (`dm_math__quat`) (optional)
* `scale` (`dm_math__vector3`) (optional)
##### `local tbl = ddf.decode_dmgameobjectddf_embeddedcomponentdesc(str)`

##### `local str = ddf.encode_dmgameobjectddf_prototypedesc(tbl)`
* `components` (array of `dm_game_object_ddf__component_desc`)
* `embedded_components` (array of `dm_game_object_ddf__embedded_component_desc`)
* `property_resources` (array of `string`)
##### `local tbl = ddf.decode_dmgameobjectddf_prototypedesc(str)`

##### `local str = ddf.encode_dmgameobjectddf_componentpropertydesc(tbl)`
* `id` (`string`)
* `properties` (array of `dm_game_object_ddf__property_desc`)
* `property_decls` (`dm_properties_ddf__property_declarations`) (optional)
##### `local tbl = ddf.decode_dmgameobjectddf_componentpropertydesc(str)`

##### `local str = ddf.encode_dmgameobjectddf_componentypedesc(tbl)`
* `name_hash` (`number`)
* `max_count` (`number`)
##### `local tbl = ddf.decode_dmgameobjectddf_componentypedesc(str)`

##### `local str = ddf.encode_dmgameobjectddf_instancedesc(tbl)`
* `id` (`string`)
* `prototype` (`string`)
* `children` (array of `string`)
* `position` (`dm_math__point3`) (optional)
* `rotation` (`dm_math__quat`) (optional)
* `component_properties` (array of `dm_game_object_ddf__component_property_desc`)
* `scale` (`number`) (optional)
* `scale3` (`dm_math__vector3`) (optional)
##### `local tbl = ddf.decode_dmgameobjectddf_instancedesc(str)`

##### `local str = ddf.encode_dmgameobjectddf_embeddedinstancedesc(tbl)`
* `id` (`string`)
* `children` (array of `string`)
* `data` (`string`)
* `position` (`dm_math__point3`) (optional)
* `rotation` (`dm_math__quat`) (optional)
* `component_properties` (array of `dm_game_object_ddf__component_property_desc`)
* `scale` (`number`) (optional)
* `scale3` (`dm_math__vector3`) (optional)
##### `local tbl = ddf.decode_dmgameobjectddf_embeddedinstancedesc(str)`

##### `local str = ddf.encode_dmgameobjectddf_instancepropertydesc(tbl)`
* `id` (`string`)
* `properties` (array of `dm_game_object_ddf__component_property_desc`)
##### `local tbl = ddf.decode_dmgameobjectddf_instancepropertydesc(str)`

##### `local str = ddf.encode_dmgameobjectddf_collectioninstancedesc(tbl)`
* `id` (`string`)
* `collection` (`string`)
* `position` (`dm_math__point3`) (optional)
* `rotation` (`dm_math__quat`) (optional)
* `scale` (`number`) (optional)
* `scale3` (`dm_math__vector3`) (optional)
* `instance_properties` (array of `dm_game_object_ddf__instance_property_desc`)
##### `local tbl = ddf.decode_dmgameobjectddf_collectioninstancedesc(str)`

##### `local str = ddf.encode_dmgameobjectddf_collectiondesc(tbl)`
* `name` (`string`)
* `instances` (array of `dm_game_object_ddf__instance_desc`)
* `collection_instances` (array of `dm_game_object_ddf__collection_instance_desc`)
* `scale_along_z` (`number`) (optional)
* `embedded_instances` (array of `dm_game_object_ddf__embedded_instance_desc`)
* `property_resources` (array of `string`)
* `component_types` (array of `dm_game_object_ddf__componen_type_desc`)
##### `local tbl = ddf.decode_dmgameobjectddf_collectiondesc(str)`

##### `local str = ddf.encode_dmgameobjectddf_acquireinputfocus(tbl)`
##### `local tbl = ddf.decode_dmgameobjectddf_acquireinputfocus(str)`

##### `local str = ddf.encode_dmgameobjectddf_releaseinputfocus(tbl)`
##### `local tbl = ddf.decode_dmgameobjectddf_releaseinputfocus(str)`

##### `local str = ddf.encode_dmgameobjectddf_requesttransform(tbl)`
##### `local tbl = ddf.decode_dmgameobjectddf_requesttransform(str)`

##### `local str = ddf.encode_dmgameobjectddf_transformresponse(tbl)`
* `position` (`dm_math__point3`)
* `rotation` (`dm_math__quat`)
* `world_position` (`dm_math__point3`)
* `world_rotation` (`dm_math__quat`)
* `scale` (`number`) (optional)
* `scale3` (`dm_math__vector3`) (optional)
* `world_scale` (`number`) (optional)
* `world_scale3` (`dm_math__vector3`) (optional)
##### `local tbl = ddf.decode_dmgameobjectddf_transformresponse(str)`

##### `local str = ddf.encode_dmgameobjectddf_setparent(tbl)`
* `parent_id` (`number`) (optional)
* `keep_world_transform` (`number`) (optional)
##### `local tbl = ddf.decode_dmgameobjectddf_setparent(str)`

##### `local str = ddf.encode_dmgameobjectddf_enable(tbl)`
##### `local tbl = ddf.decode_dmgameobjectddf_enable(str)`

##### `local str = ddf.encode_dmgameobjectddf_disable(tbl)`
##### `local tbl = ddf.decode_dmgameobjectddf_disable(str)`

##### `local str = ddf.encode_dmgameobjectddf_scriptmessage(tbl)`
* `descriptor_hash` (`number`)
* `payload_size` (`number`)
* `function` (`number`) (optional)
* `unref_function` (`boolean`) (optional)
##### `local tbl = ddf.decode_dmgameobjectddf_scriptmessage(str)`

##### `local str = ddf.encode_dmluaddf_luamodule(tbl)`
* `source` (`dm_lua_ddf__lua_source`)
* `modules` (array of `string`)
* `resources` (array of `string`)
* `properties` (`dm_properties_ddf__property_declarations`) (optional)
* `property_resources` (array of `string`)
##### `local tbl = ddf.decode_dmluaddf_luamodule(str)`

##### `local str = ddf.encode_dmengineddf_hideapp(tbl)`
##### `local tbl = ddf.decode_dmengineddf_hideapp(str)`

##### `local str = ddf.encode_dmengineddf_runscript(tbl)`
* `module` (`dm_lua_ddf__lua_module`)
##### `local tbl = ddf.decode_dmengineddf_runscript(str)`

##### `local str = ddf.encode_dmparticleddf_splinepoint(tbl)`
* `x` (`number`)
* `y` (`number`)
* `t_x` (`number`)
* `t_y` (`number`)
##### `local tbl = ddf.decode_dmparticleddf_splinepoint(str)`

##### `local str = ddf.encode_dmparticleddf_modifier(tbl)`
* `type` (`number`)
* `use_direction` (`number`) (optional)
* `position` (`dm_math__point3`) (optional)
* `rotation` (`dm_math__quat`) (optional)
* `properties` (array of `dm_particle_ddf__modifier__property`)
##### `local tbl = ddf.decode_dmparticleddf_modifier(str)`

##### `local str = ddf.encode_dmparticleddf.modifier_property(tbl)`
* `key` (`number`)
* `points` (array of `dm_particle_ddf__spline_point`)
* `spread` (`number`) (optional)
##### `local tbl = ddf.decode_dmparticleddf.modifier_property(str)`

##### `local str = ddf.encode_dmparticleddf_emitter(tbl)`
* `id` (`string`) (optional)
* `mode` (`number`)
* `duration` (`number`) (optional)
* `space` (`number`)
* `position` (`dm_math__point3`)
* `rotation` (`dm_math__quat`)
* `tile_source` (`string`)
* `animation` (`string`)
* `material` (`string`)
* `blend_mode` (`number`) (optional)
* `particle_orientation` (`number`) (optional)
* `inherit_velocity` (`number`) (optional)
* `max_particle_count` (`number`)
* `type` (`number`)
* `start_delay` (`number`) (optional)
* `properties` (array of `dm_particle_ddf__emitter__property`)
* `particle_properties` (array of `dm_particle_ddf__emitter__particle_property`)
* `modifiers` (array of `dm_particle_ddf__modifier`)
* `size_mode` (`number`) (optional)
* `start_delay_spread` (`number`) (optional)
* `duration_spread` (`number`) (optional)
* `stretch_with_velocity` (`boolean`) (optional)
* `start_offset` (`number`) (optional)
* `pivot` (`dm_math__point3`) (optional)
##### `local tbl = ddf.decode_dmparticleddf_emitter(str)`

##### `local str = ddf.encode_dmparticleddf.emitter_property(tbl)`
* `key` (`number`)
* `points` (array of `dm_particle_ddf__spline_point`)
* `spread` (`number`) (optional)
##### `local tbl = ddf.decode_dmparticleddf.emitter_property(str)`

##### `local str = ddf.encode_dmparticleddf.emitter_particleproperty(tbl)`
* `key` (`number`)
* `points` (array of `dm_particle_ddf__spline_point`)
##### `local tbl = ddf.decode_dmparticleddf.emitter_particleproperty(str)`

##### `local str = ddf.encode_dmparticleddf_particlefx(tbl)`
* `emitters` (array of `dm_particle_ddf__emitter`)
* `modifiers` (array of `dm_particle_ddf__modifier`)
##### `local tbl = ddf.decode_dmparticleddf_particlefx(str)`


## Enums
##### `ddf.DM_INPUT_DDF__KEY_KEY_SPACE`
##### `ddf.DM_INPUT_DDF__KEY_KEY_EXCLAIM`
##### `ddf.DM_INPUT_DDF__KEY_KEY_QUOTEDBL`
##### `ddf.DM_INPUT_DDF__KEY_KEY_HASH`
##### `ddf.DM_INPUT_DDF__KEY_KEY_DOLLAR`
##### `ddf.DM_INPUT_DDF__KEY_KEY_AMPERSAND`
##### `ddf.DM_INPUT_DDF__KEY_KEY_QUOTE`
##### `ddf.DM_INPUT_DDF__KEY_KEY_LPAREN`
##### `ddf.DM_INPUT_DDF__KEY_KEY_RPAREN`
##### `ddf.DM_INPUT_DDF__KEY_KEY_ASTERISK`
##### `ddf.DM_INPUT_DDF__KEY_KEY_PLUS`
##### `ddf.DM_INPUT_DDF__KEY_KEY_COMMA`
##### `ddf.DM_INPUT_DDF__KEY_KEY_MINUS`
##### `ddf.DM_INPUT_DDF__KEY_KEY_PERIOD`
##### `ddf.DM_INPUT_DDF__KEY_KEY_SLASH`
##### `ddf.DM_INPUT_DDF__KEY_KEY_0`
##### `ddf.DM_INPUT_DDF__KEY_KEY_1`
##### `ddf.DM_INPUT_DDF__KEY_KEY_2`
##### `ddf.DM_INPUT_DDF__KEY_KEY_3`
##### `ddf.DM_INPUT_DDF__KEY_KEY_4`
##### `ddf.DM_INPUT_DDF__KEY_KEY_5`
##### `ddf.DM_INPUT_DDF__KEY_KEY_6`
##### `ddf.DM_INPUT_DDF__KEY_KEY_7`
##### `ddf.DM_INPUT_DDF__KEY_KEY_8`
##### `ddf.DM_INPUT_DDF__KEY_KEY_9`
##### `ddf.DM_INPUT_DDF__KEY_KEY_COLON`
##### `ddf.DM_INPUT_DDF__KEY_KEY_SEMICOLON`
##### `ddf.DM_INPUT_DDF__KEY_KEY_LESS`
##### `ddf.DM_INPUT_DDF__KEY_KEY_EQUALS`
##### `ddf.DM_INPUT_DDF__KEY_KEY_GREATER`
##### `ddf.DM_INPUT_DDF__KEY_KEY_QUESTION`
##### `ddf.DM_INPUT_DDF__KEY_KEY_AT`
##### `ddf.DM_INPUT_DDF__KEY_KEY_A`
##### `ddf.DM_INPUT_DDF__KEY_KEY_B`
##### `ddf.DM_INPUT_DDF__KEY_KEY_C`
##### `ddf.DM_INPUT_DDF__KEY_KEY_D`
##### `ddf.DM_INPUT_DDF__KEY_KEY_E`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F`
##### `ddf.DM_INPUT_DDF__KEY_KEY_G`
##### `ddf.DM_INPUT_DDF__KEY_KEY_H`
##### `ddf.DM_INPUT_DDF__KEY_KEY_I`
##### `ddf.DM_INPUT_DDF__KEY_KEY_J`
##### `ddf.DM_INPUT_DDF__KEY_KEY_K`
##### `ddf.DM_INPUT_DDF__KEY_KEY_L`
##### `ddf.DM_INPUT_DDF__KEY_KEY_M`
##### `ddf.DM_INPUT_DDF__KEY_KEY_N`
##### `ddf.DM_INPUT_DDF__KEY_KEY_O`
##### `ddf.DM_INPUT_DDF__KEY_KEY_P`
##### `ddf.DM_INPUT_DDF__KEY_KEY_Q`
##### `ddf.DM_INPUT_DDF__KEY_KEY_R`
##### `ddf.DM_INPUT_DDF__KEY_KEY_S`
##### `ddf.DM_INPUT_DDF__KEY_KEY_T`
##### `ddf.DM_INPUT_DDF__KEY_KEY_U`
##### `ddf.DM_INPUT_DDF__KEY_KEY_V`
##### `ddf.DM_INPUT_DDF__KEY_KEY_W`
##### `ddf.DM_INPUT_DDF__KEY_KEY_X`
##### `ddf.DM_INPUT_DDF__KEY_KEY_Y`
##### `ddf.DM_INPUT_DDF__KEY_KEY_Z`
##### `ddf.DM_INPUT_DDF__KEY_KEY_LBRACKET`
##### `ddf.DM_INPUT_DDF__KEY_KEY_BACKSLASH`
##### `ddf.DM_INPUT_DDF__KEY_KEY_RBRACKET`
##### `ddf.DM_INPUT_DDF__KEY_KEY_CARET`
##### `ddf.DM_INPUT_DDF__KEY_KEY_UNDERSCORE`
##### `ddf.DM_INPUT_DDF__KEY_KEY_BACKQUOTE`
##### `ddf.DM_INPUT_DDF__KEY_KEY_LBRACE`
##### `ddf.DM_INPUT_DDF__KEY_KEY_PIPE`
##### `ddf.DM_INPUT_DDF__KEY_KEY_RBRACE`
##### `ddf.DM_INPUT_DDF__KEY_KEY_TILDE`
##### `ddf.DM_INPUT_DDF__KEY_KEY_ESC`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F1`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F2`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F3`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F4`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F5`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F6`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F7`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F8`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F9`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F10`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F11`
##### `ddf.DM_INPUT_DDF__KEY_KEY_F12`
##### `ddf.DM_INPUT_DDF__KEY_KEY_UP`
##### `ddf.DM_INPUT_DDF__KEY_KEY_DOWN`
##### `ddf.DM_INPUT_DDF__KEY_KEY_LEFT`
##### `ddf.DM_INPUT_DDF__KEY_KEY_RIGHT`
##### `ddf.DM_INPUT_DDF__KEY_KEY_LSHIFT`
##### `ddf.DM_INPUT_DDF__KEY_KEY_RSHIFT`
##### `ddf.DM_INPUT_DDF__KEY_KEY_LCTRL`
##### `ddf.DM_INPUT_DDF__KEY_KEY_RCTRL`
##### `ddf.DM_INPUT_DDF__KEY_KEY_LALT`
##### `ddf.DM_INPUT_DDF__KEY_KEY_RALT`
##### `ddf.DM_INPUT_DDF__KEY_KEY_TAB`
##### `ddf.DM_INPUT_DDF__KEY_KEY_ENTER`
##### `ddf.DM_INPUT_DDF__KEY_KEY_BACKSPACE`
##### `ddf.DM_INPUT_DDF__KEY_KEY_INSERT`
##### `ddf.DM_INPUT_DDF__KEY_KEY_DEL`
##### `ddf.DM_INPUT_DDF__KEY_KEY_PAGEUP`
##### `ddf.DM_INPUT_DDF__KEY_KEY_PAGEDOWN`
##### `ddf.DM_INPUT_DDF__KEY_KEY_HOME`
##### `ddf.DM_INPUT_DDF__KEY_KEY_END`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_0`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_1`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_2`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_3`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_4`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_5`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_6`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_7`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_8`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_9`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_DIVIDE`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_MULTIPLY`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_SUBTRACT`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_ADD`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_DECIMAL`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_EQUAL`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_ENTER`
##### `ddf.DM_INPUT_DDF__KEY_KEY_KP_NUM_LOCK`
##### `ddf.DM_INPUT_DDF__KEY_KEY_CAPS_LOCK`
##### `ddf.DM_INPUT_DDF__KEY_KEY_SCROLL_LOCK`
##### `ddf.DM_INPUT_DDF__KEY_KEY_PAUSE`
##### `ddf.DM_INPUT_DDF__KEY_KEY_LSUPER`
##### `ddf.DM_INPUT_DDF__KEY_KEY_RSUPER`
##### `ddf.DM_INPUT_DDF__KEY_KEY_MENU`
##### `ddf.DM_INPUT_DDF__KEY_KEY_BACK`
##### `ddf.DM_INPUT_DDF__KEY_MAX_KEY_COUNT`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_WHEEL_UP`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_WHEEL_DOWN`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_LEFT`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_MIDDLE`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_RIGHT`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_1`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_2`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_3`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_4`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_5`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_6`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_7`
##### `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_8`
##### `ddf.DM_INPUT_DDF__MOUSE_MAX_MOUSE_COUNT`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_LEFT`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_RIGHT`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_DOWN`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_UP`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_CLICK`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LTRIGGER`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSHOULDER`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_LEFT`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_RIGHT`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_DOWN`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_UP`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_LEFT`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_RIGHT`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_DOWN`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_UP`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_CLICK`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RTRIGGER`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSHOULDER`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_LEFT`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_RIGHT`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_DOWN`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_UP`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_START`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_BACK`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_GUIDE`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_CONNECTED`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_DISCONNECTED`
##### `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RAW`
##### `ddf.DM_INPUT_DDF__GAMEPAD_MAX_GAMEPAD_COUNT`
##### `ddf.DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_AXIS`
##### `ddf.DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_BUTTON`
##### `ddf.DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_HAT`
##### `ddf.DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_NEGATE`
##### `ddf.DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_SCALE`
##### `ddf.DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_CLAMP`
##### `ddf.DM_INPUT_DDF__GAMEPAD_MODIFIER_MAX_GAMEPAD_MODIFIER_COUNT`
##### `ddf.DM_INPUT_DDF__TOUCH_TOUCH_MULTI`
##### `ddf.DM_INPUT_DDF__TOUCH_MAX_TOUCH_COUNT`
##### `ddf.DM_INPUT_DDF__TEXT_TEXT`
##### `ddf.DM_INPUT_DDF__TEXT_MARKED_TEXT`
##### `ddf.DM_INPUT_DDF__TEXT_MAX_TEXT_COUNT`
##### `ddf.DM_RENDER_DDF__FONT_TEXTURE_FORMAT_TYPE_BITMAP`
##### `ddf.DM_RENDER_DDF__FONT_TEXTURE_FORMAT_TYPE_DISTANCE_FIELD`
##### `ddf.DM_RENDER_DDF__FONT_RENDER_MODE_MODE_SINGLE_LAYER`
##### `ddf.DM_RENDER_DDF__FONT_RENDER_MODE_MODE_MULTI_LAYER`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_USER`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_VIEWPROJ`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLD`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_TEXTURE`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_VIEW`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_PROJECTION`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_NORMAL`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLDVIEW`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLDVIEWPROJ`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_USER_MATRIX4`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE_VERTEX_SPACE_WORLD`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE_VERTEX_SPACE_LOCAL`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_REPEAT`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_MIRRORED_REPEAT`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_CLAMP_TO_EDGE`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST_MIPMAP_NEAREST`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST_MIPMAP_LINEAR`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR_MIPMAP_NEAREST`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR_MIPMAP_LINEAR`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG_FILTER_MODE_MAG_NEAREST`
##### `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG_FILTER_MODE_MAG_LINEAR`
##### `ddf.DM_SCRIPT_DOC__TYPE_FUNCTION`
##### `ddf.DM_SCRIPT_DOC__TYPE_VARIABLE`
##### `ddf.DM_SCRIPT_DOC__TYPE_MESSAGE`
##### `ddf.DM_SCRIPT_DOC__TYPE_NAMESPACE`
##### `ddf.DM_SCRIPT_DOC__TYPE_PROPERTY`
##### `ddf.DM_SCRIPT_DOC__TYPE_PACKAGE`
##### `ddf.DM_SCRIPT_DOC__TYPE_STRUCT`
##### `ddf.DM_SCRIPT_DOC__TYPE_MACRO`
##### `ddf.DM_SCRIPT_DOC__TYPE_ENUM`
##### `ddf.DM_SCRIPT_DOC__TYPE_TYPEDEF`
##### `ddf.DM_SCRIPT_DOC__TYPE_CLASS`
##### `ddf.DM_RIG_DDF__INDEX_BUFFER_FORMAT_INDEXBUFFER_FORMAT_16`
##### `ddf.DM_RIG_DDF__INDEX_BUFFER_FORMAT_INDEXBUFFER_FORMAT_32`
##### `ddf.DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_LINES`
##### `ddf.DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_TRIANGLES`
##### `ddf.DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_TRIANGLE_STRIP`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_ALPHA`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_ADD`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_MULT`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_SCREEN`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_CENTER`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_N`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_NE`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_E`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_SE`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_S`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_SW`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_W`
##### `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_NW`
##### `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_NONE`
##### `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_FORWARD`
##### `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_BACKWARD`
##### `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_PINGPONG`
##### `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_FORWARD`
##### `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_BACKWARD`
##### `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_PINGPONG`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_OFF`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_4`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_5`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_6`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_7`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_8`
##### `ddf.DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ALPHA`
##### `ddf.DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ADD`
##### `ddf.DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
##### `ddf.DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_MULT`
##### `ddf.DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_SCREEN`
##### `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT8`
##### `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT16`
##### `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT32`
##### `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT64`
##### `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT8`
##### `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT16`
##### `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT32`
##### `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT64`
##### `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_FLOAT32`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ALPHA`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ADD`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_MULT`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_SCREEN`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__SIZE_MODE_SIZE_MODE_MANUAL`
##### `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__SIZE_MODE_SIZE_MODE_AUTO`
##### `ddf.DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_DYNAMIC`
##### `ddf.DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_KINEMATIC`
##### `ddf.DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_STATIC`
##### `ddf.DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_TRIGGER`
##### `ddf.DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_SPHERE`
##### `ddf.DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_BOX`
##### `ddf.DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_CAPSULE`
##### `ddf.DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_HULL`
##### `ddf.DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_SPHERE`
##### `ddf.DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_BOX`
##### `ddf.DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_CAPSULE`
##### `ddf.DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_HULL`
##### `ddf.DM_GAME_SYSTEM_DDF__TIME_STEP_MODE_TIME_STEP_MODE_CONTINUOUS`
##### `ddf.DM_GAME_SYSTEM_DDF__TIME_STEP_MODE_TIME_STEP_MODE_DISCRETE`
##### `ddf.DM_GAME_SYSTEM_DDF__LIGHT_TYPE_POINT`
##### `ddf.DM_GAME_SYSTEM_DDF__LIGHT_TYPE_SPOT`
##### `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_BOX`
##### `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_TEXT`
##### `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_PIE`
##### `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_TEMPLATE`
##### `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_SPINE`
##### `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_PARTICLEFX`
##### `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_CUSTOM`
##### `ddf.DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ALPHA`
##### `ddf.DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ADD`
##### `ddf.DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
##### `ddf.DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_MULT`
##### `ddf.DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_SCREEN`
##### `ddf.DM_GUI_DDF__NODE_DESC__CLIPPING_MODE_CLIPPING_MODE_NONE`
##### `ddf.DM_GUI_DDF__NODE_DESC__CLIPPING_MODE_CLIPPING_MODE_STENCIL`
##### `ddf.DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_NONE`
##### `ddf.DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_LEFT`
##### `ddf.DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_RIGHT`
##### `ddf.DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_NONE`
##### `ddf.DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_TOP`
##### `ddf.DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_BOTTOM`
##### `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_CENTER`
##### `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_N`
##### `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_NE`
##### `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_E`
##### `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_SE`
##### `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_S`
##### `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_SW`
##### `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_W`
##### `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_NW`
##### `ddf.DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_FIT`
##### `ddf.DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_ZOOM`
##### `ddf.DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_STRETCH`
##### `ddf.DM_GUI_DDF__NODE_DESC__SIZE_MODE_SIZE_MODE_MANUAL`
##### `ddf.DM_GUI_DDF__NODE_DESC__SIZE_MODE_SIZE_MODE_AUTO`
##### `ddf.DM_GUI_DDF__NODE_DESC__PIE_BOUNDS_PIEBOUNDS_RECTANGLE`
##### `ddf.DM_GUI_DDF__NODE_DESC__PIE_BOUNDS_PIEBOUNDS_ELLIPSE`
##### `ddf.DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_LEGACY`
##### `ddf.DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_PARENT`
##### `ddf.DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_DISABLED`
##### `ddf.DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_UNKNOWN`
##### `ddf.DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_MD5`
##### `ddf.DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA1`
##### `ddf.DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA256`
##### `ddf.DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA512`
##### `ddf.DM_LIVE_UPDATE_DDF__SIGN_ALGORITHM_SIGN_UNKNOWN`
##### `ddf.DM_LIVE_UPDATE_DDF__SIGN_ALGORITHM_SIGN_RSA`
##### `ddf.DM_LIVE_UPDATE_DDF__RESOURCE_ENTRY_FLAG_BUNDLED`
##### `ddf.DM_LIVE_UPDATE_DDF__RESOURCE_ENTRY_FLAG_EXCLUDED`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TYPE_TYPE_2D`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TYPE_TYPE_CUBEMAP`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_DEFAULT`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_WEBP`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_WEBP_LOSSY`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_BASIS_UASTC`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_BASIS_ETC1S`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_FLAGS_COMPRESSION_FLAG_ALPHA_CLEAN`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_LUMINANCE`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_PVRTC_2BPPV1`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_PVRTC_4BPPV1`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_PVRTC_2BPPV1`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_PVRTC_4BPPV1`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_ETC1`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_16BPP`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_16BPP`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_LUMINANCE_ALPHA`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_ETC2`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_ASTC_4x4`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_BC1`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_BC3`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_R_BC4`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RG_BC5`
##### `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_BC7`
##### `ddf.DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_FAST`
##### `ddf.DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_NORMAL`
##### `ddf.DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_HIGH`
##### `ddf.DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_BEST`
##### `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_GENERIC`
##### `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_WINDOWS`
##### `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_OSX`
##### `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_LINUX`
##### `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_IOS`
##### `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_ANDROID`
##### `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_WEB`
##### `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_SWITCH`
##### `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_PS4`
##### `ddf.DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLSL_SM120`
##### `ddf.DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLSL_SM140`
##### `ddf.DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLES_SM100`
##### `ddf.DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLES_SM300`
##### `ddf.DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_SPIRV`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_UNKNOWN`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_INT`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_UINT`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_FLOAT`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC2`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC3`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC4`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT2`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT3`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT4`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER2D`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER3D`
##### `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER_CUBE`
##### `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_NUMBER`
##### `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_HASH`
##### `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_URL`
##### `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_VECTOR3`
##### `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_VECTOR4`
##### `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_QUAT`
##### `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_BOOLEAN`
##### `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_MATRIX4`
##### `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_COUNT`
##### `ddf.DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_CIRCLE`
##### `ddf.DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_2DCONE`
##### `ddf.DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_BOX`
##### `ddf.DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_SPHERE`
##### `ddf.DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_CONE`
##### `ddf.DM_PARTICLE_DDF__PLAY_MODE_PLAY_MODE_ONCE`
##### `ddf.DM_PARTICLE_DDF__PLAY_MODE_PLAY_MODE_LOOP`
##### `ddf.DM_PARTICLE_DDF__EMISSION_SPACE_EMISSION_SPACE_WORLD`
##### `ddf.DM_PARTICLE_DDF__EMISSION_SPACE_EMISSION_SPACE_EMITTER`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SPAWN_RATE`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_X`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_Y`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_Z`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_LIFE_TIME`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_SPEED`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_SIZE`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_RED`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_GREEN`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_BLUE`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ALPHA`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ROTATION`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_STRETCH_FACTOR_X`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_STRETCH_FACTOR_Y`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ANGULAR_VELOCITY`
##### `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_COUNT`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_SCALE`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_RED`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_GREEN`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_BLUE`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ALPHA`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ROTATION`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_STRETCH_FACTOR_X`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_STRETCH_FACTOR_Y`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ANGULAR_VELOCITY`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_COUNT`
##### `ddf.DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_ACCELERATION`
##### `ddf.DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_DRAG`
##### `ddf.DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_RADIAL`
##### `ddf.DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_VORTEX`
##### `ddf.DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_MAGNITUDE`
##### `ddf.DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_MAX_DISTANCE`
##### `ddf.DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_COUNT`
##### `ddf.DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ALPHA`
##### `ddf.DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ADD`
##### `ddf.DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
##### `ddf.DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_MULT`
##### `ddf.DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_SCREEN`
##### `ddf.DM_PARTICLE_DDF__SIZE_MODE_SIZE_MODE_MANUAL`
##### `ddf.DM_PARTICLE_DDF__SIZE_MODE_SIZE_MODE_AUTO`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_DEFAULT`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_INITIAL_DIRECTION`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_MOVEMENT_DIRECTION`
##### `ddf.DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_ANGULAR_VELOCITY`
