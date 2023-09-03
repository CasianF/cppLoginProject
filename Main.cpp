#include <iostream>
#include "menuManager.h"
#include <string>
using namespace std;



int main() {
    menuManager menuManager;
    short int choice;
    int x;
    cout << "\t\t\t\t\t******| Contact Manager |******\n\n";
    cout << "\t\t\t\t\t      | 1.Add Contact   |\n";
    cout << "\t\t\t\t\t      | 2.Search Contact|\n";
    cout << "\t\t\t\t\t      | 3.Exit Manager  |\n";
    cin >> choice;


    switch (choice) {

    case 1:
        system("cls");
        menuManager.addContact();
        cout << "1. Back to main menu" << endl;
        cout << "2. Exit" << endl;
        cin >> x;
        if (x == 1) {
            main();
        }
        else {
            break;
        }

    case 2:
        system("cls");
        cout << "\n\nEnter contact name: " << endl;
        menuManager.searchContact();
        cout << "1. Back to main menu" << endl;
        cout << "2. Exit" << endl;
        cin >> x;
        if (x == 1) {
            main();
        }
        if(x == 2) {
            break;
        }

    case 3:
        menuManager.selfExit();
        break;

    default:
        cout << "*****| Invalid input, try again | ******\n";
        main();
    }

    return 0;
}
