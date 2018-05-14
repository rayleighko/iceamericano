#include <iostream>
using namespace std;

#define N 4
#define W 16

void knapsack(int i, int maxprofit, int weight);
bool promising(int i);

char including[N] = {0, };
char bestset[N] = {0, };

int p[N] = {40, 30, 50, 10};
int w[N] = {2, 5, 10, 5};

int profit = 0;
int weight = 0;
int numbest = 0;
int maxprofit = 0;

int main(void)
{

	knapsack(0, maxprofit, weight);

	for (int j = 0; j <= numbest; j++){
		cout << bestset[j];
	}
	cout << endl;
	
	return 0;
}

void knapsack(int i, int maxprofit, int weight)
{
	if(weight <= W && profit > maxprofit){
		maxprofit = profit;
		numbest = i;
		bestset[i] = including[i];
	}
	if(promising(i)){
		including[i + 1] = 'Y';
		knapsack(i + 1, profit + p[i + 1], weight + w[i + 1]);
		including[i + 1] = 'N';
		knapsack(i + 1, profit, weight);
	}
}

bool promising(int i)
{
	if(weight >= W)
		return false;
	else{
		int j = i + 1;
		float bound = profit;
		int totweight = weight;

		while(j <= N && totweight + w[j] <= W)
		{
			totweight = totweight + w[j];
			bound = bound + p[j];
			j++;
		}

		int k = j;
		if(k <= N)
			bound = bound + (W - totweight) * p[k] / w[k];
		
		return bound > maxprofit;
	}
}

