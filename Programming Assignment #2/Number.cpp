#include <iostream>
#include <iomanip>
#include <time.h>
using namespace std;

int main()
{
    int level, guess, generateWinningNumber, numGuess = 0;
    srand(time(NULL));

    cout << "Guess a Number" << endl;
    cout << "Choose difficulty level: 1. easy 2. medium 3. hard" << endl;
    cin >> level;
    switch(level) {
        case 1:
        cout << "easy level, 1-10" << endl;
        generateWinningNumber = rand() % 10 + 1;
        do {
            cin >> guess;
            numGuess++;
                if (generateWinningNumber > guess)
                    cout << "Incorrect: too low" << endl;
                if (generateWinningNumber < guess)
                    cout << "Incorrect: too high" << endl;
                if (generateWinningNumber == guess) {
                    cout << "Winning number" << endl;
                    cout << "Number of tries: " << numGuess << endl;
                    return 0;
                }
        } while (level == 1);
        
        case 2:
        cout << "medium level, 1-50" << endl;
        generateWinningNumber = rand() % 50 + 1;
        do {
            cin >> guess;
            numGuess++;
                if (generateWinningNumber > guess)
                    cout << "Incorrect: too low" << endl;
                else if (generateWinningNumber < guess)
                    cout << "Incorrect: too high" << endl;
                else if (generateWinningNumber == guess) {
                    cout << "Winning number" << endl;
                    cout << "Number of tries: " << numGuess << endl;
                    return 0;
                }
        } while (level == 2);
            
        case 3:
        cout << "hard level, 1-100" << endl;
        generateWinningNumber = rand() % 100 + 1;
        do {
            cin >> guess;
            numGuess++;
                if (generateWinningNumber > guess)
                    cout << "Incorrect: too low" << endl;
                else if (generateWinningNumber < guess)
                    cout << "Incorrect: too high" << endl;
                else if (generateWinningNumber == guess) {
                    cout << "Winning number" << endl;
                    cout << "Number of tries: " << numGuess << endl;
                    return 0;
                }
        } while (level == 3);
    default:
        cout << "Must enter level number 1, 2, or, 3" << endl;
    }
    return 0;
}