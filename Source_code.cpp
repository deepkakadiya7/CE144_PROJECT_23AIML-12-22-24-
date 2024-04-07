#include <iostream>
using namespace std;

int main(){

   char choice;
 

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
