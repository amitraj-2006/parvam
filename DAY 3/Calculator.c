#include<stdio.h>
int main(){
    char operator;
    float op1, op2, result;
    printf("Enter the opertaor(+,-,*,/,%):");
    scanf("%c",&operator);
    printf("Enter any  2 number:");
    scanf("%f %f", &op1, &op2);
    switch (operator)
{
    case '+':
       result = op1 + op2;
       printf("Sum of %f & %f: %f", op1, op2, result);
       break;
    case '-':
        result = op1 - op2;
        printf("Differrence of %f & %f: %f", op1, op2, result);
        break;
    case'*':
        result = op1 * op2;
        printf("Product of %f & %f: %f", op1, op2, result);
        break;
         case'/':
        result = op1 / op2;
        printf("Quoitient of %f & %f: %f", op1, op2, result);
        break;
    default:
        printf("Invalid Input. Please try again with proper operation!");
        break;
    }
    return 0;
}              