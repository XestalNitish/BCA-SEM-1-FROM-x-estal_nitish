#include<stdio.h>
int main(){
     printf("i,m\n   Nitish");
     float x;
    printf("\nEnter your Number = ");
    scanf("%f",&x);
    if(x/2==0){
        printf("Your Number %f id Even",x);
    }
    if(x/3==0){
        printf("Your Number %f id Odd",x);
    }
    return 0;
}