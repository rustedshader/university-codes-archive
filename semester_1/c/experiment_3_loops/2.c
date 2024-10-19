/* Checks if the triangle is valid or not and check triangle type */
/*  Takes sides of triangle as input */

#include <stdio.h>

int main(){
    int a,b,c;
    printf("Enter the sides of triangle one by one !");
    printf("\n-> ");
    scanf("%d",&a);
    printf("-> ");
    scanf("%d",&b);
    printf("-> ");
    scanf("%d",&c);

    if (a == b && b==c && c==a){
        printf("The triangle is equilateral\n");
    }
    else if (a==b && a != c || b==c && b!=a || c==a && c!=b){
        printf("The triangle is a iscoleses triangle !\n");
    }
    else if(a*a + b*b == c*c || c*c + b*b == a*a || a*a + c*c == b*b){
        printf("The triangle is right angle triangle !\n");
    }
    else{
    printf("The triangle is scalene !\n");
    }
    return 0;
}
