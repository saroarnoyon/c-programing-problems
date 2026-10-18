#include<stdio.h>
int main(){
    double num1, num2;
    char operator;

    // chosing operation
    printf("Please in enter an operator(+ , - , * , /):");
    scanf("%c",&operator);
    
    // user input
    printf("Enter number 1:");
    scanf("%lf",&num1);
    printf("Enter number 2:");
    scanf("%lf",&num2);
    

    switch (operator)
    {
    case '+':
        printf("Addition:%.2lf",num1+num2);
        break;
    case '-':
        printf("Subtraction:%.2lf",num1-num2);
        break;
    case '*':
        printf("Multiplication:%.2lf",num1*num2);
        break;
    case '/':
        printf("Division:%.2lf",num1/num2);
        break;
    default:
        printf("Please enter a valid operator");
        break;
    }
    return 0;
}