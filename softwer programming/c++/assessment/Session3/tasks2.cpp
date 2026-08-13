// 2. Build a class Product for a Flipkart-style app with a parameterized constructor that takes productName, price, and rating as arguments and displays all details using a displayInfo() method.


#include <iostream>
using namespace std;

class Product
{
public:
    string productName;
    float price;
    double rating;

    
    Product(string name, float p, double r)
    {
        productName = name;
        price = p;
        rating = r;
    }

    
    void displayInfo()
    {
        cout << "Product Name: " << productName << endl;
        cout << "Price: Rs" << price << endl;
        cout << "Rating: " << rating << " / 5" << endl;
    }
};

int main()
{
    Product product1("Samsung Galaxy S24", 59999.99, 4.7);

    product1.displayInfo();

    return 0;
}