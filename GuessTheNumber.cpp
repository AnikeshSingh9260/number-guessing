#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

//int random = offset + (rand() % range);

int main(){
    

    cout<<"\n\t\t\t WELCOM TO GUESS THE NUMBER GAME!"<<endl;
    cout<<"You have to guess a number between 1 and 100. You'll have limited choices based on the level you choose. Good Luck!"<<endl;

    while(true){
        cout << "\n\t\tEnter the difficulty level: \n";
        cout << "\n\t\t1 FOR EASY!\t";
        cout<<"\n\t\t2 FOR MEDIUM!\t";
        cout<<"\n\t\t3 FOR DEFFICULTY!\t";
        cout<<"\n\t\t0 FOR ENDING THE GAME!\n"<<endl;

        int difficultyChoice ;
        cout<<"\t\t\tEnter the number: ";
        cin>>difficultyChoice;

        srand(time(0));
        int secretNumber = 1 + (rand()% 100);
        int playerChoice;

        if(difficultyChoice==1){
            cout << "\n\t\tYou have 10 choices for finding the secret number between 1 and 100.";
            int choicesLeft=10;
            for(int i=1;i<=10;i++){
                cout << "\n\n\t\tEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"Play the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout << "\t\tNope, " << playerChoice << " is not the right number\n";
                    if(playerChoice>secretNumber){
                        cout << "\t\tThe secret number is smaller than the number you have chosen" << endl;
                    }
                    else{
                        cout << "\t\tThe secret number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "\t\tYou couldn't find the secret number, it was "<<secretNumber<<", You lose!!\n\n";
                        cout<<"Play the game again to win!!!\n\n";
                    }
                }

            }
        }
        else if(difficultyChoice==2){
            cout << "\n\t\tYou have 7 choices for finding the secret number between 1 and 100.";
            int choicesLeft=7;
            for(int i=1;i<=7;i++){
                cout << "\n\n\t\tEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout << "Well played! You won, " << playerChoice << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"\t\tPlay the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout << "\t\tNope, " << playerChoice << " is not the right number\n";
                    if(playerChoice>secretNumber){
                        cout << "\t\tThe secret number is smaller than the number you have chosen" << endl;
                    }
                    else{
                        cout << "\t\tThe secret number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "\t\tYou couldn't find the secret number, it was "<<secretNumber<<", You lose!!\n\n";
                        cout<<"\t\tPlay the game again to win!!!\n\n";
                    }
                }

            }
        }
        else if(difficultyChoice==3){
            cout << "\n\t\tYou have 5 choices for finding the secret number between 1 and 100.";
            int choicesLeft=5;
            for(int i=1;i<=5;i++){
                cout << "\n\nEnter the number: ";
                cin>>playerChoice;
                if(playerChoice==secretNumber){
                    cout << "\tWell played! You won, " << playerChoice << " is the secret number" << endl;
                    cout << "\t\t\t Thanks for playing...." << endl;
                    cout<<"\tPlay the game again with us!!\n\n"<<endl;
                    break;
                }else{
                    cout << "\t\tNope, " << playerChoice << " is not the right number\n";
                    if(playerChoice>secretNumber){
                        cout << "\tThe secret number is smaller than the number you have chosen" << endl;
                    }
                    else{
                        cout << "\tThe secret number is greater than the number you have chosen" << endl;
                    }
                    choicesLeft--;
                    cout << choicesLeft << " choices left. " << endl;
                    if(choicesLeft==0){
                        cout << "You couldn't find the secret number, it was "<<secretNumber<<", You lose!!\n\n";
                        cout<<"\tPlay the game again to win!!!\n\n";
                    }
                }

            }
        }
        else if(difficultyChoice==0){
            exit(0);
        }
        else{
            cout << "\tWrong choice, Enter valid choice to play the game! (0,1,2,3)"<<endl;
        }

    }
    return 0;
}