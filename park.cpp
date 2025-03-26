#include <iostream>
using namespace std;

int main() {
    int user_input;
    int amount = 0;  // Total parking fee collected
    int count = 0;   // Total number of vehicles parked

    while (true) {
        cout << "\n";
        cout << "VEHICLE-----PARKING----MANAGEMENT-----SYSTEM" << endl;

        cout << "\n";
        cout << "ENTER THE NUMBER ACCORDINGLY TO PARK THE LISTED VEHICLES" << endl;
        cout << "\n";
        cout << "PRESS 1 : For AutoRickshaw" << endl;
        cout << "PRESS 2 : For Car" << endl;
        cout << "PRESS 3 : For Bus" << endl;
        cout << "PRESS 4 : TO Show Record" << endl;
        cout << "PRESS 5 : To Delete Record" << endl;
        cout << "PRESS 6 : To Exit" << endl;  // Added an option to exit the program
        cin >> user_input;

        if (user_input == 1) {
            count = count + 1;
            amount = amount + 100;
            cout << "AutoRickshaw parked. Fee: 100" << endl;
        } else if (user_input == 2) {
            amount = amount + 200;
            count = count + 1;
            cout << "Car parked. Fee: 200" << endl;
        } else if (user_input == 3) {
            amount = amount + 300;
            count = count + 1;
            cout << "Bus parked. Fee: 300" << endl;
        } else if (user_input == 4) {
            cout << "TOTAL AMOUNT COLLECTED: " << amount << endl;
            cout << "TOTAL NUMBER OF VEHICLES PARKED: " << count << endl;
        } else if (user_input == 5) {
            amount = 0;  // Reset the records
            count = 0;
            cout << "Records deleted successfully." << endl;
        } else if (user_input == 6) {
            cout << "Exiting the program. Thank you!" << endl;
            break;  // Exit the loop
        } else {
            cout << "ENTER A VALID NUMBER THAT MATCHES THE ABOVE OPTIONS!" << endl;
        }
    }

    return 0;
}
