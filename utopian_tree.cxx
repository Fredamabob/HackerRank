#include <iostream>
using namespace std;

int height(int n) {
    int x = 1, of = 1;
    for (int i = 0; i < n; i++){
        if (!of){
            x++;
            of = 1;
        }
        else{
            x*=2;
            of = 0;
        }
    }
    return x;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        cout << height(n) << endl;
    }
}
