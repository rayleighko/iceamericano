#include <stdio.h>

void binsearch(int n, const int S[], int x, int& location);

const int S[8] = {10, 9, 20, 30, 40, 50, 10, 20};

int main(void)
{
	int location;

	for(int i = 0; i < 8; i++)
		printf("%d", S[i]);
	
	putchar('\n');
	
	binsearch(8, S, 30, location);
	
	for(int i = 0; i < 8; i++)
		printf("%d", S[i]);
	
	putchar('\n');

	printf("%d",location);
}

void binsearch(int n, const int S[], int x, int& location)
{
	int low, mid, high;
	low = 0; high = n - 1;
	location = 0;

	while(low <= high && location == 0)
	{
		mid = (low + high) / 2;
	
		if(x == S[mid]) location = mid;
		else if(x < S[mid]) high = mid - 1;
		else low = mid + 1;
	}
}

