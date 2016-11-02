#include "stdio.h"
#include "selection_sort.cpp"

//typedef the array type to sort as DataType

typedef int DataType;

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

printf("\n");

return 0;

}
