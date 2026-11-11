/*Simple Calculator Using Switch Conditional Statement*/
#include "stdio.h"
int main() {
int a, b;
printf("Enter A & B Values: ");
scanf("%d%d",&a,&b);
long long int num;
printf("Choose a number from 1 - 5 based on ur prefered operation\n1. Addition[+]\n2. Substraction[-]\n3. Multiplication[*]\n4. Division[/]\n5. Modulo/Remainder[%%]\n");
scanf("%lld",&num);
    switch(num){
    case 1: printf("Addition: %lld",a+b); break;
    case 2: printf("Substraction: %lld",a-b); break;
    case 3: printf("Multiplication: %lld",a*b); break;
    case 4: printf("Division: %.2lf",(double)a/b); break;
    case 5: printf("Modulo/Remainder: %lld",a%b); break;
    default: printf("Invalid number choose between 1-5");
}
return 0;
}
