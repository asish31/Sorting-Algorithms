#include "stdio.h"
#include "define.h"
#include "selection_sort.cpp"
#include "stdlib.h"

//typedef the array type to sort as DataType

typedef int DataType;

void printLinkedList(LinkedType *root)
{
 LinkedType * PrintObj = root;

 while(PrintObj!=NULL)
 {
  printf("%d ",PrintObj->value);
  PrintObj = PrintObj->next;
 }
printf("\n");

}

int main()
{

DataType array[] = {3,5,1,7,4,8};

int i;

for(i =0;i<6;i++)
{
	printf("%d ",array[i]);
}

SelectionSort(array,6,true);

printf("\nDescending\n");

for(i =0;i<6;i++)
{
	printf("%d ",array[i]);
}

SelectionSort(array,6,false);

printf("\nAscending\n");

for(i =0;i<6;i++)
{
	printf("%d ",array[i]);
}

printf("\n\n\n");


// Linked List Testcase
#define LinkedListSize 5 //Just some number to keep the testcase simple

printf("LinkedList\n");

LinkedType * root = (LinkedType *) malloc(sizeof(LinkedType));
root->value = 8;
root->next = NULL;


LinkedType * LastLink = root;

for(int i = 0;i < LinkedListSize-1; i++)
{
 LinkedType * link = (LinkedType *) malloc(sizeof(LinkedType));
 
 if(link !=NULL) {
   link->value = rand()%50;
   link->next = NULL;
   LastLink->next = link;
   LastLink = link;
 } 
  
}


printLinkedList(root);
printf("Descending\n");
SelectionSort(root,true);
printLinkedList(root);
printf("Ascending\n");
SelectionSort(root,false);
printLinkedList(root);


return 0;

}
