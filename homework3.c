#include<stdio.h>
int main()
{
    float Celsius, Fahrenheit;
    scanf("%f",&Fahrenheit);
    Celsius = (5*(Fahrenheit-32))/9;
    printf("Celsius is %f",Celsius);
    return 0;
}