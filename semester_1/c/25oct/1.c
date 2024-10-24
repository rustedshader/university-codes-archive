#include <stdio.h>

union hostel_details{
    char *name;
    char *home_adress;
    char *hostel_adress;
    char *city;
    char *state;
    char *zip;
};

int main(){
    union hostel_details x;
    x.hostel_adress = "UPES Kandoli\n";
    printf("My present adress is %s", x.hostel_adress);
    return 0;

}
