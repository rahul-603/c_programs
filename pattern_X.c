/*

	This program is about printing the given string in cross pattern...
	
	Eg: "RAHUL"
	
	 	R   L
		 A U
		  H
		 A U  
		R   L
*/



#include <stdio.h>
int main(){
	int n,i,j;
	char str[50];
	scanf("%s",&str);
	
	for(n=0;str[n];n++);
	n=n/2+1;
	
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++) printf(" ");
		for(j=0;j<=2*(n-i)+1;j++){
			if(j==0 || j==2*(n-i)) printf("%c",str[i-1+j]);
			else printf(" ");
		}
		printf("\n");
	}
	
	for(i=2;i<=n;i++){
		for(j=1;j<=n-i;j++) printf(" ");
		for(j=1;j<=2*i-1;j++){
			if(j==1 || j==2*i-1) printf("%c",str[n-i-1+j]);
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
