# extension-proto-ddf
This extension provides Lua bindings to encode and decode the Defold Data Format (ddf).

### Message encode/decode
* `local str = encode_dmmath_point3(tbl)`
* `local tbl = decode_dmmath_point3(str)`
* `local str = encode_dmmath_vector3(tbl)`
* `local tbl = decode_dmmath_vector3(str)`
* `local str = encode_dmmath_vector4(tbl)`
* `local tbl = decode_dmmath_vector4(str)`
* `local str = encode_dmmath_quat(tbl)`
* `local tbl = decode_dmmath_quat(str)`
* `local str = encode_dmmath_transform(tbl)`
* `local tbl = decode_dmmath_transform(str)`
* `local str = encode_dmmath_matrix4(tbl)`
* `local tbl = decode_dmmath_matrix4(str)`
* `local str = encode_dminputddf_gamepadmodifier_t(tbl)`
* `local tbl = decode_dminputddf_gamepadmodifier_t(str)`
* `local str = encode_dminputddf_gamepadmapentry(tbl)`
* `local tbl = decode_dminputddf_gamepadmapentry(str)`
* `local str = encode_dminputddf_gamepadmap(tbl)`
* `local tbl = decode_dminputddf_gamepadmap(str)`
* `local str = encode_dminputddf_gamepadmaps(tbl)`
* `local tbl = decode_dminputddf_gamepadmaps(str)`
* `local str = encode_dminputddf_keytrigger(tbl)`
* `local tbl = decode_dminputddf_keytrigger(str)`
* `local str = encode_dminputddf_mousetrigger(tbl)`
* `local tbl = decode_dminputddf_mousetrigger(str)`
* `local str = encode_dminputddf_gamepadtrigger(tbl)`
* `local tbl = decode_dminputddf_gamepadtrigger(str)`
* `local str = encode_dminputddf_touchtrigger(tbl)`
* `local tbl = decode_dminputddf_touchtrigger(str)`
* `local str = encode_dminputddf_texttrigger(tbl)`
* `local tbl = decode_dminputddf_texttrigger(str)`
* `local str = encode_dminputddf_inputbinding(tbl)`
* `local tbl = decode_dminputddf_inputbinding(str)`
* `local str = encode_dmrenderddf_renderprototypedesc(tbl)`
* `local tbl = decode_dmrenderddf_renderprototypedesc(str)`
* `local str = encode_dmrenderddf.renderprototypedesc_materialdesc(tbl)`
* `local tbl = decode_dmrenderddf.renderprototypedesc_materialdesc(str)`
* `local str = encode_dmrenderddf_drawtext(tbl)`
* `local tbl = decode_dmrenderddf_drawtext(str)`
* `local str = encode_dmrenderddf_drawdebugtext(tbl)`
* `local tbl = decode_dmrenderddf_drawdebugtext(str)`
* `local str = encode_dmrenderddf_drawline(tbl)`
* `local tbl = decode_dmrenderddf_drawline(str)`
* `local str = encode_dmrenderddf_windowresized(tbl)`
* `local tbl = decode_dmrenderddf_windowresized(str)`
* `local str = encode_dmrenderddf_resize(tbl)`
* `local tbl = decode_dmrenderddf_resize(str)`
* `local str = encode_dmrenderddf_clearcolor(tbl)`
* `local tbl = decode_dmrenderddf_clearcolor(str)`
* `local str = encode_dmrenderddf_displayprofilequalifier(tbl)`
* `local tbl = decode_dmrenderddf_displayprofilequalifier(str)`
* `local str = encode_dmrenderddf_displayprofile(tbl)`
* `local tbl = decode_dmrenderddf_displayprofile(str)`
* `local str = encode_dmrenderddf_displayprofiles(tbl)`
* `local tbl = decode_dmrenderddf_displayprofiles(str)`
* `local str = encode_dmrenderddf_fontdesc(tbl)`
* `local tbl = decode_dmrenderddf_fontdesc(str)`
* `local str = encode_dmrenderddf_fontmap(tbl)`
* `local tbl = decode_dmrenderddf_fontmap(str)`
* `local str = encode_dmrenderddf.fontmap_glyph(tbl)`
* `local tbl = decode_dmrenderddf.fontmap_glyph(str)`
* `local str = encode_dmrenderddf_materialdesc(tbl)`
* `local tbl = decode_dmrenderddf_materialdesc(str)`
* `local str = encode_dmrenderddf.materialdesc_constant(tbl)`
* `local tbl = decode_dmrenderddf.materialdesc_constant(str)`
* `local str = encode_dmrenderddf.materialdesc_sampler(tbl)`
* `local tbl = decode_dmrenderddf.materialdesc_sampler(str)`
* `local str = encode_dmscriptddf_luaref(tbl)`
* `local tbl = decode_dmscriptddf_luaref(str)`
* `local str = encode_dmsystemddf_exit(tbl)`
* `local tbl = decode_dmsystemddf_exit(str)`
* `local str = encode_dmsystemddf_toggleprofile(tbl)`
* `local tbl = decode_dmsystemddf_toggleprofile(str)`
* `local str = encode_dmsystemddf_togglephysicsdebug(tbl)`
* `local tbl = decode_dmsystemddf_togglephysicsdebug(str)`
* `local str = encode_dmsystemddf_startrecord(tbl)`
* `local tbl = decode_dmsystemddf_startrecord(str)`
* `local str = encode_dmsystemddf_stoprecord(tbl)`
* `local tbl = decode_dmsystemddf_stoprecord(str)`
* `local str = encode_dmsystemddf_reboot(tbl)`
* `local tbl = decode_dmsystemddf_reboot(str)`
* `local str = encode_dmsystemddf_setvsync(tbl)`
* `local tbl = decode_dmsystemddf_setvsync(str)`
* `local str = encode_dmsystemddf_setupdatefrequency(tbl)`
* `local tbl = decode_dmsystemddf_setupdatefrequency(str)`
* `local str = encode_dmscriptdoc_parameter(tbl)`
* `local tbl = decode_dmscriptdoc_parameter(str)`
* `local str = encode_dmscriptdoc_member(tbl)`
* `local tbl = decode_dmscriptdoc_member(str)`
* `local str = encode_dmscriptdoc_returnvalue(tbl)`
* `local tbl = decode_dmscriptdoc_returnvalue(str)`
* `local str = encode_dmscriptdoc_element(tbl)`
* `local tbl = decode_dmscriptdoc_element(str)`
* `local str = encode_dmscriptdoc_info(tbl)`
* `local tbl = decode_dmscriptdoc_info(str)`
* `local str = encode_dmscriptdoc_document(tbl)`
* `local tbl = decode_dmscriptdoc_document(str)`
* `local str = encode_dmhttpddf_stophttp(tbl)`
* `local tbl = decode_dmhttpddf_stophttp(str)`
* `local str = encode_dmhttpddf_httprequest(tbl)`
* `local tbl = decode_dmhttpddf_httprequest(str)`
* `local str = encode_dmhttpddf_httpresponse(tbl)`
* `local tbl = decode_dmhttpddf_httpresponse(str)`
* `local str = encode_dmluaddf_luasource(tbl)`
* `local tbl = decode_dmluaddf_luasource(str)`
* `local str = encode_dmrigddf_bone(tbl)`
* `local tbl = decode_dmrigddf_bone(str)`
* `local str = encode_dmrigddf_ik(tbl)`
* `local tbl = decode_dmrigddf_ik(str)`
* `local str = encode_dmrigddf_skeleton(tbl)`
* `local tbl = decode_dmrigddf_skeleton(str)`
* `local str = encode_dmrigddf_animationtrack(tbl)`
* `local tbl = decode_dmrigddf_animationtrack(str)`
* `local str = encode_dmrigddf_eventkey(tbl)`
* `local tbl = decode_dmrigddf_eventkey(str)`
* `local str = encode_dmrigddf_eventtrack(tbl)`
* `local tbl = decode_dmrigddf_eventtrack(str)`
* `local str = encode_dmrigddf_riganimation(tbl)`
* `local tbl = decode_dmrigddf_riganimation(str)`
* `local str = encode_dmrigddf_animationset(tbl)`
* `local tbl = decode_dmrigddf_animationset(str)`
* `local str = encode_dmrigddf_animationinstancedesc(tbl)`
* `local tbl = decode_dmrigddf_animationinstancedesc(str)`
* `local str = encode_dmrigddf_animationsetdesc(tbl)`
* `local tbl = decode_dmrigddf_animationsetdesc(str)`
* `local str = encode_dmrigddf_mesh(tbl)`
* `local tbl = decode_dmrigddf_mesh(str)`
* `local str = encode_dmrigddf_model(tbl)`
* `local tbl = decode_dmrigddf_model(str)`
* `local str = encode_dmrigddf_meshset(tbl)`
* `local tbl = decode_dmrigddf_meshset(str)`
* `local str = encode_dmrigddf_rigscene(tbl)`
* `local tbl = decode_dmrigddf_rigscene(str)`
* `local str = encode_dmmodelddf_modeldesc(tbl)`
* `local tbl = decode_dmmodelddf_modeldesc(str)`
* `local str = encode_dmmodelddf_model(tbl)`
* `local tbl = decode_dmmodelddf_model(str)`
* `local str = encode_dmmodelddf_resetconstant(tbl)`
* `local tbl = decode_dmmodelddf_resetconstant(str)`
* `local str = encode_dmmodelddf_settexture(tbl)`
* `local tbl = decode_dmmodelddf_settexture(str)`
* `local str = encode_dmmodelddf_modelplayanimation(tbl)`
* `local tbl = decode_dmmodelddf_modelplayanimation(str)`
* `local str = encode_dmmodelddf_modelcancelanimation(tbl)`
* `local tbl = decode_dmmodelddf_modelcancelanimation(str)`
* `local str = encode_dmmodelddf_modelanimationdone(tbl)`
* `local tbl = decode_dmmodelddf_modelanimationdone(str)`
* `local str = encode_dmmeshddf_meshdesc(tbl)`
* `local tbl = decode_dmmeshddf_meshdesc(str)`
* `local str = encode_dmgamesystemddf_labeldesc(tbl)`
* `local tbl = decode_dmgamesystemddf_labeldesc(str)`
* `local str = encode_dmgamesystemddf_settext(tbl)`
* `local tbl = decode_dmgamesystemddf_settext(str)`
* `local str = encode_dmgamesystemddf_convexhull(tbl)`
* `local tbl = decode_dmgamesystemddf_convexhull(str)`
* `local str = encode_dmgamesystemddf_cue(tbl)`
* `local tbl = decode_dmgamesystemddf_cue(str)`
* `local str = encode_dmgamesystemddf_animation(tbl)`
* `local tbl = decode_dmgamesystemddf_animation(str)`
* `local str = encode_dmgamesystemddf_tileset(tbl)`
* `local tbl = decode_dmgamesystemddf_tileset(str)`
* `local str = encode_dmgamesystemddf_tilecell(tbl)`
* `local tbl = decode_dmgamesystemddf_tilecell(str)`
* `local str = encode_dmgamesystemddf_tilelayer(tbl)`
* `local tbl = decode_dmgamesystemddf_tilelayer(str)`
* `local str = encode_dmgamesystemddf_tilegrid(tbl)`
* `local tbl = decode_dmgamesystemddf_tilegrid(str)`
* `local str = encode_dmgamesystemddf_settile(tbl)`
* `local tbl = decode_dmgamesystemddf_settile(str)`
* `local str = encode_dmgamesystemddf_setconstanttilemap(tbl)`
* `local tbl = decode_dmgamesystemddf_setconstanttilemap(str)`
* `local str = encode_dmgamesystemddf_resetconstanttilemap(tbl)`
* `local tbl = decode_dmgamesystemddf_resetconstanttilemap(str)`
* `local str = encode_dmgamesystemddf_atlasimage(tbl)`
* `local tbl = decode_dmgamesystemddf_atlasimage(str)`
* `local str = encode_dmgamesystemddf_atlasanimation(tbl)`
* `local tbl = decode_dmgamesystemddf_atlasanimation(str)`
* `local str = encode_dmgamesystemddf_atlas(tbl)`
* `local tbl = decode_dmgamesystemddf_atlas(str)`
* `local str = encode_dmbufferddf_streamdesc(tbl)`
* `local tbl = decode_dmbufferddf_streamdesc(str)`
* `local str = encode_dmbufferddf_bufferdesc(tbl)`
* `local tbl = decode_dmbufferddf_bufferdesc(str)`
* `local str = encode_dmsoundddf_sounddesc(tbl)`
* `local tbl = decode_dmsoundddf_sounddesc(str)`
* `local str = encode_dmgamesysddf_cameradesc(tbl)`
* `local tbl = decode_dmgamesysddf_cameradesc(str)`
* `local str = encode_dmgamesysddf_setcamera(tbl)`
* `local tbl = decode_dmgamesysddf_setcamera(str)`
* `local str = encode_dmgamesysddf_acquirecamerafocus(tbl)`
* `local tbl = decode_dmgamesysddf_acquirecamerafocus(str)`
* `local str = encode_dmgamesysddf_releasecamerafocus(tbl)`
* `local tbl = decode_dmgamesysddf_releasecamerafocus(str)`
* `local str = encode_dmgamesystemddf_spritedesc(tbl)`
* `local tbl = decode_dmgamesystemddf_spritedesc(str)`
* `local str = encode_dmgamesystemddf_playanimation(tbl)`
* `local tbl = decode_dmgamesystemddf_playanimation(str)`
* `local str = encode_dmgamesystemddf_animationdone(tbl)`
* `local tbl = decode_dmgamesystemddf_animationdone(str)`
* `local str = encode_dmgamesystemddf_setfliphorizontal(tbl)`
* `local tbl = decode_dmgamesystemddf_setfliphorizontal(str)`
* `local str = encode_dmgamesystemddf_setflipvertical(tbl)`
* `local tbl = decode_dmgamesystemddf_setflipvertical(str)`
* `local str = encode_dmgamesystemddf_texturesetanimation(tbl)`
* `local tbl = decode_dmgamesystemddf_texturesetanimation(str)`
* `local str = encode_dmgamesystemddf_spritegeometry(tbl)`
* `local tbl = decode_dmgamesystemddf_spritegeometry(str)`
* `local str = encode_dmgamesystemddf_textureset(tbl)`
* `local tbl = decode_dmgamesystemddf_textureset(str)`
* `local str = encode_dmphysicsddf_convexshape(tbl)`
* `local tbl = decode_dmphysicsddf_convexshape(str)`
* `local str = encode_dmphysicsddf_collisionshape(tbl)`
* `local tbl = decode_dmphysicsddf_collisionshape(str)`
* `local str = encode_dmphysicsddf.collisionshape_shape(tbl)`
* `local tbl = decode_dmphysicsddf.collisionshape_shape(str)`
* `local str = encode_dmphysicsddf_collisionobjectdesc(tbl)`
* `local tbl = decode_dmphysicsddf_collisionobjectdesc(str)`
* `local str = encode_dmphysicsddf_applyforce(tbl)`
* `local tbl = decode_dmphysicsddf_applyforce(str)`
* `local str = encode_dmphysicsddf_collisionresponse(tbl)`
* `local tbl = decode_dmphysicsddf_collisionresponse(str)`
* `local str = encode_dmphysicsddf_contactpointresponse(tbl)`
* `local tbl = decode_dmphysicsddf_contactpointresponse(str)`
* `local str = encode_dmphysicsddf_triggerresponse(tbl)`
* `local tbl = decode_dmphysicsddf_triggerresponse(str)`
* `local str = encode_dmphysicsddf_requestraycast(tbl)`
* `local tbl = decode_dmphysicsddf_requestraycast(str)`
* `local str = encode_dmphysicsddf_raycastresponse(tbl)`
* `local tbl = decode_dmphysicsddf_raycastresponse(str)`
* `local str = encode_dmphysicsddf_raycastmissed(tbl)`
* `local tbl = decode_dmphysicsddf_raycastmissed(str)`
* `local str = encode_dmphysicsddf_requestvelocity(tbl)`
* `local tbl = decode_dmphysicsddf_requestvelocity(str)`
* `local str = encode_dmphysicsddf_velocityresponse(tbl)`
* `local tbl = decode_dmphysicsddf_velocityresponse(str)`
* `local str = encode_dmphysicsddf_setgridshapehull(tbl)`
* `local tbl = decode_dmphysicsddf_setgridshapehull(str)`
* `local str = encode_dmphysicsddf_enablegridshapelayer(tbl)`
* `local tbl = decode_dmphysicsddf_enablegridshapelayer(str)`
* `local str = encode_dmgamesystemddf_factorydesc(tbl)`
* `local tbl = decode_dmgamesystemddf_factorydesc(str)`
* `local str = encode_dmgamesystemddf_collectionfactorydesc(tbl)`
* `local tbl = decode_dmgamesystemddf_collectionfactorydesc(str)`
* `local str = encode_dmgamesystemddf_create(tbl)`
* `local tbl = decode_dmgamesystemddf_create(str)`
* `local str = encode_dmgamesystemddf_collectionproxydesc(tbl)`
* `local tbl = decode_dmgamesystemddf_collectionproxydesc(str)`
* `local str = encode_dmgamesystemddf_settimestep(tbl)`
* `local tbl = decode_dmgamesystemddf_settimestep(str)`
* `local str = encode_dmgamesystemddf_lightdesc(tbl)`
* `local tbl = decode_dmgamesystemddf_lightdesc(str)`
* `local str = encode_dmgamesystemddf_setlight(tbl)`
* `local tbl = decode_dmgamesystemddf_setlight(str)`
* `local str = encode_dmgamesystemddf_setviewprojection(tbl)`
* `local tbl = decode_dmgamesystemddf_setviewprojection(str)`
* `local str = encode_dmgamesystemddf_playsound(tbl)`
* `local tbl = decode_dmgamesystemddf_playsound(str)`
* `local str = encode_dmgamesystemddf_stopsound(tbl)`
* `local tbl = decode_dmgamesystemddf_stopsound(str)`
* `local str = encode_dmgamesystemddf_pausesound(tbl)`
* `local tbl = decode_dmgamesystemddf_pausesound(str)`
* `local str = encode_dmgamesystemddf_sounddone(tbl)`
* `local tbl = decode_dmgamesystemddf_sounddone(str)`
* `local str = encode_dmgamesystemddf_setgain(tbl)`
* `local tbl = decode_dmgamesystemddf_setgain(str)`
* `local str = encode_dmgamesystemddf_setpan(tbl)`
* `local tbl = decode_dmgamesystemddf_setpan(str)`
* `local str = encode_dmgamesystemddf_setspeed(tbl)`
* `local tbl = decode_dmgamesystemddf_setspeed(str)`
* `local str = encode_dmgamesystemddf_playparticlefx(tbl)`
* `local tbl = decode_dmgamesystemddf_playparticlefx(str)`
* `local str = encode_dmgamesystemddf_stopparticlefx(tbl)`
* `local tbl = decode_dmgamesystemddf_stopparticlefx(str)`
* `local str = encode_dmgamesystemddf_setconstantparticlefx(tbl)`
* `local tbl = decode_dmgamesystemddf_setconstantparticlefx(str)`
* `local str = encode_dmgamesystemddf_resetconstantparticlefx(tbl)`
* `local tbl = decode_dmgamesystemddf_resetconstantparticlefx(str)`
* `local str = encode_dmgamesystemddf_setconstant(tbl)`
* `local tbl = decode_dmgamesystemddf_setconstant(str)`
* `local str = encode_dmgamesystemddf_resetconstant(tbl)`
* `local tbl = decode_dmgamesystemddf_resetconstant(str)`
* `local str = encode_dmgamesystemddf_setscale(tbl)`
* `local tbl = decode_dmgamesystemddf_setscale(str)`
* `local str = encode_dmguiddf_nodedesc(tbl)`
* `local tbl = decode_dmguiddf_nodedesc(str)`
* `local str = encode_dmguiddf_scenedesc(tbl)`
* `local tbl = decode_dmguiddf_scenedesc(str)`
* `local str = encode_dmguiddf.scenedesc_fontdesc(tbl)`
* `local tbl = decode_dmguiddf.scenedesc_fontdesc(str)`
* `local str = encode_dmguiddf.scenedesc_texturedesc(tbl)`
* `local tbl = decode_dmguiddf.scenedesc_texturedesc(str)`
* `local str = encode_dmguiddf.scenedesc_layerdesc(tbl)`
* `local tbl = decode_dmguiddf.scenedesc_layerdesc(str)`
* `local str = encode_dmguiddf.scenedesc_layoutdesc(tbl)`
* `local tbl = decode_dmguiddf.scenedesc_layoutdesc(str)`
* `local str = encode_dmguiddf.scenedesc_spinescenedesc(tbl)`
* `local tbl = decode_dmguiddf.scenedesc_spinescenedesc(str)`
* `local str = encode_dmguiddf.scenedesc_resourcedesc(tbl)`
* `local tbl = decode_dmguiddf.scenedesc_resourcedesc(str)`
* `local str = encode_dmguiddf.scenedesc_particlefxdesc(tbl)`
* `local tbl = decode_dmguiddf.scenedesc_particlefxdesc(str)`
* `local str = encode_dmguiddf_layoutchanged(tbl)`
* `local tbl = decode_dmguiddf_layoutchanged(str)`
* `local str = encode_dmliveupdateddf_hashdigest(tbl)`
* `local tbl = decode_dmliveupdateddf_hashdigest(str)`
* `local str = encode_dmliveupdateddf_manifestheader(tbl)`
* `local tbl = decode_dmliveupdateddf_manifestheader(str)`
* `local str = encode_dmliveupdateddf_resourceentry(tbl)`
* `local tbl = decode_dmliveupdateddf_resourceentry(str)`
* `local str = encode_dmliveupdateddf_manifestdata(tbl)`
* `local tbl = decode_dmliveupdateddf_manifestdata(str)`
* `local str = encode_dmliveupdateddf_manifestfile(tbl)`
* `local tbl = decode_dmliveupdateddf_manifestfile(str)`
* `local str = encode_dmresourceddf_reload(tbl)`
* `local tbl = decode_dmresourceddf_reload(str)`
* `local str = encode_dmgraphics_cubemap(tbl)`
* `local tbl = decode_dmgraphics_cubemap(str)`
* `local str = encode_dmgraphics_textureimage(tbl)`
* `local tbl = decode_dmgraphics_textureimage(str)`
* `local str = encode_dmgraphics.textureimage_image(tbl)`
* `local tbl = decode_dmgraphics.textureimage_image(str)`
* `local str = encode_dmgraphics_textureformatalternative(tbl)`
* `local tbl = decode_dmgraphics_textureformatalternative(str)`
* `local str = encode_dmgraphics_pathsettings(tbl)`
* `local tbl = decode_dmgraphics_pathsettings(str)`
* `local str = encode_dmgraphics_platformprofile(tbl)`
* `local tbl = decode_dmgraphics_platformprofile(str)`
* `local str = encode_dmgraphics_textureprofile(tbl)`
* `local tbl = decode_dmgraphics_textureprofile(str)`
* `local str = encode_dmgraphics_textureprofiles(tbl)`
* `local tbl = decode_dmgraphics_textureprofiles(str)`
* `local str = encode_dmgraphics_shaderdesc(tbl)`
* `local tbl = decode_dmgraphics_shaderdesc(str)`
* `local str = encode_dmgraphics.shaderdesc_resourcebinding(tbl)`
* `local tbl = decode_dmgraphics.shaderdesc_resourcebinding(str)`
* `local str = encode_dmgraphics.shaderdesc_shader(tbl)`
* `local tbl = decode_dmgraphics.shaderdesc_shader(str)`
* `local str = encode_dmpropertiesddf_propertydeclarationentry(tbl)`
* `local tbl = decode_dmpropertiesddf_propertydeclarationentry(str)`
* `local str = encode_dmpropertiesddf_propertydeclarations(tbl)`
* `local tbl = decode_dmpropertiesddf_propertydeclarations(str)`
* `local str = encode_dmgameobjectddf_propertydesc(tbl)`
* `local tbl = decode_dmgameobjectddf_propertydesc(str)`
* `local str = encode_dmgameobjectddf_componentdesc(tbl)`
* `local tbl = decode_dmgameobjectddf_componentdesc(str)`
* `local str = encode_dmgameobjectddf_embeddedcomponentdesc(tbl)`
* `local tbl = decode_dmgameobjectddf_embeddedcomponentdesc(str)`
* `local str = encode_dmgameobjectddf_prototypedesc(tbl)`
* `local tbl = decode_dmgameobjectddf_prototypedesc(str)`
* `local str = encode_dmgameobjectddf_componentpropertydesc(tbl)`
* `local tbl = decode_dmgameobjectddf_componentpropertydesc(str)`
* `local str = encode_dmgameobjectddf_componentypedesc(tbl)`
* `local tbl = decode_dmgameobjectddf_componentypedesc(str)`
* `local str = encode_dmgameobjectddf_instancedesc(tbl)`
* `local tbl = decode_dmgameobjectddf_instancedesc(str)`
* `local str = encode_dmgameobjectddf_embeddedinstancedesc(tbl)`
* `local tbl = decode_dmgameobjectddf_embeddedinstancedesc(str)`
* `local str = encode_dmgameobjectddf_instancepropertydesc(tbl)`
* `local tbl = decode_dmgameobjectddf_instancepropertydesc(str)`
* `local str = encode_dmgameobjectddf_collectioninstancedesc(tbl)`
* `local tbl = decode_dmgameobjectddf_collectioninstancedesc(str)`
* `local str = encode_dmgameobjectddf_collectiondesc(tbl)`
* `local tbl = decode_dmgameobjectddf_collectiondesc(str)`
* `local str = encode_dmgameobjectddf_acquireinputfocus(tbl)`
* `local tbl = decode_dmgameobjectddf_acquireinputfocus(str)`
* `local str = encode_dmgameobjectddf_releaseinputfocus(tbl)`
* `local tbl = decode_dmgameobjectddf_releaseinputfocus(str)`
* `local str = encode_dmgameobjectddf_requesttransform(tbl)`
* `local tbl = decode_dmgameobjectddf_requesttransform(str)`
* `local str = encode_dmgameobjectddf_transformresponse(tbl)`
* `local tbl = decode_dmgameobjectddf_transformresponse(str)`
* `local str = encode_dmgameobjectddf_setparent(tbl)`
* `local tbl = decode_dmgameobjectddf_setparent(str)`
* `local str = encode_dmgameobjectddf_enable(tbl)`
* `local tbl = decode_dmgameobjectddf_enable(str)`
* `local str = encode_dmgameobjectddf_disable(tbl)`
* `local tbl = decode_dmgameobjectddf_disable(str)`
* `local str = encode_dmgameobjectddf_scriptmessage(tbl)`
* `local tbl = decode_dmgameobjectddf_scriptmessage(str)`
* `local str = encode_dmluaddf_luamodule(tbl)`
* `local tbl = decode_dmluaddf_luamodule(str)`
* `local str = encode_dmengineddf_hideapp(tbl)`
* `local tbl = decode_dmengineddf_hideapp(str)`
* `local str = encode_dmengineddf_runscript(tbl)`
* `local tbl = decode_dmengineddf_runscript(str)`
* `local str = encode_dmparticleddf_splinepoint(tbl)`
* `local tbl = decode_dmparticleddf_splinepoint(str)`
* `local str = encode_dmparticleddf_modifier(tbl)`
* `local tbl = decode_dmparticleddf_modifier(str)`
* `local str = encode_dmparticleddf.modifier_property(tbl)`
* `local tbl = decode_dmparticleddf.modifier_property(str)`
* `local str = encode_dmparticleddf_emitter(tbl)`
* `local tbl = decode_dmparticleddf_emitter(str)`
* `local str = encode_dmparticleddf.emitter_property(tbl)`
* `local tbl = decode_dmparticleddf.emitter_property(str)`
* `local str = encode_dmparticleddf.emitter_particleproperty(tbl)`
* `local tbl = decode_dmparticleddf.emitter_particleproperty(str)`
* `local str = encode_dmparticleddf_particlefx(tbl)`
* `local tbl = decode_dmparticleddf_particlefx(str)`

