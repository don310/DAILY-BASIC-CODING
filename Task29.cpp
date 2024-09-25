//Arrays & Loops

// #include<iostream>
// using namespace std;

// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};
//     for(int i=0; i<5; i++){
//         cout<<arr[i]<<endl;
//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the Size of array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter "<<n<<" Array elements: "<<endl;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    cout<<"Array elements: ";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" "; // Added space here to separate elements
    }
    cout<<endl;
    return 0;
}
