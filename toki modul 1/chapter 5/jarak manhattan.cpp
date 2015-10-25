#include <stdio.h>
#include <math.h>

int main ()
{
	int x1, x2, y1, y2, jarakManhattan;
	scanf ("%d%d%d%d", &x1, &x2, &y1, &y2);
	jarakManhattan=((abs(x1-x2))+(abs(y1-y2)));
	if (x1>=(-100000) && x1<=100000 && x2>=(-100000) && x2<=100000 && y1>=(-100000) && y1<=100000 && y2>=(-100000) && y2<=100000)
	printf ("%d\n", jarakManhattan);
	return (0);
}