### Enums
* `DM_INPUT_DDF__KEY_KEY_SPACE`
* `DM_INPUT_DDF__KEY_KEY_EXCLAIM`
* `DM_INPUT_DDF__KEY_KEY_QUOTEDBL`
* `DM_INPUT_DDF__KEY_KEY_HASH`
* `DM_INPUT_DDF__KEY_KEY_DOLLAR`
* `DM_INPUT_DDF__KEY_KEY_AMPERSAND`
* `DM_INPUT_DDF__KEY_KEY_QUOTE`
* `DM_INPUT_DDF__KEY_KEY_LPAREN`
* `DM_INPUT_DDF__KEY_KEY_RPAREN`
* `DM_INPUT_DDF__KEY_KEY_ASTERISK`
* `DM_INPUT_DDF__KEY_KEY_PLUS`
* `DM_INPUT_DDF__KEY_KEY_COMMA`
* `DM_INPUT_DDF__KEY_KEY_MINUS`
* `DM_INPUT_DDF__KEY_KEY_PERIOD`
* `DM_INPUT_DDF__KEY_KEY_SLASH`
* `DM_INPUT_DDF__KEY_KEY_0`
* `DM_INPUT_DDF__KEY_KEY_1`
* `DM_INPUT_DDF__KEY_KEY_2`
* `DM_INPUT_DDF__KEY_KEY_3`
* `DM_INPUT_DDF__KEY_KEY_4`
* `DM_INPUT_DDF__KEY_KEY_5`
* `DM_INPUT_DDF__KEY_KEY_6`
* `DM_INPUT_DDF__KEY_KEY_7`
* `DM_INPUT_DDF__KEY_KEY_8`
* `DM_INPUT_DDF__KEY_KEY_9`
* `DM_INPUT_DDF__KEY_KEY_COLON`
* `DM_INPUT_DDF__KEY_KEY_SEMICOLON`
* `DM_INPUT_DDF__KEY_KEY_LESS`
* `DM_INPUT_DDF__KEY_KEY_EQUALS`
* `DM_INPUT_DDF__KEY_KEY_GREATER`
* `DM_INPUT_DDF__KEY_KEY_QUESTION`
* `DM_INPUT_DDF__KEY_KEY_AT`
* `DM_INPUT_DDF__KEY_KEY_A`
* `DM_INPUT_DDF__KEY_KEY_B`
* `DM_INPUT_DDF__KEY_KEY_C`
* `DM_INPUT_DDF__KEY_KEY_D`
* `DM_INPUT_DDF__KEY_KEY_E`
* `DM_INPUT_DDF__KEY_KEY_F`
* `DM_INPUT_DDF__KEY_KEY_G`
* `DM_INPUT_DDF__KEY_KEY_H`
* `DM_INPUT_DDF__KEY_KEY_I`
* `DM_INPUT_DDF__KEY_KEY_J`
* `DM_INPUT_DDF__KEY_KEY_K`
* `DM_INPUT_DDF__KEY_KEY_L`
* `DM_INPUT_DDF__KEY_KEY_M`
* `DM_INPUT_DDF__KEY_KEY_N`
* `DM_INPUT_DDF__KEY_KEY_O`
* `DM_INPUT_DDF__KEY_KEY_P`
* `DM_INPUT_DDF__KEY_KEY_Q`
* `DM_INPUT_DDF__KEY_KEY_R`
* `DM_INPUT_DDF__KEY_KEY_S`
* `DM_INPUT_DDF__KEY_KEY_T`
* `DM_INPUT_DDF__KEY_KEY_U`
* `DM_INPUT_DDF__KEY_KEY_V`
* `DM_INPUT_DDF__KEY_KEY_W`
* `DM_INPUT_DDF__KEY_KEY_X`
* `DM_INPUT_DDF__KEY_KEY_Y`
* `DM_INPUT_DDF__KEY_KEY_Z`
* `DM_INPUT_DDF__KEY_KEY_LBRACKET`
* `DM_INPUT_DDF__KEY_KEY_BACKSLASH`
* `DM_INPUT_DDF__KEY_KEY_RBRACKET`
* `DM_INPUT_DDF__KEY_KEY_CARET`
* `DM_INPUT_DDF__KEY_KEY_UNDERSCORE`
* `DM_INPUT_DDF__KEY_KEY_BACKQUOTE`
* `DM_INPUT_DDF__KEY_KEY_LBRACE`
* `DM_INPUT_DDF__KEY_KEY_PIPE`
* `DM_INPUT_DDF__KEY_KEY_RBRACE`
* `DM_INPUT_DDF__KEY_KEY_TILDE`
* `DM_INPUT_DDF__KEY_KEY_ESC`
* `DM_INPUT_DDF__KEY_KEY_F1`
* `DM_INPUT_DDF__KEY_KEY_F2`
* `DM_INPUT_DDF__KEY_KEY_F3`
* `DM_INPUT_DDF__KEY_KEY_F4`
* `DM_INPUT_DDF__KEY_KEY_F5`
* `DM_INPUT_DDF__KEY_KEY_F6`
* `DM_INPUT_DDF__KEY_KEY_F7`
* `DM_INPUT_DDF__KEY_KEY_F8`
* `DM_INPUT_DDF__KEY_KEY_F9`
* `DM_INPUT_DDF__KEY_KEY_F10`
* `DM_INPUT_DDF__KEY_KEY_F11`
* `DM_INPUT_DDF__KEY_KEY_F12`
* `DM_INPUT_DDF__KEY_KEY_UP`
* `DM_INPUT_DDF__KEY_KEY_DOWN`
* `DM_INPUT_DDF__KEY_KEY_LEFT`
* `DM_INPUT_DDF__KEY_KEY_RIGHT`
* `DM_INPUT_DDF__KEY_KEY_LSHIFT`
* `DM_INPUT_DDF__KEY_KEY_RSHIFT`
* `DM_INPUT_DDF__KEY_KEY_LCTRL`
* `DM_INPUT_DDF__KEY_KEY_RCTRL`
* `DM_INPUT_DDF__KEY_KEY_LALT`
* `DM_INPUT_DDF__KEY_KEY_RALT`
* `DM_INPUT_DDF__KEY_KEY_TAB`
* `DM_INPUT_DDF__KEY_KEY_ENTER`
* `DM_INPUT_DDF__KEY_KEY_BACKSPACE`
* `DM_INPUT_DDF__KEY_KEY_INSERT`
* `DM_INPUT_DDF__KEY_KEY_DEL`
* `DM_INPUT_DDF__KEY_KEY_PAGEUP`
* `DM_INPUT_DDF__KEY_KEY_PAGEDOWN`
* `DM_INPUT_DDF__KEY_KEY_HOME`
* `DM_INPUT_DDF__KEY_KEY_END`
* `DM_INPUT_DDF__KEY_KEY_KP_0`
* `DM_INPUT_DDF__KEY_KEY_KP_1`
* `DM_INPUT_DDF__KEY_KEY_KP_2`
* `DM_INPUT_DDF__KEY_KEY_KP_3`
* `DM_INPUT_DDF__KEY_KEY_KP_4`
* `DM_INPUT_DDF__KEY_KEY_KP_5`
* `DM_INPUT_DDF__KEY_KEY_KP_6`
* `DM_INPUT_DDF__KEY_KEY_KP_7`
* `DM_INPUT_DDF__KEY_KEY_KP_8`
* `DM_INPUT_DDF__KEY_KEY_KP_9`
* `DM_INPUT_DDF__KEY_KEY_KP_DIVIDE`
* `DM_INPUT_DDF__KEY_KEY_KP_MULTIPLY`
* `DM_INPUT_DDF__KEY_KEY_KP_SUBTRACT`
* `DM_INPUT_DDF__KEY_KEY_KP_ADD`
* `DM_INPUT_DDF__KEY_KEY_KP_DECIMAL`
* `DM_INPUT_DDF__KEY_KEY_KP_EQUAL`
* `DM_INPUT_DDF__KEY_KEY_KP_ENTER`
* `DM_INPUT_DDF__KEY_KEY_KP_NUM_LOCK`
* `DM_INPUT_DDF__KEY_KEY_CAPS_LOCK`
* `DM_INPUT_DDF__KEY_KEY_SCROLL_LOCK`
* `DM_INPUT_DDF__KEY_KEY_PAUSE`
* `DM_INPUT_DDF__KEY_KEY_LSUPER`
* `DM_INPUT_DDF__KEY_KEY_RSUPER`
* `DM_INPUT_DDF__KEY_KEY_MENU`
* `DM_INPUT_DDF__KEY_KEY_BACK`
* `DM_INPUT_DDF__KEY_MAX_KEY_COUNT`
* `DM_INPUT_DDF__MOUSE_MOUSE_WHEEL_UP`
* `DM_INPUT_DDF__MOUSE_MOUSE_WHEEL_DOWN`
* `DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_LEFT`
* `DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_MIDDLE`
* `DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_RIGHT`
* `DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_1`
* `DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_2`
* `DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_3`
* `DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_4`
* `DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_5`
* `DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_6`
* `DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_7`
* `DM_INPUT_DDF__MOUSE_MOUSE_BUTTON_8`
* `DM_INPUT_DDF__MOUSE_MAX_MOUSE_COUNT`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_LEFT`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_RIGHT`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_DOWN`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_UP`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSTICK_CLICK`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_LTRIGGER`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_LSHOULDER`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_LEFT`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_RIGHT`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_DOWN`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_LPAD_UP`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_LEFT`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_RIGHT`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_DOWN`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_UP`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSTICK_CLICK`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RTRIGGER`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RSHOULDER`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_LEFT`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_RIGHT`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_DOWN`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RPAD_UP`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_START`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_BACK`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_GUIDE`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_CONNECTED`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_DISCONNECTED`
* `DM_INPUT_DDF__GAMEPAD_GAMEPAD_RAW`
* `DM_INPUT_DDF__GAMEPAD_MAX_GAMEPAD_COUNT`
* `DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_AXIS`
* `DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_BUTTON`
* `DM_INPUT_DDF__GAMEPAD_TYPE_GAMEPAD_TYPE_HAT`
* `DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_NEGATE`
* `DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_SCALE`
* `DM_INPUT_DDF__GAMEPAD_MODIFIER_GAMEPAD_MODIFIER_CLAMP`
* `DM_INPUT_DDF__GAMEPAD_MODIFIER_MAX_GAMEPAD_MODIFIER_COUNT`
* `DM_INPUT_DDF__TOUCH_TOUCH_MULTI`
* `DM_INPUT_DDF__TOUCH_MAX_TOUCH_COUNT`
* `DM_INPUT_DDF__TEXT_TEXT`
* `DM_INPUT_DDF__TEXT_MARKED_TEXT`
* `DM_INPUT_DDF__TEXT_MAX_TEXT_COUNT`
* `DM_RENDER_DDF__FONT_TEXTURE_FORMAT_TYPE_BITMAP`
* `DM_RENDER_DDF__FONT_TEXTURE_FORMAT_TYPE_DISTANCE_FIELD`
* `DM_RENDER_DDF__FONT_RENDER_MODE_MODE_SINGLE_LAYER`
* `DM_RENDER_DDF__FONT_RENDER_MODE_MODE_MULTI_LAYER`
* `DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_USER`
* `DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_VIEWPROJ`
* `DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLD`
* `DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_TEXTURE`
* `DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_VIEW`
* `DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_PROJECTION`
* `DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_NORMAL`
* `DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLDVIEW`
* `DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_WORLDVIEWPROJ`
* `DM_RENDER_DDF__MATERIAL_DESC__CONSTANT_TYPE_CONSTANT_TYPE_USER_MATRIX4`
* `DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE_VERTEX_SPACE_WORLD`
* `DM_RENDER_DDF__MATERIAL_DESC__VERTEX_SPACE_VERTEX_SPACE_LOCAL`
* `DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_REPEAT`
* `DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_MIRRORED_REPEAT`
* `DM_RENDER_DDF__MATERIAL_DESC__WRAP_MODE_WRAP_MODE_CLAMP_TO_EDGE`
* `DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST`
* `DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR`
* `DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST_MIPMAP_NEAREST`
* `DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_NEAREST_MIPMAP_LINEAR`
* `DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR_MIPMAP_NEAREST`
* `DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MIN_FILTER_MODE_MIN_LINEAR_MIPMAP_LINEAR`
* `DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG_FILTER_MODE_MAG_NEAREST`
* `DM_RENDER_DDF__MATERIAL_DESC__FILTER_MODE_MAG_FILTER_MODE_MAG_LINEAR`
* `DM_SCRIPT_DOC__TYPE_FUNCTION`
* `DM_SCRIPT_DOC__TYPE_VARIABLE`
* `DM_SCRIPT_DOC__TYPE_MESSAGE`
* `DM_SCRIPT_DOC__TYPE_NAMESPACE`
* `DM_SCRIPT_DOC__TYPE_PROPERTY`
* `DM_SCRIPT_DOC__TYPE_PACKAGE`
* `DM_SCRIPT_DOC__TYPE_STRUCT`
* `DM_SCRIPT_DOC__TYPE_MACRO`
* `DM_SCRIPT_DOC__TYPE_ENUM`
* `DM_SCRIPT_DOC__TYPE_TYPEDEF`
* `DM_SCRIPT_DOC__TYPE_CLASS`
* `DM_RIG_DDF__INDEX_BUFFER_FORMAT_INDEXBUFFER_FORMAT_16`
* `DM_RIG_DDF__INDEX_BUFFER_FORMAT_INDEXBUFFER_FORMAT_32`
* `DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_LINES`
* `DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_TRIANGLES`
* `DM_MESH_DDF__MESH_DESC__PRIMITIVE_TYPE_PRIMITIVE_TRIANGLE_STRIP`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_ALPHA`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_ADD`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_MULT`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__BLEND_MODE_BLEND_MODE_SCREEN`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_CENTER`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_N`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_NE`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_E`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_SE`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_S`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_SW`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_W`
* `DM_GAME_SYSTEM_DDF__LABEL_DESC__PIVOT_PIVOT_NW`
* `DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_NONE`
* `DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_FORWARD`
* `DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_BACKWARD`
* `DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_ONCE_PINGPONG`
* `DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_FORWARD`
* `DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_BACKWARD`
* `DM_GAME_SYSTEM_DDF__PLAYBACK_PLAYBACK_LOOP_PINGPONG`
* `DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_OFF`
* `DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_4`
* `DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_5`
* `DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_6`
* `DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_7`
* `DM_GAME_SYSTEM_DDF__SPRITE_TRIMMING_MODE_SPRITE_TRIM_MODE_8`
* `DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ALPHA`
* `DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ADD`
* `DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
* `DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_MULT`
* `DM_GAME_SYSTEM_DDF__TILE_GRID__BLEND_MODE_BLEND_MODE_SCREEN`
* `DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT8`
* `DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT16`
* `DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT32`
* `DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_UINT64`
* `DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT8`
* `DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT16`
* `DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT32`
* `DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_INT64`
* `DM_BUFFER_DDF__VALUE_TYPE_VALUE_TYPE_FLOAT32`
* `DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ALPHA`
* `DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ADD`
* `DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
* `DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_MULT`
* `DM_GAME_SYSTEM_DDF__SPRITE_DESC__BLEND_MODE_BLEND_MODE_SCREEN`
* `DM_GAME_SYSTEM_DDF__SPRITE_DESC__SIZE_MODE_SIZE_MODE_MANUAL`
* `DM_GAME_SYSTEM_DDF__SPRITE_DESC__SIZE_MODE_SIZE_MODE_AUTO`
* `DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_DYNAMIC`
* `DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_KINEMATIC`
* `DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_STATIC`
* `DM_PHYSICS_DDF__COLLISION_OBJECT_TYPE_COLLISION_OBJECT_TYPE_TRIGGER`
* `DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_SPHERE`
* `DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_BOX`
* `DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_CAPSULE`
* `DM_PHYSICS_DDF__CONVEX_SHAPE__TYPE_TYPE_HULL`
* `DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_SPHERE`
* `DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_BOX`
* `DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_CAPSULE`
* `DM_PHYSICS_DDF__COLLISION_SHAPE__TYPE_TYPE_HULL`
* `DM_GAME_SYSTEM_DDF__TIME_STEP_MODE_TIME_STEP_MODE_CONTINUOUS`
* `DM_GAME_SYSTEM_DDF__TIME_STEP_MODE_TIME_STEP_MODE_DISCRETE`
* `DM_GAME_SYSTEM_DDF__LIGHT_TYPE_POINT`
* `DM_GAME_SYSTEM_DDF__LIGHT_TYPE_SPOT`
* `DM_GUI_DDF__NODE_DESC__TYPE_TYPE_BOX`
* `DM_GUI_DDF__NODE_DESC__TYPE_TYPE_TEXT`
* `DM_GUI_DDF__NODE_DESC__TYPE_TYPE_PIE`
* `DM_GUI_DDF__NODE_DESC__TYPE_TYPE_TEMPLATE`
* `DM_GUI_DDF__NODE_DESC__TYPE_TYPE_SPINE`
* `DM_GUI_DDF__NODE_DESC__TYPE_TYPE_PARTICLEFX`
* `DM_GUI_DDF__NODE_DESC__TYPE_TYPE_CUSTOM`
* `DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ALPHA`
* `DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ADD`
* `DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
* `DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_MULT`
* `DM_GUI_DDF__NODE_DESC__BLEND_MODE_BLEND_MODE_SCREEN`
* `DM_GUI_DDF__NODE_DESC__CLIPPING_MODE_CLIPPING_MODE_NONE`
* `DM_GUI_DDF__NODE_DESC__CLIPPING_MODE_CLIPPING_MODE_STENCIL`
* `DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_NONE`
* `DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_LEFT`
* `DM_GUI_DDF__NODE_DESC__XANCHOR_XANCHOR_RIGHT`
* `DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_NONE`
* `DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_TOP`
* `DM_GUI_DDF__NODE_DESC__YANCHOR_YANCHOR_BOTTOM`
* `DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_CENTER`
* `DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_N`
* `DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_NE`
* `DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_E`
* `DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_SE`
* `DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_S`
* `DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_SW`
* `DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_W`
* `DM_GUI_DDF__NODE_DESC__PIVOT_PIVOT_NW`
* `DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_FIT`
* `DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_ZOOM`
* `DM_GUI_DDF__NODE_DESC__ADJUST_MODE_ADJUST_MODE_STRETCH`
* `DM_GUI_DDF__NODE_DESC__SIZE_MODE_SIZE_MODE_MANUAL`
* `DM_GUI_DDF__NODE_DESC__SIZE_MODE_SIZE_MODE_AUTO`
* `DM_GUI_DDF__NODE_DESC__PIE_BOUNDS_PIEBOUNDS_RECTANGLE`
* `DM_GUI_DDF__NODE_DESC__PIE_BOUNDS_PIEBOUNDS_ELLIPSE`
* `DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_LEGACY`
* `DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_PARENT`
* `DM_GUI_DDF__SCENE_DESC__ADJUST_REFERENCE_ADJUST_REFERENCE_DISABLED`
* `DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_UNKNOWN`
* `DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_MD5`
* `DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA1`
* `DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA256`
* `DM_LIVE_UPDATE_DDF__HASH_ALGORITHM_HASH_SHA512`
* `DM_LIVE_UPDATE_DDF__SIGN_ALGORITHM_SIGN_UNKNOWN`
* `DM_LIVE_UPDATE_DDF__SIGN_ALGORITHM_SIGN_RSA`
* `DM_LIVE_UPDATE_DDF__RESOURCE_ENTRY_FLAG_BUNDLED`
* `DM_LIVE_UPDATE_DDF__RESOURCE_ENTRY_FLAG_EXCLUDED`
* `DM_GRAPHICS__TEXTURE_IMAGE__TYPE_TYPE_2D`
* `DM_GRAPHICS__TEXTURE_IMAGE__TYPE_TYPE_CUBEMAP`
* `DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_DEFAULT`
* `DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_WEBP`
* `DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_WEBP_LOSSY`
* `DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_BASIS_UASTC`
* `DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_TYPE_COMPRESSION_TYPE_BASIS_ETC1S`
* `DM_GRAPHICS__TEXTURE_IMAGE__COMPRESSION_FLAGS_COMPRESSION_FLAG_ALPHA_CLEAN`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_LUMINANCE`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_PVRTC_2BPPV1`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_PVRTC_4BPPV1`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_PVRTC_2BPPV1`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_PVRTC_4BPPV1`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_ETC1`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_16BPP`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_16BPP`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_LUMINANCE_ALPHA`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_ETC2`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_ASTC_4x4`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGB_BC1`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_BC3`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_R_BC4`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RG_BC5`
* `DM_GRAPHICS__TEXTURE_IMAGE__TEXTURE_FORMAT_TEXTURE_FORMAT_RGBA_BC7`
* `DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_FAST`
* `DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_NORMAL`
* `DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_HIGH`
* `DM_GRAPHICS__TEXTURE_FORMAT_ALTERNATIVE__COMPRESSION_LEVEL_BEST`
* `DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_GENERIC`
* `DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_WINDOWS`
* `DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_OSX`
* `DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_LINUX`
* `DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_IOS`
* `DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_ANDROID`
* `DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_WEB`
* `DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_SWITCH`
* `DM_GRAPHICS__PLATFORM_PROFILE__OS_OS_ID_PS4`
* `DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLSL_SM120`
* `DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLSL_SM140`
* `DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLES_SM100`
* `DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_GLES_SM300`
* `DM_GRAPHICS__SHADER_DESC__LANGUAGE_LANGUAGE_SPIRV`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_UNKNOWN`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_INT`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_UINT`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_FLOAT`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC2`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC3`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_VEC4`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT2`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT3`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_MAT4`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER2D`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER3D`
* `DM_GRAPHICS__SHADER_DESC__SHADER_DATA_TYPE_SHADER_TYPE_SAMPLER_CUBE`
* `DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_NUMBER`
* `DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_HASH`
* `DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_URL`
* `DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_VECTOR3`
* `DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_VECTOR4`
* `DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_QUAT`
* `DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_BOOLEAN`
* `DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_MATRIX4`
* `DM_GAME_OBJECT_DDF__PROPERTY_TYPE_PROPERTY_TYPE_COUNT`
* `DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_CIRCLE`
* `DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_2DCONE`
* `DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_BOX`
* `DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_SPHERE`
* `DM_PARTICLE_DDF__EMITTER_TYPE_EMITTER_TYPE_CONE`
* `DM_PARTICLE_DDF__PLAY_MODE_PLAY_MODE_ONCE`
* `DM_PARTICLE_DDF__PLAY_MODE_PLAY_MODE_LOOP`
* `DM_PARTICLE_DDF__EMISSION_SPACE_EMISSION_SPACE_WORLD`
* `DM_PARTICLE_DDF__EMISSION_SPACE_EMISSION_SPACE_EMITTER`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SPAWN_RATE`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_X`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_Y`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_SIZE_Z`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_LIFE_TIME`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_SPEED`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_SIZE`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_RED`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_GREEN`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_BLUE`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ALPHA`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ROTATION`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_STRETCH_FACTOR_X`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_STRETCH_FACTOR_Y`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_PARTICLE_ANGULAR_VELOCITY`
* `DM_PARTICLE_DDF__EMITTER_KEY_EMITTER_KEY_COUNT`
* `DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_SCALE`
* `DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_RED`
* `DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_GREEN`
* `DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_BLUE`
* `DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ALPHA`
* `DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ROTATION`
* `DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_STRETCH_FACTOR_X`
* `DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_STRETCH_FACTOR_Y`
* `DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_ANGULAR_VELOCITY`
* `DM_PARTICLE_DDF__PARTICLE_KEY_PARTICLE_KEY_COUNT`
* `DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_ACCELERATION`
* `DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_DRAG`
* `DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_RADIAL`
* `DM_PARTICLE_DDF__MODIFIER_TYPE_MODIFIER_TYPE_VORTEX`
* `DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_MAGNITUDE`
* `DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_MAX_DISTANCE`
* `DM_PARTICLE_DDF__MODIFIER_KEY_MODIFIER_KEY_COUNT`
* `DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ALPHA`
* `DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ADD`
* `DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_ADD_ALPHA`
* `DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_MULT`
* `DM_PARTICLE_DDF__BLEND_MODE_BLEND_MODE_SCREEN`
* `DM_PARTICLE_DDF__SIZE_MODE_SIZE_MODE_MANUAL`
* `DM_PARTICLE_DDF__SIZE_MODE_SIZE_MODE_AUTO`
* `DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_DEFAULT`
* `DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_INITIAL_DIRECTION`
* `DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_MOVEMENT_DIRECTION`
* `DM_PARTICLE_DDF__PARTICLE_ORIENTATION_PARTICLE_ORIENTATION_ANGULAR_VELOCITY`


