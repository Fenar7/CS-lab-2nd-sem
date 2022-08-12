/*
       *
	 * * *
   * * * * *
 * * * * * * *
*/

#include <stdio.h>
int main() {
	int i , sp , n , j;
	printf("Enter the number of lines: \n");
	scanf("%d" , &n);
	
	for ( i = 0; i < n; i++) { //number of lines
		for (sp = n + 4 ; sp > i ; sp--) { // number of spaces
			printf(" ");
		}
		
		for (j =0 ; j <= i ; j++) { //displaying '*'
			printf("* ");
		}
		printf("\n");
	}
}
