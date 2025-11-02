#include<stdio.h>
int main(){
int num1,num2,hcf;

printf("enter the first number\n");
scanf("%d",&num1);
printf("enter the second number\n");
scanf("%d",&num2);
int i;

for(i=1;i<=num1 && i<=num2;i++){
    if(num1%i==0 && num2%i==0){
        hcf=i;
    }
}
printf("the hcf of the two numbers is :%d",hcf);
return 0;
}