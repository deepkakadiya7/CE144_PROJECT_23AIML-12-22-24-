#include <iostream>
using namespace std;

class Contact {
    long long phoneNo;
    string name, address, description;

public:
    void setContact(long long phone, string n, string addr, string desc);
    void displayContact();
    string getName();
};

void Contact::setContact(long long phone, string n, string addr, string desc) {
    phoneNo = phone;
    name = n;
    address = addr;
    description = desc;
}

void Contact::displayContact() {
    cout << "Phone Number: " << phoneNo << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Description: " << description << endl;
}

string Contact::getName() {
    return name;
}





class ContactManager {
    Contact contacts[100];
    int count;

public:
    ContactManager() {
        count = 0;
    }

    void addContact();
    void showAll();
    void searchContact();
    void editContact();
    void deleteContact();
    void sortContacts();
    bool isValidPhoneNumber(long long phone);
};

int main(){

   char choice;
   ContactManager obj;

    do {
        cout << "1 --> Add Contact\n";
        cout << "2 --> Show All Contacts\n";
        cout << "3 --> Search Contact\n";
        cout << "4 --> Edit Contact\n";
        cout << "5 --> Delete Contact\n";
        cout << "6 --> Sort Contacts\n";
        cout << "0 --> Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore(); // Clear the newline character from the buffer

        switch(choice) {
            case '1':
                break;
           
            
            default:
                
                break;
        }
    } while (choice != '0');
return 0;
}
