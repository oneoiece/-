#include<stdio.h>
int countdigit(int number,int digit);
int main(void)
{
    int number;
    printf("输入一个整数:");
    scanf("%d",&number);
    printf("%d",countdigit(number,2));
    return 0;
}
int countdigit(int number,int digit)
{
    int a=number,n=0,min=1,t,count=0;
    while(a>0)
    {
        a=a/10;
        n++;
    }
    for(int i=1;i<n;i++) min=min*10;
    while(number>0)
    {
        t=number/min;
        if(t==2) count++;
        number=number%min;
        min=min/10;
    }
    return count;
}
