#include <stdio.h>
#include <string.h>

int main()
{
	char arr[] = "  ghjhg kgkg   kkhgjk k hg  jhgjk gkg kjg hk o u8y9ylh9phogfmiyrdi           ass   ds  ";
	int i, j;
	int flag = 0;

	i = strlen(arr)-1;
	while (arr[i] == ' ')
	{
		arr[i] = '\0';
		i--;
	}
	
	for (i = strlen(arr)-1; i > 0; i--)
		if (arr[i] == ' ' && flag == 0)
		{
			flag = 1;
			continue;
		}
		else if (arr[i] == ' ' && flag == 1)
		{
			for (j = i; j < strlen(arr); j++)
			{
				arr[j] = arr[j + 1];
			}
			if (arr[i] != ' ')
				flag = 0;
		}
	while (arr[i] == ' ')
	{
		for (i = 0; i < strlen(arr); i++)
			arr[i] = arr[i + 1];
		i = 0;
	}

	printf("%s\n", arr);

	return 0;
}