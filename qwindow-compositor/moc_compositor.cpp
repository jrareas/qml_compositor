/****************************************************************************
** Meta object code from reading C++ file 'compositor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.8)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "compositor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'compositor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.8. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_View_t {
    QByteArrayData data[14];
    char stringdata0[188];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_View_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_View_t qt_meta_stringdata_View = {
    {
QT_MOC_LITERAL(0, 0, 4), // "View"
QT_MOC_LITERAL(1, 5, 13), // "animationDone"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 17), // "onXdgSetMaximized"
QT_MOC_LITERAL(4, 38, 19), // "onXdgUnsetMaximized"
QT_MOC_LITERAL(5, 58, 18), // "onXdgSetFullscreen"
QT_MOC_LITERAL(6, 77, 15), // "QWaylandOutput*"
QT_MOC_LITERAL(7, 93, 6), // "output"
QT_MOC_LITERAL(8, 100, 20), // "onXdgUnsetFullscreen"
QT_MOC_LITERAL(9, 121, 20), // "onOffsetForNextFrame"
QT_MOC_LITERAL(10, 142, 6), // "offset"
QT_MOC_LITERAL(11, 149, 14), // "startAnimation"
QT_MOC_LITERAL(12, 164, 7), // "countUp"
QT_MOC_LITERAL(13, 172, 15) // "cancelAnimation"

    },
    "View\0animationDone\0\0onXdgSetMaximized\0"
    "onXdgUnsetMaximized\0onXdgSetFullscreen\0"
    "QWaylandOutput*\0output\0onXdgUnsetFullscreen\0"
    "onOffsetForNextFrame\0offset\0startAnimation\0"
    "countUp\0cancelAnimation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_View[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   55,    2, 0x0a /* Public */,
       4,    0,   56,    2, 0x0a /* Public */,
       5,    1,   57,    2, 0x0a /* Public */,
       8,    0,   60,    2, 0x0a /* Public */,
       9,    1,   61,    2, 0x0a /* Public */,
      11,    1,   64,    2, 0x0a /* Public */,
      13,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void,

       0        // eod
};

