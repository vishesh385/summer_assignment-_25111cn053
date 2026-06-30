#include <iostream>
using namespace std;

int main() {

    char name[50];
    int tickets;
    float price = 250;
    float total;

    cout << "Enter Customer Name: ";
    cin >> name;

    cout << "Enter Number of Tickets: ";
    cin >> tickets;

    total = tickets * price;

    cout << "\n----- Ticket Details -----\n";
    cout << "Name          : " << name << endl;
    cout << "Ticket Price  : " << price << endl;
    cout << "Tickets       : " << tickets << endl;
    cout << "Total Amount  : " << total << endl;

    return 0;
}