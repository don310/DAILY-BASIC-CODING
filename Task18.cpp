#include<iostream>
using namespace std;

class complex {
public:
    int real_part;
    int img_part;

    void setdata();
    complex sumdata(complex, complex);
    void display();

};

void complex::setdata() {
    cout << "Enter the real part: ";
    cin >> real_part;

    cout << "Enter the imaginary part: ";
    cin >> img_part;
}

complex complex::sumdata(complex x, complex y) {
    real_part = x.real_part + y.real_part;
    img_part = x.img_part + y.img_part;
}

void complex::display() {
    cout << real_part << " + i" << img_part << endl;
}

int main() {
    complex o1, o2, o3;
    
    cout << "First complex number:" << endl;
    o1.setdata();

    cout << "Second complex number:" << endl;
    o2.setdata();

    o3.sumdata(o1, o2);

    cout << "First complex number: ";
    o1.display();
    
    cout << "Second complex number: ";
    o2.display();
    
    cout << "Sum of the complex numbers: ";
    o3.display();
    
    return 0;
}
