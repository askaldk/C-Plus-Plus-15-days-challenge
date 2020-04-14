#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
using namespace std;

int main()
{
    int t, x;
    float m;
    cin >> m >> t >> x;
    cout << "The final price of the meal is $" << round(m + ((m * t) / 100.0) + m * x / 100) << "." << endl;
}