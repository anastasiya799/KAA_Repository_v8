#include <iostream>
#include <conio.h>
using namespace std;

void printMenu() {
    system("cls"); // очищаем экран
    cout << "1. Enter A\n";
    cout << "2. Enter B\n";
    cout << "3. Calculate the remainder of A divided by B\n";
    cout << "4. Calculate integer division of B by A\n";
    cout << "5. Exit\n\n";
    cout << ">";
}

// Ветка branch1
int enterA() {

}

// Ветка branch2
int enterB() {

}

// Ветка branch3
int calcOst() {

}

// Ветка branch4
int resDel() {

}

int getVariant(int count) {
    int variant;
    while (!(cin >> variant) || (cin.peek() != '\n') || (variant < 0 ||
        variant>count))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Incorrect input. Try again: ";// выводим сообщение об ошибке
    }
    return variant;
}

int main()
{
    int variant;
    do {
        printMenu();
        variant = getVariant(5);
        switch (variant) {
        case 1:
            enterA();
            break;
        case 2:
            enterB();
            break;
        case 3:
            calcOst();
            break;
        case 4:
            resDel();
            break;
        }
        if (variant != 5) {
            cout << "Press any key...\n";
            while (!_kbhit());
        }
    } while (variant != 5);
    return 0;
}