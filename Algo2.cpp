#include <iostream>
using namespace std;
#include <map>

int Wine(int *values, int days)
{

    int difference = 0;
    int max = 0;
    int noSell = values[0];
    int noBottle = values[days - 1];
    for (int jx = 1; jx < days - 1; jx++)
    {
        if(jx == 1){
            if (values[jx] - noSell > 0)
            {
                difference = values[jx] - noSell;
                max = values[jx];
                cout << "Difference is : " << difference << endl;
            }
        }
            else if (jx == days - 1)
            {
                if (values[jx] - noBottle > 0)
                {
                    difference = values[jx] - noBottle;
                    max = values[jx];
                    cout << "Difference is : " << difference << endl;
                }
            }
            else if (values[jx] - values[jx - 1] > difference)
            {
                difference = values[jx] - values[jx - 1];
                max = values[jx];
                cout << "Difference is : " << difference << endl;
            }
        }
    
    return max;
}

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