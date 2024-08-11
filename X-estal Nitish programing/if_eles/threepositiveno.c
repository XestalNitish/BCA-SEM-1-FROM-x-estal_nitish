#include<stdio.h>
int main(){
    printf("i,m\n  Nitish");
    int a,b,c;
    int x;
    printf("\nEnter your 1st no = ");
    scanf("%d",&a);
    printf("Enter your 2nd no = ");
    scanf("%d",&b);
    printf("Enter your 3rd no = ");
    scanf("%d",&c);
    printf("Enter your 4th no = ");
    scanf("%d",&x);
    if(a>b&&a>c&&a>x){
        printf("Your %d number is gratest then %d and %d %d",a,b,c,x);
    }
    if(b>a&&b>c&&b>x){
        printf("Your %d number is gratest then %d and %d %d",b,a,c,x);
    }
    if(c>b&&c>a&&c>x){
        printf("Your %d number is gratest then %d and %d %d",c,a,b,x);
    }
    if(x>a && x>b && x>c){
        printf("Your %d number is gratest then %d and %d %d",x,a,b,c);
    }
    if(a==b&&b==c&&c==a&&c==x&&x==a){
        printf("Your all numbers are equle  %d %d %d %d",a,b,c,x);
    }
    return 0;
}