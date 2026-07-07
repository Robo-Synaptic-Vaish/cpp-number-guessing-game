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
    ShowTitle();
    srand(time(0));
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
  return 0;
}
