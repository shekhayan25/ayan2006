// 5. Refactor your FoodOrder class so that the constructor takes an object as a parameter (with keys orderId, restaurantName, isDelivered) instead of separate arguments. Update your instantiation code to use this new constructor signature.

#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

    // Constructor takes an object
    FoodOrder(int id, string restaurant, bool delivered)
    {
        orderId = id;
        restaurantName = restaurant;
        isDelivered = delivered;
    }

    void markDelivered()
    {
        isDelivered = true;

        cout << "Order " << orderId << " from "
             << restaurantName
             << " has been delivered successfully!" << endl;
    }
};

int main()
{
    // Object containing order details
    FoodOrder order1(101, "Zomato Restaurant", false);

    order1.markDelivered();

    return 0;
}
