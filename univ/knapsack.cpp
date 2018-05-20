#include <iostream>
using namespace std;

#define W 17
const int n = 4;

void knapsack(int i, int profit, int weight);
bool promising(int i, int profit, int weight);

char including[n] = {0, };
char bestset[n] = {0, };

int p[n] = {40, 30, 50, 10};
int w[n] = {2, 5, 10, 5};

int numbest = 0;
int maxprofit = 0;

int main(void)
{
	knapsack(0, 0, 0);

	for (int j = 0; j < n; j++) 
	{
		cout << bestset[j];
	}
	cout << endl;

	return 0;
}

void knapsack(int i, int profit, int weight)
{
	if (weight <= W && profit > maxprofit) {
		maxprofit = profit;
		numbest = i;
		copy(including, including + n, bestset);
	}

	if (promising(i, profit, weight)) {
		including[i + 1] = 'Y';
		knapsack(i + 1, profit + p[i + 1], weight + w[i + 1]);
		including[i + 1] = 'N';
		knapsack(i + 1, profit, weight);
	}
}

bool promising(int i, int profit, int weight)
{
	if (weight >= W) return false;
	else
	{
		int j = i + 1;
		float bound = (float)profit;
		int totweight;
		while (j <= n && totweight + w[j] <= W)
		{
			totweight = totweight + w[j];
			bound += p[j];
			j++;
		}
		int k = j;
		if (k <= n) bound = bound + (W - totweight) * (p[k] / w[k]);
		return (bound > maxprofit);
	}
}

