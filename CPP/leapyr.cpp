#include <iostream>
using namespace std;

int main(){
    int yr;
    cout << "input the year to be checked? " ;
    cin>> yr ;

    if (yr % 400 == 0 || yr %4 == 0 && yr % 100 != 0){
        cout<< "it's a leap year!" << endl;
    }else{
        cout<< "No, its not a leap year!" << endl;
    }
    
}