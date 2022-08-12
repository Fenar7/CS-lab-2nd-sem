#include<stdio.h>

int main()
{
	int i,j=0,m=0;
	char orgname[50],abbr[10];
	
	printf("Enter the organisation Name:");
	gets(orgname);
	for(i=0;strlen(orgname);i++)
	{	abbr[i]=orgname[j];
	if(orgname[i]=="")
	{
		m=m+1;
			j=i;
		abbr[m]=orgname[j];
		j++;
	}
}
	abbr[m+1]='/0';
	printf("\nTHE ABBREVIATION IS\n");
	puts(abbr);
	getch();
	return 0;
	
}
