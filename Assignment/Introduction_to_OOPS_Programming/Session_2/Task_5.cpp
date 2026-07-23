#include <iostream>
using namespace std;

struct OrderData
{
    int orderId;
    string restaurantName;
    bool isDelivered;
};

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    FoodOrder(OrderData obj)
    {
        orderId = obj.orderId;
        restaurantName = obj.restaurantName;
        isDelivered = obj.isDelivered;
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
    OrderData data = {101, "Domino's", false};

    FoodOrder order(data);

    order.display();

    return 0;
} 
