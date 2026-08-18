#include <stdio.h>
int main(){
    int n,next;
    printf("Enter a number:");
    scanf("%d",&n);
    if(n>0){
        int a=0,b=1;
        int i=1;
        while(i<=n){
            printf("%d ",a);
            next=a+b;
            a=b;
            b=next;
            i++;
        }
    }
    else{
        printf("%d",0);
    }
    return 0;
}