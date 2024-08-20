/*

	This program is all about converting a float number to a mixed number...
	For that, we need to obtain the remainder, quotient and of course, gcd!
	
	
	           255
	25.5 =    -----   =	  quot = 25 ; rem = 5
			   10

									(remainder)                   5
	So, mixed number => (divisor) ----------------  => here,  25 ---
									(quotient)					 10
	
	
*/

#include <stdio.h>

int main(){
	float num;
	int i,rem,quot,divisor,dividend,gcd;
	
	scanf("%f",&num);
	
	dividend= num * 100;
	divisor=100;
	
	for(i=1;i<=dividend && i<= divisor;i++){
		if(divisor%i==0 && dividend%i==0){
			gcd=i;
		}
	}
	
	dividend/=gcd;
	divisor/=gcd;
	quot=dividend/divisor;
	rem=dividend%divisor;
	
	printf("%d %d/%d",quot,rem,divisor);
	
}
