#include <stdio.h>
#include <stdlib.h>

int main(){
	int N;
	scanf("%d", &N);
	if (N>=1 && N<10)
		printf("satuan\n",N);
	else if (N>=10 && N<100)
		printf("puluhan\n",N);
	else if (N>=100 && N<1000)
		printf("ratusan\n",N);
	else if (N>=1000 && N<10000)
		printf("ribuan\n",N);
	else if (N>=10000 && N<100000)
		printf("puluh ribuan",N);
	return (0);
}

