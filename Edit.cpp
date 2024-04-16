#include "Edit.h"
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

Edit::Edit() : xPos(0), yPos(0), length(0), maxLength(0), textColor(Color::White), bgColor(Color::Black), text("") {}

Edit::Edit(const Edit& other) : xPos(other.xPos), yPos(other.yPos), length(other.length),
textColor(other.textColor), bgColor(other.bgColor), text(other.text) {}

void Edit::setPosition(int x, int y) {
    xPos = x;
    yPos = y;
}

void Edit::setLength(int len) {
    length = len;
    maxLength = len;
}

void Edit::setText(const string& txt) {
    text = txt;
}

void Edit::setTextColor(Color color) {
    textColor = color;
}

void Edit::setBackgroundColor(Color color) {
    bgColor = color;
}

string Edit::getText() const {
    return text;
}

void Edit::print() const {
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD pos = { xPos, yPos };
    SetConsoleCursorPosition(hConsole, pos);
    SetConsoleTextAttribute(hConsole, WORD(bgColor) << 4 | WORD(textColor));
    cout << text;

}

void Edit::userText() {
    int ch = 0;
    while ((ch = _getch()) != 13) {
        if (ch == 8 && !text.empty()) {
            text.pop_back();
            print();
        }
        else if (std::isprint(ch) && text.length() < maxLength) {
            text += ch;
            print();
        }
        
    }
}

