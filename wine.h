#ifndef WINE_H1
#define WINE_H1

#include <iostream>
#include <vector>

class Wine{
    public:
    int days;
    vector<int> values;
    Wine(vector<int> values, int days);
    int tradeWine(Wine values);
};

#endif