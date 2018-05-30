#include <iostream>
using namespace std;

const int n = 10;

void interpsrch(int S[], int target);

int main(void)
{
	int S[n] = { 7, 10, 21, 33, 45, 59, 63, 78, 82, 99 };
	const int target = 33;
	
	int low, high;
	
	interpsrch(S, target);
}

void interpsrch(int S[], int target)
{
	int low = 0;
	int	high = n - 1;

	while (S[low] <= target && S[high] >= target)
	{

		int mid = ((target - S[low]) / 
					(S[high] - S[low])) * (high - low) + low;

		if (S[mid] == target) {
			cout << "targetting! : " << S[mid];
			break;
		}
		else if (target > S[mid])
			low = mid + 1;
		else
			high = mid - 1;
	}
}

