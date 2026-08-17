#include <stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int count=0;
    int temp=n;
    while(temp!=0){
        temp%10==0;
        count+=1;
        temp=temp/10;
    }
    int rem=0;
    while(temp>0){
        rem += pow((temp%10),count);
        temp=temp/10;
    }
    if(rem==temp){
        printf("%d is an armstrong number!\n",n);
    }
    else
        printf("%d is not an armstrong number!\n",n);
    return 0; 
}