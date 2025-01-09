#include  <stdio.h>

int main(){
	int a = 0 ;
	int b = 1 ;
	int r = 0;
	for(int i = 0 ; i<5 ; ++i ){ 
		printf("%d\n" ,r );
		a = b;
		b = r;

		r =  a + b ;
       }
	printf("%d",r);
	return 0 ;
}
// 0 + 1 = 1 , 1 +  
