//to run always hit run -> start debugging
#include <iostream>
#include <cstdlib> //should have the rand function in it
#include <string>
#include <ctime> //Need it for the seed for rand()

//I dont want to use namespace to practice using std::
    //what is "::" --- scope resolution operator

    int ai_score{0};
    int player_score{0};

    int getRounds()
    {
        int rounds {0}; //keeps track of rounds
        std::cout << "Pick how many rounds you want to play: ";
        std::cin >> rounds;

        return rounds;
    }

    int getPlayerInput() //given error: Cannot overload functions distinguished by return type alone
    //the compiler is not able to distinguish which function you want to invoke at a call point since same name
    {
    int player_input{0};
         //get player input
    std::cout << "Enter 1: Rock, 2: Paper, 3: Scissor" << std::endl;
    std::cin >> player_input;
        //this is saying I want to use "cin, cout, endl" from the library called standard
    return player_input;
    }

    int getAIInput()
    {
        int ai_input{0};
    //get ai input
    srand(time(0));
    ai_input = std::rand() % 3 + 1; 
    //should pick a number between 1 and 3 
    //successfully added the seed, I used the current time as the seed, check notes on how it works
    std::cout << ai_input << std::endl;

    return ai_input;
    }

    //how do i make this function retain updated data = static variables?

    void keepPlayerScore(){

        static int n = 0;
        n++;
    }

    
    void keepAIScore(){

        static int m = 0;
        m++;
    }
 

    void findWinner(int ai_score, int player_score){
        if(ai_score < player_score)
            std::cout << "Player is the winner!" << std::endl;
        else 
            std::cout << "AI is the winner!" << std::endl;

        std::cout << "Thanks for playing" << std::endl;
    }

int main(){

for (int i = getRounds(); i > 0; i--)
{
int player_input = getPlayerInput(); //I'm storing players input into a variable within main
int ai_input = getAIInput();

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
    
}

findWinner(ai_score,player_score);

keepAIScore();
keepAIScore();
keepAIScore();
keepAIScore();
keepAIScore();
//might need pointers to update the value
std::cout << keepAIScore;

//fatal: invalid gitfile format: rps.cpp   fatal: Could not read from remote repository.
//I was able to upload changes to github, see notes on how
//Next steps: Make them into functions

    return 0;
}