#include "define.h"

void SelectionSort(DataType * InputArray, int size, bool isDescend);
void SelectionSort(DataType *Root,bool isDescend);		//For linked List sorting

struct LinkedType {
  ValueType value;
  struct LinkedType * next;
};

typedef struct LinkedType LinkedType;
