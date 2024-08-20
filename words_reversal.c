/*
	This program is all about reversing the order of words in a given sentence (string).
	Reversal of a string is easy, but this is quite interesting!!!
*/


#include <stdio.h>
#include <string.h>

int main(){
	char str[100];
	int i;
	scanf("%[^\n]s",&str);
	
	int len = strlen(str);
	
	int start = 0;
	int end = len - 1;
	
	while(start < end){					// reversing the string as a whole...
		char temp = str[start];
		str[start] = str[end];
		str[end] = temp;
		start++;
		end--;
	}
	
	start = 0;
	
	for(i=0;i<=len;i++){					
		if(str[i]==' ' || str[i]=='\0'){	// when a space (" ") or null ("\0") character is found,
			int wordstart = start;			
			int wordend = i-1;				// the previous character becomes the end of word/sentence
			
			while(wordstart < wordend){
				char temp = str[wordstart];
				str[wordstart] = str[wordend];
				str[wordend] = temp;
				wordstart++;
				wordend--;
			}
			start = i+1;					// updating the start as the character that is next to the space character
		}
	}
	
	printf("%s",str);						// print the string/sentence
	return 0;
}
