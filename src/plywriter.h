#ifndef PLYWRITER_H
#define PLYWRITER_H

#include "Interface.h"
#include "HalfEdge.h"

static QString saveToFileName;
void setSaveToFileName(QString paramSaveToFileName);
void writePly(Interface& interface);

#endif // PLYWRITER_H
