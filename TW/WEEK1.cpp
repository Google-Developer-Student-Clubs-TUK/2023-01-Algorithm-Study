#include <iostream>
#include <vector>

using namespace std;

struct zero_one
{
    int s_zero;
    int s_one;
};

int main()
{
    int T = 0;
    cin >> T;

    vector<zero_one> results = { {1,0},{0,1} };

    for (int i = 2; i <= 40; i++)
    {
        zero_one k_item = { results[i - 2].s_zero + results[i - 1].s_zero,results[i - 2].s_one + results[i - 1].s_one };
        results.push_back(k_item);
    }

    int* n_th = new int[T];

    for (int i = 0; i < T; i++)
    {
        int n = 0;
        cin >> n;
        n_th[i] = n;
    }

    for (int i = 0; i < T; i++)
    {
        cout << results[n_th[i]].s_zero << " " << results[n_th[i]].s_one << endl;
    }
}