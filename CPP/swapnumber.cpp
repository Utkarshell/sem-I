#include <iostream>
using namespace std;

int main(){
    int sum, num1, num2;
    cout << "input the first number? " ;
    cin>> num1 ;
    cout << "input the second number? " ;
    cin>> num2 ;
    
    num1 = num1 + num2;
    num2 = num1-num2;
    num1 = num1-num2;

    cout<< "first Number is " << num1 << " && second number is " << num2 <<endl;

    
    
}