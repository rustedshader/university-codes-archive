#include <stdio.h>

int main(){
    int choice;
    int a,b;
    printf("Choose the following \n (1) Addition \n (2) Subraction \n (3) Division \n (4) Multiplication \n -> ");
    scanf("%d",&choice);
    printf("Enter Value of First digit ! \n -> ");
    scanf("%d",&a);
    printf("Enter Value of Second digit ! \n -> ");
    scanf("%d",&b);
    switch(choice){
        case 1:
            printf("\nYour Answer is -> %d\n",a+b);
            break;
        case 2:
            printf("\nYour Answer is -> %d\n",a-b);
            break;
        case 3:
            printf("\nYour Answer is -> %d\n",a/b);
            break;
        case 4:
            printf("\nYour Answer is -> %d\n",a*b);
            break;
        default:
            printf("\n-> Invalid Input !\n");
            break;
    }
    return 0;
}
