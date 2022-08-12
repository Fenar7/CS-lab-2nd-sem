#include <stdio.h>
#include<conio.h>
int main()
{
	int n,s,r,d;
	printf("Enter a number : ");
	scanf("%d",&n);
	s=r=0;
	while(n!=0){
		d=n%10;
		s +=d;
		r=r*10+d;
		n/=10;
	}
	printf("\n Sum of the numbers = %d",s);
	printf("\n Reverse = %d",r);
	getchar();
	
	
	return 0;
	
}
