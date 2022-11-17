# extension-proto-ddf
This extension provides Lua bindings to encode and decode the Defold Data Format (ddf).

### Message encode/decode
* `local str = ddf.encode_dmmath_point3(tbl)`
* `local tbl = ddf.decode_dmmath_point3(str)`
* `local str = ddf.encode_dmmath_vector3(tbl)`
* `local tbl = ddf.decode_dmmath_vector3(str)`
* `local str = ddf.encode_dmmath_vector4(tbl)`
* `local tbl = ddf.decode_dmmath_vector4(str)`
* `local str = ddf.encode_dmmath_quat(tbl)`
* `local tbl = ddf.decode_dmmath_quat(str)`
* `local str = ddf.encode_dmmath_transform(tbl)`
* `local tbl = ddf.decode_dmmath_transform(str)`
* `local str = ddf.encode_dmmath_matrix4(tbl)`
* `local tbl = ddf.decode_dmmath_matrix4(str)`
* `local str = ddf.encode_dminputddf_gamepadmodifier_t(tbl)`
* `local tbl = ddf.decode_dminputddf_gamepadmodifier_t(str)`
* `local str = ddf.encode_dminputddf_gamepadmapentry(tbl)`
* `local tbl = ddf.decode_dminputddf_gamepadmapentry(str)`
* `local str = ddf.encode_dminputddf_gamepadmap(tbl)`
* `local tbl = ddf.decode_dminputddf_gamepadmap(str)`
* `local str = ddf.encode_dminputddf_gamepadmaps(tbl)`
* `local tbl = ddf.decode_dminputddf_gamepadmaps(str)`
* `local str = ddf.encode_dminputddf_keytrigger(tbl)`
* `local tbl = ddf.decode_dminputddf_keytrigger(str)`
* `local str = ddf.encode_dminputddf_mousetrigger(tbl)`
* `local tbl = ddf.decode_dminputddf_mousetrigger(str)`
* `local str = ddf.encode_dminputddf_gamepadtrigger(tbl)`
* `local tbl = ddf.decode_dminputddf_gamepadtrigger(str)`
* `local str = ddf.encode_dminputddf_touchtrigger(tbl)`
* `local tbl = ddf.decode_dminputddf_touchtrigger(str)`
* `local str = ddf.encode_dminputddf_texttrigger(tbl)`
* `local tbl = ddf.decode_dminputddf_texttrigger(str)`
* `local str = ddf.encode_dminputddf_inputbinding(tbl)`
* `local tbl = ddf.decode_dminputddf_inputbinding(str)`
* `local str = ddf.encode_dmrenderddf_renderprototypedesc(tbl)`
* `local tbl = ddf.decode_dmrenderddf_renderprototypedesc(str)`
* `local str = ddf.encode_dmrenderddf.renderprototypedesc_materialdesc(tbl)`
* `local tbl = ddf.decode_dmrenderddf.renderprototypedesc_materialdesc(str)`
* `local str = ddf.encode_dmrenderddf_drawtext(tbl)`
* `local tbl = ddf.decode_dmrenderddf_drawtext(str)`
* `local str = ddf.encode_dmrenderddf_drawdebugtext(tbl)`
* `local tbl = ddf.decode_dmrenderddf_drawdebugtext(str)`
* `local str = ddf.encode_dmrenderddf_drawline(tbl)`
* `local tbl = ddf.decode_dmrenderddf_drawline(str)`
* `local str = ddf.encode_dmrenderddf_windowresized(tbl)`
* `local tbl = ddf.decode_dmrenderddf_windowresized(str)`
* `local str = ddf.encode_dmrenderddf_resize(tbl)`
* `local tbl = ddf.decode_dmrenderddf_resize(str)`
* `local str = ddf.encode_dmrenderddf_clearcolor(tbl)`
* `local tbl = ddf.decode_dmrenderddf_clearcolor(str)`
* `local str = ddf.encode_dmrenderddf_displayprofilequalifier(tbl)`
* `local tbl = ddf.decode_dmrenderddf_displayprofilequalifier(str)`
* `local str = ddf.encode_dmrenderddf_displayprofile(tbl)`
* `local tbl = ddf.decode_dmrenderddf_displayprofile(str)`
* `local str = ddf.encode_dmrenderddf_displayprofiles(tbl)`
* `local tbl = ddf.decode_dmrenderddf_displayprofiles(str)`
* `local str = ddf.encode_dmrenderddf_fontdesc(tbl)`
* `local tbl = ddf.decode_dmrenderddf_fontdesc(str)`
* `local str = ddf.encode_dmrenderddf_fontmap(tbl)`
* `local tbl = ddf.decode_dmrenderddf_fontmap(str)`
* `local str = ddf.encode_dmrenderddf.fontmap_glyph(tbl)`
* `local tbl = ddf.decode_dmrenderddf.fontmap_glyph(str)`
* `local str = ddf.encode_dmrenderddf_materialdesc(tbl)`
* `local tbl = ddf.decode_dmrenderddf_materialdesc(str)`
* `local str = ddf.encode_dmrenderddf.materialdesc_constant(tbl)`
* `local tbl = ddf.decode_dmrenderddf.materialdesc_constant(str)`
* `local str = ddf.encode_dmrenderddf.materialdesc_sampler(tbl)`
* `local tbl = ddf.decode_dmrenderddf.materialdesc_sampler(str)`
* `local str = ddf.encode_dmscriptddf_luaref(tbl)`
* `local tbl = ddf.decode_dmscriptddf_luaref(str)`
* `local str = ddf.encode_dmsystemddf_exit(tbl)`
* `local tbl = ddf.decode_dmsystemddf_exit(str)`
* `local str = ddf.encode_dmsystemddf_toggleprofile(tbl)`
* `local tbl = ddf.decode_dmsystemddf_toggleprofile(str)`
* `local str = ddf.encode_dmsystemddf_togglephysicsdebug(tbl)`
* `local tbl = ddf.decode_dmsystemddf_togglephysicsdebug(str)`
* `local str = ddf.encode_dmsystemddf_startrecord(tbl)`
* `local tbl = ddf.decode_dmsystemddf_startrecord(str)`
* `local str = ddf.encode_dmsystemddf_stoprecord(tbl)`
* `local tbl = ddf.decode_dmsystemddf_stoprecord(str)`
* `local str = ddf.encode_dmsystemddf_reboot(tbl)`
* `local tbl = ddf.decode_dmsystemddf_reboot(str)`
* `local str = ddf.encode_dmsystemddf_setvsync(tbl)`
* `local tbl = ddf.decode_dmsystemddf_setvsync(str)`
* `local str = ddf.encode_dmsystemddf_setupdatefrequency(tbl)`
* `local tbl = ddf.decode_dmsystemddf_setupdatefrequency(str)`
* `local str = ddf.encode_dmscriptdoc_parameter(tbl)`
* `local tbl = ddf.decode_dmscriptdoc_parameter(str)`
* `local str = ddf.encode_dmscriptdoc_member(tbl)`
* `local tbl = ddf.decode_dmscriptdoc_member(str)`
* `local str = ddf.encode_dmscriptdoc_returnvalue(tbl)`
* `local tbl = ddf.decode_dmscriptdoc_returnvalue(str)`
* `local str = ddf.encode_dmscriptdoc_element(tbl)`
* `local tbl = ddf.decode_dmscriptdoc_element(str)`
* `local str = ddf.encode_dmscriptdoc_info(tbl)`
* `local tbl = ddf.decode_dmscriptdoc_info(str)`
* `local str = ddf.encode_dmscriptdoc_document(tbl)`
* `local tbl = ddf.decode_dmscriptdoc_document(str)`
* `local str = ddf.encode_dmhttpddf_stophttp(tbl)`
* `local tbl = ddf.decode_dmhttpddf_stophttp(str)`
* `local str = ddf.encode_dmhttpddf_httprequest(tbl)`
* `local tbl = ddf.decode_dmhttpddf_httprequest(str)`
* `local str = ddf.encode_dmhttpddf_httpresponse(tbl)`
* `local tbl = ddf.decode_dmhttpddf_httpresponse(str)`
* `local str = ddf.encode_dmluaddf_luasource(tbl)`
* `local tbl = ddf.decode_dmluaddf_luasource(str)`
* `local str = ddf.encode_dmrigddf_bone(tbl)`
* `local tbl = ddf.decode_dmrigddf_bone(str)`
* `local str = ddf.encode_dmrigddf_ik(tbl)`
* `local tbl = ddf.decode_dmrigddf_ik(str)`
* `local str = ddf.encode_dmrigddf_skeleton(tbl)`
* `local tbl = ddf.decode_dmrigddf_skeleton(str)`
* `local str = ddf.encode_dmrigddf_animationtrack(tbl)`
* `local tbl = ddf.decode_dmrigddf_animationtrack(str)`
* `local str = ddf.encode_dmrigddf_eventkey(tbl)`
* `local tbl = ddf.decode_dmrigddf_eventkey(str)`
* `local str = ddf.encode_dmrigddf_eventtrack(tbl)`
* `local tbl = ddf.decode_dmrigddf_eventtrack(str)`
* `local str = ddf.encode_dmrigddf_riganimation(tbl)`
* `local tbl = ddf.decode_dmrigddf_riganimation(str)`
* `local str = ddf.encode_dmrigddf_animationset(tbl)`
* `local tbl = ddf.decode_dmrigddf_animationset(str)`
* `local str = ddf.encode_dmrigddf_animationinstancedesc(tbl)`
* `local tbl = ddf.decode_dmrigddf_animationinstancedesc(str)`
* `local str = ddf.encode_dmrigddf_animationsetdesc(tbl)`
* `local tbl = ddf.decode_dmrigddf_animationsetdesc(str)`
* `local str = ddf.encode_dmrigddf_mesh(tbl)`
* `local tbl = ddf.decode_dmrigddf_mesh(str)`
* `local str = ddf.encode_dmrigddf_model(tbl)`
* `local tbl = ddf.decode_dmrigddf_model(str)`
* `local str = ddf.encode_dmrigddf_meshset(tbl)`
* `local tbl = ddf.decode_dmrigddf_meshset(str)`
* `local str = ddf.encode_dmrigddf_rigscene(tbl)`
* `local tbl = ddf.decode_dmrigddf_rigscene(str)`
* `local str = ddf.encode_dmmodelddf_modeldesc(tbl)`
* `local tbl = ddf.decode_dmmodelddf_modeldesc(str)`
* `local str = ddf.encode_dmmodelddf_model(tbl)`
* `local tbl = ddf.decode_dmmodelddf_model(str)`
* `local str = ddf.encode_dmmodelddf_resetconstant(tbl)`
* `local tbl = ddf.decode_dmmodelddf_resetconstant(str)`
* `local str = ddf.encode_dmmodelddf_settexture(tbl)`
* `local tbl = ddf.decode_dmmodelddf_settexture(str)`
* `local str = ddf.encode_dmmodelddf_modelplayanimation(tbl)`
* `local tbl = ddf.decode_dmmodelddf_modelplayanimation(str)`
* `local str = ddf.encode_dmmodelddf_modelcancelanimation(tbl)`
* `local tbl = ddf.decode_dmmodelddf_modelcancelanimation(str)`
* `local str = ddf.encode_dmmodelddf_modelanimationdone(tbl)`
* `local tbl = ddf.decode_dmmodelddf_modelanimationdone(str)`
* `local str = ddf.encode_dmmeshddf_meshdesc(tbl)`
* `local tbl = ddf.decode_dmmeshddf_meshdesc(str)`
* `local str = ddf.encode_dmgamesystemddf_labeldesc(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_labeldesc(str)`
* `local str = ddf.encode_dmgamesystemddf_settext(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_settext(str)`
* `local str = ddf.encode_dmgamesystemddf_convexhull(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_convexhull(str)`
* `local str = ddf.encode_dmgamesystemddf_cue(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_cue(str)`
* `local str = ddf.encode_dmgamesystemddf_animation(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_animation(str)`
* `local str = ddf.encode_dmgamesystemddf_tileset(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_tileset(str)`
* `local str = ddf.encode_dmgamesystemddf_tilecell(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_tilecell(str)`
* `local str = ddf.encode_dmgamesystemddf_tilelayer(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_tilelayer(str)`
* `local str = ddf.encode_dmgamesystemddf_tilegrid(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_tilegrid(str)`
* `local str = ddf.encode_dmgamesystemddf_settile(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_settile(str)`
* `local str = ddf.encode_dmgamesystemddf_setconstanttilemap(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_setconstanttilemap(str)`
* `local str = ddf.encode_dmgamesystemddf_resetconstanttilemap(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_resetconstanttilemap(str)`
* `local str = ddf.encode_dmgamesystemddf_atlasimage(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_atlasimage(str)`
* `local str = ddf.encode_dmgamesystemddf_atlasanimation(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_atlasanimation(str)`
* `local str = ddf.encode_dmgamesystemddf_atlas(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_atlas(str)`
* `local str = ddf.encode_dmbufferddf_streamdesc(tbl)`
* `local tbl = ddf.decode_dmbufferddf_streamdesc(str)`
* `local str = ddf.encode_dmbufferddf_bufferdesc(tbl)`
* `local tbl = ddf.decode_dmbufferddf_bufferdesc(str)`
* `local str = ddf.encode_dmsoundddf_sounddesc(tbl)`
* `local tbl = ddf.decode_dmsoundddf_sounddesc(str)`
* `local str = ddf.encode_dmgamesysddf_cameradesc(tbl)`
* `local tbl = ddf.decode_dmgamesysddf_cameradesc(str)`
* `local str = ddf.encode_dmgamesysddf_setcamera(tbl)`
* `local tbl = ddf.decode_dmgamesysddf_setcamera(str)`
* `local str = ddf.encode_dmgamesysddf_acquirecamerafocus(tbl)`
* `local tbl = ddf.decode_dmgamesysddf_acquirecamerafocus(str)`
* `local str = ddf.encode_dmgamesysddf_releasecamerafocus(tbl)`
* `local tbl = ddf.decode_dmgamesysddf_releasecamerafocus(str)`
* `local str = ddf.encode_dmgamesystemddf_spritedesc(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_spritedesc(str)`
* `local str = ddf.encode_dmgamesystemddf_playanimation(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_playanimation(str)`
* `local str = ddf.encode_dmgamesystemddf_animationdone(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_animationdone(str)`
* `local str = ddf.encode_dmgamesystemddf_setfliphorizontal(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_setfliphorizontal(str)`
* `local str = ddf.encode_dmgamesystemddf_setflipvertical(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_setflipvertical(str)`
* `local str = ddf.encode_dmgamesystemddf_texturesetanimation(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_texturesetanimation(str)`
* `local str = ddf.encode_dmgamesystemddf_spritegeometry(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_spritegeometry(str)`
* `local str = ddf.encode_dmgamesystemddf_textureset(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_textureset(str)`
* `local str = ddf.encode_dmphysicsddf_convexshape(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_convexshape(str)`
* `local str = ddf.encode_dmphysicsddf_collisionshape(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_collisionshape(str)`
* `local str = ddf.encode_dmphysicsddf.collisionshape_shape(tbl)`
* `local tbl = ddf.decode_dmphysicsddf.collisionshape_shape(str)`
* `local str = ddf.encode_dmphysicsddf_collisionobjectdesc(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_collisionobjectdesc(str)`
* `local str = ddf.encode_dmphysicsddf_applyforce(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_applyforce(str)`
* `local str = ddf.encode_dmphysicsddf_collisionresponse(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_collisionresponse(str)`
* `local str = ddf.encode_dmphysicsddf_contactpointresponse(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_contactpointresponse(str)`
* `local str = ddf.encode_dmphysicsddf_triggerresponse(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_triggerresponse(str)`
* `local str = ddf.encode_dmphysicsddf_requestraycast(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_requestraycast(str)`
* `local str = ddf.encode_dmphysicsddf_raycastresponse(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_raycastresponse(str)`
* `local str = ddf.encode_dmphysicsddf_raycastmissed(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_raycastmissed(str)`
* `local str = ddf.encode_dmphysicsddf_requestvelocity(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_requestvelocity(str)`
* `local str = ddf.encode_dmphysicsddf_velocityresponse(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_velocityresponse(str)`
* `local str = ddf.encode_dmphysicsddf_setgridshapehull(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_setgridshapehull(str)`
* `local str = ddf.encode_dmphysicsddf_enablegridshapelayer(tbl)`
* `local tbl = ddf.decode_dmphysicsddf_enablegridshapelayer(str)`
* `local str = ddf.encode_dmgamesystemddf_factorydesc(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_factorydesc(str)`
* `local str = ddf.encode_dmgamesystemddf_collectionfactorydesc(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_collectionfactorydesc(str)`
* `local str = ddf.encode_dmgamesystemddf_create(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_create(str)`
* `local str = ddf.encode_dmgamesystemddf_collectionproxydesc(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_collectionproxydesc(str)`
* `local str = ddf.encode_dmgamesystemddf_settimestep(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_settimestep(str)`
* `local str = ddf.encode_dmgamesystemddf_lightdesc(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_lightdesc(str)`
* `local str = ddf.encode_dmgamesystemddf_setlight(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_setlight(str)`
* `local str = ddf.encode_dmgamesystemddf_setviewprojection(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_setviewprojection(str)`
* `local str = ddf.encode_dmgamesystemddf_playsound(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_playsound(str)`
* `local str = ddf.encode_dmgamesystemddf_stopsound(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_stopsound(str)`
* `local str = ddf.encode_dmgamesystemddf_pausesound(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_pausesound(str)`
* `local str = ddf.encode_dmgamesystemddf_sounddone(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_sounddone(str)`
* `local str = ddf.encode_dmgamesystemddf_setgain(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_setgain(str)`
* `local str = ddf.encode_dmgamesystemddf_setpan(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_setpan(str)`
* `local str = ddf.encode_dmgamesystemddf_setspeed(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_setspeed(str)`
* `local str = ddf.encode_dmgamesystemddf_playparticlefx(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_playparticlefx(str)`
* `local str = ddf.encode_dmgamesystemddf_stopparticlefx(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_stopparticlefx(str)`
* `local str = ddf.encode_dmgamesystemddf_setconstantparticlefx(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_setconstantparticlefx(str)`
* `local str = ddf.encode_dmgamesystemddf_resetconstantparticlefx(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_resetconstantparticlefx(str)`
* `local str = ddf.encode_dmgamesystemddf_setconstant(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_setconstant(str)`
* `local str = ddf.encode_dmgamesystemddf_resetconstant(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_resetconstant(str)`
* `local str = ddf.encode_dmgamesystemddf_setscale(tbl)`
* `local tbl = ddf.decode_dmgamesystemddf_setscale(str)`
* `local str = ddf.encode_dmguiddf_nodedesc(tbl)`
* `local tbl = ddf.decode_dmguiddf_nodedesc(str)`
* `local str = ddf.encode_dmguiddf_scenedesc(tbl)`
* `local tbl = ddf.decode_dmguiddf_scenedesc(str)`
* `local str = ddf.encode_dmguiddf.scenedesc_fontdesc(tbl)`
* `local tbl = ddf.decode_dmguiddf.scenedesc_fontdesc(str)`
* `local str = ddf.encode_dmguiddf.scenedesc_texturedesc(tbl)`
* `local tbl = ddf.decode_dmguiddf.scenedesc_texturedesc(str)`
* `local str = ddf.encode_dmguiddf.scenedesc_layerdesc(tbl)`
* `local tbl = ddf.decode_dmguiddf.scenedesc_layerdesc(str)`
* `local str = ddf.encode_dmguiddf.scenedesc_layoutdesc(tbl)`
* `local tbl = ddf.decode_dmguiddf.scenedesc_layoutdesc(str)`
* `local str = ddf.encode_dmguiddf.scenedesc_spinescenedesc(tbl)`
* `local tbl = ddf.decode_dmguiddf.scenedesc_spinescenedesc(str)`
* `local str = ddf.encode_dmguiddf.scenedesc_resourcedesc(tbl)`
* `local tbl = ddf.decode_dmguiddf.scenedesc_resourcedesc(str)`
* `local str = ddf.encode_dmguiddf.scenedesc_particlefxdesc(tbl)`
* `local tbl = ddf.decode_dmguiddf.scenedesc_particlefxdesc(str)`
* `local str = ddf.encode_dmguiddf_layoutchanged(tbl)`
* `local tbl = ddf.decode_dmguiddf_layoutchanged(str)`
* `local str = ddf.encode_dmliveupdateddf_hashdigest(tbl)`
* `local tbl = ddf.decode_dmliveupdateddf_hashdigest(str)`
* `local str = ddf.encode_dmliveupdateddf_manifestheader(tbl)`
* `local tbl = ddf.decode_dmliveupdateddf_manifestheader(str)`
* `local str = ddf.encode_dmliveupdateddf_resourceentry(tbl)`
* `local tbl = ddf.decode_dmliveupdateddf_resourceentry(str)`
* `local str = ddf.encode_dmliveupdateddf_manifestdata(tbl)`
* `local tbl = ddf.decode_dmliveupdateddf_manifestdata(str)`
* `local str = ddf.encode_dmliveupdateddf_manifestfile(tbl)`
* `local tbl = ddf.decode_dmliveupdateddf_manifestfile(str)`
* `local str = ddf.encode_dmresourceddf_reload(tbl)`
* `local tbl = ddf.decode_dmresourceddf_reload(str)`
* `local str = ddf.encode_dmgraphics_cubemap(tbl)`
* `local tbl = ddf.decode_dmgraphics_cubemap(str)`
* `local str = ddf.encode_dmgraphics_textureimage(tbl)`
* `local tbl = ddf.decode_dmgraphics_textureimage(str)`
* `local str = ddf.encode_dmgraphics.textureimage_image(tbl)`
* `local tbl = ddf.decode_dmgraphics.textureimage_image(str)`
* `local str = ddf.encode_dmgraphics_textureformatalternative(tbl)`
* `local tbl = ddf.decode_dmgraphics_textureformatalternative(str)`
* `local str = ddf.encode_dmgraphics_pathsettings(tbl)`
* `local tbl = ddf.decode_dmgraphics_pathsettings(str)`
* `local str = ddf.encode_dmgraphics_platformprofile(tbl)`
* `local tbl = ddf.decode_dmgraphics_platformprofile(str)`
* `local str = ddf.encode_dmgraphics_textureprofile(tbl)`
* `local tbl = ddf.decode_dmgraphics_textureprofile(str)`
* `local str = ddf.encode_dmgraphics_textureprofiles(tbl)`
* `local tbl = ddf.decode_dmgraphics_textureprofiles(str)`
* `local str = ddf.encode_dmgraphics_shaderdesc(tbl)`
* `local tbl = ddf.decode_dmgraphics_shaderdesc(str)`
* `local str = ddf.encode_dmgraphics.shaderdesc_resourcebinding(tbl)`
* `local tbl = ddf.decode_dmgraphics.shaderdesc_resourcebinding(str)`
* `local str = ddf.encode_dmgraphics.shaderdesc_shader(tbl)`
* `local tbl = ddf.decode_dmgraphics.shaderdesc_shader(str)`
* `local str = ddf.encode_dmpropertiesddf_propertydeclarationentry(tbl)`
* `local tbl = ddf.decode_dmpropertiesddf_propertydeclarationentry(str)`
* `local str = ddf.encode_dmpropertiesddf_propertydeclarations(tbl)`
* `local tbl = ddf.decode_dmpropertiesddf_propertydeclarations(str)`
* `local str = ddf.encode_dmgameobjectddf_propertydesc(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_propertydesc(str)`
* `local str = ddf.encode_dmgameobjectddf_componentdesc(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_componentdesc(str)`
* `local str = ddf.encode_dmgameobjectddf_embeddedcomponentdesc(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_embeddedcomponentdesc(str)`
* `local str = ddf.encode_dmgameobjectddf_prototypedesc(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_prototypedesc(str)`
* `local str = ddf.encode_dmgameobjectddf_componentpropertydesc(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_componentpropertydesc(str)`
* `local str = ddf.encode_dmgameobjectddf_componentypedesc(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_componentypedesc(str)`
* `local str = ddf.encode_dmgameobjectddf_instancedesc(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_instancedesc(str)`
* `local str = ddf.encode_dmgameobjectddf_embeddedinstancedesc(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_embeddedinstancedesc(str)`
* `local str = ddf.encode_dmgameobjectddf_instancepropertydesc(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_instancepropertydesc(str)`
* `local str = ddf.encode_dmgameobjectddf_collectioninstancedesc(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_collectioninstancedesc(str)`
* `local str = ddf.encode_dmgameobjectddf_collectiondesc(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_collectiondesc(str)`
* `local str = ddf.encode_dmgameobjectddf_acquireinputfocus(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_acquireinputfocus(str)`
* `local str = ddf.encode_dmgameobjectddf_releaseinputfocus(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_releaseinputfocus(str)`
* `local str = ddf.encode_dmgameobjectddf_requesttransform(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_requesttransform(str)`
* `local str = ddf.encode_dmgameobjectddf_transformresponse(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_transformresponse(str)`
* `local str = ddf.encode_dmgameobjectddf_setparent(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_setparent(str)`
* `local str = ddf.encode_dmgameobjectddf_enable(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_enable(str)`
* `local str = ddf.encode_dmgameobjectddf_disable(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_disable(str)`
* `local str = ddf.encode_dmgameobjectddf_scriptmessage(tbl)`
* `local tbl = ddf.decode_dmgameobjectddf_scriptmessage(str)`
* `local str = ddf.encode_dmluaddf_luamodule(tbl)`
* `local tbl = ddf.decode_dmluaddf_luamodule(str)`
* `local str = ddf.encode_dmengineddf_hideapp(tbl)`
* `local tbl = ddf.decode_dmengineddf_hideapp(str)`
* `local str = ddf.encode_dmengineddf_runscript(tbl)`
* `local tbl = ddf.decode_dmengineddf_runscript(str)`
* `local str = ddf.encode_dmparticleddf_splinepoint(tbl)`
* `local tbl = ddf.decode_dmparticleddf_splinepoint(str)`
* `local str = ddf.encode_dmparticleddf_modifier(tbl)`
* `local tbl = ddf.decode_dmparticleddf_modifier(str)`
* `local str = ddf.encode_dmparticleddf.modifier_property(tbl)`
* `local tbl = ddf.decode_dmparticleddf.modifier_property(str)`
* `local str = ddf.encode_dmparticleddf_emitter(tbl)`
* `local tbl = ddf.decode_dmparticleddf_emitter(str)`
* `local str = ddf.encode_dmparticleddf.emitter_property(tbl)`
* `local tbl = ddf.decode_dmparticleddf.emitter_property(str)`
* `local str = ddf.encode_dmparticleddf.emitter_particleproperty(tbl)`
* `local tbl = ddf.decode_dmparticleddf.emitter_particleproperty(str)`
* `local str = ddf.encode_dmparticleddf_particlefx(tbl)`
* `local tbl = ddf.decode_dmparticleddf_particlefx(str)`

