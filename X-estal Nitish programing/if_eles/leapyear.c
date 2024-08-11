#include<stdio.h>
int main(){
    printf("i,m\n   Nitish");
    printf("\n find a leap year");
    int x;
    printf("\nEnter your year");
    scanf("%d",&x);
    if(x%4==0){
        printf("%d is leap year",x);
    }
    else{
        printf("%d is not a leap year",x);
    }

    return 0;
}