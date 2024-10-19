#include <stdio.h>
struct Book{
    int book_id ;
    char *book_title;
    char *book_author_name;
    int book_price;
};

void printBookDetails(struct Book c1){
    printf("The book name is %s\n",c1.book_title);
    printf("The book id is %d\n",c1.book_id);
    printf("The book author name is %s\n",c1.book_author_name);
    printf("The book price is %d\n",c1.book_price);
}

int main(){
struct Book c1;
c1.book_title = "LIFE OF PIE";
c1.book_id = 34;
c1.book_price = 40000;
c1.book_author_name = "shubhang";

printBookDetails(c1);

return 0;
}
