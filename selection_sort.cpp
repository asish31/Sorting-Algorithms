#include "stdio.h"
#include "define.h"
#include "selection_sort.hpp"

//typedef int DataType;

void printLinkedList(LinkedType *root);

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

//return SortedArray;;

}

void SelectionSort(LinkedType *Root,bool isDescend)		//For linked List sorting
{
  LinkedType * PositionObj= Root;
  LinkedType * PrevPositionObj= NULL;
  
  LinkedType * SwapObj =Root;
  LinkedType * PrevObj =NULL;
  LinkedType * swap_next = NULL,*pos_next=NULL,*temp =NULL;  

 while(PositionObj !=NULL)
 {
  ValueType value = PositionObj->value; 
  LinkedType * CurrentObj = PositionObj;
     
  while(CurrentObj !=NULL)
   {
      bool isCondition = isDescend ? (CurrentObj->value > SwapObj->value) : (CurrentObj->value < SwapObj->value);
      if(isCondition)
	{
	  SwapObj = CurrentObj;
//  	  printf("Swap\n");	      
	}      
      
      PrevObj = CurrentObj; 
      CurrentObj = CurrentObj->next;  
   }


 swap_next = SwapObj->next;
 pos_next =  PositionObj->next;
 temp = SwapObj;
 SwapObj = PositionObj;
 PositionObj = temp;
 PositionObj->next = swap_next;
 SwapObj->next = pos_next; 

 if(PrevPositionObj != NULL) 
  {
   PrevPositionObj->next = SwapObj;	
   PrevPositionObj = SwapObj;
  }
 
 else {
   Root = SwapObj;
   PrevPositionObj = SwapObj; 
   printLinkedList(Root);
 }

 PositionObj = SwapObj->next;
 printf("%d\n",PositionObj->value);
 
}

}


