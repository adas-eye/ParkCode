#ifndef QCOMMONFUNCTION_GLOBAL_H
#define QCOMMONFUNCTION_GLOBAL_H

#include <QtCore/qglobal.h>
#include <QObject>

#if defined(QCOMMONFUNCTION_LIBRARY)
#  define QCOMMONFUNCTIONSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QCOMMONFUNCTIONSHARED_EXPORT Q_DECL_IMPORT
#endif

#endif // QCOMMONFUNCTION_GLOBAL_H
