#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    set<string> combinations;

    cin >> input;

    for (auto i{0u}; i < input.size(); ++i) {
        string prefix = input.substr(0, i);
        string suffix = input.substr(i + 1);
        string combined = prefix + suffix;

        for (auto j{0u}; j <= combined.size(); ++j) {
            string new_str = combined.substr(0, j) + input[i] + combined.substr(j);
            combinations.insert(new_str);
        }
    }

    cout << combinations.size() << endl;

    return 0;
}
