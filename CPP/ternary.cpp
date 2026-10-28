#include <iostream>
using namespace std;

int main(){
    


    int a, b, c, largest ;
    cout<<"enter a:" ;
    cin>>a;
    cout<<"enter b:" ;
    cin>>b;
    cout<<"enter c:" ;
    cin>>c ;
    
    if(!(a == b && b == c)){
        largest = (a>b)?(a>c?a:c):(b>c?b:c);
        cout<< "largest number is "<< largest << endl;
    }else{
        cout<< "all 3 are equal" <<endl;
    }

    return 0;
    /*
    utkarsh@penguin:~/code/semI/CPP$ g++ ternary.cpp -o main && ./main
    enter a:2
    enter b:2
    enter c:2
    all 3 are equal

    utkarsh@penguin:~/code/semI/CPP$ g++ ternary.cpp -o main && ./main
    enter a:6
    enter b:9
    enter c:0
    largest number is 9
    */
}