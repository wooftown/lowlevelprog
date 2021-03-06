
#ifndef HEAP_HEAP_H
#define HEAP_HEAP_H

#include "libHeap.h"

extern heap *heapInit(unsigned int start_data);

extern void heapShiftUp(heap *h, size_t i);

extern void heapShiftDown(heap *h, size_t i);


#endif
