#include <iostream>
#include <bitset>
using namespace std;

int main() {
    long long int T, n;
    cin >> T;
    for (int i = 0; i < T; i++){
        cin >> n;
        bitset<32> tmp = n;
        tmp = ~tmp;
        cout << tmp.to_ullong() << '\n';
    }
    return 0;
}
