#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    char again;

    do {
        int secret = rand() % 100 + 1;
        int guess = 0;
        int tries = 0;

        while (guess != secret) {
            cout << "Guschakir tiv@ (1-100): ";
            cin >> guess;
            tries++;

            if (guess < secret) {
                cout << "Aveli mec e" << endl;
            }
            else if (guess > secret) {
                cout << "Aveli poqr e" << endl;
            }
        }

        cout << "Voruj! Gushakecir " << tries << " porcov!" << endl;
        cout << "Nor khaxal? (y/n): ";
        cin >> again;

    } while (again == 'y');

    cout << "Shnorhakalutyun khaxalu hamar!" << endl;
    return 0;
}
