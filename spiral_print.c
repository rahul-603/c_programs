/*

	This program is printing the given number in a spiral pattern (box)
	
	
	Input : 5
	
	
	5 5 5 5 5 5 5 5 5
	5 4 4 4 4 4 4 4 5
	5 4 3 3 3 3 3 4 5
	5 4 3 2 2 2 3 4 5
	5 4 3 2 1 2 3 4 5
	5 4 3 2 2 2 3 4 5
	5 4 3 3 3 3 3 4 5
	5 4 4 4 4 4 4 4 5
	5 5 5 5 5 5 5 5 5

*/




#include <stdio.h>

int main(void){
	int n,i,j;
	scanf("%d",&n);
	
	for(i=n;i>=1;i--){
		for(j=n;j>=i;j--) printf("%d ",j);
		for(j=1;j<(2*i)-1;j++) printf("%d ",i);
		for(j=i+1;j<=n;j++) printf("%d ",j);
		printf("\n");
	}
	
	for(i=2;i<=n;i++){
		for(j=n;j>=i;j--) printf("%d ",j);
		for(j=1;j<(2*i)-1;j++) printf("%d ",i);
		for(j=i+1;j<=n;j++) printf("%d ",j);
		printf("\n");
	}
	
	return 0;
}
