#include "include/sort.h"

void InsertionSort(int *arr, int n)
{
	int i, j, key;
	 for (i = 1; i < n; i++)
	 {
	 	key = *(arr+i);
	 	j = i - 1;
	 	while (j >= 0 && *(arr+j) > key)
	 	{
	 		*(arr+j+1) = *(arr+j);
	 		j --;
	 	}

	 	*(arr+j+1) = key;
	 }
}

void BubbleSort(int * arr, int n)
{
	int temp, i, j;
	for (i = 0; i < n-1; i++){
		for(j = 0; j < n-i-1; j++){
			if (*(arr+j) > *(arr+j+1)){
				temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			} 
		}
	}
}

