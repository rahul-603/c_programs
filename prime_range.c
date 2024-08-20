/*

	This program is about printing all the prime numbers within a given set...

*/

#include <stdio.h>

int isprime(int n){
    int count=0,i;
    for(i=1;i<n;i++){
        if(n%i==0) count++;		// if the number is divisible by 'i', count is incremented...
    }
    
    if(count==1) return 1;		// if the count is more than 1, then it is divisible by more than 1 number...
    else return 0;
}

int main() {
    int start,end,i;
    scanf("%d",&start);
    scanf("%d",&end);
    
    for(i=start;i<=end;i++){
        if(isprime(i)) printf("%d ",i);		
    }
    
    return 0;
}
