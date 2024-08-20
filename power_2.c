/*

	This program tells whether the given number is a power of 2 or not

*/


#include <math.h>
#include <stdio.h>

int two(int n){
	int i;
	for( i=0 ; i<=n ; i++ ){
		if( pow(2,i) == n) return 1;  // if the power value and given value equals, TRUE!
		if( pow(2,i) > n) return 0;   // if the power value exceeds the given value, FALSE!
	}
}

int main(){
	long long int n;
	scanf("%lld",&n);
	
	if(two(n)) printf("yes");
	else printf("no");
	
	return 0;
}
