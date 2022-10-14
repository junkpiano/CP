#include <bits/stdc++.h>

using namespace std;

int main() {
    string input;
    cin >> input;

    int sum = 0;

    for(auto c: input) {
        if(c == '+') sum++;
        else if(c == '-') sum--;
        else continue;
    }
    
    cout << sum << endl;
    
    return 0;
}
