//to run always hit run -> start debugging
#include <iostream>
#include <cstdlib> //should have the rand function in it
#include <string>

//I dont want to use namespace to practice using std::
    //what is "::" --- scope resolution operator

    int player_input;
    int ai_input;

int main(){

//get player input
    std::cout << "Enter 1: Rock, 2: Paper, 3: Scissor" << std::endl;
    std::cin >> player_input;
        //this is saying I want to use "cin, cout, endl" from the library called standard

//get ai input
    ai_input = std::rand() % 3 + 1; 
    //should pick a number between 1 and 3 but it just seems to pick only 3
    //Maybe i need to add a "seed?" to make it more random
    //I remember rand() doesnt work that well because it picks randomly once and thats it
    //Next steps: Read about seeds
    std::cout << ai_input << std::endl;

//compare result and find winner
    if(ai_input == 1 && player_input == 1)
        std::cout << "Draw" << std::endl;
    else if (ai_input == 2 && player_input == 2)
        std::cout << "Draw" << std::endl;
    else if (ai_input == 3 && player_input == 3)
        std::cout << "Draw" << std::endl;
    //checks for draws
    
    else if(ai_input == 1 && player_input == 2)
        std::cout << "Player wins" << std::endl;
    else if (ai_input == 1 && player_input == 3)
        std::cout << "Ai wins" << std::endl;

    else if(ai_input == 2 && player_input == 1)
        std::cout << "AI wins" << std::endl;
    else if (ai_input == 3 && player_input == 1)
        std::cout << "Player wins" << std::endl;
    //checks for rock v paper and rock v scissor


    else if (ai_input == 2 && player_input == 3)
    std::cout << "Player wins" << std::endl;
    else if (ai_input == 3 && player_input == 2)
    std::cout << "Ai wins" << std::endl;
    //checks scissor v paper

//Next steps, figure out how to upload it to GITHUB; i did it but need to pratice pushing getting an error
//fatal: invalid gitfile format: rps.cpp   fatal: Could not read from remote repository.
//I was able to upload changes to github, see notes on how

    return 0;
}