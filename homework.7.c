#include<stdio.h>
#include<math.h>
char a[3],b[3],c[3];
int A,B,C,score,x;
int summerise(int A ,int B,int C,int score,int x);
int main()
{
    {printf("输入一个1~5的数字以继续，输入任意其它数字以终止");
    scanf("%d",&x);
    scanf("%2s",a);
    scanf("%2s",b);
    scanf("%2s",c);
    if(a[0]== 'J'||a[0]=='Q'||a[0]=='K')
    {
        A=10;
    }
    else
    {
        if(a[0]=='A')
        {
            A=11;
        }
        else
        {
            A=atoi(a);
        }
    }
    if(b[0]== 'J'||b[0]== 'Q'||b[0]== 'K')
    {
        B=10;
    }
    else
    {
        if(b[0]=='A')
        {
            B=11;
        }
        else
        {
            B=atoi(b);
        }
    }
    if(c[0]== 'J'||c[0]== 'Q'||c[0]== 'K')
    {
        C=10;
    }
    else
    {
        if(c[0]=='A')
        {
            C=11;
        }
        else
        {
            C=atoi(c);
        }
    }
    goto point1;
    return 0;
}
while(x>=1&&x<=5);
int summerise(int A,int B ,int C ,int score,int x);
{
    point1:
    score=A+B+C;
    if(score>21)
    {
        if(a[0]=='A')
        A=1;
        if(b[0]=='A')
        B=1;
        if(c[0]=='A')
        C=1;
        score=A+B+C;
    }
    printf("分数是；%d",score);
    }
    
    return 0;
}