#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
void buffer();
int main()
{
	float H;
	float L;
	float t = 0.0f;
	clock_t time;
	puts("Enter H: ");
	while (1)
	{
		if (scanf("%f", &H) == 1)
			break;
		puts("Error! Repeat again!");
		buffer();
	}
	
	do 
	{
		L = (float)(9.81f * (t * t)) / 2.0f;
		H = H - L;
		if (H < 0)
			break;
		printf("t = %2.0f c H = %.1f\n", t++, H);
		time = clock();
		while (clock() < time + 1000);
	} while (H > 0);

	puts("BABAH!!!");

		
	

	/*while (H > 0)
	{
		L = (float) (9.81f * (t * t)) / 2.0f;
		H = H - L;
		if (H < 0)
			break;
		printf("t = %2.0f c H = %.1f\n", t++ , H);
		time = clock();
		while (clock() < time + 1000);
	}
	puts("BABAH!!!\a");*/

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