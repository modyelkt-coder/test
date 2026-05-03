#include <iostream>
#include <cmath>
#include <string>
#include <windows.h>
#include <cstdio>

using namespace std;

int main() {
    setvbuf(stdout, NULL, _IONBF, 0);
    system("color 0C");

    string message = " love you ";
    int mSize = message.length();

    const int totalSteps = 40;
    for (int step = 0; step < totalSteps; step++) {
        system("cls");
        int charCount = step;

        for (float y = 1.5f; y > -1.5f; y -= 0.1f) {
            for (float x = -1.5f; x < 1.5f; x += 0.05f) {
                float formula = x * x + y * y - 1;
                if (formula * formula * formula - x * x * y * y * y <= 0.0f) {
                    cout << message[charCount % mSize];
                    charCount++;
                } else {
                    cout << ' ';
                }
            }
            cout << endl;
        }

        cout.flush();
        Sleep(100);
    }

    cout << "\nby Ali <3" << endl;
    return 0;
}
