#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int cases, tmp, count = 0;
    string tmp2;
    
    cin >> cases;
    for (int i = 0; i < cases; i++){
        count = 0;
        cin >> tmp;
        tmp2 = to_string(tmp);
        for(int j = 0; j < tmp2.length(); j++){
            //cout << (tmp2[j] - '0');
            if((tmp2[j] - '0') != 0){
                if (tmp % (tmp2[j] - '0') == 0)
                    ++count;
            }
        }
        cout << count << '\n';
    }
    return 0;
}
