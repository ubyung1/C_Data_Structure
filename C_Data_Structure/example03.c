#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int * array = (int*)malloc(4 * sizeof(int));
	array[0] = 1;
	array[1] = 2;
	array[2] = 3;

	int * tmp = (int*)malloc(8 * sizeof(int)); 
	int i;
	for (i = 0; i < 4; i++)
		tmp[i] = array[1];

	array = tmp;

	array[7] = 7;

	for (i = 0; i < 8; i++)
		printf("%d\n", array[i]);
}