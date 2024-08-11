#include<stdio.h>
int main(){
    printf("i,m\n   Nitish");
    int x;
    printf("\nEnter your number = ");
    scanf("%d",&x);
    if(x<0){
        x=x*(-1);
    }
    printf("your absolute value is = %d",x);
    return 0;
}