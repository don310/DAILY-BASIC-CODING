// Task27: The example below uses the weekday number to calculate the weekday name using C++: 

#include<iostream>
using namespace std;

int main(){
    int choice;
    cout<<"Enter you choice!";
    cin>>choice;
    switch(choice){
        case 1:
        cout<<"Monday\n";
        break;

        case 2:
        cout<<"Tuesday\n";
        break;

        case 3:
        cout<<"Wednesday\n";
        break;

        case 4:
        cout<<"Thursday\n";
        break;

        case 5:
        cout<<"Friday\n";
        break;

        case 6:
        cout<<"Saturday\n";
        break;

        case 7:
        cout<<"Sunday\n";
        break;

        default:
        cout<<"Invalid Your Choice";
        
    }
    return 0;
}