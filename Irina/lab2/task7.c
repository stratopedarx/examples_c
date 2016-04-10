#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 128

int main()
{
	int i;
	unsigned char mirr[SIZE];
	unsigned int arr[SIZE];
	
	for (i = 0; i < SIZE; ++i)
		arr[i] = 0;

	fgets(mirr, SIZE, stdin);
	
	for (i = 0; i != '\n'; i++)
	{
		++arr[mirr[i]];
	}

	for (i = 0; i < SIZE; ++i){
		if (arr[i] == 0)
			continue;
		printf("%c - %d\n", i, arr[i]);
	}

	return 0;
}