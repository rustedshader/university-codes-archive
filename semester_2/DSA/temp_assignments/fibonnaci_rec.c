#include <stdio.h>

int fibonnaci(int num){
	if (num == 1 ) {
		return 1;
	}
	if (num == 0){
		return 0;
	}
	return fibonnaci(num-1) + fibonnaci(num-2);
}


int main(){
int x = 5;
	printf("%d",fibonnaci(x));
	return 0;


}
