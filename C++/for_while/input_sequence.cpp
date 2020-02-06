#include <iostream>
#include <iomanip>
using namespace std;
//Objective: The user can input any amount of numbers
// and once the user wants to end the input amount, they
// can enter in "-1". The program should calculate the sum
// and average of all the user's inputs.
//Example:
// Input: 5 4 3 2 1 -1
// Output: The Sum of this sequence is 15 and the average is 2.50.


int main(){
    int userInput = 0;
    float sum, average, count;
    cout<<"Please enter a sequence of positive integers:"<<endl;

    while(userInput != (-1)){
        cin>>userInput;
        sum += userInput;
        count++;
    }
    sum++;
    average = sum / count;

    cout<<"The sum of this sequence is "<<sum<<" and the average is "<<setprecision(2)<<fixed<<average<<"."<<endl;


    return 0;
}