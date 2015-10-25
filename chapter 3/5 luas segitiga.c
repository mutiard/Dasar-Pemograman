#include <stdio.h>

int main()
{
	float A, T, luassegitiga;
	scanf ("%f%f",&A, &T);
	luassegitiga = 0.5*A*T;
	if (A>=1 && A<=1000 && T>=1 && T<=1000 )
	printf("%.2f\n", luassegitiga);
}
