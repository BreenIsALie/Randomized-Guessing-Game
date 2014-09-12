/*Else - If test 1
Mathias Jönsson 11 sep 2014*/

#include <stdio.h>

int main()
{

	int Guess;  /*Creates int Guess for the users guess*/
	
	int RndAnsw;	/*Create int RndAnsw, which will be the randomly generated answer*/
	srand(time(NULL));	/*New seed for each generator run, generates different numbers*/
	RndAnsw = rand() % 11; /*Generates random number between 0 and 10*/

	printf("\nWelcome to the numbers guessing game, now with added randomness\n\nPlease enter your guess\n"); /*Greeting message*/

	do
	{
		scanf_s("%d", &Guess); /*Take guess input and add to Guess*/

		if (Guess == RndAnsw) /*If matching the RndAndswer, give victory message*/
		{
			printf("\nCongratulations on being correct, You win\n\n");

			printf("\nPress any key to exit");	/*Escape sequence*/
			fflush(stdin);
			getchar();
			return 0;

		}

		else
			printf("Incorrect, try again\n"); /*Wrong number message*/

	}

	while (Guess != RndAnsw);

	printf("\nWelcome to the numbers guessing game, now with added randomness\n\nPlease enter your guess\n");
	scanf_s("%d", &Guess);

	if (Guess == RndAnsw)
	{
		printf("\nCongratulations on being correct, You win\n\n");

		printf("\nPress any key to exit");
		fflush(stdin);
		getchar();
		return 0;

	}

	else
		printf("Incorrect, try again");
		scanf_s("%d", &Guess);



}