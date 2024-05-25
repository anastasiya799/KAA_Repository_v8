#include <iostream>
#include <string>
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

bool isInputCorrect(string input) {
    if (input.empty()) return false;
    try {
        int number = stoi(input);
    }
    catch (...) {
        return false;
    }
    return true;
}

int calcOst(int a, int b) {
    if (a!= 0 && b!=0) return a%b;
    else { cout << "Error!\n"; return 0; }
}

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
        cout << "Incorrect input. Try again: ";
    }
    return variant;
}

int main()
{
    int variant;
    string str_input = "";
    do {
        printMenu();
        variant = getVariant(5); 
        getline(cin, str_input);
        str_input = "";
        switch (variant) {
        case 1:     
            while (!isInputCorrect(str_input)) {
                cout << "Input A\n";
                getline(cin, str_input);
            }            
            a = stoi(str_input);
            break;
        case 2:
            while (!isInputCorrect(str_input)) {
                cout << "Input B\n";
                getline(cin, str_input);
            }
            b = stoi(str_input);
            break;
        case 3:
            ost = calcOst(a,b);
            cout <<"A = " << a << "\nB = " << b 
                    << "\nA%B = " << ost << "\n";
            break;
        case 4:
            res = resDel(b,a);
            cout << "A = " << a << "\nB = " << b
                    << "\nB/A = " << ost << "\n";
            break;
        }
        if (variant != 5) {
            cout << "Press any key...\n";
            while (!_kbhit());
        }
    } while (variant != 5);
    return 0;
}