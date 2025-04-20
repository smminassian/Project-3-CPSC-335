#include <iostream>
using namespace std;
#include <map>

int Wine(int *values, int days)
{
    map<int, int> maxTracker;
    int max = 0;
    int noSell = values[0];
    int noBottle = values[days - 1];
    for (int jx = 1; jx < days - 1; jx++)
    {
        if (max == 0 || values[jx] > max)
        {
            if (values[jx] == max && jx == 1)
            {
                if (values[jx] - noSell > 0)
                {
                    max = values[jx];
                    maxTracker[max] = values[jx] - noSell;
                }
                else if (values[jx] == max && jx == days - 1)
                {
                    if (values[jx] - noBottle > 0)
                    {
                        max = values[jx];
                        maxTracker[max] = values[jx] - noBottle;
                    }
                }
                else if (values[jx] > max && values[jx] - values[jx - 1] > 0)
                {
                    max = values[jx];
                    maxTracker[max] = values[jx] - values[jx - 1];
                }
            }
        }
    }
    return max;
}


int findMaxAppreciation(<map<int, int> )
int main()
{
    int days = 0;
    cout << "Enter the number of days: " << endl;
    cin >> days;
    int *values = new int[days];

    cout << "Enter the values for each day: " << endl;
    for (int ix = 0; ix < days; ix++)
    {
        cin >> values[ix];
    }

    int max = Wine(values, days);

    cout << "Output is : " << max << endl;

    delete[] values;
    return 0;
}