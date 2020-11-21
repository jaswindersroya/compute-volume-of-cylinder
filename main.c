#include <stdio.h>
//WAP to calculate volume of cylinder
//formula: vol = 3.24 * r * r * h
int main(){
    
    //declare variables
    float r, h, vol;
    const float pi = 3.14;
    
    //think about vaiables n memory
    //user variable input
    printf("calculate volume of cylinder : \n");
    printf("---------------------------------\n");
    printf("enter the radios of cylinder : ");
    scanf("%f",&r);
    printf("enter the height of cylinder : ");
    scanf("%f",&h);
    printf("\n--------------------------------");
    //calculate volume
    vol = pi * r * r * h;
    //display result
    printf("\nvolume of cylinder is %f",vol);
    
}