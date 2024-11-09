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
    x.hostel_adress = "UPES Kandoli";
    printf("My present adress is: %s", x.hostel_adress);
    x.zip = "248007";
    printf(" %s", x.zip);
    x.city = "Dehradun";
    printf(" %s" , x.city);
    x.state = "Uttrakhand";
    printf(" %s\n",x.state);
    return 0;

}
