#include <stdio.h>
#include <math.h>

int main ()
{
	float N; int F, C;
	scanf ("%f", &N);
	F = floor (N);
	C = ceil (N);
	if (N>=(-100000) && N<=100000)
	printf ("%d %d\n", F, C);
	return (0);
}
