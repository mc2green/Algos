#include <iostream>
using namespace std;
// Objective: When the user inputs a lower-case letter,
// the code will output a right-justified right triangle
// containing letters in an increasing order.

// Example:
// User inputs: d
// Output:
//    a
//   ab
//  abc
// abcd
int main(){
    char inputLetter;
    int lines;
    cout<<"Please enter a lower case letter: "<<endl;
    cin>>inputLetter;
    lines = (int)inputLetter - 97 + 1;

    for(int i = 1; i <= lines; i++){
        for(int j = lines - i; j > 0; j--){
            cout<<" ";
        }
        for(int k = 97; k < (97 + i); k++){
            cout<<(char)k;
        }
        cout<<endl;
    }
    return 0;
}