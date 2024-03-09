#include <iostream>
using namespace std;
//1
int main() {
    setlocale(LC_ALL, "rus");
    int number;
    cout << "Введите число:";
    cin >> number;

    int countDigits = 0;
    int sumDigits = 0;
    int countZeros = 0;

    int temp = number;
    while (temp != 0) {
        countDigits++;
        sumDigits += temp % 10;
        temp /= 10;
    }
    double avarage = static_cast<double>(sumDigits) / countDigits;

    temp = number;
    while (temp != 0) {
        if (temp % 10 == 0) {
            countZeros++;


        }
        temp /= 10;

    }
    cout << "Кол-во цифр:" << countDigits << endl;
    cout << "Сумма цифр:" << sumDigits << endl;
    cout << "Среднее арифметическое:" << avarage << endl;
    cout << "Кол-во нулей:" << countZeros << endl;

    //2
    int cellSize;
    cout << "Введите размер клетки:\n";
    cin >> cellSize;
    for (int i = 0; i < 8; i++)
    {
        if (i % 2 == 0)
        {
            for (int m = 0; m < cellSize; m++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (j % 2 == 0)
                    {
                        for (int k = 0; k < cellSize; k++)
                        {
                            cout << "*";
                        }
                    }
                    else
                    {
                        for (int k = 0; k < cellSize; k++)
                        {
                            cout << "-";
                        }
                    }
                }
                cout << "\n";
            }
        }
        else {
            for (int m = 0; m < cellSize; m++)
            {
                for (int j = 0; j < 8; j++)
                {
                    if (j % 2 == 0)
                    {
                        for (int k = 0; k < cellSize; k++)
                        {
                            cout << "-";
                        }
                    }
                    else
                    {
                        for (int k = 0; k < cellSize; k++)
                        {
                            cout << "*";
                        }
                    }
                }
                cout << "\n";
            }
        }
    }
}