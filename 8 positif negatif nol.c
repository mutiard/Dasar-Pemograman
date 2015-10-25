#include <stdio.h>
#include <stdlib.h>

int main(){
	int N;
	scanf("%d", &N);
	if (N>0 && N<=100000)
		printf("positif\n",N);
	else if (N<0 && N>=(-100000))
		printf("negatif\n",N);
	else if (N==0)
		printf("nol\n",N);
	return (0);
}

