#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#define SIZE 30
void buffer();

int main()
{
	char exitText[][60] = { "Hello!", "Enter your name: ", "Enter your sex: ", "Enter your age: ", "Enter your weight: ", "Enter your growth: ", "Error! Try again."};
	char name [SIZE];
	char sex[SIZE];
	int age;
	float weight;
	float growth;
	float indexKetle;

	//ask user name
	puts(exitText[0]);
	puts(exitText[1]);
	fgets(name, SIZE, stdin);
	name[strlen(name) - 1] = '\0';
	printf("Hello, %s\n", name);
	
	//ask sex
	puts(exitText[2]);
	fgets(sex, SIZE, stdin);
	sex[strlen(sex) - 1] = '\0';
	printf("Your sex is %s\n", sex);
	
	//ask age
	puts(exitText[3]);
	while (1)
	{
		if ((scanf("%d", &age) == 1)){
			printf("Your age is %d\n", age);
			break;
			}
		else {
			puts(exitText[6]);
			buffer();
		}

	}
		
	//ask weight
	puts(exitText[4]);
	while (1)
	{
		if ((scanf("%f", &weight) == 1)){
			printf("Your weight is %.2f\n", weight);
			break;
		}
		else {
			puts(exitText[6]);
			buffer();
		}

	}
	
	//ask growth
	puts(exitText[5]);
	while (1)
	{
		if ((scanf("%f", &growth) == 1)){
			printf("Your growth is %.0f\n", growth);
			break;
		}
		else {
			puts(exitText[6]);
			buffer();
		}

	}
	
	indexKetle = (float) weight / (float)(growth*growth / 10000);

	if (indexKetle <= 18.5)	
		printf("Your Quetelet index is %.2f: the deficit of body weight/n", indexKetle);
	

	else if (18.5<indexKetle && indexKetle <= 24.99)
		printf("Your Quetelet index is %.2f: norma\n", indexKetle);
	

	else if (25<indexKetle && indexKetle <= 30) 
		printf("Your Quetelet index is %.2f: overweight\n", indexKetle);
	

	else if (30<indexKetle && indexKetle <= 35) 
		printf("Your Quetelet index is %.2f: obesity of the first degree\n", indexKetle);
	

	else if (35<indexKetle && indexKetle <= 40) 
		printf("Your Quetelet index is %.2f: obesity of the second degree\n", indexKetle);
	

	else  
		printf("Your Quetelet index is %.2f: obesity of the third degree\n", indexKetle);
	return 0;

}

//clean buffer
void buffer()
{
	char ch;
	do
		ch = getchar();
	while (ch != '\n' && ch != EOF);
}