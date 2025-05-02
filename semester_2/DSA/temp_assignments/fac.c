#include <stdio.h>

int fac(int num){
	if (num == 0 ){
		return 1;
	}

	return num * fac(num-1);
}

int main(){
printf("%d\n",fac(5));
	return 0;
}
