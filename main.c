#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int a,b;
	char op;
	int result;
	
	printf("Enter the calculation: ");
	scanf("%i %c %i", &a, &op, &b);
		
	switch (op)
	{
		case '+':
			result = a + b;
			break;
		case '-':
			result = a - b;
			break;
		case '*':
			result = a * b;
			break;
		case '/':
			result = a / b;
			break;
	}	
			
	printf("= %i\n", result);
	
	
	return 0;
}
