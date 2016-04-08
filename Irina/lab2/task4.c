#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h> 


char swap(x, y);

int main()
{
	char arr[] = "a355798jmkm987898ujhbgfbc123xyz";
	char tmp;//temporary variable
	int i;
	int j;
		
	for (i = 0; i < strlen(arr); i++)
	{
		if ((arr[i] >= '0') && (arr[i] <= '9'))
			for (j = strlen(arr) - 1; j > i; j--)
				if ((arr[j] >= 'A' && arr[j] <= 'Z') || (arr[j] >= 'a' && arr[j] <= 'z'))
				{
					tmp = arr[i];
					arr[i] = arr[j];
					arr[j] = tmp;
				}
	}

				
	printf("%s\n", arr);
	return 0;
}

