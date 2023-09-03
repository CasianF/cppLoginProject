#pragma once
#include <iostream>
#include <string>
#include <fstream>

using namespace std;



class menuManager
{
    public:
        //global variables
        string name;
        string number;

        bool checkNumberLength(string nr) {
            if (nr.length() != 10) {
                cout << "Phone nr. must contain 10 digits";
                return false;
            }
            else
                return true;
        }

        bool checkDigits(string number) {
            for (int i = 0; i < number.length(); i++) {
                if (!(int(number[i]) >= 48 && int(number[i] <= 57))) {
                    cout << "Please enter only numbers!" << endl;
                    return false;
                    break;
                }
            }
            return true;
        }

        void addContact() {
            cout << "Enter name for the contact:\n";
            cin >> name;
            cout << "Enter phone number for the contact:\n";
            cin >> number;
            ofstream phone("number.txt", ios::app);
            if (checkDigits(number) == true && checkNumberLength(number) == true) {
                if (phone.is_open()) {
                    phone << name << " " << number << endl;
                    cout << "Contact saved successfully!" << endl;
                }
            }
            phone.close();
        }

        //Doesent work because you have to rewrite the entire .txt file
        /*void deleteContact() {
            string keyword;
            cin >> keyword;
            bool found = false;
            ifstream myfile("number.txt");
            while (myfile >> name >> number) {
                if (keyword == name) {
                    name = "";
                    number = "";
                    cout << "Contact has been deleted";
                    found = true;
                }
            }
            if (found == false) {
                cout << "No such contact was found";
            }
        } */    

        void searchContact() {
            string keyword;
            cin >> keyword;
            bool found = false;
            ifstream myfile("number.txt");
            while (myfile >> name >> number) {
                if (keyword == name) {
                    cout << "Number: " << number <<endl;
                    found = true;
                }
            }
            if (found == false) {
                cout << "No such contact was found!" << endl;
            }
            myfile.close();
        }

        void selfExit() {
            system("cls");
            cout << "\t\t\t\t\t******|  Goodbye!  |****** \n";
            exit(1);
        }

};

