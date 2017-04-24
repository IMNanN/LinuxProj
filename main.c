#include <stdio.h>
#include "include/sort.h"

int main()
{
	int N, i, num;
	int a[8] = {1,31,24,4,56,101,44,82};
	int b[8] = {45,77,39,55,12,6,90,104};
	int *p = a;
	int *q = b;
	N = 8;

	printf("Input 1 or 2 : ");
	scanf("%d", &num);
	if(num == 1){
		InsertionSort(a, N);
		p = a;
		for (i = 0; i < N; i++)
			printf("%d ", *p++);
		printf("\n");		
	}
	else if(num == 2){
		BubbleSort(b, N);
		q = b;
		for (i = 0; i < N; i++)
			printf("%d ", *q++);
		printf("\n");
	}
	else
		printf("Wrong input!\n");

	return 0;
}
