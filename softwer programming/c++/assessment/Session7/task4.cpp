// 4.
// Build a Flipkart-style wishlist tracker: ask the user to enter 3 product names and prices, save them to a file called wishlist.txt, then read the file and display each product with its price.

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    string productName;
    float price;

    
    ofstream outFile("wishlist.txt");

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter product " << i + 1 << " name: ";
        getline(cin, productName);

        cout << "Enter price: ";
        cin >> price;
        cin.ignore();

       
        outFile << productName << " | " << price << endl;
    }

    outFile.close();

  
    ifstream inFile("wishlist.txt");

    cout << "\nWishlist:\n";

    
    while (getline(inFile, productName))
    {
        cout << productName << endl;
    }

    inFile.close();

    return 0;
}