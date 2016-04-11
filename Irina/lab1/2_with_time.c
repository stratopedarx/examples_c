#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE_TEXT 200
void buffer();

int main()
{
	int enterHour;
	int enterMinute;
	int enterSecond;
	char exitText[][SIZE_TEXT] = { "Good night!", "Good morning!", "Good aftenoon!", "Good everning!", "Enter time in format HH:MM:SS. Hour is from 00 to 24, minute is from 00 to 59, second is from 00 to 59", "Error! Repeat it!" };

	printf("%s\n", exitText[4]);
	/*while (1)
	{
	if ((scanf("%2d:%2d:%2d", &enterHour, &enterMinute, &enterSecond) == 3)) // expect HH:MM:SS
	{
	if (enterHour >= 00 && enterHour < 05){
	printf("%s\n", exitText[0]);
	break;
	}
	else if (enterHour >= 05 && enterHour < 11){
	puts(exitText[1]);
	break;
	}
	else if (enterHour >= 11 && enterHour < 16){
	puts(exitText[2]);
	break;
	}
	else if (enterHour >= 16 && enterHour < 21){
	puts(exitText[3]);
	break;
	}
	else if (enterHour >= 21 && enterHour < 24){
	puts(exitText[0]);
	break;
	}
	}
	else
	printf("%s\n", exitText[5]);
	buffer();
	}
	return 0;

	}
	*/	
	while (1)
	{
		if (scanf("%2d:%2d:%2d", &enterHour, &enterMinute, &enterSecond) == 3)
		{
			enterHour >= 0 && enterHour < 5 && enterMinute >= 0 && enterMinute < 60 && enterSecond >= 0 && enterSecond < 60 && printf("%s\n", exitText[0])
				|| enterHour >= 5 && enterHour < 11 && enterMinute >= 0 && enterMinute < 60 && enterSecond >= 0 && enterSecond < 60 && puts(exitText[1])
				|| enterHour >= 11 && enterHour < 16 && enterMinute >= 0 && enterMinute < 60 && enterSecond >= 0 && enterSecond < 60 && puts(exitText[2])
				|| enterHour >= 16 && enterHour < 21 && enterMinute >= 0 && enterMinute < 60 && enterSecond >= 0 && enterSecond < 60 && puts(exitText[3])
				|| enterHour >= 21 && enterHour < 24 && enterMinute >= 0 && enterMinute < 60 && enterSecond >= 0 && enterSecond < 60 && puts(exitText[0]);
		}
		else
			printf("%s\n", exitText[5]);
		buffer();
	}
	return 0;
}
// clean buffer
void buffer()
{
	char ch;
	do
		ch = getchar();
	while (ch != '\n' && ch != EOF);
}