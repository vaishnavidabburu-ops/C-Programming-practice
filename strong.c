#include<stdio.h>
int main(){
    int n1,n2;
    printf("Enter n1 number:");
    scanf("%d",&n1);
    printf("Enter n2 number:");
    scanf("%d",&n2);
    int i,j;
    for(i=n1;i<=n2;i++){
        int temp=i,sum=0;
        int digit,fact=1;
        while(temp!=0){
            digit=temp%10;
            //factorial
            fact=1;
            for(j=1;j<=digit;j++){
                fact=fact*j;
            }
            sum=sum+fact;
            temp=temp/10;
        }
        if(sum==i)
            printf("%d\n",i);
    }
    return 0;
}