void View::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<View *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->animationDone(); break;
        case 1: _t->onXdgSetMaximized(); break;
        case 2: _t->onXdgUnsetMaximized(); break;
        case 3: _t->onXdgSetFullscreen((*reinterpret_cast< QWaylandOutput*(*)>(_a[1]))); break;
        case 4: _t->onXdgUnsetFullscreen(); break;
        case 5: _t->onOffsetForNextFrame((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 6: _t->startAnimation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 7: _t->cancelAnimation(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWaylandOutput* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (View::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&View::animationDone)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject View::staticMetaObject = { {
    &QWaylandView::staticMetaObject,
    qt_meta_stringdata_View.data,
    qt_meta_data_View,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *View::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *View::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_View.stringdata0))
        return static_cast<void*>(this);
    return QWaylandView::qt_metacast(_clname);
}

int View::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWaylandView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void View::animationDone()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_Compositor_t {
    QByteArrayData data[48];
    char stringdata0[690];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Compositor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Compositor_t qt_meta_stringdata_Compositor = {
    {
QT_MOC_LITERAL(0, 0, 10), // "Compositor"
QT_MOC_LITERAL(1, 11, 9), // "startMove"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "startResize"
QT_MOC_LITERAL(4, 34, 4), // "edge"
QT_MOC_LITERAL(5, 39, 8), // "anchored"
QT_MOC_LITERAL(6, 48, 11), // "dragStarted"
QT_MOC_LITERAL(7, 60, 5), // "View*"
QT_MOC_LITERAL(8, 66, 8), // "dragIcon"
QT_MOC_LITERAL(9, 75, 11), // "frameOffset"
QT_MOC_LITERAL(10, 87, 6), // "offset"
QT_MOC_LITERAL(11, 94, 13), // "triggerRender"
QT_MOC_LITERAL(12, 108, 24), // "surfaceHasContentChanged"
QT_MOC_LITERAL(13, 133, 16), // "surfaceDestroyed"
QT_MOC_LITERAL(14, 150, 20), // "viewSurfaceDestroyed"
QT_MOC_LITERAL(15, 171, 11), // "onStartMove"
QT_MOC_LITERAL(16, 183, 15), // "onWlStartResize"
QT_MOC_LITERAL(17, 199, 13), // "QWaylandSeat*"
QT_MOC_LITERAL(18, 213, 4), // "seat"
QT_MOC_LITERAL(19, 218, 34), // "QWaylandWlShellSurface::Resiz..."
QT_MOC_LITERAL(20, 253, 5), // "edges"
QT_MOC_LITERAL(21, 259, 16), // "onXdgStartResize"
QT_MOC_LITERAL(22, 276, 32), // "QWaylandXdgSurfaceV5::ResizeEdge"
QT_MOC_LITERAL(23, 309, 9), // "startDrag"
QT_MOC_LITERAL(24, 319, 16), // "onSurfaceCreated"
QT_MOC_LITERAL(25, 336, 16), // "QWaylandSurface*"
QT_MOC_LITERAL(26, 353, 7), // "surface"
QT_MOC_LITERAL(27, 361, 23), // "onWlShellSurfaceCreated"
QT_MOC_LITERAL(28, 385, 23), // "QWaylandWlShellSurface*"
QT_MOC_LITERAL(29, 409, 14), // "wlShellSurface"
QT_MOC_LITERAL(30, 424, 19), // "onXdgSurfaceCreated"
QT_MOC_LITERAL(31, 444, 21), // "QWaylandXdgSurfaceV5*"
QT_MOC_LITERAL(32, 466, 10), // "xdgSurface"
QT_MOC_LITERAL(33, 477, 19), // "onXdgPopupRequested"
QT_MOC_LITERAL(34, 497, 6), // "parent"
QT_MOC_LITERAL(35, 504, 8), // "position"
QT_MOC_LITERAL(36, 513, 16), // "QWaylandResource"
QT_MOC_LITERAL(37, 530, 8), // "resource"
QT_MOC_LITERAL(38, 539, 14), // "onSetTransient"
QT_MOC_LITERAL(39, 554, 13), // "parentSurface"
QT_MOC_LITERAL(40, 568, 16), // "relativeToParent"
QT_MOC_LITERAL(41, 585, 8), // "inactive"
QT_MOC_LITERAL(42, 594, 10), // "onSetPopup"
QT_MOC_LITERAL(43, 605, 19), // "onSubsurfaceChanged"
QT_MOC_LITERAL(44, 625, 5), // "child"
QT_MOC_LITERAL(45, 631, 27), // "onSubsurfacePositionChanged"
QT_MOC_LITERAL(46, 659, 12), // "updateCursor"
QT_MOC_LITERAL(47, 672, 17) // "viewAnimationDone"

    },
    "Compositor\0startMove\0\0startResize\0"
    "edge\0anchored\0dragStarted\0View*\0"
    "dragIcon\0frameOffset\0offset\0triggerRender\0"
    "surfaceHasContentChanged\0surfaceDestroyed\0"
    "viewSurfaceDestroyed\0onStartMove\0"
    "onWlStartResize\0QWaylandSeat*\0seat\0"
    "QWaylandWlShellSurface::ResizeEdge\0"
    "edges\0onXdgStartResize\0"
    "QWaylandXdgSurfaceV5::ResizeEdge\0"
    "startDrag\0onSurfaceCreated\0QWaylandSurface*\0"
    "surface\0onWlShellSurfaceCreated\0"
    "QWaylandWlShellSurface*\0wlShellSurface\0"
    "onXdgSurfaceCreated\0QWaylandXdgSurfaceV5*\0"
    "xdgSurface\0onXdgPopupRequested\0parent\0"
    "position\0QWaylandResource\0resource\0"
    "onSetTransient\0parentSurface\0"
    "relativeToParent\0inactive\0onSetPopup\0"
    "onSubsurfaceChanged\0child\0"
    "onSubsurfacePositionChanged\0updateCursor\0"
    "viewAnimationDone"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Compositor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  124,    2, 0x06 /* Public */,
       3,    2,  125,    2, 0x06 /* Public */,
       6,    1,  130,    2, 0x06 /* Public */,
       9,    1,  133,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    0,  136,    2, 0x0a /* Public */,
      12,    0,  137,    2, 0x08 /* Private */,
      13,    0,  138,    2, 0x08 /* Private */,
      14,    0,  139,    2, 0x08 /* Private */,
      15,    0,  140,    2, 0x08 /* Private */,
      16,    2,  141,    2, 0x08 /* Private */,
      21,    2,  146,    2, 0x08 /* Private */,
      23,    0,  151,    2, 0x08 /* Private */,
      24,    1,  152,    2, 0x08 /* Private */,
      27,    1,  155,    2, 0x08 /* Private */,
      30,    1,  158,    2, 0x08 /* Private */,
      33,    5,  161,    2, 0x08 /* Private */,
      38,    3,  172,    2, 0x08 /* Private */,
      42,    3,  179,    2, 0x08 /* Private */,
      43,    2,  186,    2, 0x08 /* Private */,
      45,    1,  191,    2, 0x08 /* Private */,
      46,    0,  194,    2, 0x08 /* Private */,
      47,    0,  195,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool,    4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QPoint,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 19,   18,   20,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 22,   18,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 31,   32,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25, 0x80000000 | 17, QMetaType::QPoint, 0x80000000 | 36,   26,   34,   18,   35,   37,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QPoint, QMetaType::Bool,   39,   40,   41,
    QMetaType::Void, 0x80000000 | 17, 0x80000000 | 25, QMetaType::QPoint,   18,   34,   40,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   44,   34,
    QMetaType::Void, QMetaType::QPoint,   35,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Compositor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Compositor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->startMove(); break;
        case 1: _t->startResize((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->dragStarted((*reinterpret_cast< View*(*)>(_a[1]))); break;
        case 3: _t->frameOffset((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 4: _t->triggerRender(); break;
        case 5: _t->surfaceHasContentChanged(); break;
        case 6: _t->surfaceDestroyed(); break;
        case 7: _t->viewSurfaceDestroyed(); break;
        case 8: _t->onStartMove(); break;
        case 9: _t->onWlStartResize((*reinterpret_cast< QWaylandSeat*(*)>(_a[1])),(*reinterpret_cast< QWaylandWlShellSurface::ResizeEdge(*)>(_a[2]))); break;
        case 10: _t->onXdgStartResize((*reinterpret_cast< QWaylandSeat*(*)>(_a[1])),(*reinterpret_cast< QWaylandXdgSurfaceV5::ResizeEdge(*)>(_a[2]))); break;
        case 11: _t->startDrag(); break;
        case 12: _t->onSurfaceCreated((*reinterpret_cast< QWaylandSurface*(*)>(_a[1]))); break;
        case 13: _t->onWlShellSurfaceCreated((*reinterpret_cast< QWaylandWlShellSurface*(*)>(_a[1]))); break;
        case 14: _t->onXdgSurfaceCreated((*reinterpret_cast< QWaylandXdgSurfaceV5*(*)>(_a[1]))); break;
        case 15: _t->onXdgPopupRequested((*reinterpret_cast< QWaylandSurface*(*)>(_a[1])),(*reinterpret_cast< QWaylandSurface*(*)>(_a[2])),(*reinterpret_cast< QWaylandSeat*(*)>(_a[3])),(*reinterpret_cast< const QPoint(*)>(_a[4])),(*reinterpret_cast< const QWaylandResource(*)>(_a[5]))); break;
        case 16: _t->onSetTransient((*reinterpret_cast< QWaylandSurface*(*)>(_a[1])),(*reinterpret_cast< const QPoint(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 17: _t->onSetPopup((*reinterpret_cast< QWaylandSeat*(*)>(_a[1])),(*reinterpret_cast< QWaylandSurface*(*)>(_a[2])),(*reinterpret_cast< const QPoint(*)>(_a[3]))); break;
        case 18: _t->onSubsurfaceChanged((*reinterpret_cast< QWaylandSurface*(*)>(_a[1])),(*reinterpret_cast< QWaylandSurface*(*)>(_a[2]))); break;
        case 19: _t->onSubsurfacePositionChanged((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 20: _t->updateCursor(); break;
        case 21: _t->viewAnimationDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< View* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWaylandSurface* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWaylandWlShellSurface* >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWaylandXdgSurfaceV5* >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWaylandResource >(); break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWaylandSurface* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWaylandSurface* >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWaylandSurface* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 1:
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWaylandSurface* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Compositor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Compositor::startMove)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Compositor::*)(int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Compositor::startResize)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Compositor::*)(View * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Compositor::dragStarted)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Compositor::*)(const QPoint & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Compositor::frameOffset)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Compositor::staticMetaObject = { {
    &QWaylandCompositor::staticMetaObject,
    qt_meta_stringdata_Compositor.data,
    qt_meta_data_Compositor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Compositor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Compositor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Compositor.stringdata0))
        return static_cast<void*>(this);
    return QWaylandCompositor::qt_metacast(_clname);
}

int Compositor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWaylandCompositor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void Compositor::startMove()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Compositor::startResize(int _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Compositor::dragStarted(View * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Compositor::frameOffset(const QPoint & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
