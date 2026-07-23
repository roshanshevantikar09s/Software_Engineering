#include <iostream>
using namespace std;

class Product
{
public:
    string productName;
    float price;
    float rating;

    // Parameterized Constructor
    Product(string name, float p, float r)
    {
        productName = name;
        price = p;
        rating = r;
    }

    void displayInfo()
    {
        cout << "Product Name : " << productName << endl;
        cout << "Price        : " << price << endl;
        cout << "Rating       : " << rating << endl;
    }
};

int main()
{
    Product p1("Wireless Mouse", 799.00, 4.5);

    p1.displayInfo();

    return 0;
} 
