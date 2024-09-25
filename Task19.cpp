//Pyramid of numbers using nested for loops

#include<iostream>
using namespace std;

int main(){
    int i,j;
    for(int i=1; i<=10; i++){
        for(int j= i-1; j<=i; i++){
               cout<<i;
        }
            
    
        cout<<endl;
    }
    return 0;
}