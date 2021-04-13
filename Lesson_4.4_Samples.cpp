/*
Lesson 4.4 Samples
Pawelski
4/13/2021
Here are the sample programs for today's lesson!
*/

#include <iostream>
#include <time.h>
using namespace std;

int main()
{
    // Example 1
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            break;
        }
        cout << i << "\n";
    }
    cout << "\n";

    // Example 2
    int i = 0;
    while (i < 10)
    {
        cout << i << "\n";
        i++;
        if (i == 4)
        {
            break;
        }
    }
    cout << "\n";

    // Example 3
    for (int j = 0; j < 10; j++)
    {
        if (j == 4)
        {
            continue;
        }
        cout << j << "\n";
    }
    cout << "\n";

    // Example 4
    int j = 0;
    while (j < 10)
    {
        if (j == 4)
        {
            j++;
            continue;
        }
        cout << j << "\n";
        j++;
    }
    cout << "\n";

    // Example 5
    // This particular program uses nested loops.
    // We will discuss nested loops tomorrow!
    srand(time(0));
    while (true)
    {
        int numberOfGuesses = 0;
        int secretNumber = rand() % 100 + 1;
        cout << "I'm thinking of a number between 1 and 100...\n";
        while (true)
        {
            numberOfGuesses++;
            int guess;
            cout << "Guess my number: ";
            cin >> guess;
            if (guess < secretNumber)
            {
                cout << "Wrong, too low!\n";
            }
            else if (guess > secretNumber)
            {
                cout << "Wrong, too high!\n";
            }
            else
            {
                cout << "You guessed my number!\n";
                cout << "You took " << numberOfGuesses << " to get the number.\n";
                break;
            }
        }
        string again;
        cout << "Play again? (Yes/No) ";
        cin >> again;
        if (again == "no" || again == "No")
        {
            break;
        }
    }
    return 0;
}
