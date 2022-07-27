TEMPLATE = subdirs
QT += gui qml
QML_IMPORT_PATH += /lib/x86_64-linux-gnu/qt5/qml
CONFIG += link_pkgconfig
QTPLUGIN += qtvirtualkeyboardplugin
CONFIG+=qml_debug

#SOURCES += \
#    main.cpp
SUBDIRS += qwindow-compositor \
           pure-qml

#target.path = $$[QT_INSTALL_EXAMPLES]/wayland/pure-qml
#sources.files = $$SOURCES $$HEADERS $$RESOURCES $$FORMS pure-qml.pro qwindow-compositor.pro
#sources.path = $$[QT_INSTALL_EXAMPLES]/wayland/pure-qml
#INSTALLS += target sources
