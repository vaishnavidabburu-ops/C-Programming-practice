#include <stdio.h>
int main(){
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int temp=n;
    int rem,rev=0;
    while (temp>0){
        rem=temp%10;
        rev=(rev*10)+rem;
        temp=temp/10;
    }
    if(rev==n){
        printf("%d is a palindrome\n",n);
    }
    else
        printf("%d is not a palindrome number\n",n);
    return 0;
}