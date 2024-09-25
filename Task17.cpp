#include<iostream>
using namespace std;

struct bills {
    int meter_number;
    float units;
    char bill_date[10];
    char last_date[20];
    char city_name[50];
};

int main() {
    struct bills customer[2];
    for(int i = 0; i < 1; i++) {
        cout << "Enter the Meter Number: "<<endl;
        cin >> customer[i].meter_number;

        cout << "Enter the units: "<<endl;
        cin >> customer[i].units;

        cout << "Enter the bill date: "<<endl;
        cin >> customer[i].bill_date;

        cout << "Enter the last date: "<<endl;
        cin >> customer[i].last_date;

        cout << "Enter the city: "<<endl;
        cin >> customer[i].city_name;
    }

    for(int j = 0; j < 1; j++) {
        cout << endl << "Your Meter Number: " << customer[j].meter_number;
        cout << endl << "Your units: " << customer[j].units;
        cout << endl << "Your bill date: " << customer[j].bill_date;
        cout << endl << "Your last date: " << customer[j].last_date;
        cout << endl << "Your city name: " << customer[j].city_name;

        // Calculate bill amount based on units consumed
        float bill_amount;
        if(customer[j].units <= 100) {
            bill_amount = customer[j].units * 0.75;
         } else if(customer[j].units <= 200) {
            bill_amount = customer[j].units * 1.80;
        } else {
            bill_amount = customer[j].units * 2.75;
        }
        cout << endl << "Your bill amount: " << bill_amount;
    }

    return 0;
}
