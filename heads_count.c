/*

	This program includes the creation of a function where it should return the probability of getting 
	exactly 'R' heads on 'N' successive tosses of a fair coin.
	
	This is a simple program if the logic is known...
	
			 	      N! 
		RESULT =   -------------------------
				(R)! * (N-R)!

*/

#include <stdio.h>
#include <math.h>

int fact(int n){
	int i,val=1;
	for(i=2;i<=n;i++){
		val*=i;
	}
	return val;
}

double count_heads(int N,int R){
	double output;
	output = fact(N) / (fact(R) * fact(N-R));
	output = output / pow(2,N);
	return output;
}

int main(){
	int n,r;
	double prob;
	scanf("%d",&n);
	scanf("%d",&r);
	prob=count_heads(n,r);
	printf("%.6f",prob);
	return 0;
	
}
