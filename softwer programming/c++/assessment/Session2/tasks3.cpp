// 3. Create a class called FoodOrder with properties: orderId (number), restaurantName (string), and isDelivered (boolean). Write a member function markDelivered() that sets isDelivered to true and prints a message. Instantiate FoodOrder and call markDelivered().


#include <iostream>
using namespace std;

class FoodOrder
{
public:
    int orderId;
    string restaurantName;
    bool isDelivered;

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
             << restaurantName << " has been delivered successfully!" << endl;
    }
};

int main()
{
    FoodOrder order1(101, "Zomato Restaurant", false);

    order1.markDelivered();

    return 0;
}