#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void buffer();
float fromDegreeToRadian(float degree);
float fromRadianToDegree(float radian);

main()
{
	char exitText[][100] = { "Enter the value of degrees or radians in format 12D or 12R", "Error!Repeat, please!" };
	float number;
	char value;
	puts(exitText[0]);
	while (1)
	{
		if (scanf("%f%c", &number, &value) == 2)
		{
			if (value == 'D' || value == 'd')
			{
				
				printf("%.2fR\n", fromDegreeToRadian(number));
			}
			if (value == 'R' || value == 'r')
			{
				printf("%.4fD\n", fromRadianToDegree(number));
			}
			else
				break;
		
		}
		else
			printf("%s\n", exitText[1]);
		buffer();
	}
	return 0;
}

//the translation from degree to radian
float fromDegreeToRadian(float degree)
{
	float radian;
	(float)radian = ((float)degree * 180) / 3.14;
	return radian;
}

//the translatian from radian to degree
float fromRadianToDegree(float radian)
{
	float degree;
	(float)degree = ((float)radian * 3.14) / 180;
	return degree;
}

// clean buffer
void buffer()
{
	char ch;
	do
		ch = getchar();
	while (ch != '\n' && ch != EOF);
}