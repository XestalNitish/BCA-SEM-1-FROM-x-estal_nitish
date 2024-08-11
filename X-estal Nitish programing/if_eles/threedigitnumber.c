#include<stdio.h>
int main(){
    printf("i,m \n   Nitish");
    int x;
    printf("\n Enter the number = ");
    scanf("%d",&x);
    if(x>99&&x<1000){
        printf("this is three digit no");
    }
    else{
        printf("this is not three digit no ");
    }
    return 0;
}