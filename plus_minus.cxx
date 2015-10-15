#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n, tmp;
    float pos=0, neg=0, zero=0;
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> tmp;
        if (abs(tmp) == tmp && tmp != 0)
            ++pos;
        else if (abs(tmp) != tmp)
            ++neg;
        else
            ++zero;
    }
    cout << pos/n << '\n';
    cout << neg/n << '\n';
    cout << zero/n << '\n';
    return 0;
}
