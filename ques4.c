//this one is using temporary variable

#include<stdio.h>
int main(){
    int a,b,temp;
    printf("enter a");
    scanf("%d",&a);
    printf("\nenter b");
    scanf("%d",&b);
    temp=a;
    a=b;
    b=temp;
    printf("using temporary variable method\n");
    printf("\n a is %d",a);
    printf("\nb is %d",b);
    return 0;
}


//using airthmetic + and -

#include<stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("\nenter b");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
printf("using airthmetic method");
printf("\n a is%d",a);
printf("\n b is%d",b);
return 0;
}


//Bitwise XOR(^)

#include<Stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("\nenter b");
    scanf("%d",&b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("after using bitwise XOR(^)");
    printf("\n a is%d",a);
    printf("\n b is%d",b);
    return 0;
}


//pointer manipulation

#include<stdio.h>
int main(){
    int a,b;
    printf("enter a");
    scanf("%d",&a);
    printf("\nenter b");
    scanf("%d",&b);
    int x,y;
    x=a;
    y=b;
    int *p1 = &x;
    int *p2 = &y;
    int temp2;

    temp2 = *p1;
    *p1 = *p2;
    *p2 = temp2;
    printf("after swaping using pointer manipulation");
    printf("x = %d, y = %d\n", x, y);
    return 0;
}