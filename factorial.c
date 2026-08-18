#include <stdio.h>
int main(){
    /* Factorial using for loop
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i;
    int fact=1;
    for (i=1;i<=n;i++){
        fact=fact*i;
    }
    printf("Factorial of given number %d:%d\n",n,fact);*/
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    int i=1,fact=1;
    while(i<=n){
        fact*=i;
        i++;
    }
    printf("Factorial of given number %d:%d\n",n,fact);
    return 0;
}