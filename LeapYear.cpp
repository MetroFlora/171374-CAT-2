//Admission number 171374
//Course DBIT Sep-Dec 2023
//Strathmore University.

#include <iostream>
using namespace std;

int main() {
    int year;
    cout<<" enter year\n";
    cin>> year;
    if (year%4==0){
        cout << "Leap year";
        } else{
            cout << "Not a leap year";
    }
    return 0;
}