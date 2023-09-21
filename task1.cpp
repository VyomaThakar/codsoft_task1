
// NOTE :- RUN THIS GAME OR CODE WITH THE C++ RUNNER AND USE THE VS TERMINAL.
//Progrmming with c++
//Guess the Number Game 


#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>   // for time()

using namespace std;

int main() {
    //  random number generator with the current time
    srand(time(0));

    // Generate a random number between 1 and 100
    int hidenum = rand() % 100 + 1;

    int g;
    int a = 0;

    cout << "Welcome to the Guess the Number Game!" << endl;
    cout << "I'm thinking of a number between 1 and 100. Try to guess it." << endl;

    while (true) {
        cout << "Enter your guess: ";
        cin >> g;
        a++;

        if (g < hidenum) {
            cout << "Ohh...Too low! Try again." << endl;
        } else if (g > hidenum) {
            cout << "No You are wrong ..Too high! Try again." << endl;
        } else {
            cout << "Yupp..Congratulations! You guessed the number " << hidenum << " in " << a << " attempts." << endl;
            break;
        }
    }

    return 0;
}
