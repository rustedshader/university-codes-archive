/* Calculating the BMI of the person ! */

#include <stdio.h>

int main(){
    float w,h;
    printf("** CALCULATING BMI **\n");
    printf("Enter Your Weight (kgs)\n-> ");
    scanf("%f",&w);
    printf("Enter Your Height (mts)\n-> ");
    scanf("%f",&h);
    double bmi = w/(h*h);
    if(bmi<=15){
        printf("BMI is: %.2lf which lies under Starvation !\n",bmi);
    }
    if(bmi <= 17.5 && bmi > 15){
        printf("BMI is: %.2lf which lies under Anorexic !\n",bmi);
    }
    if(bmi<=18.5 && bmi >17.5){
        printf("BMI is: %.2lf which lies under Underweight !\n",bmi);
    }
    if(bmi<=24.9 && bmi >18.5){
        printf("BMI is: %.2lf which lies under Ideal !\n",bmi);
    }
    if(bmi<=25.9 && bmi >24.9){
        printf("BMI is: %.2lf which lies under Overweight !\n",bmi);
    }
    if(bmi<=39.9 && bmi >25.9){
        printf("BMI is: %.2lf which lies under Obese !\n",bmi);
    }
    if(bmi >39.9){
        printf("BMI is: %.2lf which lies under Morbidity Obsese !\n",bmi);
    }
    return 0;
}
