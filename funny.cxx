#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string s, r;
    int nCases, nf;
    cin >> nCases;
    for (int i = 0; i < nCases; i ++){
        cin >> s;
        for (string::reverse_iterator rit=s.rbegin(); rit!=s.rend(); ++rit){
                r+=*rit;
        }
        for (int j = 1; j < s.length(); j++){
            //cout << "["<< s.at(j) << " - " << s.at(j-1) << "] "<< abs((s.at(j) - s.at(j-1)))
            //<< " == " << abs((r.at(j) - r.at(j-1))) << " ["<< r.at(j) << " - " << r.at(j-1) << "]" << '\n';
            if (!(abs((s.at(j) - s.at(j-1))) == abs((r.at(j) - r.at(j-1))))){
                ++nf;
                break;
            }
        }
        if (nf <= 0)
            cout << "Funny\n";
        else
            cout << "Not Funny\n";
        nf = 0;
        s = ""; r = "";
    }
    return 0;
}
