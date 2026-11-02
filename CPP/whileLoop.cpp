#include <bits/stdc++.h>
using namespace std;

int main() {
    int i = 1;
    // entry controlled loop or while loop in general,
    while (i<=10)
    {
        cout<< "number is "<< i<<endl;
        i++;
    }

    // exit control (atleast one): check condition when work is about to end
    do
    {
        cout<<"this will show up each time if do-while is used! even condition is false "<< endl;
    } while (false);
    cout<<"condition is false so, not printed";

    // for loop
    for (int t = 0; t < 10; t++)
    {
        cout<<"hello extraordinaryy boi Vimlesh? say " << t  << endl;
    }
    
    return 0;
}