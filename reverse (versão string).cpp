#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int re;
    string result = "";
    while (n>0){
        re = n % 10;
        result += to_string(re);
        n = n / 10;
    }
    cout << result;
    return 0;
}