#include <stdio.h>
void main() {
	//A program to append two arrays
	int m , n , i;
	printf("Enter the size of array A: \n");
	scanf("%d" , &m);
	int A[m];
	printf("Enter the elements of array A: \n");
	for (i=0; i < m ; i++) scanf("%d" , &A[i]);
	
	printf("Enter the size of the array B: \n");
	scanf("%d" , &n);
	int B[n] , C[m+n];
	printf("Enter the elemnts of array B:\n");
	for (i = 0; i < n; i++) scanf("%d" , &B[i]);
	
	for (i = 0; i<= n; i++) C[i] = A[i];
	for (i = 0; i <= n; i++) C[m+i] = B[i];
	
	printf("Appended array is : ");
	for (i = 0; i < m+n ; i++) printf("%d " , C[i]);
}
