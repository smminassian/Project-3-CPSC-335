#include <iostream>
using namespace std;

int maxCharm(int *Warr, int *itemArr, int n, int w){
    int *dp = new int[w + 1];
    for (int kx = 0; kx <= w+1; kx++)
    {
        dp[kx] = 0;
    }
    for (int ix = 0; ix )

}



int main(){
    int n = 0;
    int W = 0;
    cout << "Enter number of bead types: " << endl;
    cin >> n;
    cout << "Enter total mass of Bracelet: " << endl;
    cin >> W;

    int *WArr = new int[n];
    int *itemArr = new int[n];

    int val = 0;

    cout << "Enter the weights of each bead type: " << endl;
    for (int ix = 0; ix < W; ix++)
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

}