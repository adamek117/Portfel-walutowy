/****************************************************************************
** Resource object code
**
** Created by: The Resource Compiler for Qt version 6.1.0
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

static const unsigned char qt_resource_data[] = {
  // C:/Users/adamp/OneDrive/Pulpit/Portfel_1Okno/Portfel_1Okno/zapis.txt
  0x0,0x0,0x0,0xf,
  0x30,
  0xd,0xa,0x30,0xd,0xa,0x30,0xd,0xa,0x30,0xd,0xa,0x30,0xd,0xa,
  
};

static const unsigned char qt_resource_name[] = {
  // new
  0x0,0x3,
  0x0,0x0,0x74,0xc7,
  0x0,0x6e,
  0x0,0x65,0x0,0x77,
    // prefix1
  0x0,0x7,
  0x7,0x8b,0xd0,0x51,
  0x0,0x70,
  0x0,0x72,0x0,0x65,0x0,0x66,0x0,0x69,0x0,0x78,0x0,0x31,
    // zapis.txt
  0x0,0x9,
  0x7,0x7,0x5a,0xf4,
  0x0,0x7a,
  0x0,0x61,0x0,0x70,0x0,0x69,0x0,0x73,0x0,0x2e,0x0,0x74,0x0,0x78,0x0,0x74,
  
};

static const unsigned char qt_resource_struct[] = {
  // :
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x1,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new
  0x0,0x0,0x0,0x0,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x2,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new/prefix1
  0x0,0x0,0x0,0xc,0x0,0x2,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x3,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
  // :/new/prefix1/zapis.txt
  0x0,0x0,0x0,0x20,0x0,0x0,0x0,0x0,0x0,0x1,0x0,0x0,0x0,0x0,
0x0,0x0,0x1,0x7a,0xf,0xdc,0x72,0xdf,

};

#ifdef QT_NAMESPACE
#  define QT_RCC_PREPEND_NAMESPACE(name) ::QT_NAMESPACE::name
#  define QT_RCC_MANGLE_NAMESPACE0(x) x
#  define QT_RCC_MANGLE_NAMESPACE1(a, b) a##_##b
#  define QT_RCC_MANGLE_NAMESPACE2(a, b) QT_RCC_MANGLE_NAMESPACE1(a,b)
#  define QT_RCC_MANGLE_NAMESPACE(name) QT_RCC_MANGLE_NAMESPACE2( \
        QT_RCC_MANGLE_NAMESPACE0(name), QT_RCC_MANGLE_NAMESPACE0(QT_NAMESPACE))
#else
#   define QT_RCC_PREPEND_NAMESPACE(name) name
#   define QT_RCC_MANGLE_NAMESPACE(name) name
#endif

#ifdef QT_NAMESPACE
namespace QT_NAMESPACE {
#endif

bool qRegisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);
bool qUnregisterResourceData(int, const unsigned char *, const unsigned char *, const unsigned char *);

#ifdef QT_NAMESPACE
}
#endif

int QT_RCC_MANGLE_NAMESPACE(qInitResources_Zasoby)();
int QT_RCC_MANGLE_NAMESPACE(qInitResources_Zasoby)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qRegisterResourceData)
        (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_Zasoby)();
int QT_RCC_MANGLE_NAMESPACE(qCleanupResources_Zasoby)()
{
    int version = 3;
    QT_RCC_PREPEND_NAMESPACE(qUnregisterResourceData)
       (version, qt_resource_struct, qt_resource_name, qt_resource_data);
    return 1;
}

namespace {
   struct initializer {
       initializer() { QT_RCC_MANGLE_NAMESPACE(qInitResources_Zasoby)(); }
       ~initializer() { QT_RCC_MANGLE_NAMESPACE(qCleanupResources_Zasoby)(); }
   } dummy;
}
