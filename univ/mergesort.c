#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void merge_sort(int array[],int left ,int right);   // 분할
void merge(int num[],int left,int mid,int right);   // 합병
const int ITEMSIZE = 8;

int main(void)
{
	int array[ITEMSIZE];

	srand(time(NULL));
	
	for(int i = 0; i < ITEMSIZE; i++)
	{
		array[i]=rand()%100;
	}
	printf("합병 전\n");
	
	for(int j = 0; j < ITEMSIZE; j++)
	{
		printf("%d\n",array[j]);
	}
	putchar('\n');
	printf("합병 후\n");
	
	merge_sort(array, 0, ITEMSIZE - 1);

	for(int k = 0; k < ITEMSIZE; k++)
	{
		printf("%d\n",array[k]);
	}
}

void merge_sort(int array[], int left, int right)
{
	  int mid; 

	if(left < right)
	{
		mid = (left + right)/2;

		merge_sort(array, left, mid);     
		merge_sort(array, mid+1, right);  
		merge(array, left, mid, right);   
	}
}

void merge(int array[], int left, int mid, int right)
{
	int m; 

	int i = left;       
	int j = mid + 1; 
	int k = left;
			  
	int tempArray[ITEMSIZE];

	while (i <= mid && j <= right)
	{
		if (array[i] < array[j])
		{ 
			tempArray[k] = array[i];
			i++;
		}
		else
		{
			tempArray[k] = array[j];
			j++;
		}
		k++;						  
	}

	if (i > mid)
	{
		for (m = j; m <= right; m++)
		{   
			tempArray[k] = array[m];     
			k++;
		}
	}
	else
	{                    
		for (m = i; m <= mid; m++)
		{ 
			tempArray[k] = array[m];   
			k++;
		}
	}			    
	
	for(m = left; m <= right; m++)
	{
		array[m] = tempArray[m];
	}
}
