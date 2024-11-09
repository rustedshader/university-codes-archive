/* Gets how many positive negative and zero are there in the code ! */
#include <stdio.h>
#include <stdlib.h> /*  Used for fgets and strtol */

int main(){
    int user_is_done = 1;
    const int N = 1e5+10;
    int numbers_arr[N];
    int numbers_arr_index = 0;
    int positive = 0;
    int negative = 0;
    int zeroes = 0;
    printf("Enter numeric digits !\n");
    printf("Use q or Q to stop entering the values !\n\n");

    while(user_is_done != 0){
        char arr[N] ;
        char *endptr;
        printf("Enter Value: ");
        fgets(arr, N, stdin); /* fgets, gets – get a line from a stream */
        if (arr[0] == 'q' || arr[0] == 'Q'){
            user_is_done = 0;
            break;
        }

        /*
        We can use atoi here but strtol helps us check for whether the input is integer or not!
        hmm i think we can use atoi to get working like this have to check later ~~~
        */
        /*
        The strtol() function converts the string in str to a long value.
        The string may begin with an arbitrary amount of white space (as determined by isspace(3)) followed by a single optional ‘+’
        or ‘-’ sign.  If base is zero or 16, the string may then include a “0x” prefix, and the number will be read in base 16;
        otherwise, a zero base is taken as 10 (decimal) unless the next character is ‘0’, in which case it is taken as 8 (octal).

        The remainder of the string is converted to a long, long long, intmax_t or quad_t value in the obvious manner, stopping at the
        first character which is not a valid digit in the given base.  (In bases above 10, the letter ‘A’ in either upper or lower
        case represents 10, ‘B’ represents 11, and so forth, with ‘Z’ representing 35.)

        We used this for check --->>>> If endptr is not NULL, strtol() stores the address of the first invalid character in *endptr.  If there were no digits at all,
        however, strtol() stores the original value of str in *endptr.  (Thus, if *str is not ‘\0’ but **endptr is ‘\0’ on return, the
        entire string was valid.)
        */

        int y  = strtol(arr, &endptr, 10);
        if(endptr == arr){
            printf("Not an integer !\n");
        }
        else{
        numbers_arr[numbers_arr_index]  = y;
        numbers_arr_index++;
        }
    }

    for (int i =0 ; i <= numbers_arr_index ; i++){
        if (numbers_arr[i] > 0){
           positive += 1;
        }
        if (numbers_arr[i] < 0){
           negative += 1;
        }
        if (numbers_arr[i] == 0){
           zeroes += 1;
        }
    }
    printf("Number of positive integer are : %d\n",positive);
    printf("Number of negative integer are : %d\n",negative);
    /*Well at last the 0 is coming because i think after entering q\n is taken output as 0 from strtol but i break the statemnt still
    not sure just adding -1 to zeroes for mean while ~~~*/
    printf("Number of zeroes integer are : %d\n",zeroes-1);
    return 0;
}

/* The fgets() function reads at most one less than the number of characters specified by size from the given stream and stores
     them in the string str.  Reading stops when a newline character is found, at end-of-file or error.  The newline, if any, is
     retained.  If any characters are read and there is no error, a ‘\0’ character is appended to end the string.

     The gets() function is equivalent to fgets() with an infinite size and a stream of stdin, except that the newline character
     (if any) is not stored in the string.  It is the caller's responsibility to ensure that the input line, if any, is
     sufficiently short to fit in the string. */
