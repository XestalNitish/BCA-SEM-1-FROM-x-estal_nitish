#include<stdio.h>
int main(){
    int a,b;
    printf("Enter the 1st no = ");
    scanf("%d",&a);
    printf("Enter the 2nd no = ");
    scanf("%d",&b);
    int q = a/b;
    int r = a-(b*q);
    printf("your reminder is = %d",r);
    return 0;
}