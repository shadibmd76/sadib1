
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; // input number
    long long fact = 1; // use long long for bigger numbers

    for(int i = 1; i <= n; i++) {
        fact *= i;
    }

    cout << "Factorial of " << n << " is " << fact << endl;
    return 0;
}
