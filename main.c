#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int answer = 59;
	int x;
	int trial=0;
	
	do
	{
		printf("Guess a number: ");
		scanf("%i", &x);
		
		if (x > answer)
			printf("high!\n");
		else if (x < answer)
			printf("low!\n");
		else
			printf("Congratulation! trials:%i\n",trial+1);
		trial++;
	} 
	while (x != answer);
	
	return 0;
}
