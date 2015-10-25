#include <stdio.h>
#include <stdlib.h>

int main()
{
	int M,N,A,B;
	printf ("banyak bebek:\n"); scanf ("%d", &M);
	printf ("jumlah teman pak dekleng:\n"); scanf ("%d", &N);
	A=M/N; B=M%N;
	if (M>=1 && M<=100000 && N>=1 && N<=100000)
	printf ("masing-masing %d", A);
	printf ("sisa %d", B);
	return (0);
}

