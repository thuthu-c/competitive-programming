#include <bits/stdc++.h> 
using namespace std; 
// #define ll long long int   

int main (){

    int x1, y1, x2, y2, x3, y3, x4, y4; 

    cin>>x1 >> y1;
    cin >> x2 >> y2;
    cin >> x3 >> y3;
    cin >> x4 >> y4; 


    int d1 = 0;
   if(x1 != x2){
    int d1 = abs((x1 - x2)) * abs((x1 - x2)) ;  
    cout << d1 << endl;
   } 
   else if (x1 != x3){
    int d1 = abs((x1 - x3)) * abs((x1 - x3)) ;
    cout << d1 << endl;
   }
   else if (x1 != x4){
    int d1 = abs((x1 - x4)) * abs((x1 - x4)) ;
    cout << d1 << endl;
   }

    
    
   

    



    return 0; 
}