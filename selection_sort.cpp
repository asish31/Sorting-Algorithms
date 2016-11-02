#include "stdio.h"
#include "define.h"

//typedef int DataType;

void SelectionSort(DataType * InputArray, int size, bool isDescend)
{
  bool isCondition = false;
  DataType value;
  DataType *SortedArray = InputArray; 
  int index;
  

  for(int outer = 0; outer<size;outer++)
  {
     value = SortedArray[outer];
     index = outer;

     for(int inner = outer;inner<size;inner++)
     {
	isCondition = isDescend ? (SortedArray[inner] > value) : (SortedArray[inner] < value);
	
	if(isCondition)
	{
	  value = SortedArray[inner];
	  index = inner;
	}	
	
     }
    
    SortedArray[index] = SortedArray[outer];
    SortedArray[outer] = value;
	
  }

//return SortedArray;
}


