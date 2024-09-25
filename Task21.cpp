#include <iostream>
using namespace std;

class Sum {
    int a, b;

public:
    Sum(int x, int y); // Parameterized constructor
    void setData(int x, int y);
    int display();
};

// Definition of the parameterized constructor
Sum::Sum(int x, int y) {
    a = x;
    b = y;
}

void Sum::setData(int x, int y) {
    a = x;
    b = y;
    cout << "Enter the value of a: " << a << endl;
    cout << "Enter the value of b: " << b << endl;
}

int Sum::display() {
    cout << "Adding two numbers: " << a + b << endl;
    return a + b;
}

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    Sum obj(x, y); // Creating object with parameters passed to constructor
    obj.display();
    return 0;
}
