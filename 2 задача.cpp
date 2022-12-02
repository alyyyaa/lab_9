//Даны строки S и S0. Найти количество вхождений строки S0 в строку S.
#include<iostream>
#include <string>
using namespace std;

void main()
{
    string s, s0;
    int amount = 0;
    cout << "Введите строку S: ";
    cin >> s;
    cout << "Введите строку S0: ";
    cin >> s0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] == s0[0])
        {
            int count = 1;
            for (int k = 1; k < s0.size(); k++)
            {
                if (s[i + k] == s0[k])
                    count += 1;
                if (count == s0.size())
                    amount += 1;
            }
        }
    }
    cout << "Количество вхождений строки S0 в строку S: " << amount;
}