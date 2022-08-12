#include<stdio.h>
int main(){
	char str[20] ,rev[20];
	printf("Enter a word to check whether it is palindrome: ");
	scanf("%s" , &str);
	strcpy(rev , strrev(str));
	//printf("\n%s\n" , rev);
	if (rev == str) {
		printf("%s is palindrome\n" , str);
	}else {
		printf("%s is not palindrome \n" , str);
	}
}
	
//rev == str not palindrome
//strrev(str) == str  palindrome
	
