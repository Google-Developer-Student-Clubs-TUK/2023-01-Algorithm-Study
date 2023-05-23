#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n = 0;
	cin >> n;

	int* nums = new int[n];
	vector<int> dp(101, 0); //1~100

	for (int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	//d min:-99 max : 99

	int max_length = 1;

	for (int d = -99; d <= 99; d++)
	{
		fill(dp.begin(), dp.end(), 0);
		for (int i = 0; i < n; i++)
		{
			if (nums[i] + d < 1 || nums[i] + d > 100)
			{
				dp[nums[i]] = 1;
			}
			else
			{
				dp[nums[i]] = dp[nums[i] + d] + 1;
			}
			max_length = max(max_length, dp[nums[i]]);
		}
	}

	cout << max_length;

	return 0;
}