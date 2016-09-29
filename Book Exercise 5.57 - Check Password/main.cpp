//
//  main.cpp
//  Book Exercise 5.57 - Check Password
//
//  Created by ax on 9/28/16.
//  Copyright © 2016 COMP130. All rights reserved.
//


#include<iostream>
#include<string>
using namespace std;

int main() {
    
    string pass_input = " ";
    
    cout << "Create a password. Password must be: \n";
    cout << "* At least 8 characters long \n";
    cout << "* Only numbers or letters (a-z, 0-9) \n";
    cout << "* Must contain at least two digits \n";
    cout << "Enter your password now: ";
    
    // enter ssn
    getline(cin, pass_input);
    
    int char_count = static_cast<int>(pass_input.length());
    int digit_count = 0;
    bool letters_digits_only = 0;
    
    for (int i = 0; i <= pass_input.length(); i++) {
        if ( (toupper(pass_input[i]) > 'A' && toupper(pass_input[i]) < 'Z') ||  isdigit(pass_input[i])) {
            letters_digits_only = 1;
            if (isdigit(pass_input[i])) {
                digit_count++;
            }
        }
    }
    
    if (char_count >= 8 && digit_count >= 2 && letters_digits_only) {
        cout << "Valid Password" << endl;
    } else {
        cout << "Invalid Password" << endl;
    }
    
    return 0;
}
