
 * //Author: Justin Ernst
 *
 * This program prompts the user to enter the
 * base and the height of a triangle and computes
 * its area using the well-known formula
 *
 * 0.5 * base * height
 *
 */

#include<stdlib.h>
#include<stdio.h>

int main(int argc, char **argv) {

  double base;

        printf("Please enter the base of a triangle: ");

  scanf("%lf", &base);
  
  double height;

		printf("Please enter the height of a triangle: ");

  scanf("%lf", &height);
  

  double area = 0.5 * base * height;

        printf("The area is %f square units.\n", area);

    return 0;
}

