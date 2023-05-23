#include <iostream>

using namespace std;

int N, S;
int* nums;
int result = 0;

void f(int idx, int total)
{
	if (idx == N)
	{
		if (total == S) result++;
		return;
	}


	f(idx + 1, total);
	f(idx + 1, total + nums[idx]);
}


int main()
{
	cin >> N >> S;

	nums = new int[N];

	for (int i = 0; i < N; i++)
	{
		cin >> nums[i];
	}

	f(0, 0);

	if (S == 0) result--;
	cout << result;
}