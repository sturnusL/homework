#include<stdio.h>
int main()
{
    int year;
    scanf("%d",&year);
    if(year%400==0||year%4==0&&year%100!=0)
    printf("This year is a leap year");
    else
    printf("This year is not a leap year");
    return 0;
}
