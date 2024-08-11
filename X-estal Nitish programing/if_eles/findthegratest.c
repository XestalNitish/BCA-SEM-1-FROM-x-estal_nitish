#include<stdio.h>
int main(){
    printf("i,m \n   Nitish");
    int x,b,c;
    printf("\nEnter the 1st no = ");
    scanf("%d",&x);
    printf("Enter the 2nd no = ");
    scanf("%d",&b);
    printf("Enter the 3rd no = ");
    scanf("%d",&c);
    if(x>b){
        if(x>c){
            printf("the gratest number is  %d",x);
        }
    }
    if(b>x){
        if(b>c){
            printf("the gratest no is %d",b);
        }
    }if(c>x){
        if(c>b){
            printf("the gratest number is %d",c);
        }
    }
    return 0;
}