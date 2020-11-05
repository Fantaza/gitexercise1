#include <stdio.h>

/**
* Simple calculator
*/
int main(){

	float num1;
	float num2;
	float ans;
	char op;
	printf("\nEnter an operator (+,-,/,*): \n");
	scanf("%c",&op);

	printf("\nEnter two numbers: ");
	scanf("%f",&num1);
	scanf("%f",&num2);

	switch(op)
    {

        case '+':
            printf("%.1lf + %.1lf = %.1lf",num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1lf - %.1lf = %.1lf",num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1lf * %.1lf = %.1lf",num1, num2, num1 * num2);
            break;
        case '/':
            printf("%.1lf / %.1lf = %.1lf",num1, num2, num1 / num2);
            break;

	}
	printf("\n The result is as follows:\n");
	printf("%f %c %f = %f",num1, op ,num2,ans);
	return 0;
}

