//Task - The else if Statement

#include<iostream>
using namespace std;

int main(){
    int time;
    cout<<"Enter the value"<<endl;
    cin>>time;

    if(time<10){
        cout<<"Good Morning"<<endl;
    }
    else if(time<20){
        cout<<"Good Afternoon"<<endl;
    }
    else{
        cout<<"Good Night"<<endl;
    }
    return 0;
}