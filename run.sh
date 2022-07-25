#!/bin/bash
export XDG_RUNTIME_DIR=/tmp/runtime-jareas/ 
export QT_XCB_GL_INTEGRATION=xcb_egl
export QT_WAYLAND_CLIENT_BUFFER_INTEGRATION=wayland-egl
#export QT_DEBUG_PLUGINS=1
expor QML_IMPORT_TRACE=1
export QT_IM_MODULE=qtvirtualkeyboard
./pure-qml
