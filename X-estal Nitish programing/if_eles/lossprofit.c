#include<stdio.h>
int main(){
    printf("i,m \n  Nitish");
    int sp,cp;
    printf("\nEnter the cost prise = ");
    scanf("%d",&cp);
    printf("\n Enter the selling prise = ");
    scanf("%d",&sp);
    if(cp>sp){
        printf("loss");
    }
    if(cp<sp){
        printf("profit");
    }
    if(cp==sp){
        printf("no loss | no profit");
    }
    return 0;
}