#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>

void buffer();
enum {false, true};

int main()
{
	
	int value;
	int number;
	int count = 0;
	srand(time(0));
	value = rand() % 100 + 1;
	printf("%d\n", value);
	puts("Enter a number: ");
	
	while (true){
		
		while (scanf("%2d", &number) == 1)
		{
							
				if (number > value)
					puts("Your number is more.\n");
				else if (number < value)
					puts("Your number is less. \n");
				else if (number == value){
					puts("Guess!\n");
					return 0;
				}
				count++;
				printf("Count = %d\n", count);
				if (count == 8)
				{
					puts("You lose!");
					return 0;
				}
					
		}
		puts("Error! Repeat please\n");
		buffer();
	}
	return 1;
}
// clean buffer
void buffer()
{
	char ch;
	do
		ch = getchar();
	while (ch != '\n' && ch != EOF);
}