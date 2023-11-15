//Admission number 171374
//Course DBIT Sep-Dec 2023
//Strathmore University.

#include <iostream>
using namespace std;
int main(){
    double a,b,c; //declaring variable and initializing
    cout<<"enter number for a\t"; //user enter number for a
    cin>>a;
    cout<<"enter number for b\t"; //user enter number for b
    cin>>b;
    cout<<"enter number for c\t"; //user enter number for c
    cin>>c;
    
    int choice;
    if (a<b&&c){
      choice = 1;
    }
    else if (b<a&&c){
      choice = 2;
    }
    else if (c<a&&b){
      choice = 3;
    }

    switch (choice){
      case 1: { 
         cout<<a<<"is the smallest number.";
         break;
      }
      case 2: {
         cout<<b<<"is the smallest number.";
         break;
      }
      case 3: {
         cout<<c<<"is the smallest number.";
         break;
      }
      default:
      cout<<"please enter a number";
      break;
    }
    return 0;
   
}
