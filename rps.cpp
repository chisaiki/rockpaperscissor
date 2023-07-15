//to run always hit run -> start debugging
#include <iostream>
#include <cstdlib> //should have the rand function in it
#include <string>
#include <ctime> //Need it for the seed for rand()

//I dont want to use namespace to practice using std::
    //what is "::" --- scope resolution operator

    int player_input;
    int ai_input;
    int rounds {0}; //keeps track of rounds
    int ai_score{0};
    int player_score{0};

int main(){

std::cout << "Pick how many rounds you want to play: ";
std::cin >> rounds;

while (rounds > 0)
{
    //get player input
    std::cout << "Enter 1: Rock, 2: Paper, 3: Scissor" << std::endl;
    std::cin >> player_input;
        //this is saying I want to use "cin, cout, endl" from the library called standard

//get ai input
    
    srand(time(0));
    ai_input = std::rand() % 3 + 1; 
    //should pick a number between 1 and 3 
    //successfully added the seed, I used the current time as the seed, check notes on how it works
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
        {std::cout << "Player wins" << std::endl;
        player_score++;}

    else if (ai_input == 1 && player_input == 3)
        {std::cout << "Ai wins" << std::endl;
        ai_score++;}

    else if(ai_input == 2 && player_input == 1)
        {std::cout << "AI wins" << std::endl;
        ai_score++;}

    else if (ai_input == 3 && player_input == 1)
        {std::cout << "Player wins" << std::endl;
        player_score++;}
    //checks for rock v paper and rock v scissor


    else if (ai_input == 2 && player_input == 3)
    {std::cout << "Player wins" << std::endl;
    player_score++;}

    else if (ai_input == 3 && player_input == 2)
    {std::cout << "Ai wins" << std::endl;
    ai_score++;}
    //checks scissor v paper

    rounds--; //increment round
}

if(ai_score < player_score)
    std::cout << "Player is the winner!" << std::endl;
else 
    std::cout << "AI is the winner!" << std::endl;

std::cout << "Thanks for playing" << std::endl;


//fatal: invalid gitfile format: rps.cpp   fatal: Could not read from remote repository.
//I was able to upload changes to github, see notes on how
//Next steps: Making it out of 3 rounds ------ Next Next Steps: Keep score of the 3 rounds

    return 0;
}