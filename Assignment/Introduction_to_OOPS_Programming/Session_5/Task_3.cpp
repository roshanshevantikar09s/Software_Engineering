#include <iostream>
using namespace std;

class SearchProduct
{
public:
    void searchProduct(string productName)
    {
        cout << "Searching Product: " << productName << endl;
    }

    void searchProduct(string productName, string category)
    {
        cout << "Searching Product: " << productName << endl;
        cout << "Category: " << category << endl;
    }
};

int main()
{
    SearchProduct s;

    s.searchProduct("Laptop");

    cout << endl;

    s.searchProduct("Laptop", "Electronics");

    return 0;
} 
