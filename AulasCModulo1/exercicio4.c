#include <math.h>
#include <stdio.h>
int main() {
	double xPosi, xNega, delta, a, b, c;
	

	a= 1;
	b= 8;
	c= -9;

	delta = (b * b) - (4 * a * c);
	
	xPosi = (-b + sqrt(delta)) / (2*a);
    xNega = (-b - sqrt(delta)) / (2*a);
    
    printf("Valor positivo (x1): %.0f\n", xPosi);
    printf("Valor negativo (x2): %.0f\n", xNega);
    
    return 0;
}