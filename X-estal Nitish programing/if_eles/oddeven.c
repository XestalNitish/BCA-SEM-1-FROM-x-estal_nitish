#include<stdio.h>
int main(){
    printf("I'm\n   Nitish");
    int x;
    printf("\nEnter the number =");
    scanf("%d",&x);
    if (x%2==0){
        printf("Your number %d is Even",x);
    }
    else{
        printf("Your number %d is Odd",x);
    }
    return 0;
}