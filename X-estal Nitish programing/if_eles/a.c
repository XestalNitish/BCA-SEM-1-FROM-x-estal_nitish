#include<stdio.h>
int main(){
    printf("i,m \n  Nitish");
    int x;
    printf("\nEnter your no = ");
    scanf("%d",&x);
    if(x%3==0||x%5==0){
        if(x%15!=0){
            printf("your number is divisible by 3 or 5 but not divisible by 15");
        }
        else{
            printf("your number is  divisivle by 15");
        }
    }
    else{
        printf("your no is not divisible by 3 or 5");
    }
    return 0;
}