#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
	int choice;
	
	char truth[5][100]={
	"Who's Your Crush?",
	"What's Your Most Embarrassing Moment?",
	"Have You Ever Peed In Bed?",
	"Have You Ever Kissed A Girl?",
	"What's Your Weirdest Habit?",
	};
	
	char dare[5][100]={
	"Do Ten Pushups",
	"Lick Your Fingers",
	"Do Ten Pullups",
	"Lick The Monitor",
	"Sing Loudly For  10 Seconds",
	};
	
	srand(time(0));
	
	while(1)
	{
		printf("*******************Welcome To Truth Or Dare***********************\n");
		printf("1.Truth:\n");
		printf("2.Dare:\n");
		printf("3.Exit:\n");
		printf("******************************************************************\n");
		printf("Enter Your Choice:");
		scanf("%d", &choice);
        int r = rand() % 5;
		
		if(choice == 1)
		{
			printf("Truth:%d\n%s\n",r, truth[r]);
		}
		else if(choice == 2)
		{
			printf("Dare:%d\n%s\n", r, dare[r]);
		}
		else if(choice == 3)
		{
			printf("Exiting The Program.........\n");
			break;
		}
		else
		{
			printf("Invalid Choice! Try Again\n");
		}
		
	}
	return 0;

}
