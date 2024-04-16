#ifndef EDIT_H
#define EDIT_H

#include <string>

class Edit {
public:
    /// <summary>
    /// Definiuje dostepne kolory tekstu i tla
    /// </summary>
    enum class Color {
        Black = 0,
        Blue,
        Green,
        Cyan,
        Red,
        Magenta,
        Brown,
        LightGray,
        DarkGray,
        LightBlue,
        LightGreen,
        LightCyan,
        LightRed,
        LightMagenta,
        Yellow,
        White
    };
    /// <summary>
    /// Konstruktor
    /// </summary>
    Edit();
    /// <summary>
    /// Konstruktor kopiujacy
    /// </summary>
    /// <param name="other">kopie parametrow z konstruktora</param>
    Edit(const Edit& other);

    /// <summary>
    /// Ustawienie pozycji pola tekstowego
    /// </summary>
    /// <param name="x">Pozycja X</param>
    /// <param name="y">Pozycja Y</param>
    void setPosition(int x, int y);

    /// <summary>
    /// Ustawienie dlugosci pola tekstowego
    /// </summary>
    /// <param name="len">parametr dot. dlugosci</param>
    void setLength(int len);

    /// <summary>
    /// Ustawienie zawartosci pola tekstowego
    /// </summary>
    /// <param name="txt">parametr zawartosci</param>
    void setText(const std::string& txt);

    /// <summary>
    /// Ustawienie koloru tekstu w polu txt
    /// </summary>
    /// <param name="color">parametr koloru do tekstu pola txt</param>
    void setTextColor(Color color);
    
    /// <summary>
    /// Ustawienie koloru tla pola tekstowego
    /// </summary>
    /// <param name="color">parametr koloru tla pola tekstowego</param>
    void setBackgroundColor(Color color);

    /// <summary>
    /// Pobieranie zawartosci tekstu z pola txt
    /// </summary>
    /// <returns>Zwraca tekst pola txt</returns>
    std::string getText() const;
    /// <summary>
    /// Wyswietla text
    /// </summary>
    void print() const;

    /// <summary>
    /// Metoda pozwalajaca uzytkownikowi na wpisanie tekstu
    /// </summary>
    void userText();

private:
    /// <summary>
    /// Pozycja X pola txt
    /// </summary>
    int xPos;
    /// <summary>
    /// Pozycja Y pola txt
    /// </summary>
    int yPos;
    /// <summary>
    /// Dlugosc pola txt
    /// </summary>
    int length;
    /// <summary>
    /// Kolor textu
    /// </summary>
 
    /// <summary>
    /// MAksymalna dlugosc pola txt
    /// </summary>
    int maxLength;
    Color textColor;
    /// <summary>
    /// Kolot tla
    /// </summary>
    Color bgColor;
    /// <summary>
    /// Tekst
    /// </summary>
    std::string text;
};

#endif // EDIT_H

