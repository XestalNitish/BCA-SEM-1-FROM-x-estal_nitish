#include<stdio.h>
int main(){
    printf("i,m\n  Nitish");
    int x;
    printf("\nEnter Number = ");
    scanf("%d",&x);
    if(x%3==0&&x%5==0){
        printf("yes number is divigibal by 3 and 5 ");
    }
    else{
        printf("No number is not divigibal by 3 and 5 ");
    }

}