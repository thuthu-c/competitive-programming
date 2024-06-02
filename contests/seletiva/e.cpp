#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
    int n;
    cin >> n;
    
    vector<int> friendships(n - 1);
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j <= i; ++j) {
            int f;
            cin >> f;
            friendships[j] += f;
            friendships[i + 1] += f; // Corrigindo para somar em ambos os lados da amizade
        }
    }

    int max_friendship = *max_element(friendships.begin(), friendships.end());

    cout << accumulate(friendships.begin(), friendships.end(), 0) << endl;
    for (int i = 0; i < n - 1; ++i) {
        cout << max_friendship << endl;
    }

    return 0;
}
