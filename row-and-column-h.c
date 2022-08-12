//Find the row and column total 
#include <stdio.h>
void main() {
	static int array[10][10];
	int i,j,m,n, sum = 0;
	printf("Enter the order of matrix\n");
	scanf("%d %d" , &m , &n);
	printf("Enter the coeffiecient of matrix: ");
	
	for (i=0; i<m; ++i) {
		for (j = 0; j < n; ++j) {
			scanf("%d" , &array[i][j]);
		}
	}
	for(i=0;i <m; ++i) {
		for(j=0; j< n; ++j) {
			sum += array[i][j];
		}
		printf("Sum of the %d row is = %d\n" , i , sum);
		sum = 0;
	}
}
