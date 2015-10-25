#include <stdio.h>
#include <stdlib.h>

int main()
{
	int N, M, A, B;
	scanf ("%d%d", &N, &M);
	A=N/M; B=N%M;
	if (N>=1 && N<=100000 && M>=1 && M<=100000)
	printf ("masing-masing %d\nbersisa %d\n", A, B);
	return (0);
}

