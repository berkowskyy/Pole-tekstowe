#include <iostream>
#include <conio.h>
#include <Windows.h>
#include "Edit.h"

int main() {
    // Pierwsza czêœæ
    Edit e;
    e.setPosition(9, 5);
    e.setLength(25);
    e.setText("Ala ma psa");
    e.setTextColor(Edit::Color::Blue);
    e.setBackgroundColor(Edit::Color::Green);
    std::string s = e.getText();
    std::cout << "Pole tekstowe nr. 1" << std::endl;
    std::cout << "Zawartosc pola tekstowego: " << s;
    _getch();
    e.print();
    e.userText();
    system("cls");
    s = e.getText();
    std::cout << "Zawartoœæ pola tekstowego: " << s;
    _getch();
    system("cls");
    std::cout << "Pole tekstowe nr. 2" << std::endl;
    Edit e2(e);
    e2.setPosition(15, 20);
    e2.setLength(30);
    e2.setBackgroundColor(Edit::Color::White);
    s = e2.getText();
    std::cout << "Zawartosc pola tekstowego: " << s;
    _getch();
    e2.print();
    e2.userText();
    system("cls");
    s = e2.getText();
    std::cout << "Zawartosc pola tekstowego: " << s;
    _getch();

    return 0;
}
