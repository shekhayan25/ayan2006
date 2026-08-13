// 4. Refactor the following code so that the user’s phone number in the UserProfile class is private and can only be set or retrieved using public methods.<br><br><em><strong>Hint:</strong> Add private access modifier to the phone number and create setPhoneNumber() and getPhoneNumber() methods.</em>

#include <iostream>
using namespace std;

class UserProfile
{
private:
    string phoneNumber;

public:

    
    void setPhoneNumber(string phone)
    {
        phoneNumber = phone;
    }

    
    string getPhoneNumber()
    {
        return phoneNumber;
    }
};

int main()
{
    UserProfile user1;

  
    user1.setPhoneNumber("9876543210");

    
    cout << "Phone Number: " << user1.getPhoneNumber() << endl;

    return 0;
}