#include <stdio.h>

struct Circle{
    int radius;
};

int main(){
    struct Circle c1;
    printf("Enther the radius of the circle: ");
    scanf("%d",&c1.radius);
    printf("The parameter of the circle is %f and the the are of the circle is : %f", 6.28* c1.radius , 3.14 * (c1.radius * c1.radius));
    return 0;
}
