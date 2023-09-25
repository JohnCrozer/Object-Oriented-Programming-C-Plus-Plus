/***
 * CSE 2010 Fall 2023
 * Lab #{62}
 * {John Crozer} {007964704}
 * {9/15/23}
 * 
 * {Students will learn how to code and document it}
 * 
 * {1) I would say learning the pattern was the most challenging 2) I studied the
 * other pattern for the math that we started with}
 * 
***/


#include <iostream>
#include <cmath>
using namespace std;

// main() takes in no arguments and performs the arithmetic operations based on user selection
// returns 0 when the program terminates without errors. 
// otherwise it returns the number where an invalid selection was made
int main() {
    cout << "Select a number from 1-6.\n \
            1) sqrt(x)\n \
            2) pow(x,y)\n \
            3) ceil(x/y)\n \
            4) floor(x/y)\n \
            5) x/y\n \
            6) x%y\n";

    // instantiate your variables, x and y as int of value 0  
    // make modifications from int to doubles for section 5.2 here
    int x = 0;
    int y = 0;
    int user_selection = 0;

    cin >> user_selection;

    if (cin.fail()) {
        cerr << "Invalid\n";
        return -1;
    } else {
        cout << "You selected " << user_selection << endl;
        if (user_selection == 1){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 1;
            }
            cout << "sqrt(" << x << ") is " << sqrt(x) << endl;
        }
        else if (user_selection == 2){
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()) {
                cerr << "Invalid\n";
                return 2;
            }
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()) {
                cerr << "Invalid\n";
                return 2;
            }
            cout << x << "^" << y << " is " << pow(x,y) << endl;
        }
        else if (user_selection == 3) {
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()) {
                cerr << "Invalid\n";
                return 3;
        }
        cout << "Requesting y\n";
        cin >> y;
        if (cin.fail()) {
            cerr << "Invalid\n";
            return 3;
        }
        cout << "ceil(" << x << "/" << y << ") is " << ceil(static_cast<double>(x) / y) << endl;
        }
        else if (user_selection == 4) {
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()) {
                cerr << "Invalid\n";
                return 4;
            }
            cout << "Requesting y\n";
            cin >> y;
            if (cin.fail()) {
                cerr << "Invalid\n";
                return 4;
            }
            cout << "floor(" << x << "/" << y << ") is " << floor(static_cast<double>(x) / y) << endl;
        }
        else if (user_selection == 5) {
            cout << "Requesting x\n";
            cin >> x;
            if (cin.fail()) {
                cerr << "Invalid\n";
                return 5;
            }
            cout << "Requesting y\n";
           cin >> y;
            if (cin.fail()) {
                cerr << "Invalid\n";
                return 5;
            }
            cout << x << "/" << y << " is " << static_cast<double>(x) / y << endl;
        }
        else if (user_selection == 6){
            cout << "Requesting x\n";
            // the reason we created distinct x and y variables (mod_x, mod_y) 
            // is because '%' only expects int and never doubles. 
            int mod_x = 0.0;
            int mod_y = 0;
            cin >> mod_x;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 6;
            }
            cout << "Requesting y\n";
            cin >> mod_y;
            if (cin.fail()){
                cerr << "Invalid\n";
                return 6;
            }

            cout << mod_x << "/ " << mod_y  << " is " << mod_x%mod_y << endl;
        } else {
            printf("Invalid selection\n");
        }

    }
    
    return 0;
}
