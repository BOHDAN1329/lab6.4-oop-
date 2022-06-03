//Source.cpp
#include <iostream>
#include "Vector.h"
#include <math.h>
#include <string>

using namespace std;

int main() {
    int n;
    cout << "n = ";
    cin >> n;
    vector<int> V(n), U(n), T(n), W(n);
    cin >> V;
    cin >> U;
    V.Sort(V);
    U.Sort(U);
    cout << V << endl;
    cout << U << endl;
    return 0;
}