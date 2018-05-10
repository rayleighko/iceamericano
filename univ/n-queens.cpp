#include <iostream>
#include <stdlib.h>
using namespace std;

#define N 5

void queens(int i);
bool promising(int i);
int col[255] = {0, };

int main(void)
{
	queens(0);

	return 0;
}

void queens(int i)
{
	if(promising(i))
		if(i == N){
			for(int k = 1; k <= N; k++)
				cout << col[k] << ' ';
		cout << endl;
		}
		else
			for (int j = 1; j <= N; j++)
			{
				col[i+1] = j; 
				queens(i+1);
			}
}

bool promising(int i)
{
	int k = 1;
	bool switching = true;

	while(k < i && switching)
	{
		if(col[i] == col[k] || abs(col[i] - col[k]) == abs(i - k))
			switching = false;
		k++;
	}

	return switching;
}
