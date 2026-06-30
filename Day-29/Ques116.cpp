#include <iostream>
using namespace std;

struct Item {
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {

    Item item;

    cout << "Enter Item ID: ";
    cin >> item.id;

    cout << "Enter Item Name: ";
    cin >> item.name;

    cout << "Enter Quantity: ";
    cin >> item.quantity;

    cout << "Enter Price: ";
    cin >> item.price;

    cout << "\n----- Inventory Details -----\n";
    cout << "Item ID   : " << item.id << endl;
    cout << "Item Name : " << item.name << endl;
    cout << "Quantity  : " << item.quantity << endl;
    cout << "Price     : " << item.price << endl;

    return 0;
}