#include <stdio.h>
#include <stdlib.h>
#include <pthread.h>
#include <unistd.h>

double areaTrapezio(double dx, double h1, double h2){
	double area;
	area = dx*(h1+h2)/2;

	return area;
}

double funcCalc (double x) {
	return (4/(1+x*x));
}

double calculaArea(double a, double b, double N) {
	int i;
	double area=0.0, dx, x1, x2, f1, f2;
	dx = (b-a)/N;
	for(i=0; i<N; i++){
		x1 = a + dx * i;
		x2 = a + dx * (i+1);
		f1 = funcCalc(x1);
		f2 = funcCalc(x2);
		area += areaTrapezio(dx, f1, f2);
	}
	return area;
}

int main(int argc, char **argv) {
	double a=0.0, b=1.0, area;
	double n=5000000;

	area = calculaArea(a, b, n);
	printf("A area da curva e:\n%.12lf\n", area);
	return 0;
}
