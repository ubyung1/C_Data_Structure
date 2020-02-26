#include <stdio.h>
#define BUFFER_SIZE 100

int main()
{
	char * words[100];
	int n = 0;
	int slice = 0;
	char buffer[BUFFER_SIZE];

	while (scanf("%s", buffer) != EOF)
	{
		words[n] = buffer;
		n++;
	}
}