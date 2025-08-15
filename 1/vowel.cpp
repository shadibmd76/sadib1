#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    getline(cin, str); // input the string with spaces
    int count = 0;

    for(char c : str) {
        c = tolower(c);
        if(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }

    cout << "Number of vowels: " << count << endl;
}
