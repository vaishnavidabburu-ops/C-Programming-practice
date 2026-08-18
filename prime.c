#include <stdio.h>
void main(){
//to check weather givecn number is prime or not a prime number
  int num;
printf("Enter the number:\n");
scanf("%d",&num);
int count=0,i=1;
while(num>0){
if(num%i==0)
  count++;
i++;
}
if(count==2)
    printf("%d is a prime number\n",num);
else
    printf("%d is not a prime nuber\n",num);
}
