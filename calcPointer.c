#include<stdio.h>
float add(float num1, float num2);
float sub(float num1, float num2);
float multi(float num1, float num2);
float div(float num1, float num2);
void main(void)
{
    float number1,number2;
    int op;
    float (*calc[4])(float , float)= {add,sub,multi,div};
    printf("Please Input 2 numbers: "); scanf("%f%f",&number1,&number2);
    printf("Choose operation: \n1-addition \n2-subtraction \n3-multiplication \n4-division\n >>>");
    scanf("%d",&op);
    printf("result = %.3f\n",calc[op-1](number1,number2));
}
float add(float num1, float num2) {return num1+num2;}
float sub(float num1, float num2) {return num1-num2;}
float multi(float num1, float num2) {return num1*num2;}
float div(float num1, float num2) {return num1/num2;}
