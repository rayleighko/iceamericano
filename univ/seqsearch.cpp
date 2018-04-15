#include <stdio.h>

void seqsearch(int n, const int S[], int x, int& location);

const int S[8] = {10, 9, 20, 30, 40, 50, 10, 20};

int main(void){
	int location;

	for(int i = 0; i < 8; i++)
		printf("%d", S[i]);
	
	putchar('\n');
	
	seqsearch(8, S, 20, location);

	for(int i = 0; i < 8; i++)
		printf("%d", S[i]);
	
	putchar('\n');

	printf("%d", location);

		return 0;
}

void seqsearch(int n, const int S[], int x, int& location)
{
	location = 0;

	while(location < n && S[location] != x)
		location++;
	if(location > n)
		location = 0;
}
