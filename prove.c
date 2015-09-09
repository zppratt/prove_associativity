#include <stdio.h> 
#include <math.h>

float get_using_rightmost(float * p) {
	return 1+*p+*p+*p+*p+*p+*p+*p+*p+*p+*p+*p;
}

float get_using_leftmost(float * p) {
	return ((((((((((1+*p)+*p)+*p)+*p)+*p)+*p)+*p)+*p)+*p)+*p);
}

int main() {
	float p = pow(10, -7);
	float rightmost = get_using_rightmost(&p);
	float leftmost = get_using_leftmost(&p);
	printf("We are currently adding to one the number: %.20f\n", p);
	printf("Addition using rightmost associativity came to: %.20f\n", rightmost);
	printf("Addition using leftmost associativity came to: %.20f\n", leftmost);
	if (leftmost != rightmost) {
		printf("\nCongratulations! The results are not the same!\n\n");
	} else {
		printf("The results are the same.\n");
	}
}
