#include <iostream>
using namespace std;


int Wine(int *values, int days){
    int max = NULL;
    int noSell = values[0];
    int noBottle = values[days-1];
    for(int jx = 0; jx < days; jx++){
        if (max == NULL || values[jx] > max){
            if(values[jx] == max && jx == 1){
                if(values[jx] - noSell > 0)
                    max = values[jx];
            }
            else if (values[jx] == max && jx == )
        } 


    }
}


int main(){
    int days = 0;
    cout << "Enter the number of days: " << endl;
    cin >> days;
    int* values = new int[days];

    cout << "Enter the values for each day: " << endl;
    for (int ix = 0; ix < days; ix++){
        cin >> values[ix];
    }

}