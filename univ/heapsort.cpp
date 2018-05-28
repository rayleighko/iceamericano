#include <iostream>
using namespace std;

const int n = 10;

struct heap
{
	int S[n+1] = { 0, 2, 4, 5, 3, 1, 9, 6, 7, 10, 8 };
	int heapsize = 0;
};

void siftdown(heap& H);
void removekeys(heap H, int S[]);
void makeheap(heap& H);

int main(void)
{
	heap H;

	makeheap(H);
	removekeys(H, H.S);

	return 0;
}

void siftdown(heap& H, int i)
{
	int largerchild;
	int siftkey = H.S[i];
	int parent = i;
	bool spotfound = false;
	
	while (2 * parent <= H.heapsize && !spotfound)
	{
		if (2 * parent < H.heapsize && H.S[2 * parent] < H.S[2 * parent + 1])
			largerchild = 2 * parent + 1;
		else
			largerchild = 2 * parent;
		
		if (siftkey < H.S[largerchild])
		{
			H.S[parent] = H.S[largerchild];
			parent = largerchild;
		}
		else 
			spotfound = true;
	}
	H.S[parent] = siftkey;
}

void removekeys(heap H, int S[])
{
	  for(int i = n; i >= 1; i--)
	  {
		  int keyout = H.S[1];
		  H.S[1] = H.S[H.heapsize];
		  H.heapsize = H.heapsize - 1;
		  siftdown(H, 1);
		  cout << S[i];
		  S[i] = keyout;
	  }
}

void makeheap(heap& H)
{
	H.heapsize = n;
	for(int i = n / 2; i >= 1; i--)	// i는 child node가 존재하는 parent node
		siftdown(H, i);
}

