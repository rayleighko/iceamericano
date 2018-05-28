#include <iostream>
using namespace std;

// greedy algorithm - coin  

const int n = 824;

int main(void)
{
	int value = n;
	int reval = 0;
	int co = 5;
	int coin[6] = { 1, 5, 10, 50, 100, 500 };

	while(!(value == reval))
	{
		reval += coin[co];
		
		if (reval > value) {
			reval = reval - coin[co];
			co--;
		} else cout << reval << endl;
	}
	return 0;
}
