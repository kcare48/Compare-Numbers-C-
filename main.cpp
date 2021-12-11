//
//  main.cpp
//  Output
//
//  Created by Kayley Carey on 12/11/21.
//

#include <iostream>
using namespace std;

int main() {
    
    int firstNumber;
    int secondNumber;
    bool keepGoing = true;
    int answer;
    
    while(keepGoing==true)
        
    {
        
        cout << "Enter a number: ";
        cin >> firstNumber;
        cout << "You entered " << firstNumber << ". Enter another number: ";
        cin >> secondNumber;
       
        if (firstNumber < secondNumber) {
            cout << "The first number, " << firstNumber << " is less than the second number " << secondNumber;
        }
        
        if (firstNumber == secondNumber) {
            cout << "The first number,  " << firstNumber << ", is equal to the second number," << secondNumber;
        }
        
        if (firstNumber > secondNumber) {
            cout << "The first number,  " << firstNumber << " is greater than the second number, " << secondNumber;
        }
        
        cout << "Compare another pair? 0 means no, any other number means yes: ";
        cin >> answer;
        if (answer==0){
            keepGoing = false;
        }
    }
    cout << endl;
    return 0;
}
