#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void mergesort(int n, int S[]);
void merge(int h, int m, const int U[], const int V[], int S[]);
void mergesort2(int low, int high);
void merge2(int low, int mid, int high);

int S[8] = {27, 10, 12, 20, 25, 13, 15, 22};

int main(void)
{
	for(int z = 0; z < 8; z++)
		printf("%d", S[z]);

	putchar('\n');


	for(int z = 0; z < 8; z++)
		printf("%d", S[z]);
	
	putchar('\n');
	
	for(int z = 0; z < 8; z++)
		printf("%d", S[z]);

	putchar('\n');

	mergesort2(0, 7);

	for(int z = 0; z < 8; z++)
		printf("%d", S[z]);
	
	return 0;
}

void mergesort(int n, int S[])	  
{
	const int h = n / 2,  m = n - h;
	int U[h]; int V[m];
	
	for(int i = 0; i < h; i++)
		U[i] = S[i];
	
	for(int j = h; j < n; j++)
	{
		int k = 0;
		
		V[k] = S[j];
		k++;
	}

	mergesort(h, U);
	mergesort(m, V);
	merge(h, m, U, V, S);
}

void merge(int h, int m, const int U[], const int V[], int S[])
{
	int i, j, k;
	i = 0; j = 0; k = 0;
	
	while(i <= h && j <= m){
		if(U[i] < V[i]){
			S[k] = U[i];
			i++;
		}
		else{
			S[k] = V[j];
			j++;
		}
	k++;
	}

	if(i > h){
		for(int tmp = 0; tmp < (m - j); tmp++)
			S[k + tmp] = V[j + tmp];
	}
	else{
		for(int tmp = 0; tmp < (h - i); tmp++)
			S[k + tmp] = U[i + tmp];
	}
}

void mergesort2(int low, int high)
{
	if(low < high){
		int mid = (low + high) / 2;
		mergesort2(low, mid);
		mergesort2(mid + 1, high);
		merge2(low, mid, high);
	}
}

void merge2(int low, int mid, int high)
{
	int i, j, k; int U[high];
	i = low; j = mid + 1; k = low;
	while(i <= mid && j <= high)
	{
		if(S[i] < S[j]){
			U[k] = S[i];
			i++;
		}
		else{
			U[k] = S[j];
			j++;
		}
		k++;
	}

	if(i > mid){
		for(int tmp = 0; tmp < j; tmp++)
			U[k + tmp] = S[j + tmp];
	}
	else{
		for(int tmp = 0; tmp < i; tmp++)
			U[k + tmp] = S[i + tmp];
	}

	for(int tmp = low; tmp <= high; tmp++)
		S[tmp] = U[tmp];
}

