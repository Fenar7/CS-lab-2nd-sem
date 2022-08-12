#include <stdio.h>
void main() {
	int a[10][10] , m , i , j ,sum;
	printf("\nEnter order of the square matrix: ");
	scanf("%d" , &m);
	printf("\nEnter the matrix: \n");
	
	for(i=0; i < m; i++) 
		scanf("%d" ,&a[i][j]);
	
	sum = 0;
	for (i = 0; i< m; i++) sum += a[i][i];
	
	printf("\nTrace of the matrix = %d" , sum);
}
