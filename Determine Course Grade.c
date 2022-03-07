#include <stdio.h>

int main(void){
	
int num;

printf("Input your course score: ");
scanf("%d",&num);
printf("Your score: %d\n", num); 

	if(num > 100){
	printf("Please enter the exact score, the score must be below 100!"); 
		}
	else if ( num >=90){
		printf("You got A grade\n");
		printf("The credits maximum for the next semester is 24");
		}
	else if ( num >=80){
		printf("You got B grade\n");
		printf("The credits maximum for the next semester is 21");
		}
	else if ( num >= 70){
		printf("You got C grade\n");
		printf("The credits maximum for the next semester is 18");
		}
	else if ( num >= 60){
	printf("You got D grade\n");
	printf("The credits maximum for the next semester is 12");
		}
	else if ( num >= 0){
	printf(" You got F grade\n");
	printf("The credits maximum for the next semester is 9");
		}
		
return 0;
}

