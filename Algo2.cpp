#include <iostream>
using namespace std;
#include <map>

int Wine(int *values, int days)
{

    int difference = 0;
    int max = 0;
    int noSell = values[0];  //I set the first value to noSell because you cant sell on first day
    int noBottle = values[days - 1]; // I set the last day as noBottle because you cant prep on the last day
    for (int jx = 1; jx <= days; jx++)   // I loop through the days 
    {
        if(jx == 1){
            if (values[jx] - noSell > 0)      //So if there is appreciation from the first day to the second day, I will see it because im checking the difference. 
            {
                difference = values[jx] - noSell;
                max = values[jx];               //I record the max for that difference
            }
        }
            else if (jx == days)
            {
                if (noBottle - values[jx - 1] > 0)  //if there is appreciation on the last day, I 
                {
                    difference = noBottle - values[jx - 1]; //I check the difference between the last day and the second to last day
                    max = noBottle;   //i record the max for that difference
                }
            }
            else if (values[jx] - values[jx - 1] > difference) // if the day is not no bottle nor no sell then im just checking the other days too see if there is a increase
            {
                difference = values[jx] - values[jx - 1]; 
                max = values[jx];
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