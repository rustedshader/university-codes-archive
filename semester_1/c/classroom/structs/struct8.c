#include <stdio.h>

// struct abc{
//     int x;
//     int y;
// };
// /* -> */
// int main(){
//     struct abc a = {0,1};
//     struct abc *ptr = &a;
//     printf("%d %d",ptr->x,ptr->y);
//     return 0;
// }


struct student{
    char *name;
};

struct student s;

struct student fun(void){
    s.name = "newton";
    printf("%s\n",s.name);
    s.name = "alan";
    return s;
}

int main(){
    struct student m = fun();
    printf("%s\n",m.name);
    m.name = "turing";
    printf("%s\n",s.name);
}
