#include<stdio.h>

void quicksort(int low, int high);
void partition(int low, int high, int& pivotpoint);
void swap(int& a, int& b);


int S[8] = {15, 22, 13 ,27, 12, 10, 20, 25};

int main(void)
{
	for(int i = 0; i < 8; i++)
		printf("%d",S[i]);

	putchar('\n');
	quicksort(0, 7);

	for(int i = 0; i < 8; i++)
		printf("%d",S[i]);

}

void quicksort(int low, int high)
{
	int pivotpoint;
	
	if(low < high){
		partition(low, high, pivotpoint);
		quicksort(low, pivotpoint -1);
		quicksort(pivotpoint + 1, high);
	}
	printf("%d\n", pivotpoint);
}

void partition(int low, int high, int& pivotpoint)
{
	int i, j;
	int pivotitem;
	pivotitem = S[low];
	j = low;
	for(i = low + 1; i <= high; i++)
		if(S[i] < pivotitem){
			j++;
			swap(S[i], S[j]);
		}
	pivotpoint = j;
	swap(S[low], S[pivotpoint]);
}

void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

