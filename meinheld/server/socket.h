#ifndef SOCKET_H
#define SOCKET_H

#include "server.h"


typedef struct {
    PyObject_HEAD
    int fd;
    PyGreenlet *current;
    buffer *read_buf;
    buffer *write_buf;

} NSocketObject;

extern PyTypeObject NSocketObjectType;

inline PyObject* 
NSocketObject_New(int fd);

inline int 
CheckNSocketObject(PyObject *obj);

inline void 
setup_nsocket(void);

#endif
