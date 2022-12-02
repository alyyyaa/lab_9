//Дана строка. Подсчитать общее количество содержащихся в ней строчных латинских и русских букв.
#include <iostream>
#include <string>
using namespace std;

void main()
{
    setlocale(LC_ALL, "Russian");
    string s;
    int count_eng = 0;
    int count_ru = 0;
    char eng[] = "abcdefghijklmnopqrstuvwxyz";
    char ru[] = "абвгдеёжзийклмнопрстуфхцчшщъыьэюя";
    cin >> s;
    for (int i = 0; s[i]; i++)
    {
        for (int symb = 0; symb <= 26; symb++)
        {
            if (s[i] == eng[symb])
            { 
                count_eng += 1;
                break;
            }
        }
        for (int symb1 = 0; symb1 <= 33; symb1++)
        {
            if (s[i] == ru[symb1])
            {
                count_ru += 1;
                break; 
            }
        }
    }
    cout << "Количество латинских букв: " << count_eng << endl;
    cout << "Количество русских букв: " << count_ru;
}