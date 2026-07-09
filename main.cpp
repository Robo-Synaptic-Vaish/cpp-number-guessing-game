#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void ShowTitle()
{
    cout<<"===============================\n";
    cout<<"    NUMBER GUESSING GAME       \n";
    cout<<"===============================\n\n";

}

void TakeGuess(int &guess)
{ 
    cout<<"Enter your guess: ";
    cin>>guess;
}

int GenerateRandomNumber()
{
    return rand() % 100 + 1;
}
int main()
{
    int guess;
    srand(time(0));
    char choice = 'Y';
    while(choice == 'Y' || choice == 'y')
    {
        ShowTitle();
        int num = GenerateRandomNumber();
        int attempts = 0;
        while (true)
            {
            TakeGuess(guess);
            attempts++;
            if (guess < num)
            {
                cout<<"Too low!\n";
            }
            else if (guess > num)
            {
                cout<<"Too high!\n";
            }

            else
            {
                cout<<"Yes! You've guessed it right!\n";
                cout<<"You guessed the number in "<<attempts<<" attempt(s)!\n";
                break;
            }
        }
        cout<<"Do you want to play again? (y/n)";
        cin>>choice;
        cout<<"\n";
    }
    cout<<"Thanks for playing! \n";
    cout<<"Have a nice day!\n";
    
    return 0;
}
            
                
