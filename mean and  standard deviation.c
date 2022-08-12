#include <stdio.h>
#include <math.h>
int main() {
	float x[50]; 
	int n, i;
	float sum=0.0, mean ,sd;
	printf("Enter the number of elements: \n");
	scanf("%d" , &n);
	printf("Enter the numbers: \n");
	for (i=0; i < n; i++) {
		scanf("%d" , &n);
		
		for (i=0; i< n; i++) {
			sum += x[i];
			
		}
		
	}
	mean = sum/n;2
		for (i=0; i<n; i++) {
			sum += (x[i] - mean) * (x[i] - mean);
			sd = sqrt(sum/n);
		}
		printf("mean = %6.3f \n" , mean);
		printf("Standard deviation: %6.3f \n" , sd);
}
