#include <stdio.h> 
#include <math.h>

float get_using_leftmost(float * p) {
	return 1+*p+*p+*p+*p+*p+*p+*p+*p+*p+*p+*p;
}

float get_using_rightmost(float * p) {
	return ((((((((((1+*p)+*p)+*p)+*p)+*p)+*p)+*p)+*p)+*p)+*p);
}

int main() {
	float p = pow(10, -7);
	printf("We are currently adding to one the number: %f\n", p);
	printf("The first number came to: %f\n", get_using_leftmost(&p));
	printf("The second number came to: %f\n", get_using_rightmost(&p));
}
