#include <iostream>
#include <string>
using namespace std;


int main() //by definition pallendron means it can be read as the same word from forwards and backwards
{
    string input;
    string backwards;//allow user to input a word
   
    cout << "Word: ";
    cin >> input;

    int size = input.length();

    for (int i{ size - 1 }; i >= 0; i--) //loop through the first string 
    {
        backwards = backwards + input[i];  //store the backward version into the new variable
    }
    if (input == backwards)//compare input with the backward version
    {
        cout << "This words!";
    }
    else
        cout << "FAIL";

    return 0;
}
