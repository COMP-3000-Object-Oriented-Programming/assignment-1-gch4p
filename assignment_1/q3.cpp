#include <iostream>

using namespace std; 

int main() {
    int max_cap = 0;
    int people = 0;

    cout << "Enter the Maximum occupancy for the room. ";
    cin >> max_cap;
    cout << max_cap << endl;

    cout << "Enter the number of occupants of the room. ";
    cin >> people;
    cout << people << endl;

    if (people <= max_cap) {
        cout << "The number of occupants does not exceed the legal maximum.";
    } else {
        cout << "ATTENTION: MAXIMUM OCCPANCY EXCEEDED. THE LAW REQUIRES " << (people-max_cap) << " PERSONS TO LEAVE THE ROOM IMMEDIATELY";
    }

    return 0; 
}

