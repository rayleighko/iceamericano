#include <iostream>
using namespace std;

const int n = 8;
int S[n] = { 8, 4, 2, 7, 9, 5, 13, 1 };

int main(void)
{
	int smallest;
	
	for(int i = 0; i < n - 1; i++)
	{
		smallest = i;
	    
		for(int j = i + 1; j < n; j++)
			if(S[j] < S[smallest]) smallest = j;
		
		int temp = S[i];
		S[i] = S[smallest];
		S[smallest] = temp;
	}
	
	return 0;
}

