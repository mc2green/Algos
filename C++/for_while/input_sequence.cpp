#include <iostream>
#include <iomanip>
using namespace std;
//Objective: The user can input any amount of numbers
// and once the user wants to end the input amount, they
// can enter in "-1". The program should calculate the 
// sum, average, number of even numbers, and minimum
// given all the user's inputs.
//Example:
// Input: 5 4 3 2 1 -1
// Output: The Sum of this sequence is 15, average is 3.00, 
//         there are 2 even numbers,  and the minimum is 1.


int main(){
    int userInput, evenCount, count, min;
    float sum, average;
    bool keepGoing;
    cout<<"Please enter a sequence of positive integers:"<<endl;
    keepGoing = true;
    
    userInput = 0;
    evenCount = 0;
    count = 0;
    min = 0;

    while(keepGoing ==  true){
        cin>>userInput;
        if(userInput == -1){
            keepGoing = false;
        }
        else{
            sum += userInput;
            count++;
            if(userInput % 2 == 0){
                evenCount++;
            }
            if(count == 1){
                min = userInput;
            }
            else{
                if(userInput < min) min = userInput;
            }
        }
    }
    average = sum / count;

    cout<<"The sum of this sequence is "<<sum<<" and the average is "<<setprecision(2)<<fixed<<average<<", "<<
    "there are "<< evenCount<<" even numbers,"<<" and the minimum is "<<min<<"."<<endl;


    return 0;
}


