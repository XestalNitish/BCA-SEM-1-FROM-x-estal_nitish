#include<stdio.h>
int main(){
    printf("i,m\n   Nitish");
    int x;
    printf("\nenter ther number = ");
    scanf("%d",&x);
    if(x%3==0||x%5==0){
        printf("yes number is divisibal by 3 or 5");
    }
    else{
        printf("No number is not divisibal by 3 or 5");
    }
    return 0;
}