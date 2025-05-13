#include "main.h"

void* createMemSpace(void* ptr, int dataTypeSize, int noOfElements)
{
	return realloc(ptr, dataTypeSize * noOfElements);
}