/* 1 -> compile time error */
// #include<stdio.h>
// struct p
// {
//     int k;
//     char c;
//     float f;
// };
// int p=10;
// int main()
// {
//     struct p x = {1,97};
//     printf("%d\n",x,f,p);

// }
//




// #include <stdio.h>

//     struct {
//         int k ;
//         char c;
//     };

//     int main(){
//         struct p ;
//         p.k = 10;
//         printf("%d\n",p.k);
//     }
/* 2-> compile time error p undeclared ! */
/* structure name was not defined ! */




/* 3 -> compile time error ! */

// #include <stdio.h>

// struct p {
//     int k ;
//     char c;
//     float f;
// };

// int p = 10;

// int main(){
//     struct p x = {1,97};
//     printf("%f %d\n",x.f,p);
// }

/* 4 -> b */


// #include <stdio.h>
// struct p
// {
//     int k;
//     char c;
//     float f;
// };
// int main()
// {
//     struct p x = {.c=97,.f=3,.k=1};
//     printf("%f\n",x.f);

// }

/* 5  -> a (3.0000) */

// 1 Question
/*
#include<stdio.h>
struct
{
    int k;
    char c;

}p;
int q=10;
int main()
{
    p.k=10;
    printf("%d%d\n",p.k,q);
}
 */

//error- p was defined twice earlier
//error of re-reference
//later we replaced int p by q


/* Question 2
#include<stdio.h>
struct z
{
    int k;
    char c;

};

int main()
{
    struct z p;
    p.k=10;
    printf("%d\n",p.k);
}

*/

//structure name was not defined
//we first defined structure name as z


/* Question 3
#include<stdio.h>
void main()
{
    struct student
    {
        int no;
        char name[20];
    };
    struct student s;
    s.no=8;
    printf("%d",s.no);
}
 */
//a dot operator will be used- .s



/* Question 4
#include<stdio.h>
struct p
{
    int k;
    char c;
    float f;
};
int q = 10;
int main(){
    struct p x = {1,97};
    printf("%f %d\n",x.f,q);
}

*/

//we to redefine struct p as integer p which caused error


//5 -> a
