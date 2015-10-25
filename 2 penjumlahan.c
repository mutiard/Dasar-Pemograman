#include <stdio.h>
#include <math.h>

int main()
{
	int A,B,C;
	scanf ("%d%d", &A, &B); 
	C=A+B;
	if (A>=1 && A<=100 && B>=1 && B<=100)
	{
		printf ("%d\n", C);
	}
	return (0);
}
