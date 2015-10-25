#include <stdio.h>

int main()
{
	int N, B, C, total=0;
	scanf ("%d", &N);
	for (B=1;B<=N;B++)
	{
		scanf ("%d", &C);
		total = total + C;
	}
	printf ("%d\n", total);
	return 0;
}
