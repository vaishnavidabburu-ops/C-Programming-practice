#include<stdio.h>
int main(){
    int n,fact;
    printf("Enter a number:");
    scanf("%d",&n);
    int i=1;
    int count=0;
    while(i<n){
        if(n%i==0)
            count+=i;
        i++;
    }
    if(count==n){
        printf("%d is a perfect number!\n",n);
    }
    else{
        printf("%d is not a perfect number!\n",n);
    }
    return 0;
}