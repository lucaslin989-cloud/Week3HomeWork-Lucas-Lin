#include <iostream>
#include <string>
#include <ctime>
#include <random>

using namespace std;

int main(){
    int playAgain = 0;
    int computerChoice = 0;
    srand(time(0));
    cout << "Welcome to Rock, Paper, Scissors, Lizard, Spock!" << endl;

    do{
        //TODO: Ask the player which option they will choose
        cout<<"Which one you like to choose \n"<<"Rock = 1\n"<<"Paper = 2\n"<<"Scissors = 3\n"<<"Lizard = 4\n"<<"Spock = 5\n";
        int player =0;
        cin >>player;
        if (player < 1 || player > 5) {
            cout << "Invalid choice. Try again.\n";
            continue;
        }

        
            //TODO: Generate a random number between 1 and 5
            //      for the computer's selection
        int cpmputerChoice = rand()%5+1;

        //TODO: Use a combination of switch and/or if statements to determine the winner
        //      and print it to the console. Please also set the result variable equal to
        //      the same string. The statements should be one of the of the following:
        if (player == computerChoice){
            cout<<"It's a tie";
        }
        else if (player ==1){
            if (computerChoice==2){
                cout<<"Paper cover Rock! You lose!\n";
            }
            else  if (computerChoice==3){
                cout<<"Rock crushes Scissors! You win!\n";
            }
            else  if (computerChoice==4){
                cout<<"Rock crushes Lizard! You win!\n";
            }
            else  if (computerChoice==5){
                cout<<"Spock vaporizes Rock! You lose!\n";
            }
        }
        else if (player ==2){
            if (computerChoice==1){
                cout<<"Paper covers Rock! You win!\n";
            }
            else  if (computerChoice==3){
                cout<<"Scissors cut Paper! You lose!\n";
            }
            else  if (computerChoice==4){
                cout<<"Lizard eats Paper! You lose!\n";
            }
            else  if (computerChoice==5){
                cout<<"Paper disproves Spock! You win!\n";
            }
        }
        else if (player ==3){
            if (computerChoice==1){
                cout<<"Rock crushes Scissors! You lose!\n";
            }
            else  if (computerChoice==2){
                cout<<"Scissors cut Paper! You win!\n";
            }
            else  if (computerChoice==4){
                cout<<"Scissors decapitates Lizard! You win!\n";
            }
            else  if (computerChoice==5){
                cout<<"Spock smashes Scissors! You lose!\n";
            }
        }
        else if (player ==4){
            if (computerChoice==1){
                cout<<"Rock crushes Lizard! You lose!\n";
            }
            else  if (computerChoice==2){
                cout<<"Lizard eats Paper! You win!\n";
            }
            else  if (computerChoice==3){
                cout<<"Scissors decapitates Lizard! You lose!\n";
            }
            else  if (computerChoice==5){
                cout<<"Lizard poisons Spock!! You win!\n";
            }
        }
        else if (player ==5){
            if (computerChoice==1){
                cout<<"Spock vaporizes Rock! You win!\n";
            }
            else  if (computerChoice==2){
                cout<<"Paper disproves Spock! You lose!\n";
            }
            else  if (computerChoice==3){
                cout<<"Spock smashes Scissors! You win!\n";
            }
            else  if (computerChoice==4){
                cout<<"Lizard poisons Spock!! You lose!\n";
            } 
        }
        
        //      "It's a tie!"
        //      "Scissors cut Paper!"
        //      "Paper covers Rock!"
        //      "Rock crushes Lizard!"
        //      "Lizard poisons Spock!"
        //      "Spock smashes Scissors!"
        //      "Scissors decapitates Lizard!"
        //      "Lizard eats Paper!"
        //      "Paper disproves Spock!"
        //      "Spock vaporizes Rock!"
        //      "Rock crushes Scissors!"
        //      The following statement after one of the above statements should be either:
        //      "You win!" or "You lose!"
        //      Example: 
        //      cout << "Paper disproves Spock! You win!" << endl;
        //      result = "Paper disproves Spock! You win!";

        do{
            cout << "Would you like to play again? (1) Yes (2) No: ";
            cin >> playAgain;
        }while(playAgain != 1 && playAgain != 2);
    }while(playAgain == 1);

    return 0;
}