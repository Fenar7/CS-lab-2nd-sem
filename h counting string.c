#include <stdio.h>
void main() {
	//count the number of vowols  in the given string
	char vowels[20] , str[20];
	int v=0 , i;
	
	printf("Enter a word to  count the vowels: \n");
	scanf("%s" , &str);
	
	for (i=0; i< strlen(str); i++) {
		if('a' == str[i] || 'e' == str[i] || 'i' == str[i] || 'o' == str[i] || 'u' == str[i]) {
			v++;
		}
	}
	printf("The number of vowels in the word %s is %d\n" , str , v); 
}

