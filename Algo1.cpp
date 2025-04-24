#include <iostream>
#include <algorithm>
#include <iomanip> 
using namespace std;

void maxCharm(int *Warr, float *itemArr, int n, int w)
{
    float *dp = new float[w];    
    for (int kx = 0; kx <= w + 1; kx++)
    {
        dp[kx] = 0; // initialize all elements in array to 0
    }
    for (int ix = 1; ix <= w; ix++)  // I iterate through all the weights from 1 to W
    {
        for (int jx = 0; jx < n; jx++) // I check all the beads weights
        {
            if (Warr[jx] <= ix) // can the bead that i am checking fit
            {
                dp[ix] = max(dp[ix], dp[ix - Warr[jx]] + itemArr[jx]); //if it can fit, check its charm and if for beads that can fit, pick the one with max charm
            }
        }
    }
    cout << "Output is " << fixed << setprecision(1) << dp[w] << endl; // I output the index of the last element because i know that the last element will have the highest combination of charm
    //the set precision makes it so where i can see the .0 for the float value. The fixed makes it so that the decimal value i get is not in scientific notation.
    
    delete[] dp; // I free the memory for dp
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