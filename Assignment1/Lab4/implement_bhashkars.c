#include <stdio.h>
#include <math.h>
int main() {
	double a, b, c, D,X1,X2;
	printf("a= ");
    scanf("%lf",&a);
    printf("b= ");
      scanf("%lf",&b);
    printf("c= ");
      scanf("%lf",&c);
	D = (b*b) - (4*(a)*(c));

    if(D > 0 && a != 0) {

		D = sqrt(D);
		X1 = (-b + D)/(2*a);
		X2 = (-b - D)/(2*a);

	}
	else
	 {
		printf("Root not Found");
	}

	printf("Root1 = %lf\n",X1);
    printf("Root2 = %lf\n",X2);

	return 0;
}
