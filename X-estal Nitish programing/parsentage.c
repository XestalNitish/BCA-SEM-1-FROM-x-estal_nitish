#include <stdio.h>
int main(){
    float m1;
    printf("Enter Number of physics = ");
    scanf("%f",&m1);
    float m2;
    printf("Enter Number of chemistry = ");
    scanf("%f",&m2);
    float m3;
    printf("Enter Number of mathe = ");
    scanf("%f",&m3);
    float m4;
    printf("Enter Number of hindi = ");
    scanf("%f",&m4);
    float m5;
    printf("Enter Number of english = ");
    scanf("%f",&m5);
    float p =(m1+m2+m3+m4+m5)/5;
    printf("persantage of all subjects = %f",p);
    return 0;
}