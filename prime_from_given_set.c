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
