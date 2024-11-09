#include <stdio.h>
#include <stdlib.h>


int main(){
int *ptr;
    int n  ;

    printf("Enter the n\n: ");
    scanf("%d", &n);

    


    ptr  = (int*)malloc(n * sizeof(int));
    if (ptr == NULL){
        printf("Memory not allocated");
        exit(0);
    }
    else{
        printf("Memory successfully allocated using malloc\n");
        for (int i = 0 ; i < n ; i++)
{
            ptr[i] = i + 1 ;
        }


        printf("The elements of the array are\n" );
        for (int i = 0 ; i< n ; i++ )

{
        printf("%d\n",ptr[i]);

        }

}

    return 0;
}


