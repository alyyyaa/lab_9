//Дана строка, состоящая из русских слов, разделенных пробелами (одним или несколькими). Найти длину самого длинного слова.
#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    string s;
    getline(cin, s);
    int max_w = 0, count = 0;
    for (int i = 0; s[i]; i++)
    {
        if (s[i] != ' ') count += 1;
        else
        {
            if (count != 0) {
                max_w = max(max_w, count);
                count = 0;
            }
        }
    }
    cout << max_w;
}