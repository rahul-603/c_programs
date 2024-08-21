#include <stdio.h>
#include <string.h>

int ispangram( char *str ){
    int ascii[256] = {0};
    int length = strlen(str);
    int i;
    for( i = 0 ; i < length ; i++ ){
        if( str[i] >= 'A' && str[i] <= 'Z' ){
            str[i] += 32;
        }
        ascii[str[i]]++;
    }
    
    for( i = 97 ; i < 122 ; i++ ){
        if( ascii[i] == 0 ) return 0;
    }
    
    return 1;
}

int main() {
    
    char str[100];
    scanf("%[^\n]s", &str);
    
    if(ispangram(str)) printf("YES");
    else printf("NO");
    
    return 0;
}
