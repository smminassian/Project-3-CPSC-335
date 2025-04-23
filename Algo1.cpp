#include <iostream>
#include <algorithm>
using namespace std;

void maxCharm(int *Warr, float *itemArr, int n, int w)
{
    float *dp = new float[w];
    for (int kx = 0; kx <= w + 1; kx++)
    {
        dp[kx] = 0;
    }
    for (int ix = 1; ix <= w; ix++)
    {
        for (int jx = 0; jx < n; jx++)
        {
            if (Warr[jx] <= ix)
            {
                dp[ix] = max(dp[ix], dp[ix - Warr[jx]] + itemArr[jx]);
            }
        }
    }
    cout << "Output is " << dp[w] << endl;

    delete[] dp;
}

int main()
{
    int n = 0;
    int W = 0;
    cout << "Enter number of bead types: " << endl;
    cin >> n;
    cout << "Enter total mass of Bracelet: " << endl;
    cin >> W;

    int *WArr = new int[n];
    float *itemArr = new float[n];

    int val = 0;

    cout << "Enter the weights of each bead type: " << endl;
    for (int ix = 0; ix < n; ix++)
    {
        cin >> val;
        WArr[ix] = val;
    }
    cout << "Enter the charm value of each bead type: " << endl;
    int val2 = 0;
    for (int jx = 0; jx < n; jx++)
    {
        cin >> val2;
        itemArr[jx] = val2;
    }

    maxCharm(WArr, itemArr, n, W);

    delete[] WArr;
    delete[] itemArr;

    return 0;
}