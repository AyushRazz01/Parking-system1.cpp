#include <iostream>
using namespace std;

int main() {
    int user_input;
    int amount = 0;
    int count = 0;

    cout << "Program started successfully!" << endl;

    while (true) {
        cout << "\n";
        cout << "VEHICLE-----PARKING----MANAGEMENT-----SYSTEM" << endl << std::flush;

        cout << "\n";
        cout << "ENTER THE NUMBER ACCORDINGLY TO PARK THE LISTED VEHICLES" << endl << std::flush;
        cout << "\n";
        cout << "PRESS 1 : For Bike" << endl << std::flush;
        cout << "PRESS 2 : For Car" << endl << std::flush;
        cout << "PRESS 3 : For Bus" << endl << std::flush;
        cout << "PRESS 4 : TO Show Record" << endl << std::flush;
        cout << "PRESS 5 : To Delete Record" << endl << std::flush;

        cin >> user_input;

        if (user_input == 1) {
            count = count + 1;
            amount = amount + 100;
            cout << "Bike parked. Fee: 100" << endl << std::flush;
        } else if (user_input == 2) {
            amount = amount + 200;
            count = count + 1;
            cout << "Car parked. Fee: 200" << endl << std::flush;
        } else if (user_input == 3) {
            amount = amount + 300;
            count = count + 1;
            cout << "Bus parked. Fee: 300" << endl << std::flush;
        } else if (user_input == 4) {
            cout << "TOTAL AMOUNT IS : " << amount << endl << std::flush;
            cout << "TOTAL NUMBER OF VEHICLES PARKED : " << count << endl << std::flush;
        } else if (user_input == 5) {
            amount = 0;  // Reset the records
            count = 0;
            cout << "Records deleted successfully." << endl << std::flush;
        } else {
            cout << "ENTER THE VALID NUMBER WHICH CAN BE MAPPED WITH THE ABOVE OPERATIONS!" << endl << std::flush;
        }
    }

    return 0;
}
