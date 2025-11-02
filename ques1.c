#include<stdio.h>
#include<math.h>
int main()
{
    int no,count,result,rem,copy,copy2;
    printf("enter no value");
    scanf("%d",&no);
    count=0;
    result=0;
    copy=no; copy2=no;
    while(no>0)
    {
        no=no/10;
        count++;
    }
    while(copy>0)
{
    rem=copy%10;
    result=result+pow(rem,count);
    copy=copy/10;
}
if (copy2==result)
{
    printf("this is amstrong");
}
else
{
    printf("not amstrong");
}
return 0;
}