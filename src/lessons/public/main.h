#pragma once

#include <iostream>

using namespace std;

void LessonOne()
{
    cout << "LESSON ONE:  Introduction" << endl << endl;
    string mystring;
    mystring = "Name: Francisco Martinez\n";

    cout << mystring;
    mystring = "Favorite Hobby: Guitar playing\n";

    cout << mystring;
    mystring = "Major: Software Engineering\n";

    cout << mystring << endl << endl;
}

void LessonTwo()
{
    cout << "LESSON TWO:  Number" << endl << endl;
    string name = "Francisco Martinez";
    double num = 7;
    double num1 = num / 2;
    double num2 = num * 11;

    cout << "Name: " << name;
    cout << "\nNumber: " << num;
    cout << "\nNumber divided by 2 = " << num1;
    cout << "\nNumber times 11 = " << num2 << endl << endl;
    
}

void LessonThree()
{
    cout << "LESSON THREE:  Gas Tank" << endl << endl;
    double gallons; //To hold the has tank capacity (in gallons)
    double miles; //To hold the miles the car can go on 1 tank of gas
    double mileage; //To hold the calculated miles per gallon

    //Get the gas tank capacity
    cout << "How many gallons of gas can the car hold? ";
    cin >> gallons;

    //Get the miles the car can travel on a full tank
    cout << "How many miles can you drive on a full tank? ";
    cin >> miles;

    // Calculate the miles per gallon
    mileage = miles / gallons;

    // Display the result
    cout << "This car gets " << mileage << " miles per gallon." << endl << endl;
}

void LessonFour()
{
    cout << "LESSON FOUR:  Age Restrictions" << endl << endl;
    int answer, drive, vote, gamble;
    // Making answer for storing age and other variables for checking conditions
    cout << "Enter Your Age: ";
    cin >> answer;
    // taking input from user

    //outputing age
    cout << "Age: " << answer << endl;
    //checking if the age is more than 21, then the user is eligable for all the three things
    if (answer >= 21) {
        cout << "You are old enough to drive a car." << endl;
        cout << "You are old enough to vote." << endl;
        cout << "You are old enough to gamble." << endl;
    }
    else {
        if (answer < 21 && answer >= 18) {
            vote = answer - 18;
            gamble = 21 - answer;
            cout << "You are old enough to drive a car." << endl;

            if (vote == 0) {
                cout << "You are old enough to vote." << endl;
            }
            else {
                cout << "You have " << vote << " years until you are old enough to vote." << endl;
            }
            cout << "You have " << gamble << " years until you are old enough to gamble." << endl;
        }
        if (answer < 18 && answer >= 16) {
            drive = 16 - answer;
            vote = 18 - answer;
            gamble = 21 - answer;
            cout << "You are old enough to drive a car." << endl;
            cout << "You have " << vote << " years until you are old enough to vote." << endl;
            cout << "You have " << gamble << " years until you are old enough to gamble." << endl;
        }
        if (answer < 16) {
            drive = 16 - answer;
            vote = 18 - answer;
            gamble = 21 - answer;
            cout << "You have " << drive << " years until you are old enough to drive a car." << endl;
            cout << "You have " << vote << " years until you are old enough to vote." << endl;
            cout << "You have " << gamble << " years until you are old enough to gamble." << endl << endl;
        }
    }
}
