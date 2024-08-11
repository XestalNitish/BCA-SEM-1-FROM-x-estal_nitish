#include<stdio.h>
int main(){
    printf("i,m\n  Nitish");
    int ram,shyam,ajay;
    printf("\n Enter the age of ram = ");
    scanf("%d",&ram);
    printf("Enter the age of shyam = ");
    scanf("%d",&shyam);
    printf("Enter the age of ajay = ");
    scanf("%d",&ajay);
    if(ram<shyam){
        if(ram<ajay){
            printf("Ram is youngest");
        }
    }
    if(shyam<ram){
        if(shyam<ajay){
            printf("Shyam is youngest");
        }

    }
    if(ajay<ram){
        if(ajay<shyam){
            printf("Ajay is youngest");
        }
    }
    return 0;
}