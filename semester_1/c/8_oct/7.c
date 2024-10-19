#include <stdio.h>
struct Book{
    char title[100];
    char author[100];
    int price;
};
int main(){
struct Book b[3];
for (int i = 0  ; i<3 ; i++){
    printf("Enter the Book Title of book %i: ",i+1);
    scanf("%s",b[i].title);
    printf("Enter the Book Author of book %i: ",i+1);
    scanf("%s",b[i].author);
    printf("Enter the Book Price of book %i: ",i+1);
    scanf("%d",&b[i].price);
}
int max_price = b[0].price;
int max_index = 0;
int min_price = b[0].price;
int min_index = 0;
for (int i =0 ; i< 3 ; i++){
    if (b[i].price > max_price){
        max_price = b[1].price;
        max_index = i;
    }
    if (b[i].price < min_price){
        min_price = b[i].price;
        min_index = i;
    }
}
printf("The max price is of the book %d\n",max_index+1);
printf("The lowest price is of the book %d\n",min_index+1);
}
