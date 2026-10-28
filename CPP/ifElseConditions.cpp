#include <iostream>
using namespace std;
int main(){
    // ques 1
    int meterId;
    cout<< "Electric meter reading :";
    cin>> meterId;

    if (meterId % 2 == 0)
    {
        cout<<"even meter id" << endl;
    }else
    {
        cout<<"odd meter id" << endl;
    }

    // ques 2
    int tempSensor;
    cout<< "whats the temp ";
    cin>> tempSensor;

    if (tempSensor >= 0)
    {
        if (tempSensor == 0)
        {
            cout<< "exactly @ freezing point" << endl;
        }else
        {
            cout<< "above freezing point" << endl;
        }        
    }else
    {
        cout<< "below freezing point" << endl;
    }
    
    // ques 3
    int mark1, mark2, mark3, highestMarks;
    cout<< "enter mark 1: ";
    cin>> mark1;
    cout<< "enter mark 2: ";
    cin>> mark2;
    cout<< "enter mark 3: ";
    cin>> mark3;

    if (0 <= mark1 && mark1 <= 100 && 0 <= mark2 && mark2 <= 100 && 0 <= mark3 && mark3 <= 100){
        if (mark1 > mark2 && mark1 >> mark3)
        {
            highestMarks = mark1;
        }else if (mark2 >> mark1 && mark2>> mark3){
            highestMarks = mark2;
        }else{
            highestMarks = mark3;
        }  
        cout<<"highest marks is "<< highestMarks << endl;
    }else{
        cout<< "marks can't exceed 100 or below 0" <<endl;
    }
    
    return 0;
}