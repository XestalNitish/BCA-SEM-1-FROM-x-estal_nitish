#include<stdio.h>
int main(){
    float princpal,rate,time;
    printf("princpal = ");
    scanf("%f",&princpal);
    printf("Rate = ");
    scanf("%f",&rate);
    printf("Time = ");
    scanf("%f",&time);
    float si = (princpal*rate*time)/100;
    printf("Si =  %f",si);
    return 0;
}