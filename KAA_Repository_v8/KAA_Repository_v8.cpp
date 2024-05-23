#include <iostream>
#include <conio.h>
using namespace std;
int a, b, ost, res;
void printMenu() {
    system("cls"); // очищаем экран
    cout << "1. Enter A\n";
    cout << "2. Enter B\n";
    cout << "3. Calculate the remainder of A divided by B\n";
    cout << "4. Calculate integer division of B by A\n";
    cout << "5. Exit\n\n";
    cout << "> ";
}

// Ветка branch1
int enterA() {    
    cout << "Enter A: "; 
    while (!(cin >> a) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Incorrect input.\nTry again: ";
    }
    return a;
}

// Ветка branch2
int enterB() {
    cout << "Enter B: ";
    while (!(cin >> b) || (cin.peek() != '\n'))
    {
        cin.clear();
        while (cin.get() != '\n');
        cout << "Incorrect input.\nTry again: ";
    }
    return b;
}

// Ветка branch3
int calcOst(int a, int b) {
    if (a!= 0 && b!=0) return a%b;
    else { cout << "Error!\n"; return 0; }
}

// Ветка branch4
int resDel(int b, int a) {
    if (a != 0 && b != 0) return b / a;
    else { cout << "Error!\n"; return 0; }
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
            a = enterA();
            break;
        case 2:
            b = enterB();
            break;
        case 3:
            ost = calcOst(a,b);
            cout << "A%B = " << ost << "\n";
            break;
        case 4:
            res = resDel(b,a);
            cout << "B/A = " << ost << "\n";
            break;
        }
        if (variant != 5) {
            cout << "Press any key...\n";
            while (!_kbhit());
        }
    } while (variant != 5);
    return 0;
}