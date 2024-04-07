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


void ContactManager::addContact() {
    long long phone;
    string n, addr, desc;
    cout << "Enter phone Number (10 digits): ";
    cin >> phone;
    cin.ignore();

    if (!isValidPhoneNumber(phone)) {
        cout << "Invalid phone number! Please enter exactly 10 digits.\n";
        return;
    }

    cout << "Enter Name: ";
    getline(cin, n);
    cout << "Enter Address: ";
    getline(cin, addr);
    cout << "Enter Description: ";
    getline(cin, desc);

    if (count < 100) {
        contacts[count].setContact(phone, n, addr, desc);
        count++;
    } else {
        cout << "Contact list is full\n";
    }
}

void ContactManager::editContact() {
    string searchName;
    cout << "Enter the name of the contact to edit: ";
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < count; i++) {
        if (contacts[i].getName() == searchName) {
            long long phone;
            string n, addr, desc;
            cout << "Enter new phone Number (10 digits): ";
            cin >> phone;
            cin.ignore();

            if (!isValidPhoneNumber(phone)) {
                cout << "Invalid phone number! Please enter exactly 10 digits.\n";
                return;
            }

            cout << "Enter new Name: ";
            getline(cin, n);
            cout << "Enter new Address: ";
            getline(cin, addr);
            cout << "Enter new Description: ";
            getline(cin, desc);

            contacts[i].setContact(phone, n, addr, desc);
            cout << "Contact edited successfully\n";
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Contact not found\n";
    }
}

void ContactManager::showAll() {
    if (count == 0) {
        cout << "Contact list is empty\n";
    } else {
        for (int i = 0; i < count; i++) {
            cout << "Contact " << i + 1 << endl;
            contacts[i].displayContact();
            cout << endl;
        }
    }
}


void ContactManager::searchContact() {
    string searchName;
    cout << "Enter the name to search: ";
    getline(cin, searchName);

    bool found = false;
    for (int i = 0; i < count; i++) {
        if (contacts[i].getName() == searchName) {
            cout << "Contact found\n";
            contacts[i].displayContact();
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Contact not found\n";
}





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
                obj.addContact();
                break;
            case '2':
                obj.showAll();
                break;
            case '3':
                obj.searchContact();
                break;
              case '4':
                obj.editContact();
                break;
           
            case '0':
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid Selection ...!\n";
                break;
           
        }
    } while (choice != '0');
return 0;
}
