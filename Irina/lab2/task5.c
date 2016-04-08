#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 
#include <time.h>
#define SIZE 9


int main()
{
	
	char arr[SIZE];
	int i;
	int value;
	int count = 0;
	srand(time(0));
	while (1)
	{
		for (i = 0; i < SIZE - 1; i++)
		{
			value = rand() % ('z' - '0' + 1) + '0';
			if (value > '9' && value < 'A' || value > 'Z' && value < 'a')
				i--;
			else
				arr[i] = value;
		}
		arr[i] = '\0';
		count++;
		puts(arr);
	//	if (count == 10)
	//		break;

	}
	return 0;
}