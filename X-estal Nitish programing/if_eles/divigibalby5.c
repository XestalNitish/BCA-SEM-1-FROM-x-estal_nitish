#include<stdio.h>
int main(){
    printf("i,m \n   Nitish");
    int x;
    printf("\nEnter Your Number =");
    scanf("%d",&x);
    if(x%4==0){
        printf("Your Number %d is divisible by 4",x);
    }
    else{
        printf("Your Number %d is NOT divisible by 4",x);
    }
    return 0;
}