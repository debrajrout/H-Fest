#include <bits/stdc++.h>
using namespace std;

int solve(vector<int> &arr, int i, int j)
{
    int mini = INT_MAX;
    // Base case
    if(i >= j)
    {
        return 0;
    }

    for (int k = i; k <= j - 1 ; k++)
    {
        int tempAns = solve(arr, i, k) + solve(arr, k + 1, j) + arr[i - 1] * arr[k] * arr[j];
        if(tempAns < mini)
        {
            mini = tempAns;
        }
    }
    return mini;
}

int main()
{
    // vector<int> arr = {1, 2, 3, 4, 3};
    vector<int> arr;
    int n;
    int a;
    cout << "Number of element: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    // int n = arr.size();
    cout << "Minimum Number of multiplication is " << solve(arr, 1, n - 1);
    return 0;
}
