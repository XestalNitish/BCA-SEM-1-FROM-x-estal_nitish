#include<stdio.h>
int main(){
    printf("i,m\n   Nitish");
    int a,p,l,b;
    printf("\nEnter length of rectangle = ");
    scanf("%d",&l);
    printf("Enter Width of rectangle = ");
    scanf("%d",&b);
    a = l*b;
    p= 2*(l+b);
    if(a<p){
        printf("pariniter grater then area");
    }
    if(a>p){
        printf("area grater then parimiter");
    }
    if(a==p){
        printf("area and parimiter is equle");
    }
    
    return 0;
}