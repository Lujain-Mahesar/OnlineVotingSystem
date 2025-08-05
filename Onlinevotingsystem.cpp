#include <iostream>
#include <string>
#include <conio.h>
using namespace std;

int main() {
    string registeredUsername;
    string registeredPassword;

    
    cout << "WELCOME" << endl;
    cout << "REGISTER TO VOTE!" << endl;
   cout << "username for registration: ";
    cin >> registeredUsername;
    cout << "password for registration: ";
    cin >> registeredPassword;
    cout << "Registration successful!" << endl;
    system("cls");

    
    do {
        string username;
        string password;
        char voteOption;

        cout << "LOGIN" << endl;
        cout << "Enter your username: ";
        cin >> username;

        cout << "Enter your password: ";
        cin >> password;

        if (username == registeredUsername && password == registeredPassword) {
            cout << "Login successful!" << endl;

            system("cls");
            cout << "Please select an option:" << endl;
            cout << "Press A to vote PTI" << endl;
            cout << "Press B to vote PPP" << endl;
            cout << "Press C to vote PML-N" << endl;
            cout << "Press D to vote ANP" << endl;
            cout << "Press E to vote JI" << endl;

            cout << "Enter your vote: ";
            cin >> voteOption;

            int counterPTI = 0;
            int counterPPP = 0;
            int counterPMLN = 0;
            int counterANP = 0;
            int counterJI = 0;

            switch (voteOption) {
                case 'A':
                    counterPTI++;
                    break;
                case 'B':
                    counterPPP++;
                    break;
                case 'C':
                    counterPMLN++;
                    break;
                case 'D':
                    counterANP++;
                    break;
                case 'E':
                    counterJI++;
                    break;
                default:
                    cout << "Invalid vote option!" << endl;
                    break;
            }

            system("cls");
            cout << "THANK YOU FOR VOTING!!" << std::endl;
            cout << "TOTAL VOTES!:" << std::endl;
            cout << "PTI votes: " << counterPTI << endl;
            cout << "PPP votes: " << counterPPP <<endl;
           cout << "PMLN votes: " << counterPMLN << endl;
            cout << "ANP votes: " << counterANP << endl;
            cout << "JI votes: " << counterJI << endl;

        } else {
            cout << "Incorrect username or password. Please try again." << std::endl;
        }

        cout << "Do you want to vote again? (Y/N): ";
        char repeatOption;
        cin >> repeatOption;
        system("cls");

        if (repeatOption != 'Y' && repeatOption != 'y') {
            cout << "HAVE A GOOD DAY:)" << std::endl;
            break;
        }

    } while (true);

    return 0;
}