### Enums
* `ddf.DM_INPUT_DDF__KEY_KEY_SPACE`
* `ddf.DM_INPUT_DDF__KEY_KEY_EXCLAIM`
* `ddf.DM_INPUT_DDF__KEY_KEY_QUOTEDBL`
* `ddf.DM_INPUT_DDF__KEY_KEY_HASH`
* `ddf.DM_INPUT_DDF__KEY_KEY_DOLLAR`
* `ddf.DM_INPUT_DDF__KEY_KEY_AMPERSAND`
* `ddf.DM_INPUT_DDF__KEY_KEY_QUOTE`
* `ddf.DM_INPUT_DDF__KEY_KEY_LPAREN`
* `ddf.DM_INPUT_DDF__KEY_KEY_RPAREN`
* `ddf.DM_INPUT_DDF__KEY_KEY_ASTERISK`
* `ddf.DM_INPUT_DDF__KEY_KEY_PLUS`
* `ddf.DM_INPUT_DDF__KEY_KEY_COMMA`
* `ddf.DM_INPUT_DDF__KEY_KEY_MINUS`
* `ddf.DM_INPUT_DDF__KEY_KEY_PERIOD`
* `ddf.DM_INPUT_DDF__KEY_KEY_SLASH`
* `ddf.DM_INPUT_DDF__KEY_KEY_0`
* `ddf.DM_INPUT_DDF__KEY_KEY_1`
* `ddf.DM_INPUT_DDF__KEY_KEY_2`
* `ddf.DM_INPUT_DDF__KEY_KEY_3`
* `ddf.DM_INPUT_DDF__KEY_KEY_4`
* `ddf.DM_INPUT_DDF__KEY_KEY_5`
* `ddf.DM_INPUT_DDF__KEY_KEY_6`
* `ddf.DM_INPUT_DDF__KEY_KEY_7`
* `ddf.DM_INPUT_DDF__KEY_KEY_8`
* `ddf.DM_INPUT_DDF__KEY_KEY_9`
* `ddf.DM_INPUT_DDF__KEY_KEY_COLON`
* `ddf.DM_INPUT_DDF__KEY_KEY_SEMICOLON`
* `ddf.DM_INPUT_DDF__KEY_KEY_LESS`
* `ddf.DM_INPUT_DDF__KEY_KEY_EQUALS`
* `ddf.DM_INPUT_DDF__KEY_KEY_GREATER`
* `ddf.DM_INPUT_DDF__KEY_KEY_QUESTION`
* `ddf.DM_INPUT_DDF__KEY_KEY_AT`
* `ddf.DM_INPUT_DDF__KEY_KEY_A`
* `ddf.DM_INPUT_DDF__KEY_KEY_B`
* `ddf.DM_INPUT_DDF__KEY_KEY_C`
* `ddf.DM_INPUT_DDF__KEY_KEY_D`
* `ddf.DM_INPUT_DDF__KEY_KEY_E`
* `ddf.DM_INPUT_DDF__KEY_KEY_F`
* `ddf.DM_INPUT_DDF__KEY_KEY_G`
* `ddf.DM_INPUT_DDF__KEY_KEY_H`
* `ddf.DM_INPUT_DDF__KEY_KEY_I`
* `ddf.DM_INPUT_DDF__KEY_KEY_J`
* `ddf.DM_INPUT_DDF__KEY_KEY_K`
* `ddf.DM_INPUT_DDF__KEY_KEY_L`
* `ddf.DM_INPUT_DDF__KEY_KEY_M`
* `ddf.DM_INPUT_DDF__KEY_KEY_N`
* `ddf.DM_INPUT_DDF__KEY_KEY_O`
* `ddf.DM_INPUT_DDF__KEY_KEY_P`
* `ddf.DM_INPUT_DDF__KEY_KEY_Q`
* `ddf.DM_INPUT_DDF__KEY_KEY_R`
* `ddf.DM_INPUT_DDF__KEY_KEY_S`
* `ddf.DM_INPUT_DDF__KEY_KEY_T`
* `ddf.DM_INPUT_DDF__KEY_KEY_U`
* `ddf.DM_INPUT_DDF__KEY_KEY_V`
* `ddf.DM_INPUT_DDF__KEY_KEY_W`
* `ddf.DM_INPUT_DDF__KEY_KEY_X`
* `ddf.DM_INPUT_DDF__KEY_KEY_Y`
* `ddf.DM_INPUT_DDF__KEY_KEY_Z`
* `ddf.DM_INPUT_DDF__KEY_KEY_LBRACKET`
* `ddf.DM_INPUT_DDF__KEY_KEY_BACKSLASH`
* `ddf.DM_INPUT_DDF__KEY_KEY_RBRACKET`
* `ddf.DM_INPUT_DDF__KEY_KEY_CARET`
* `ddf.DM_INPUT_DDF__KEY_KEY_UNDERSCORE`
* `ddf.DM_INPUT_DDF__KEY_KEY_BACKQUOTE`
* `ddf.DM_INPUT_DDF__KEY_KEY_LBRACE`
* `ddf.DM_INPUT_DDF__KEY_KEY_PIPE`
* `ddf.DM_INPUT_DDF__KEY_KEY_RBRACE`
* `ddf.DM_INPUT_DDF__KEY_KEY_TILDE`
* `ddf.DM_INPUT_DDF__KEY_KEY_ESC`
* `ddf.DM_INPUT_DDF__KEY_KEY_F1`
* `ddf.DM_INPUT_DDF__KEY_KEY_F2`
* `ddf.DM_INPUT_DDF__KEY_KEY_F3`
* `ddf.DM_INPUT_DDF__KEY_KEY_F4`
* `ddf.DM_INPUT_DDF__KEY_KEY_F5`
* `ddf.DM_INPUT_DDF__KEY_KEY_F6`
* `ddf.DM_INPUT_DDF__KEY_KEY_F7`
* `ddf.DM_INPUT_DDF__KEY_KEY_F8`
* `ddf.DM_INPUT_DDF__KEY_KEY_F9`
* `ddf.DM_INPUT_DDF__KEY_KEY_F10`
* `ddf.DM_INPUT_DDF__KEY_KEY_F11`
* `ddf.DM_INPUT_DDF__KEY_KEY_F12`
* `ddf.DM_INPUT_DDF__KEY_KEY_UP`
* `ddf.DM_INPUT_DDF__KEY_KEY_DOWN`
* `ddf.DM_INPUT_DDF__KEY_KEY_LEFT`
* `ddf.DM_INPUT_DDF__KEY_KEY_RIGHT`
* `ddf.DM_INPUT_DDF__KEY_KEY_LSHIFT`
* `ddf.DM_INPUT_DDF__KEY_KEY_RSHIFT`
* `ddf.DM_INPUT_DDF__KEY_KEY_LCTRL`
* `ddf.DM_INPUT_DDF__KEY_KEY_RCTRL`
* `ddf.DM_INPUT_DDF__KEY_KEY_LALT`
* `ddf.DM_INPUT_DDF__KEY_KEY_RALT`
* `ddf.DM_INPUT_DDF__KEY_KEY_TAB`
* `ddf.DM_INPUT_DDF__KEY_KEY_ENTER`
* `ddf.DM_INPUT_DDF__KEY_KEY_BACKSPACE`
* `ddf.DM_INPUT_DDF__KEY_KEY_INSERT`
* `ddf.DM_INPUT_DDF__KEY_KEY_DEL`
* `ddf.DM_INPUT_DDF__KEY_KEY_PAGEUP`
* `ddf.DM_INPUT_DDF__KEY_KEY_PAGEDOWN`
* `ddf.DM_INPUT_DDF__KEY_KEY_HOME`
* `ddf.DM_INPUT_DDF__KEY_KEY_END`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_0`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_1`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_2`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_3`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_4`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_5`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_6`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_7`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_8`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_9`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_DIVIDE`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_MULTIPLY`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_SUBTRACT`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_ADD`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_DECIMAL`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_EQUAL`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_ENTER`
* `ddf.DM_INPUT_DDF__KEY_KEY_KP_NUM_LOCK`
* `ddf.DM_INPUT_DDF__KEY_KEY_CAPS_LOCK`
* `ddf.DM_INPUT_DDF__KEY_KEY_SCROLL_LOCK`
* `ddf.DM_INPUT_DDF__KEY_KEY_PAUSE`
* `ddf.DM_INPUT_DDF__KEY_KEY_LSUPER`
* `ddf.DM_INPUT_DDF__KEY_KEY_RSUPER`
* `ddf.DM_INPUT_DDF__KEY_KEY_MENU`
* `ddf.DM_INPUT_DDF__KEY_KEY_BACK`
* `ddf.DM_INPUT_DDF__KEY_MAX_KEY_COUNT`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_WHEEL_UP`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_WHEEL_DOWN`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_LEFT`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_MIDDLE`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_RIGHT`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_1`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_2`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_3`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_4`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_5`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_6`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_7`
* `ddf.DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_8`
* `ddf.DM_INPUT_DDF__MOUSE_MAX_MOUSE_COUNT`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_LEFT`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_RIGHT`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_DOWN`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_UP`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_CLICK`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LTRIGGER`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSHOULDER`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_LEFT`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_RIGHT`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_DOWN`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_UP`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_LEFT`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_RIGHT`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_DOWN`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_UP`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_CLICK`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RTRIGGER`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSHOULDER`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_LEFT`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_RIGHT`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_DOWN`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_UP`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_START`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_BACK`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_GUIDE`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_CONNECTED`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_DISCONNECTED`
* `ddf.DM_INPUT_DDF__GAMEPAD_GAMEPAD_RAW`
* `ddf.DM_INPUT_DDF__GAMEPAD_MAX_GAMEPAD_COUNT`
* `ddf.DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_AXIS`
* `ddf.DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_BUTTON`
* `ddf.DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_HAT`
* `ddf.DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_NEGATE`
* `ddf.DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_SCALE`
* `ddf.DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_CLAMP`
* `ddf.DM_INPUT_DDF__GAMEPAD_MODIFIER_MAX_GAMEPAD_MODIFIER_COUNT`
* `ddf.DM_INPUT_DDF__TOUCH_TOUCH_MULTI`
* `ddf.DM_INPUT_DDF__TOUCH_MAX_TOUCH_COUNT`
* `ddf.DM_INPUT_DDF__TEXT_TEXT`
* `ddf.DM_INPUT_DDF__TEXT_MARKED_TEXT`
* `ddf.DM_INPUT_DDF__TEXT_MAX_TEXT_COUNT`
* `ddf.DM_RENDER_DDF__FONT_TEXTURE_FORMAT_TYPE_BITMAP`
* `ddf.DM_RENDER_DDF__FONT_TEXTURE_FORMAT_TYPE_DISTANCE_FIELD`
* `ddf.DM_RENDER_DDF__FONT_RENDER_MODE_MODE_SINGLE_LAYER`
* `ddf.DM_RENDER_DDF__FONT_RENDER_MODE_MODE_MULTI_LAYER`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_USER`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_VIEWPROJ`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLD`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_TEXTURE`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_VIEW`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_PROJECTION`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_NORMAL`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLDVIEW`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLDVIEWPROJ`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_USER_MATRIX4`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE_VERTEX_SPACE_WORLD`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE_VERTEX_SPACE_LOCAL`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_REPEAT`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_MIRRORED_REPEAT`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_CLAMP_TO_EDGE`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST_MIPMAP_NEAREST`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST_MIPMAP_LINEAR`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR_MIPMAP_NEAREST`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR_MIPMAP_LINEAR`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG_FILTER_MODE_MAG_NEAREST`
* `ddf.DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG_FILTER_MODE_MAG_LINEAR`
* `ddf.DM_SCRIPT_DOC__TYPE_FUNCTION`
* `ddf.DM_SCRIPT_DOC__TYPE_VARIABLE`
* `ddf.DM_SCRIPT_DOC__TYPE_MESSAGE`
* `ddf.DM_SCRIPT_DOC__TYPE_NAMESPACE`
* `ddf.DM_SCRIPT_DOC__TYPE_PROPERTY`
* `ddf.DM_SCRIPT_DOC__TYPE_PACKAGE`
* `ddf.DM_SCRIPT_DOC__TYPE_STRUCT`
* `ddf.DM_SCRIPT_DOC__TYPE_MACRO`
* `ddf.DM_SCRIPT_DOC__TYPE_ENUM`
* `ddf.DM_SCRIPT_DOC__TYPE_TYPEDEF`
* `ddf.DM_SCRIPT_DOC__TYPE_CLASS`
* `ddf.DM_RIG_DDF__INDEX_BUFFER_FORMAT_INDEXBUFFER_FORMAT_16`
* `ddf.DM_RIG_DDF__INDEX_BUFFER_FORMAT_INDEXBUFFER_FORMAT_32`
* `ddf.DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_LINES`
* `ddf.DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_TRIANGLES`
* `ddf.DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_TRIANGLE_STRIP`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_ALPHA`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_ADD`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_MULT`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_SCREEN`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_CENTER`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_N`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_NE`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_E`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_SE`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_S`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_SW`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_W`
* `ddf.DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_NW`
* `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_NONE`
* `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_FORWARD`
* `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_BACKWARD`
* `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_PINGPONG`
* `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_FORWARD`
* `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_BACKWARD`
* `ddf.DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_PINGPONG`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_OFF`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_4`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_5`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_6`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_7`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_8`
* `ddf.DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ALPHA`
* `ddf.DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ADD`
* `ddf.DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
* `ddf.DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_MULT`
* `ddf.DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_SCREEN`
* `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT8`
* `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT16`
* `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT32`
* `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT64`
* `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT8`
* `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT16`
* `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT32`
* `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT64`
* `ddf.DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_FLOAT32`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ALPHA`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ADD`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_MULT`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_SCREEN`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__SIZE_MODE_SIZE_MODE_MANUAL`
* `ddf.DM_GAME_SYSTEM_DDF__SPRITE_DESC__SIZE_MODE_SIZE_MODE_AUTO`
* `ddf.DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_DYNAMIC`
* `ddf.DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_KINEMATIC`
* `ddf.DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_STATIC`
* `ddf.DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_TRIGGER`
* `ddf.DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_SPHERE`
* `ddf.DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_BOX`
* `ddf.DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_CAPSULE`
* `ddf.DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_HULL`
* `ddf.DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_SPHERE`
* `ddf.DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_BOX`
* `ddf.DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_CAPSULE`
* `ddf.DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_HULL`
* `ddf.DM_GAME_SYSTEM_DDF__TIME_STEP_MODE_TIME_STEP_MODE_CONTINUOUS`
* `ddf.DM_GAME_SYSTEM_DDF__TIME_STEP_MODE_TIME_STEP_MODE_DISCRETE`
* `ddf.DM_GAME_SYSTEM_DDF__LIGHT_TYPE_POINT`
* `ddf.DM_GAME_SYSTEM_DDF__LIGHT_TYPE_SPOT`
* `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_BOX`
* `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_TEXT`
* `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_PIE`
* `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_TEMPLATE`
* `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_SPINE`
* `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_PARTICLEFX`
* `ddf.DM_GUI_DDF__NODE_DESC__TYPE_TYPE_CUSTOM`
* `ddf.DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ALPHA`
* `ddf.DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ADD`
* `ddf.DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
* `ddf.DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_MULT`
* `ddf.DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_SCREEN`
* `ddf.DM_GUI_DDF__NODE_DESC__CLIPPING_MODE_CLIPPING_MODE_NONE`
* `ddf.DM_GUI_DDF__NODE_DESC__CLIPPING_MODE_CLIPPING_MODE_STENCIL`
* `ddf.DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_NONE`
* `ddf.DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_LEFT`
* `ddf.DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_RIGHT`
* `ddf.DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_NONE`
* `ddf.DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_TOP`
* `ddf.DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_BOTTOM`
* `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_CENTER`
* `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_N`
* `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_NE`
* `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_E`
* `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_SE`
* `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_S`
* `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_SW`
* `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_W`
* `ddf.DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_NW`
* `ddf.DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_FIT`
* `ddf.DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_ZOOM`
* `ddf.DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_STRETCH`
* `ddf.DM_GUI_DDF__NODE_DESC__SIZE_MODE_SIZE_MODE_MANUAL`
* `ddf.DM_GUI_DDF__NODE_DESC__SIZE_MODE_SIZE_MODE_AUTO`
* `ddf.DM_GUI_DDF__NODE_DESC__PIE_BOUNDS_PIEBOUNDS_RECTANGLE`
* `ddf.DM_GUI_DDF__NODE_DESC__PIE_BOUNDS_PIEBOUNDS_ELLIPSE`
* `ddf.DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_LEGACY`
* `ddf.DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_PARENT`
* `ddf.DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_DISABLED`
* `ddf.DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_UNKNOWN`
* `ddf.DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_MD5`
* `ddf.DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA1`
* `ddf.DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA256`
* `ddf.DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA512`
* `ddf.DM_LIVE_UPDATE_DDF__SIGN_ALGORITHM_SIGN_UNKNOWN`
* `ddf.DM_LIVE_UPDATE_DDF__SIGN_ALGORITHM_SIGN_RSA`
* `ddf.DM_LIVE_UPDATE_DDF__RESOURCE_ENTRY_FLAG_BUNDLED`
* `ddf.DM_LIVE_UPDATE_DDF__RESOURCE_ENTRY_FLAG_EXCLUDED`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TYPE_TYPE_2D`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TYPE_TYPE_CUBEMAP`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_DEFAULT`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_WEBP`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_WEBP_LOSSY`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_BASIS_UASTC`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_BASIS_ETC1S`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_FLAGS_COMPRESSION_FLAG_ALPHA_CLEAN`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_LUMINANCE`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_PVRTC_2BPPV1`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_PVRTC_4BPPV1`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_PVRTC_2BPPV1`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_PVRTC_4BPPV1`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_ETC1`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_16BPP`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_16BPP`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_LUMINANCE_ALPHA`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_ETC2`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_ASTC_4x4`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_BC1`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_BC3`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_R_BC4`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RG_BC5`
* `ddf.DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_BC7`
* `ddf.DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_FAST`
* `ddf.DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_NORMAL`
* `ddf.DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_HIGH`
* `ddf.DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_BEST`
* `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_GENERIC`
* `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_WINDOWS`
* `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_OSX`
* `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_LINUX`
* `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_IOS`
* `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_ANDROID`
* `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_WEB`
* `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_SWITCH`
* `ddf.DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_PS4`
* `ddf.DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLSL_SM120`
* `ddf.DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLSL_SM140`
* `ddf.DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLES_SM100`
* `ddf.DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLES_SM300`
* `ddf.DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_SPIRV`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_UNKNOWN`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_INT`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_UINT`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_FLOAT`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC2`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC3`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC4`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT2`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT3`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT4`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER2D`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER3D`
* `ddf.DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER_CUBE`
* `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_NUMBER`
* `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_HASH`
* `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_URL`
* `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_VECTOR3`
* `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_VECTOR4`
* `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_QUAT`
* `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_BOOLEAN`
* `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_MATRIX4`
* `ddf.DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_COUNT`
* `ddf.DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_CIRCLE`
* `ddf.DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_2DCONE`
* `ddf.DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_BOX`
* `ddf.DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_SPHERE`
* `ddf.DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_CONE`
* `ddf.DM_PARTICLE_DDF__PLAY_MODE_PLAY_MODE_ONCE`
* `ddf.DM_PARTICLE_DDF__PLAY_MODE_PLAY_MODE_LOOP`
* `ddf.DM_PARTICLE_DDF__EMISSION_SPACE_EMISSION_SPACE_WORLD`
* `ddf.DM_PARTICLE_DDF__EMISSION_SPACE_EMISSION_SPACE_EMITTER`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SPAWN_RATE`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_X`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_Y`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_Z`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_LIFE_TIME`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_SPEED`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_SIZE`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_RED`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_GREEN`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_BLUE`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ALPHA`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ROTATION`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_STRETCH_FACTOR_X`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_STRETCH_FACTOR_Y`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ANGULAR_VELOCITY`
* `ddf.DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_COUNT`
* `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_SCALE`
* `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_RED`
* `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_GREEN`
* `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_BLUE`
* `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ALPHA`
* `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ROTATION`
* `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_STRETCH_FACTOR_X`
* `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_STRETCH_FACTOR_Y`
* `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ANGULAR_VELOCITY`
* `ddf.DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_COUNT`
* `ddf.DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_ACCELERATION`
* `ddf.DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_DRAG`
* `ddf.DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_RADIAL`
* `ddf.DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_VORTEX`
* `ddf.DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_MAGNITUDE`
* `ddf.DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_MAX_DISTANCE`
* `ddf.DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_COUNT`
* `ddf.DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ALPHA`
* `ddf.DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ADD`
* `ddf.DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
* `ddf.DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_MULT`
* `ddf.DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_SCREEN`
* `ddf.DM_PARTICLE_DDF__SIZE_MODE_SIZE_MODE_MANUAL`
* `ddf.DM_PARTICLE_DDF__SIZE_MODE_SIZE_MODE_AUTO`
* `ddf.DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_DEFAULT`
* `ddf.DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_INITIAL_DIRECTION`
* `ddf.DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_MOVEMENT_DIRECTION`
* `ddf.DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_ANGULAR_VELOCITY`
