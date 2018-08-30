#include <stdio.h>

int main(void) {
	double usDollars, britishPounds, jpy, netDollars;

		printf("Enter amount of US Dollars/n");
		scanf("%lf",&usDollars);
		
    netDollars = 0.9 * usDollars;
		jpy = 0.5 * netDollars * 76.8;
		britishPounds = netDollars * 0.5 * 0.6;
		
    printf(" You get %f Japenese JPY and %f Britsh Pounds ", jpy, britishPounds);
	
  return 0;
	}