//Denomination of currency
#include <stdio.h>
void main() {
	int i , n , bal;
	char currency[100][100] = {"one" , "two" , "five" , "ten" , "twenty" , "fifty" , "hundred"
	, "two hundred" , "five hundred" , "two thousand"};
	
	
	printf("Enter the amount : \n");
	scanf("%d" , &n);
	
	int twoThousandC = 0 , fiveHundredC = 0, twoHundredC=0 , hundredC =0, fiftyC =0, twentyC =0, tenC =0, fiveC =0;
	
	bal = n;
	
	
	for (i = 1; i < 20; i++) {
		int twoThousand = bal/2000 , fiveHundred = bal/500 , twoHundred = bal/200 , hundred = bal/100 , fifty = bal/50 , twenty = bal/20, ten = bal/10, five = bal/5;
		if(twoThousand) {
			twoThousandC++;
			bal = bal - 2000;
		}
		if(fiveHundred) {
			fiveHundredC++;
			bal -= 500;
		}
		if(twoHundred) {
			twoHundredC++;
			bal -= 200;
		}
		if(hundred) {
			hundredC++;
			bal -= 100;
		}
		if(fifty) {
			fiftyC++;
			bal -= 50;
		}
		if(twenty) {
			twentyC++;
			bal -= 20;
		}
		if(ten) {
			tenC++;
			bal -= 10;
		}
		if(five) {
			fiveC++;
			bal -= 5;
		}
		
	}
	
	printf("Two thousand currencies: %d\n" , twoThousandC);
	printf("Five hundred currencies: %d\n" , fiveHundredC);
	printf("Two hundred currencies: %d\n" , twoHundredC);
	printf("Hundred currencies: %d\n" , hundredC);
	printf("Fifty currencies: %d\n" , fiftyC);
}
