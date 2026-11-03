#include <bits/stdc++.h>
using namespace std;

int main() {

    // 4 3 2 1 
    // 4 3 2
    // 4 3
    // 4
    for (int i = 4; i > 0; i--)
    {
        // cout<< "i"<<i <<endl;
        for (int j = 4; j >= 5 -i ;j-- )
        {
            // cout<< "j" <<j ;
            cout<< j << " ";
        }
        cout<<endl;
    }
    
    // 1
    // 1 2 
    // 1 2 3
    // 1 2 3 4

    for (int i = 0; i < 5; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j << " ";
        }
        cout<<endl;
    }
    

    return 0;

}