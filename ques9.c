#include<stdio.h>
int main(){
   int n,i,x=0;
   printf("Enter size of array : ");
   scanf("%d",&n);

   int arr[n];

   printf("Enter %d elements : ",n);
   for(i=0;i<n;i++){
      scanf("%d",&arr[i]);
   }
   for(i=0;i<n;i++){
      if(arr[i]==99){
        x=1;
        break;
      }
   }
   if(x==1)
      printf("found 99 in the array");
   else
      printf("99 not found in the array");

   return 0;
}