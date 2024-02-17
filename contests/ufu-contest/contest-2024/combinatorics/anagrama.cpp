#include <bits/stdc++.h>
using namespace std;
#define ll unsigned long long int


int main()
{
    ll cons=0, vog=0, res = 1;
    string entry;

    cin >> entry;

    for (auto i{0}; i < entry.size(); ++i)
    {
        if (entry[i] == 'A' || entry[i] == 'E' || entry[i] == 'I' || entry[i] == 'O' || entry[i] == 'U')
            vog++;
        else  
            cons++;
    }

    for (auto i{0u}; i < entry.size(); ++i)
    {
        if(i%2 == 0 ){
            if (cons >= 0){
                res *= cons;
                cons--;
            }
            else {
                res *= vog;
                vog--;
            }
        } else {
            if (vog >= 0)
            {
                res *= vog;
                vog--;
            }
            else
            {
                res *= cons;
                cons--;
            }
        }

    }

        cout << res << endl;
    

    return 0;
}