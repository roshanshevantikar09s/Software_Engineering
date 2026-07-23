#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(int id, string name, bool status)
    {
        orderId = id;
        restaurantName = name;
        isDelivered = status;
    }

    void markDelivered()
    {
        isDelivered = true;

        cout << "Order Delivered Successfully!" << endl;
    }

    void display()
    {
        cout << "Order ID : " << orderId << endl;
        cout << "Restaurant : " << restaurantName << endl;

        cout << "Delivered : ";

        if(isDelivered)
            cout << "Yes";
        else
            cout << "No";

        cout << endl;
    }
};

int main()
{
    FoodOrder f1(101, "Pizza Hut", false);

    f1.display();

    f1.markDelivered();

    f1.display();

    return 0;
} 
