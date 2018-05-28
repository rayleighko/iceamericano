#include <iostream>
using namespace std;

const int n = 8;
int S[n] = { 8, 4, 2, 7, 9, 5, 13, 1 };

int main(void)
{
	int x;

	for(int i = 1; i < n; i++)
	{
		x = S[i];
		int j = i - 1;

		while(j >= 0 && S[j] > x){
			S[j + 1] = S[j];
			j--;
		}
		
		S[j + 1] = x;
	}
	
	return 0;
}

