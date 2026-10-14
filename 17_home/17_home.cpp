#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    ofstream file("text.txt");

    if (!file.is_open())
    {
        cout << "Помилка! Не вдалося відкрити файл." << endl;
        return 1;
    }

    string text;

    for (int i = 0; i < 5; i++)
    {
        cout << "Введіть рядок " << i + 1 << ": ";
        getline(cin, text);
        file << text << endl;
    }

    file.close();

    cout << "Текст успішно записано у файл!" << endl;

    return 0;
}







//2

int main()
{
    ifstream file("text.txt");

    if (!file.is_open())
    {
        cout << "Помилка! Файл не існує або не вдалося його відкрити." << endl;
        return 1;
    }

    string text;

    cout << "Вміст файлу:" << endl;

    while (getline(file, text))
    {
        cout << text << endl;
    }

    file.close();

    return 0;
}
