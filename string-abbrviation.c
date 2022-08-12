#include <stdio.h>
void main() {
	int i , j=0;
	char str[20];
	char str2[20];
	
	printf("Enter a sentence: \n");
	gets(str);
	
	
	str2[j] = str[0];
	j++;
	for (i = 0; str[i] != '\0'dd; i++) {
		if(str[i] == " ") {
			str2[j] = str[i+1];
			j++;
		}
	}
	printf("Abbreviation is : %s" , str2);

}
