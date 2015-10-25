#include <stdio.h>

int main ()
{
	int N;
	scanf ("%d", &N);
	if (N>0 && N<=100000)
		{
			printf ("%d\n", N);
		}
	else if (N>=(-100000) && N<0)
	{
		printf ("\n", N);
	}
	return (0);
}
