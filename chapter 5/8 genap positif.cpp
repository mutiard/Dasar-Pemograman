#include <stdio.h>

int main ()
{
	int N;
	scanf ("%d", &N);
	if (N>0 && N<=100000 && N%2==0)
		{
			printf ("%d\n", N);
		}
	else if (N>=(-100000) && N<0)
	{
		printf ("", N);
	}
	return (0);
}
