#include <iostream>
#include <ctime>

using namespace std;

int antiMain() {
    srand((unsigned int) time(nullptr));

    // 1. Variable definitions
    short DieRoll = 0;
    short Guess = 0;
    short cnt1 = 0;
    short cnt2 = 0;

    srand((unsigned int) time(nullptr));

    // 2. Prompt the user for a value
    cout << "Enter a value between 1 and 6 (inclusive):" << endl;
    // 3. Read user-provided value into Guess
    cin >> Guess;
    // 4. Simulate a die roll
    DieRoll = rand() % 6 + 1;
    // 5. Display Guess and DieRoll, the text "WINNER" if they're equal.
    if (Guess == DieRoll) {
        cout << "WINNER! ";
    }
    cout << "Guess: " << Guess << " DieRoll: " << DieRoll << endl;
    // 6. Display "DOUBLE WINNER if DieRoll is an odd number.
    if (DieRoll % 2) {
        cout << "DOUBLE WINNER!" << endl;
    }
    // 7. if DieRoll and Guess combined are greater than or equal to 10
    // and DieRoll is even, print "YOU ARE A LUCKY PERSON".
    if (DieRoll + Guess >= 10 && DieRoll % 2 == 0) {
        cout << "YOU ARE A LUCKY PERSON!" << endl;
    }
    // 8. Use a for loop to print 1 thru 5.
    for (int i = 0; i < 6; i++) {
        cout << i << ' ';
    }
    cout << endl;
    // 9. Use a for loop to count from 100 to 0,
    // displaying numbers evenly divisible by 17.
    for (int i = 100; i % 17 == 0 && i >= 0; i++) {
        cout << i << ' ';
    }
    cout << endl;
    // 10. Use a while loop to count from 100 to 0,
    // displaying numbers evenly divisible by 17.
    cnt1 = 100;
    while (cnt1 % 17 == 0 && cnt1 >= 0) {
        cout << cnt1 << ' ';
        --cnt1;
    }
    cout << endl;
    // 11. do while thing...
    do {
        cout << "Enter a number (0 to exit):" << endl;
        cin >> Guess;
        cout << "The remainder of that divided by five is: " << Guess % 5 << endl;
    } while (Guess != 0);
    // 12. Nested for loop.
    for (cnt1 = 1; cnt1 < 6; cnt1++) {
        for (cnt2 = 1; cnt2 < 7; cnt2++) {
            cout << cnt1 * cnt2 << "\t";
        }
        cout << endl;
    }

    system("pause");
    return 0;
}
