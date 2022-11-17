# extension-proto-ddf
This extension provides Lua bindings to encode and decode the Defold Data Format (ddf).

## Message encode/decode
##### `local str = ddf.encode_dmmath_point3(tbl)`
Encode point3 message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `x` (`number`) (optional)
  * `y` (`number`) (optional)
  * `z` (`number`) (optional)
  * `d` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmath_point3(str)`
Decocde point3 message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmath_vector3(tbl)`
Encode vector3 message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `x` (`number`) (optional)
  * `y` (`number`) (optional)
  * `z` (`number`) (optional)
  * `d` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmath_vector3(str)`
Decocde vector3 message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmath_vector4(tbl)`
Encode vector4 message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `x` (`number`) (optional)
  * `y` (`number`) (optional)
  * `z` (`number`) (optional)
  * `w` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmath_vector4(str)`
Decocde vector4 message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmath_quat(tbl)`
Encode quat message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `x` (`number`) (optional)
  * `y` (`number`) (optional)
  * `z` (`number`) (optional)
  * `w` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmath_quat(str)`
Decocde quat message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmath_transform(tbl)`
Encode transform message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `rotation` (`dm_math__quat`) (optional)
  * `translation` (`dm_math__vector3`) (optional)
  * `scale` (`dm_math__vector3`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmath_transform(str)`
Decocde transform message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmath_matrix4(tbl)`
Encode matrix4 message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmath_matrix4(str)`
Decocde matrix4 message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dminputddf_gamepadmodifier_t(tbl)`
Encode gamepadmodifier_t message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `mod` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dminputddf_gamepadmodifier_t(str)`
Decocde gamepadmodifier_t message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dminputddf_gamepadmapentry(tbl)`
Encode gamepadmapentry message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `input` (`number`)
  * `type` (`number`)
  * `index` (`number`)
  * `mod` (array of `dm_input_ddf__gamepad_modifier_t`)
  * `hat_mask` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dminputddf_gamepadmapentry(str)`
Decocde gamepadmapentry message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dminputddf_gamepadmap(tbl)`
Encode gamepadmap message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `device` (`string`)
  * `platform` (`string`)
  * `dead_zone` (`number`)
  * `map` (array of `dm_input_ddf__gamepad_map_entry`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dminputddf_gamepadmap(str)`
Decocde gamepadmap message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dminputddf_gamepadmaps(tbl)`
Encode gamepadmaps message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `driver` (array of `dm_input_ddf__gamepad_map`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dminputddf_gamepadmaps(str)`
Decocde gamepadmaps message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dminputddf_keytrigger(tbl)`
Encode keytrigger message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `input` (`number`)
  * `action` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dminputddf_keytrigger(str)`
Decocde keytrigger message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dminputddf_mousetrigger(tbl)`
Encode mousetrigger message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `input` (`number`)
  * `action` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dminputddf_mousetrigger(str)`
Decocde mousetrigger message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dminputddf_gamepadtrigger(tbl)`
Encode gamepadtrigger message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `input` (`number`)
  * `action` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dminputddf_gamepadtrigger(str)`
Decocde gamepadtrigger message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dminputddf_touchtrigger(tbl)`
Encode touchtrigger message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `input` (`number`)
  * `action` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dminputddf_touchtrigger(str)`
Decocde touchtrigger message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dminputddf_texttrigger(tbl)`
Encode texttrigger message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `input` (`number`)
  * `action` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dminputddf_texttrigger(str)`
Decocde texttrigger message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dminputddf_inputbinding(tbl)`
Encode inputbinding message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `key_trigger` (array of `dm_input_ddf__key_trigger`)
  * `mouse_trigger` (array of `dm_input_ddf__mouse_trigger`)
  * `gamepad_trigger` (array of `dm_input_ddf__gamepad_trigger`)
  * `touch_trigger` (array of `dm_input_ddf__touch_trigger`)
  * `text_trigger` (array of `dm_input_ddf__text_trigger`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dminputddf_inputbinding(str)`
Decocde inputbinding message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_renderprototypedesc(tbl)`
Encode renderprototypedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `script` (`string`)
  * `materials` (array of `dm_render_ddf__render_prototype_desc__material_desc`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_renderprototypedesc(str)`
Decocde renderprototypedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf.renderprototypedesc_materialdesc(tbl)`
Encode materialdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `material` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf.renderprototypedesc_materialdesc(str)`
Decocde materialdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_drawtext(tbl)`
Encode drawtext message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `position` (`dm_math__point3`)
  * `text` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_drawtext(str)`
Decocde drawtext message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_drawdebugtext(tbl)`
Encode drawdebugtext message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `position` (`dm_math__point3`)
  * `text` (`string`)
  * `color` (`dm_math__vector4`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_drawdebugtext(str)`
Decocde drawdebugtext message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_drawline(tbl)`
Encode drawline message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `start_point` (`dm_math__point3`)
  * `end_point` (`dm_math__point3`)
  * `color` (`dm_math__vector4`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_drawline(str)`
Decocde drawline message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_windowresized(tbl)`
Encode windowresized message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `width` (`number`)
  * `height` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_windowresized(str)`
Decocde windowresized message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_resize(tbl)`
Encode resize message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `width` (`number`)
  * `height` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_resize(str)`
Decocde resize message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_clearcolor(tbl)`
Encode clearcolor message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `color` (`dm_math__vector4`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_clearcolor(str)`
Decocde clearcolor message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_displayprofilequalifier(tbl)`
Encode displayprofilequalifier message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `width` (`number`)
  * `height` (`number`)
  * `device_models` (array of `string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_displayprofilequalifier(str)`
Decocde displayprofilequalifier message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_displayprofile(tbl)`
Encode displayprofile message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `qualifiers` (array of `dm_render_ddf__display_profile_qualifier`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_displayprofile(str)`
Decocde displayprofile message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_displayprofiles(tbl)`
Encode displayprofiles message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `profiles` (array of `dm_render_ddf__display_profile`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_displayprofiles(str)`
Decocde displayprofiles message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_fontdesc(tbl)`
Encode fontdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_fontdesc(str)`
Decocde fontdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_fontmap(tbl)`
Encode fontmap message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_fontmap(str)`
Decocde fontmap message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf.fontmap_glyph(tbl)`
Encode glyph message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf.fontmap_glyph(str)`
Decocde glyph message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf_materialdesc(tbl)`
Encode materialdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `tags` (array of `string`)
  * `vertex_program` (`string`)
  * `fragment_program` (`string`)
  * `vertex_space` (`number`) (optional)
  * `vertex_constants` (array of `dm_render_ddf__material_desc__constant`)
  * `fragment_constants` (array of `dm_render_ddf__material_desc__constant`)
  * `textures` (array of `string`)
  * `samplers` (array of `dm_render_ddf__material_desc__sampler`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf_materialdesc(str)`
Decocde materialdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf.materialdesc_constant(tbl)`
Encode constant message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `type` (`number`)
  * `value` (array of `dm_math__vector4`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf.materialdesc_constant(str)`
Decocde constant message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrenderddf.materialdesc_sampler(tbl)`
Encode sampler message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `wrap_u` (`number`)
  * `wrap_v` (`number`)
  * `filter_min` (`number`)
  * `filter_mag` (`number`)
  * `max_anisotropy` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrenderddf.materialdesc_sampler(str)`
Decocde sampler message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmscriptddf_luaref(tbl)`
Encode luaref message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `ref` (`number`)
  * `context_table_ref` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmscriptddf_luaref(str)`
Decocde luaref message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmsystemddf_exit(tbl)`
Encode exit message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `code` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmsystemddf_exit(str)`
Decocde exit message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmsystemddf_toggleprofile(tbl)`
Encode toggleprofile message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmsystemddf_toggleprofile(str)`
Decocde toggleprofile message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmsystemddf_togglephysicsdebug(tbl)`
Encode togglephysicsdebug message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmsystemddf_togglephysicsdebug(str)`
Decocde togglephysicsdebug message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmsystemddf_startrecord(tbl)`
Encode startrecord message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `file_name` (`string`)
  * `frame_period` (`number`) (optional)
  * `fps` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmsystemddf_startrecord(str)`
Decocde startrecord message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmsystemddf_stoprecord(tbl)`
Encode stoprecord message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmsystemddf_stoprecord(str)`
Decocde stoprecord message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmsystemddf_reboot(tbl)`
Encode reboot message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `arg1` (`string`) (optional)
  * `arg2` (`string`) (optional)
  * `arg3` (`string`) (optional)
  * `arg4` (`string`) (optional)
  * `arg5` (`string`) (optional)
  * `arg6` (`string`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmsystemddf_reboot(str)`
Decocde reboot message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmsystemddf_setvsync(tbl)`
Encode setvsync message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `swap_interval` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmsystemddf_setvsync(str)`
Decocde setvsync message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmsystemddf_setupdatefrequency(tbl)`
Encode setupdatefrequency message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `frequency` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmsystemddf_setupdatefrequency(str)`
Decocde setupdatefrequency message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmscriptdoc_parameter(tbl)`
Encode parameter message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `doc` (`string`)
  * `types` (array of `string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmscriptdoc_parameter(str)`
Decocde parameter message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmscriptdoc_member(tbl)`
Encode member message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `doc` (`string`)
  * `type` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmscriptdoc_member(str)`
Decocde member message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmscriptdoc_returnvalue(tbl)`
Encode returnvalue message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `doc` (`string`)
  * `types` (array of `string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmscriptdoc_returnvalue(str)`
Decocde returnvalue message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmscriptdoc_element(tbl)`
Encode element message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmscriptdoc_element(str)`
Decocde element message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmscriptdoc_info(tbl)`
Encode info message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `namespace` (`string`)
  * `name` (`string`)
  * `brief` (`string`)
  * `description` (`string`)
  * `path` (`string`)
  * `file` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmscriptdoc_info(str)`
Decocde info message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmscriptdoc_document(tbl)`
Encode document message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `elements` (array of `dm_script_doc__element`)
  * `info` (`dm_script_doc__info`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmscriptdoc_document(str)`
Decocde document message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmhttpddf_stophttp(tbl)`
Encode stophttp message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmhttpddf_stophttp(str)`
Decocde stophttp message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmhttpddf_httprequest(tbl)`
Encode httprequest message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmhttpddf_httprequest(str)`
Decocde httprequest message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmhttpddf_httpresponse(tbl)`
Encode httpresponse message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `status` (`number`)
  * `headers` (`number`)
  * `headers_length` (`number`)
  * `response` (`number`)
  * `response_length` (`number`)
  * `path` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmhttpddf_httpresponse(str)`
Decocde httpresponse message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmluaddf_luasource(tbl)`
Encode luasource message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `script` (`ProtobufCBinaryData`) (optional)
  * `filename` (`string`)
  * `bytecode` (`ProtobufCBinaryData`) (optional)
  * `delta` (`ProtobufCBinaryData`) (optional)
  * `bytecode_32` (`ProtobufCBinaryData`) (optional)
  * `bytecode_64` (`ProtobufCBinaryData`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmluaddf_luasource(str)`
Decocde luasource message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_bone(tbl)`
Encode bone message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `parent` (`number`)
  * `id` (`number`)
  * `name` (`string`)
  * `local` (`dm_math__transform`)
  * `world` (`dm_math__transform`)
  * `inverse_bind_pose` (`dm_math__transform`)
  * `length` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_bone(str)`
Decocde bone message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_ik(tbl)`
Encode ik message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`number`)
  * `parent` (`number`)
  * `child` (`number`)
  * `target` (`number`)
  * `positive` (`boolean`) (optional)
  * `mix` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_ik(str)`
Decocde ik message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_skeleton(tbl)`
Encode skeleton message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `bones` (array of `dm_rig_ddf__bone`)
  * `iks` (array of `dm_rig_ddf__ik`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_skeleton(str)`
Decocde skeleton message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_animationtrack(tbl)`
Encode animationtrack message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `bone_index` (`number`)
  * `positions` (array of `number`)
  * `rotations` (array of `number`)
  * `scale` (array of `number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_animationtrack(str)`
Decocde animationtrack message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_eventkey(tbl)`
Encode eventkey message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `t` (`number`)
  * `integer` (`number`) (optional)
  * `float` (`number`) (optional)
  * `string` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_eventkey(str)`
Decocde eventkey message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_eventtrack(tbl)`
Encode eventtrack message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `event_id` (`number`)
  * `keys` (array of `dm_rig_ddf__event_key`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_eventtrack(str)`
Decocde eventtrack message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_riganimation(tbl)`
Encode riganimation message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`number`)
  * `duration` (`number`)
  * `sample_rate` (`number`)
  * `tracks` (array of `dm_rig_ddf__animation_track`)
  * `event_tracks` (array of `dm_rig_ddf__event_track`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_riganimation(str)`
Decocde riganimation message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_animationset(tbl)`
Encode animationset message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `animations` (array of `dm_rig_ddf__rig_animation`)
  * `bone_list` (array of `number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_animationset(str)`
Decocde animationset message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_animationinstancedesc(tbl)`
Encode animationinstancedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `animation` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_animationinstancedesc(str)`
Decocde animationinstancedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_animationsetdesc(tbl)`
Encode animationsetdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `animations` (array of `dm_rig_ddf__animation_instance_desc`)
  * `skeleton` (`string`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_animationsetdesc(str)`
Decocde animationsetdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_mesh(tbl)`
Encode mesh message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_mesh(str)`
Decocde mesh message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_model(tbl)`
Encode model message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `local` (`dm_math__transform`)
  * `id` (`number`)
  * `meshes` (array of `dm_rig_ddf__mesh`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_model(str)`
Decocde model message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_meshset(tbl)`
Encode meshset message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `models` (array of `dm_rig_ddf__model`)
  * `materials` (array of `string`)
  * `bone_list` (array of `number`)
  * `max_bone_count` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_meshset(str)`
Decocde meshset message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmrigddf_rigscene(tbl)`
Encode rigscene message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `skeleton` (`string`) (optional)
  * `animation_set` (`string`) (optional)
  * `mesh_set` (`string`)
  * `texture_set` (`string`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmrigddf_rigscene(str)`
Decocde rigscene message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmodelddf_modeldesc(tbl)`
Encode modeldesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `mesh` (`string`)
  * `material` (`string`)
  * `textures` (array of `string`)
  * `skeleton` (`string`) (optional)
  * `animations` (`string`) (optional)
  * `default_animation` (`string`) (optional)
  * `name` (`string`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmodelddf_modeldesc(str)`
Decocde modeldesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmodelddf_model(tbl)`
Encode model message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `rig_scene` (`string`)
  * `material` (`string`)
  * `textures` (array of `string`)
  * `default_animation` (`string`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmodelddf_model(str)`
Decocde model message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmodelddf_resetconstant(tbl)`
Encode resetconstant message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name_hash` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmodelddf_resetconstant(str)`
Decocde resetconstant message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmodelddf_settexture(tbl)`
Encode settexture message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `texture_hash` (`number`)
  * `texture_unit` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmodelddf_settexture(str)`
Decocde settexture message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmodelddf_modelplayanimation(tbl)`
Encode modelplayanimation message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `animation_id` (`number`)
  * `playback` (`number`)
  * `blend_duration` (`number`) (optional)
  * `offset` (`number`) (optional)
  * `playback_rate` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmodelddf_modelplayanimation(str)`
Decocde modelplayanimation message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmodelddf_modelcancelanimation(tbl)`
Encode modelcancelanimation message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmodelddf_modelcancelanimation(str)`
Decocde modelcancelanimation message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmodelddf_modelanimationdone(tbl)`
Encode modelanimationdone message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `animation_id` (`number`)
  * `playback` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmodelddf_modelanimationdone(str)`
Decocde modelanimationdone message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmmeshddf_meshdesc(tbl)`
Encode meshdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `material` (`string`)
  * `vertices` (`string`)
  * `textures` (array of `string`)
  * `primitive_type` (`number`) (optional)
  * `position_stream` (`string`) (optional)
  * `normal_stream` (`string`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmmeshddf_meshdesc(str)`
Decocde meshdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_labeldesc(tbl)`
Encode labeldesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_labeldesc(str)`
Decocde labeldesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_settext(tbl)`
Encode settext message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `text` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_settext(str)`
Decocde settext message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_convexhull(tbl)`
Encode convexhull message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `index` (`number`)
  * `count` (`number`)
  * `collision_group` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_convexhull(str)`
Decocde convexhull message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_cue(tbl)`
Encode cue message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `frame` (`number`)
  * `value` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_cue(str)`
Decocde cue message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_animation(tbl)`
Encode animation message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `start_tile` (`number`)
  * `end_tile` (`number`)
  * `playback` (`number`) (optional)
  * `fps` (`number`) (optional)
  * `flip_horizontal` (`number`) (optional)
  * `flip_vertical` (`number`) (optional)
  * `cues` (array of `dm_game_system_ddf__cue`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_animation(str)`
Decocde animation message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_tileset(tbl)`
Encode tileset message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_tileset(str)`
Decocde tileset message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_tilecell(tbl)`
Encode tilecell message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `x` (`number`)
  * `y` (`number`)
  * `tile` (`number`)
  * `h_flip` (`number`) (optional)
  * `v_flip` (`number`) (optional)
  * `rotate90` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_tilecell(str)`
Decocde tilecell message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_tilelayer(tbl)`
Encode tilelayer message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `z` (`number`)
  * `is_visible` (`number`)
  * `id_hash` (`number`) (optional)
  * `cell` (array of `dm_game_system_ddf__tile_cell`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_tilelayer(str)`
Decocde tilelayer message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_tilegrid(tbl)`
Encode tilegrid message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `tile_set` (`string`)
  * `layers` (array of `dm_game_system_ddf__tile_layer`)
  * `material` (`string`) (optional)
  * `blend_mode` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_tilegrid(str)`
Decocde tilegrid message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_settile(tbl)`
Encode settile message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `layer_id` (`number`)
  * `position` (`dm_math__point3`)
  * `tile` (`number`) (optional)
  * `dx` (`number`) (optional)
  * `dy` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_settile(str)`
Decocde settile message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_setconstanttilemap(tbl)`
Encode setconstanttilemap message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name_hash` (`number`)
  * `value` (`dm_math__vector4`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_setconstanttilemap(str)`
Decocde setconstanttilemap message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_resetconstanttilemap(tbl)`
Encode resetconstanttilemap message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name_hash` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_resetconstanttilemap(str)`
Decocde resetconstanttilemap message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_atlasimage(tbl)`
Encode atlasimage message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `image` (`string`)
  * `sprite_trim_mode` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_atlasimage(str)`
Decocde atlasimage message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_atlasanimation(tbl)`
Encode atlasanimation message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `images` (array of `dm_game_system_ddf__atlas_image`)
  * `playback` (`number`) (optional)
  * `fps` (`number`) (optional)
  * `flip_horizontal` (`number`) (optional)
  * `flip_vertical` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_atlasanimation(str)`
Decocde atlasanimation message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_atlas(tbl)`
Encode atlas message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `images` (array of `dm_game_system_ddf__atlas_image`)
  * `animations` (array of `dm_game_system_ddf__atlas_animation`)
  * `margin` (`number`) (optional)
  * `extrude_borders` (`number`) (optional)
  * `inner_padding` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_atlas(str)`
Decocde atlas message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmbufferddf_streamdesc(tbl)`
Encode streamdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `value_type` (`number`)
  * `value_count` (`number`)
  * `ui` (array of `number`)
  * `i` (array of `number`)
  * `ui64` (array of `number`)
  * `i64` (array of `number`)
  * `f` (array of `number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmbufferddf_streamdesc(str)`
Decocde streamdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmbufferddf_bufferdesc(tbl)`
Encode bufferdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `streams` (array of `dm_buffer_ddf__stream_desc`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmbufferddf_bufferdesc(str)`
Decocde bufferdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmsoundddf_sounddesc(tbl)`
Encode sounddesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `sound` (`string`)
  * `looping` (`number`) (optional)
  * `group` (`string`) (optional)
  * `gain` (`number`) (optional)
  * `pan` (`number`) (optional)
  * `speed` (`number`) (optional)
  * `loopcount` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmsoundddf_sounddesc(str)`
Decocde sounddesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesysddf_cameradesc(tbl)`
Encode cameradesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `aspect_ratio` (`number`)
  * `fov` (`number`)
  * `near_z` (`number`)
  * `far_z` (`number`)
  * `auto_aspect_ratio` (`number`) (optional)
  * `orthographic_projection` (`number`) (optional)
  * `orthographic_zoom` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesysddf_cameradesc(str)`
Decocde cameradesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesysddf_setcamera(tbl)`
Encode setcamera message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `aspect_ratio` (`number`)
  * `fov` (`number`)
  * `near_z` (`number`)
  * `far_z` (`number`)
  * `orthographic_projection` (`number`) (optional)
  * `orthographic_zoom` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesysddf_setcamera(str)`
Decocde setcamera message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesysddf_acquirecamerafocus(tbl)`
Encode acquirecamerafocus message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesysddf_acquirecamerafocus(str)`
Decocde acquirecamerafocus message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesysddf_releasecamerafocus(tbl)`
Encode releasecamerafocus message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesysddf_releasecamerafocus(str)`
Decocde releasecamerafocus message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_spritedesc(tbl)`
Encode spritedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `tile_set` (`string`)
  * `default_animation` (`string`)
  * `material` (`string`) (optional)
  * `blend_mode` (`number`) (optional)
  * `slice9` (`dm_math__vector4`) (optional)
  * `size` (`dm_math__vector4`) (optional)
  * `size_mode` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_spritedesc(str)`
Decocde spritedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_playanimation(tbl)`
Encode playanimation message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`number`)
  * `offset` (`number`) (optional)
  * `playback_rate` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_playanimation(str)`
Decocde playanimation message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_animationdone(tbl)`
Encode animationdone message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `current_tile` (`number`)
  * `id` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_animationdone(str)`
Decocde animationdone message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_setfliphorizontal(tbl)`
Encode setfliphorizontal message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `flip` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_setfliphorizontal(str)`
Decocde setfliphorizontal message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_setflipvertical(tbl)`
Encode setflipvertical message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `flip` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_setflipvertical(str)`
Decocde setflipvertical message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_texturesetanimation(tbl)`
Encode texturesetanimation message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_texturesetanimation(str)`
Decocde texturesetanimation message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_spritegeometry(tbl)`
Encode spritegeometry message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `width` (`number`)
  * `height` (`number`)
  * `vertices` (array of `number`)
  * `uvs` (array of `number`)
  * `indices` (array of `number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_spritegeometry(str)`
Decocde spritegeometry message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_textureset(tbl)`
Encode textureset message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_textureset(str)`
Decocde textureset message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_convexshape(tbl)`
Encode convexshape message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `shape_type` (`number`)
  * `data` (array of `number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_convexshape(str)`
Decocde convexshape message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_collisionshape(tbl)`
Encode collisionshape message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `shapes` (array of `dm_physics_ddf__collision_shape__shape`)
  * `data` (array of `number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_collisionshape(str)`
Decocde collisionshape message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf.collisionshape_shape(tbl)`
Encode shape message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `shape_type` (`number`)
  * `position` (`dm_math__point3`)
  * `rotation` (`dm_math__quat`)
  * `index` (`number`)
  * `count` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf.collisionshape_shape(str)`
Decocde shape message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_collisionobjectdesc(tbl)`
Encode collisionobjectdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_collisionobjectdesc(str)`
Decocde collisionobjectdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_applyforce(tbl)`
Encode applyforce message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `force` (`dm_math__vector3`)
  * `position` (`dm_math__point3`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_applyforce(str)`
Decocde applyforce message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_collisionresponse(tbl)`
Encode collisionresponse message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `other_id` (`number`)
  * `group` (`number`)
  * `other_position` (`dm_math__point3`)
  * `other_group` (`number`)
  * `own_group` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_collisionresponse(str)`
Decocde collisionresponse message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_contactpointresponse(tbl)`
Encode contactpointresponse message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_contactpointresponse(str)`
Decocde contactpointresponse message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_triggerresponse(tbl)`
Encode triggerresponse message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `other_id` (`number`)
  * `enter` (`boolean`)
  * `group` (`number`)
  * `other_group` (`number`)
  * `own_group` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_triggerresponse(str)`
Decocde triggerresponse message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_requestraycast(tbl)`
Encode requestraycast message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `from` (`dm_math__point3`)
  * `to` (`dm_math__point3`)
  * `mask` (`number`)
  * `request_id` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_requestraycast(str)`
Decocde requestraycast message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_raycastresponse(tbl)`
Encode raycastresponse message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `fraction` (`number`)
  * `position` (`dm_math__point3`)
  * `normal` (`dm_math__vector3`)
  * `id` (`number`)
  * `group` (`number`)
  * `request_id` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_raycastresponse(str)`
Decocde raycastresponse message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_raycastmissed(tbl)`
Encode raycastmissed message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `request_id` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_raycastmissed(str)`
Decocde raycastmissed message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_requestvelocity(tbl)`
Encode requestvelocity message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_requestvelocity(str)`
Decocde requestvelocity message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_velocityresponse(tbl)`
Encode velocityresponse message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `linear_velocity` (`dm_math__vector3`)
  * `angular_velocity` (`dm_math__vector3`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_velocityresponse(str)`
Decocde velocityresponse message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_setgridshapehull(tbl)`
Encode setgridshapehull message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `shape` (`number`)
  * `row` (`number`)
  * `column` (`number`)
  * `hull` (`number`)
  * `flip_horizontal` (`number`)
  * `flip_vertical` (`number`)
  * `rotate90` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_setgridshapehull(str)`
Decocde setgridshapehull message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmphysicsddf_enablegridshapelayer(tbl)`
Encode enablegridshapelayer message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `shape` (`number`)
  * `enable` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmphysicsddf_enablegridshapelayer(str)`
Decocde enablegridshapelayer message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_factorydesc(tbl)`
Encode factorydesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `prototype` (`string`)
  * `load_dynamically` (`boolean`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_factorydesc(str)`
Decocde factorydesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_collectionfactorydesc(tbl)`
Encode collectionfactorydesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `prototype` (`string`)
  * `load_dynamically` (`boolean`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_collectionfactorydesc(str)`
Decocde collectionfactorydesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_create(tbl)`
Encode create message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `position` (`dm_math__point3`)
  * `rotation` (`dm_math__quat`)
  * `id` (`number`) (optional)
  * `scale` (`number`) (optional)
  * `scale3` (`dm_math__vector3`) (optional)
  * `index` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_create(str)`
Decocde create message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_collectionproxydesc(tbl)`
Encode collectionproxydesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `collection` (`string`)
  * `exclude` (`boolean`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_collectionproxydesc(str)`
Decocde collectionproxydesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_settimestep(tbl)`
Encode settimestep message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `factor` (`number`)
  * `mode` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_settimestep(str)`
Decocde settimestep message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_lightdesc(tbl)`
Encode lightdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `type` (`number`)
  * `intensity` (`number`)
  * `color` (`dm_math__vector3`)
  * `range` (`number`)
  * `decay` (`number`)
  * `cone_angle` (`number`) (optional)
  * `penumbra_angle` (`number`) (optional)
  * `drop_off` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_lightdesc(str)`
Decocde lightdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_setlight(tbl)`
Encode setlight message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `position` (`dm_math__point3`)
  * `rotation` (`dm_math__quat`)
  * `light` (`dm_game_system_ddf__light_desc`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_setlight(str)`
Decocde setlight message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_setviewprojection(tbl)`
Encode setviewprojection message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`number`)
  * `view` (`dm_math__matrix4`)
  * `projection` (`dm_math__matrix4`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_setviewprojection(str)`
Decocde setviewprojection message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_playsound(tbl)`
Encode playsound message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `delay` (`number`) (optional)
  * `gain` (`number`) (optional)
  * `pan` (`number`) (optional)
  * `speed` (`number`) (optional)
  * `play_id` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_playsound(str)`
Decocde playsound message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_stopsound(tbl)`
Encode stopsound message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_stopsound(str)`
Decocde stopsound message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_pausesound(tbl)`
Encode pausesound message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `pause` (`boolean`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_pausesound(str)`
Decocde pausesound message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_sounddone(tbl)`
Encode sounddone message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `play_id` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_sounddone(str)`
Decocde sounddone message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_setgain(tbl)`
Encode setgain message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `gain` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_setgain(str)`
Decocde setgain message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_setpan(tbl)`
Encode setpan message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `pan` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_setpan(str)`
Decocde setpan message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_setspeed(tbl)`
Encode setspeed message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `speed` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_setspeed(str)`
Decocde setspeed message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_playparticlefx(tbl)`
Encode playparticlefx message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_playparticlefx(str)`
Decocde playparticlefx message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_stopparticlefx(tbl)`
Encode stopparticlefx message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `clear_particles` (`boolean`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_stopparticlefx(str)`
Decocde stopparticlefx message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_setconstantparticlefx(tbl)`
Encode setconstantparticlefx message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `emitter_id` (`number`)
  * `name_hash` (`number`)
  * `value` (`dm_math__matrix4`)
  * `is_matrix4` (`boolean`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_setconstantparticlefx(str)`
Decocde setconstantparticlefx message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_resetconstantparticlefx(tbl)`
Encode resetconstantparticlefx message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `emitter_id` (`number`)
  * `name_hash` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_resetconstantparticlefx(str)`
Decocde resetconstantparticlefx message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_setconstant(tbl)`
Encode setconstant message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name_hash` (`number`)
  * `value` (`dm_math__vector4`)
  * `index` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_setconstant(str)`
Decocde setconstant message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_resetconstant(tbl)`
Encode resetconstant message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name_hash` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_resetconstant(str)`
Decocde resetconstant message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgamesystemddf_setscale(tbl)`
Encode setscale message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `scale` (`dm_math__vector3`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgamesystemddf_setscale(str)`
Decocde setscale message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmguiddf_nodedesc(tbl)`
Encode nodedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmguiddf_nodedesc(str)`
Decocde nodedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmguiddf_scenedesc(tbl)`
Encode scenedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmguiddf_scenedesc(str)`
Decocde scenedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmguiddf.scenedesc_fontdesc(tbl)`
Encode fontdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `font` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmguiddf.scenedesc_fontdesc(str)`
Decocde fontdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmguiddf.scenedesc_texturedesc(tbl)`
Encode texturedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `texture` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmguiddf.scenedesc_texturedesc(str)`
Decocde texturedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmguiddf.scenedesc_layerdesc(tbl)`
Encode layerdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmguiddf.scenedesc_layerdesc(str)`
Decocde layerdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmguiddf.scenedesc_layoutdesc(tbl)`
Encode layoutdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `nodes` (array of `dm_gui_ddf__node_desc`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmguiddf.scenedesc_layoutdesc(str)`
Decocde layoutdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmguiddf.scenedesc_spinescenedesc(tbl)`
Encode spinescenedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `spine_scene` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmguiddf.scenedesc_spinescenedesc(str)`
Decocde spinescenedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmguiddf.scenedesc_resourcedesc(tbl)`
Encode resourcedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `path` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmguiddf.scenedesc_resourcedesc(str)`
Decocde resourcedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmguiddf.scenedesc_particlefxdesc(tbl)`
Encode particlefxdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `particlefx` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmguiddf.scenedesc_particlefxdesc(str)`
Decocde particlefxdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmguiddf_layoutchanged(tbl)`
Encode layoutchanged message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`number`)
  * `previous_id` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmguiddf_layoutchanged(str)`
Decocde layoutchanged message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmliveupdateddf_hashdigest(tbl)`
Encode hashdigest message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `data` (`ProtobufCBinaryData`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmliveupdateddf_hashdigest(str)`
Decocde hashdigest message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmliveupdateddf_manifestheader(tbl)`
Encode manifestheader message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `magic_number` (`number`)
  * `version` (`number`)
  * `resource_hash_algorithm` (`number`)
  * `signature_hash_algorithm` (`number`)
  * `signature_sign_algorithm` (`number`)
  * `project_identifier` (`dm_live_update_ddf__hash_digest`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmliveupdateddf_manifestheader(str)`
Decocde manifestheader message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmliveupdateddf_resourceentry(tbl)`
Encode resourceentry message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `url` (`string`)
  * `url_hash` (`number`)
  * `hash` (`dm_live_update_ddf__hash_digest`)
  * `dependants` (array of `number`)
  * `flags` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmliveupdateddf_resourceentry(str)`
Decocde resourceentry message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmliveupdateddf_manifestdata(tbl)`
Encode manifestdata message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `header` (`dm_live_update_ddf__manifest_header`)
  * `engine_versions` (array of `dm_live_update_ddf__hash_digest`)
  * `resources` (array of `dm_live_update_ddf__resource_entry`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmliveupdateddf_manifestdata(str)`
Decocde manifestdata message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmliveupdateddf_manifestfile(tbl)`
Encode manifestfile message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `data` (`ProtobufCBinaryData`)
  * `signature` (`ProtobufCBinaryData`)
  * `archive_identifier` (`ProtobufCBinaryData`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmliveupdateddf_manifestfile(str)`
Decocde manifestfile message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmresourceddf_reload(tbl)`
Encode reload message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `resources` (array of `string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmresourceddf_reload(str)`
Decocde reload message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgraphics_cubemap(tbl)`
Encode cubemap message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `right` (`string`)
  * `left` (`string`)
  * `top` (`string`)
  * `bottom` (`string`)
  * `front` (`string`)
  * `back` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgraphics_cubemap(str)`
Decocde cubemap message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgraphics_textureimage(tbl)`
Encode textureimage message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `alternatives` (array of `dm_graphics__texture_image__image`)
  * `type` (`number`)
  * `count` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgraphics_textureimage(str)`
Decocde textureimage message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgraphics.textureimage_image(tbl)`
Encode image message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgraphics.textureimage_image(str)`
Decocde image message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgraphics_textureformatalternative(tbl)`
Encode textureformatalternative message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `format` (`number`)
  * `compression_level` (`number`)
  * `compression_type` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgraphics_textureformatalternative(str)`
Decocde textureformatalternative message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgraphics_pathsettings(tbl)`
Encode pathsettings message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `path` (`string`)
  * `profile` (`string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgraphics_pathsettings(str)`
Decocde pathsettings message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgraphics_platformprofile(tbl)`
Encode platformprofile message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `os` (`number`)
  * `formats` (array of `dm_graphics__texture_format_alternative`)
  * `mipmaps` (`boolean`)
  * `max_texture_size` (`number`) (optional)
  * `premultiply_alpha` (`boolean`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgraphics_platformprofile(str)`
Decocde platformprofile message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgraphics_textureprofile(tbl)`
Encode textureprofile message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `platforms` (array of `dm_graphics__platform_profile`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgraphics_textureprofile(str)`
Decocde textureprofile message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgraphics_textureprofiles(tbl)`
Encode textureprofiles message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `path_settings` (array of `dm_graphics__path_settings`)
  * `profiles` (array of `dm_graphics__texture_profile`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgraphics_textureprofiles(str)`
Decocde textureprofiles message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgraphics_shaderdesc(tbl)`
Encode shaderdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `shaders` (array of `dm_graphics__shader_desc__shader`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgraphics_shaderdesc(str)`
Decocde shaderdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgraphics.shaderdesc_resourcebinding(tbl)`
Encode resourcebinding message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `type` (`number`)
  * `element_count` (`number`) (optional)
  * `set` (`number`) (optional)
  * `binding` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgraphics.shaderdesc_resourcebinding(str)`
Decocde resourcebinding message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgraphics.shaderdesc_shader(tbl)`
Encode shader message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `language` (`number`)
  * `source` (`ProtobufCBinaryData`) (optional)
  * `uniforms` (array of `dm_graphics__shader_desc__resource_binding`)
  * `attributes` (array of `dm_graphics__shader_desc__resource_binding`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgraphics.shaderdesc_shader(str)`
Decocde shader message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmpropertiesddf_propertydeclarationentry(tbl)`
Encode propertydeclarationentry message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `key` (`string`)
  * `id` (`number`)
  * `index` (`number`)
  * `element_ids` (array of `number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmpropertiesddf_propertydeclarationentry(str)`
Decocde propertydeclarationentry message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmpropertiesddf_propertydeclarations(tbl)`
Encode propertydeclarations message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmpropertiesddf_propertydeclarations(str)`
Decocde propertydeclarations message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_propertydesc(tbl)`
Encode propertydesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `value` (`string`)
  * `type` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_propertydesc(str)`
Decocde propertydesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_componentdesc(tbl)`
Encode componentdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `component` (`string`)
  * `position` (`dm_math__point3`) (optional)
  * `rotation` (`dm_math__quat`) (optional)
  * `properties` (array of `dm_game_object_ddf__property_desc`)
  * `property_decls` (`dm_properties_ddf__property_declarations`) (optional)
  * `scale` (`dm_math__vector3`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_componentdesc(str)`
Decocde componentdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_embeddedcomponentdesc(tbl)`
Encode embeddedcomponentdesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `type` (`string`)
  * `data` (`string`)
  * `position` (`dm_math__point3`) (optional)
  * `rotation` (`dm_math__quat`) (optional)
  * `scale` (`dm_math__vector3`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_embeddedcomponentdesc(str)`
Decocde embeddedcomponentdesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_prototypedesc(tbl)`
Encode prototypedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `components` (array of `dm_game_object_ddf__component_desc`)
  * `embedded_components` (array of `dm_game_object_ddf__embedded_component_desc`)
  * `property_resources` (array of `string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_prototypedesc(str)`
Decocde prototypedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_componentpropertydesc(tbl)`
Encode componentpropertydesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `properties` (array of `dm_game_object_ddf__property_desc`)
  * `property_decls` (`dm_properties_ddf__property_declarations`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_componentpropertydesc(str)`
Decocde componentpropertydesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_componentypedesc(tbl)`
Encode componentypedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name_hash` (`number`)
  * `max_count` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_componentypedesc(str)`
Decocde componentypedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_instancedesc(tbl)`
Encode instancedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `prototype` (`string`)
  * `children` (array of `string`)
  * `position` (`dm_math__point3`) (optional)
  * `rotation` (`dm_math__quat`) (optional)
  * `component_properties` (array of `dm_game_object_ddf__component_property_desc`)
  * `scale` (`number`) (optional)
  * `scale3` (`dm_math__vector3`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_instancedesc(str)`
Decocde instancedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_embeddedinstancedesc(tbl)`
Encode embeddedinstancedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `children` (array of `string`)
  * `data` (`string`)
  * `position` (`dm_math__point3`) (optional)
  * `rotation` (`dm_math__quat`) (optional)
  * `component_properties` (array of `dm_game_object_ddf__component_property_desc`)
  * `scale` (`number`) (optional)
  * `scale3` (`dm_math__vector3`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_embeddedinstancedesc(str)`
Decocde embeddedinstancedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_instancepropertydesc(tbl)`
Encode instancepropertydesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `properties` (array of `dm_game_object_ddf__component_property_desc`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_instancepropertydesc(str)`
Decocde instancepropertydesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_collectioninstancedesc(tbl)`
Encode collectioninstancedesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `id` (`string`)
  * `collection` (`string`)
  * `position` (`dm_math__point3`) (optional)
  * `rotation` (`dm_math__quat`) (optional)
  * `scale` (`number`) (optional)
  * `scale3` (`dm_math__vector3`) (optional)
  * `instance_properties` (array of `dm_game_object_ddf__instance_property_desc`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_collectioninstancedesc(str)`
Decocde collectioninstancedesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_collectiondesc(tbl)`
Encode collectiondesc message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `name` (`string`)
  * `instances` (array of `dm_game_object_ddf__instance_desc`)
  * `collection_instances` (array of `dm_game_object_ddf__collection_instance_desc`)
  * `scale_along_z` (`number`) (optional)
  * `embedded_instances` (array of `dm_game_object_ddf__embedded_instance_desc`)
  * `property_resources` (array of `string`)
  * `component_types` (array of `dm_game_object_ddf__componen_type_desc`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_collectiondesc(str)`
Decocde collectiondesc message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_acquireinputfocus(tbl)`
Encode acquireinputfocus message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_acquireinputfocus(str)`
Decocde acquireinputfocus message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_releaseinputfocus(tbl)`
Encode releaseinputfocus message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_releaseinputfocus(str)`
Decocde releaseinputfocus message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_requesttransform(tbl)`
Encode requesttransform message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_requesttransform(str)`
Decocde requesttransform message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_transformresponse(tbl)`
Encode transformresponse message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `position` (`dm_math__point3`)
  * `rotation` (`dm_math__quat`)
  * `world_position` (`dm_math__point3`)
  * `world_rotation` (`dm_math__quat`)
  * `scale` (`number`) (optional)
  * `scale3` (`dm_math__vector3`) (optional)
  * `world_scale` (`number`) (optional)
  * `world_scale3` (`dm_math__vector3`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_transformresponse(str)`
Decocde transformresponse message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_setparent(tbl)`
Encode setparent message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `parent_id` (`number`) (optional)
  * `keep_world_transform` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_setparent(str)`
Decocde setparent message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_enable(tbl)`
Encode enable message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_enable(str)`
Decocde enable message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_disable(tbl)`
Encode disable message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_disable(str)`
Decocde disable message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmgameobjectddf_scriptmessage(tbl)`
Encode scriptmessage message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `descriptor_hash` (`number`)
  * `payload_size` (`number`)
  * `function` (`number`) (optional)
  * `unref_function` (`boolean`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmgameobjectddf_scriptmessage(str)`
Decocde scriptmessage message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmluaddf_luamodule(tbl)`
Encode luamodule message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `source` (`dm_lua_ddf__lua_source`)
  * `modules` (array of `string`)
  * `resources` (array of `string`)
  * `properties` (`dm_properties_ddf__property_declarations`) (optional)
  * `property_resources` (array of `string`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmluaddf_luamodule(str)`
Decocde luamodule message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmengineddf_hideapp(tbl)`
Encode hideapp message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmengineddf_hideapp(str)`
Decocde hideapp message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmengineddf_runscript(tbl)`
Encode runscript message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `module` (`dm_lua_ddf__lua_module`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmengineddf_runscript(str)`
Decocde runscript message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmparticleddf_splinepoint(tbl)`
Encode splinepoint message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `x` (`number`)
  * `y` (`number`)
  * `t_x` (`number`)
  * `t_y` (`number`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmparticleddf_splinepoint(str)`
Decocde splinepoint message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmparticleddf_modifier(tbl)`
Encode modifier message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `type` (`number`)
  * `use_direction` (`number`) (optional)
  * `position` (`dm_math__point3`) (optional)
  * `rotation` (`dm_math__quat`) (optional)
  * `properties` (array of `dm_particle_ddf__modifier__property`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmparticleddf_modifier(str)`
Decocde modifier message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmparticleddf.modifier_property(tbl)`
Encode property message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `key` (`number`)
  * `points` (array of `dm_particle_ddf__spline_point`)
  * `spread` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmparticleddf.modifier_property(str)`
Decocde property message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmparticleddf_emitter(tbl)`
Encode emitter message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
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

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmparticleddf_emitter(str)`
Decocde emitter message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmparticleddf.emitter_property(tbl)`
Encode property message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `key` (`number`)
  * `points` (array of `dm_particle_ddf__spline_point`)
  * `spread` (`number`) (optional)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmparticleddf.emitter_property(str)`
Decocde property message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmparticleddf.emitter_particleproperty(tbl)`
Encode particleproperty message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `key` (`number`)
  * `points` (array of `dm_particle_ddf__spline_point`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmparticleddf.emitter_particleproperty(str)`
Decocde particleproperty message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message

##### `local str = ddf.encode_dmparticleddf_particlefx(tbl)`
Encode particlefx message to a binary string.

__Arguments__
* `tbl` (`table`) - The message to encode
  * `emitters` (array of `dm_particle_ddf__emitter`)
  * `modifiers` (array of `dm_particle_ddf__modifier`)

__Returns__
* `str` (`string`) - Encoded message

##### `local tbl = ddf.decode_dmparticleddf_particlefx(str)`
Decocde particlefx message to a Lua table.

__Arguments__
  * `str` (`string`) - Encoded message

__Returns__
* `tbl` (`table`) - Decoded message


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
