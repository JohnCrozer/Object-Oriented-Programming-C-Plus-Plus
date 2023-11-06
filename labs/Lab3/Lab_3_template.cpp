
/***
* CSE 2010 Fall 2023
* Lab #{3}
* {John Crozer} #{007964704}
* {10/18/23}
*
* {Students will learn how to make class objects and link cpp files}
*
* {Describe 1) The most challenging part was linking the files and figuring out how to solve the lab 2) The other big problem is not being able to run it in my visual studio code so I cant know if it works so I need to come in for help or set up a zoom}
*
***/
#include <iostream>
#include "Person.h" // Include the Person class header
using namespace std;

int main()
{
    // Create a Person object named "bob" and initialize it with specific values
    Person bob("Bob", 30, "Engineer", true);

    // Display the attributes of the "bob" object
    cout << "Name: " << bob.getName() << endl;
    cout << "Age: " << bob.getAge() << endl;
    /*cout << "Occupation: " << bob.getOccupation() << endl;
    cout << "Lives in IE: " << (bob.getLivesInIE() ? "Yes" : "No") << endl;

    // Create another Person object named "jeff" and initialize it with specific values
    Person jeff("jeff", 25, "Doctor", false);

    // Display the attributes of the "jeff" object
    cout << "Name: " << jeff.getName() << endl;
    cout << "Age: " << jeff.getAge() << endl;
    cout << "Occupation: " << jeff.getOccupation() << endl;
    cout << "Lives in IE: " << (jeff.getLivesInIE() ? "Yes" : "No") << endl;

    // Compare the ages of "bob" and "jeff"
    bool isOlderThanjeff = bob.isOlderThan(jeff);

    // Display the result of the age comparison
    cout << "Is Bob older than jeff? " << (bob.isOlderThan(jeff) ? "Yes" : "No") << endl;
*/
    return 0;
}
