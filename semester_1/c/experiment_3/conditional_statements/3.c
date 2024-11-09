/* Check if three points are colinear or not ! */

#include <stdio.h>

int main(){
    float x1,x2,x3,y1,y2,y3;
    printf("Enter x1\n-> ");
    scanf("%f",&x1);
    printf("Enter y1\n-> ");
    scanf("%f",&y1);
    printf("Enter x2\n-> ");
    scanf("%f",&x2);
    printf("Enter y2\n-> ");
    scanf("%f",&y2);
    printf("Enter x3\n-> ");
    scanf("%f",&x3);
    printf("Enter y3\n-> ");
    scanf("%f",&y3);

    /*
        x1 y1 1
        x2 y2 1
        x3 y3 1
    */

    if (x1 * (y2 - y3) - y1 * (x2 - x3) + 1 * (x2*y3 - x3*y2) == 0 ){
        printf("The points are colinear \n");
    }
    else{
        printf("The points are NOT colinear \n");
    }
}
