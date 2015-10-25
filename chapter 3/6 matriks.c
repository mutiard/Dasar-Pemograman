#include <stdio.h>

int main ()
{
	int a, b, c, d, e, f, g, h, i;
	scanf ("%d %d %d\n%d %d %d\n%d %d %d", &a, &b, &c, &d, &e, &f, &g, &h, &i);
	if (a>=1 && a<=100 && b>=1 && b<=100 && c>=1 && c<=100 && d>=1 && d<=100 && e>=1 && e<=100 && f>=1 && f<=100 && g>=1 && g<=100 && h>=1 && h<=100 && i>=1 && i<=100)
	printf ("%d %d %d\n%d %d %d\n%d %d %d\n", a, d, g, b, e, h, c, f, i);
	return (0);
}
