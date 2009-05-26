/*
Copyright (c) 2007, Caridy Pati�o. All rights reserved.
Portions Copyright (c) 2007, Yahoo!, Inc. All rights reserved.
Code licensed under the BSD License:
http://www.bubbling-library.com/eng/licence
version: 1.5.0
*/
(function(){var $B=YAHOO.Bubbling,$L=YAHOO.lang,$E=YAHOO.util.Event,$D=YAHOO.util.Dom,$=YAHOO.util.Dom.get;YAHOO.widget.Loading=function(){var obj={},_handle='yui-cms-loading',_content='yui-cms-float',_visible=false,_ready=false,_timer=null,_backup={},_defStyle={zIndex:10000,left:0,top:0,margin:0,padding:0,opacity:0,overflow:'hidden',visibility:'visible',position:'absolute',display:'block'};_defConf={autodismissdelay:0,opacity:1,closeOnDOMReady:false,closeOnLoad:true,close:false,effect:false};function _onHide(){if($L.isObject(obj.element)){$D.setStyle(obj.element,'opacity',0);$D.setStyle(obj.element,'display','none');}}function _onShow(){if($L.isObject(obj.element)){$D.setStyle(obj.element,'opacity',_defConf.opacity);}}var actionControl=function(layer,args){if(_visible&&$L.isObject(obj.element)&&((obj.element===args[1].target)||$D.isAncestor(obj.element,args[1].target))){if(window.confirm('Do you want to hide the loading mask?')){obj.hide();}}};$B.on('navigate',actionControl);$B.on('property',actionControl);obj.element=null;obj.content=null;obj.anim=null;obj.backup={};obj.config=function(userConfig){c=userConfig||{};_defConf.close=($L.isBoolean(c.close)?c.close:_defConf.close);_defConf.effect=($L.isBoolean(c.effect)?c.effect:_defConf.effect);_defConf.opacity=($L.isNumber(c.opacity)?c.opacity:_defConf.opacity);_defConf.autodismissdelay=($L.isNumber(c.autodismissdelay)?c.autodismissdelay:_defConf.autodismissdelay);if(this.element&&_visible){_onShow();}};obj.backup=function(){var el=document.body;_backup.padding=$D.getStyle(el,'padding');_backup.margin=$D.getStyle(el,'margin');_backup.overflow=$D.getStyle(el,'overflow');};obj.restore=function(){var el=document.body;$D.setStyle(el,'padding',_backup.padding);$D.setStyle(el,'padding',_backup.padding);$D.setStyle(el,'overflow',_backup.overflow);};obj.init=function(){var item;this.element=$(_handle);this.content=$(_content);if(!_ready&&($L.isObject(this.element))){_ready=true;this.backup();for(item in _defStyle){if(_defStyle.hasOwnProperty(item)){$D.setStyle(this.element,item,_defStyle[item]);}}obj.show(true);}};obj.adjust=function(){var vp={top:$D.getDocumentScrollTop(),left:$D.getDocumentScrollLeft(),width:$D.getViewportWidth(),height:$D.getViewportHeight()};if(_visible){$D.setStyle(this.element,'height',vp.height+'px');$D.setStyle(this.element,'width',vp.width+'px');$D.setXY(this.element,[vp.left,vp.top]);if(this.content){var size=$D.getRegion(this.content);var oHeight=size.bottom-size.top;var oWidth=size.right-size.left;$D.setXY(this.content,[vp.left+((vp.width-oWidth)/2),vp.top+((vp.height-oHeight)/2)]);}}};obj.show=function(firstTime){if(this.element&&!_visible){_visible=true;$D.setStyle(document.body,'overflow','hidden');$D.setStyle(this.element,'display','block');if(firstTime){$B.on('repaint',obj.adjust,obj,true);}obj.adjust();if(_defConf.effect&&!firstTime){if((this.anim)&&(this.anim.isAnimated())){this.anim.stop();}this.anim=new YAHOO.util.Anim(this.element,{opacity:{to:0.9}},1.5,YAHOO.util.Easing.easeIn);this.anim.onComplete.subscribe(_onShow);this.anim.animate();}else{_onShow();}if(_defConf.closeOnDOMReady){$E.onDOMReady(obj.hide,obj,true);}if(_defConf.closeOnLoad){$E.on(window,'load',obj.hide,obj,true);}window.clearTimeout(_timer);_timer=null;if($L.isNumber(_defConf.autodismissdelay)&&(_defConf.autodismissdelay>0)){_timer=window.setTimeout(function(){obj.hide();},Math.abs(_defConf.autodismissdelay));}}};obj.hide=function(){if(this.element&&_visible){_visible=false;if(_defConf.effect){if((this.anim)&&(this.anim.isAnimated())){this.anim.stop();}this.anim=new YAHOO.util.Anim(this.element,{opacity:{to:0}},1.5,YAHOO.util.Easing.easeOut);this.anim.onComplete.subscribe(_onHide);this.anim.animate();}else{_onHide();}obj.restore();}};if($D.inDocument(_handle)){obj.init();}else{$E.onContentReady(_handle,obj.init,obj,true);}if($L.isObject(YAHOO.widget._cLoading)){obj.config(YAHOO.widget._cLoading);}return obj;}();})();
YAHOO.register("loading",YAHOO.widget.Loading,{version:"1.4.0",build:"214"});