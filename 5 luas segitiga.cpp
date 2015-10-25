#include <stdio.h>
int main()
{
	float A, T, luassegitiga;
	printf ("masukkan nilai alas?"); scanf ("%f",&A);
	printf ("masukkan nilai tinggi?"); scanf ("%f",&T);
	luassegitiga = 0.5*A*T;
	if (A>=1 && A<=1000 && T>=1 && T<=1000 )
	printf("luassegitiga adalah %.2f", luassegitiga);
}
