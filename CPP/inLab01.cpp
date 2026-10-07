# include <iostream>
using namespace std;

int main(){
    int z, n, y;
    z = 64 >> 2;
    cout<< "value of z " << z << endl;

    n = 32 << 3;
    cout<< "value of n " << n << endl;
    
    y = ( 7 ^ z);
    cout<< "value of y " << y << endl;
    

    // int x = 10 , y = 20;
    // // 1st = 0
    // bool z = (x > 10 && y == 20);
    // cout<< "z is " << z << endl;
    // //false 0
    // bool n = (x != 10 || y <= 10);
    // cout<< "n is " << n << endl;


    // int x = 5;
    // int z = ++x;
    // cout<< "z is " << z << endl;
    // // cout << "x is " << x ;

    // int z2 = x--;
    // int z3 = --x;
    // int z4 = x++;
    
    // cout<< "z2 is: "<< z2 << " x is " << x << endl;
    // cout<< "z3 is: "<< z3 << " x is " << x << endl;
    // cout<< "z4 is: "<< z4 << " x is " << x << endl;


}