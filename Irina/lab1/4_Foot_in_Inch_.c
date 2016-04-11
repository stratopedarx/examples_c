#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void buffer();
float fromFootAndInchToCentimeter(float f, float i);


main()
{
	char exitText[][200] = { "Are you knew your growth as centimeter? Enter your growth as foot and inch. Use space. Examle, 12 17.", "Error!Repeat, please!" };
	float foot;
	float inch;
	puts(exitText[0]);
	while (1)
	{
		if (scanf("%f %f", &foot, &inch) == 2)
		{
			printf("%.4f\n", fromFootAndInchToCentimeter(foot, inch));
		}
			
		else
			printf("%s\n", exitText[1]);
		buffer();
	}
	return 0;
}

//the translation from foot and inch to centimeter
float fromFootAndInchToCentimeter(float f, float i)
{
	float sm;
	(float) sm = (((float) i*2.54) + ((float) f * 12)*2.54);
	return sm;
}


// clean buffer
void buffer()
{
	char ch;
	do
		ch = getchar();
	while (ch != '\n' && ch != EOF);
}