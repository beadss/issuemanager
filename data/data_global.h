#ifndef DATA_GLOBAL_H
#define DATA_GLOBAL_H

#include <QtCore/qglobal.h>

#ifdef DATA_LIB
# define DATA_EXPORT Q_DECL_EXPORT
#else
# define DATA_EXPORT Q_DECL_IMPORT
#endif

#endif // DATA_GLOBAL_H
