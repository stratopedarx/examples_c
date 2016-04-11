#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE_THE_LINE 80

int main()
{
	/*char inputText[SIZE_THE_LINE];
	int len=0;
	int str;
	int i;
	puts("Enter text, please.\n");
	fgets(inputText, SIZE_THE_LINE, stdin);
	len = strlen(inputText);
	str = (SIZE_THE_LINE - len) / 2;
	for (i = 0; i < str; i++)
		printf(" ");
	printf("%s", inputText);
	for (i = (str + len); i < SIZE_THE_LINE; i++)
		printf(" \n");*/

	char buf[SIZE_THE_LINE];
	char str[SIZE_THE_LINE];
	int len = 0;
	puts("Enter text, please.\n");
	fgets(str, SIZE_THE_LINE, stdin);
	len = (SIZE_THE_LINE + strlen(str)) / 2;
	//sprintf(str, "%d", len);

	sprintf(buf, "%c%d%c", '%', len, 's');   // "% len s"
	printf(buf, str);

	/*char buf[SIZE];
	char str[SIZE];     // stdin user
	int len = 0;
	puts("What do you think?\n");
	fgets(str, SIZE, stdin);
	len = (SIZE + strlen(str)) / 2;
	sprintf(buf, "%c%d%c", '%', len, 's');   // "% len s"
	printf(buf, str);*/
	

	return 0;
}
