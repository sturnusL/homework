#include<stdio.h>
#include<math.h>
int main()
{
    char a[3],b[3],c[3];
    int A,B,C,score;
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
    return 0;
}