// 3. Imagine a Flipkart-like app: create an abstract class Product with an abstract method upload(). Then, create two subclasses, Electronics and Clothing, that each implement the upload() method to print a different upload message.

#include <iostream>
using namespace std;



class Product
{
public:
    virtual void upload() = 0;
};


class Electronics : public Product
{
public:
    void upload() override
    {
        cout << "Uploading Electronics product to Flipkart." << endl;
    }
};


class Clothing : public Product
{
public:
    void upload() override
    {
        cout << "Uploading Clothing product to Flipkart." << endl;
    }
};

int main()
{
    Electronics electronicProduct;
    Clothing clothingProduct;

    electronicProduct.upload();
    clothingProduct.upload();

    return 0;
}