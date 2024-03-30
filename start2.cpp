#include <iostream>
using namespace std;


int main() {
    setlocale(LC_ALL, "rus");
    //1
    const int SIZE = 5;
    int arr[SIZE][SIZE] = { {1, 2, 3, 4, 5},
                            {6, 7, 8, 9, 10},
                            {11, 12, 13, 14, 15},
                            {16, 17, 18, 19, 20},
                            {21, 22, 23, 24, 25} };

    int minSum = 0; // Инициализируем минимальную сумму
    for (int i = 0; i < SIZE; ++i) {
        int currentSum = 0; // Инициализируем сумму текущей строки
        for (int j = 0; j < SIZE; ++j) {
            currentSum += arr[i][j];
        }
        if (i == 0 || currentSum < minSum) {
            minSum = currentSum;
        }
    }
    cout << "Минимальная сумма элементов строки: " << minSum << endl;
    
    //2
    const int ROWS = 3;
    const int COLS = 3;
    int ar[ROWS][COLS] = { {123, 456, 127},
                           {789, 258, 384},
                           {654, 963, 741} };
    char userChar;
    cout << "Введите цифру для поиска: ";
    cin >> userChar;

    for (int i = 0; i < ROWS; ++i) {
        int count = 0;
        for (int j = 0; j < COLS; ++j) {
            int lastDigit = ar[i][j] % 10; // Получаем последнюю цифру
            if (lastDigit == (userChar - '0')) {
                count++;
            }
        }
        cout << "В строке " << i + 1 << " количество элементов с последней цифрой равной '" << userChar << "': " << count << endl;
    }

    //3
    const int size = 5;
    int arrr[size][size] = { {1, 2, 3, 4, 5}, 
                           {2, 6, 7, 8, 9},
                           {3, 7, 10, 11, 12},
                           {4, 8, 11, 13, 14},
                           {5, 9, 12, 14, 15} };

    bool symmetric = true;
    for (int i = 0; i < size; ++i) {
        for (int j = 0; j < i; ++j) {
            if (arrr[i][j] != arrr[j][i]) {
                symmetric = false;
                break;
            }
        }
    }
    if (symmetric) {
        cout << "YES" << endl;
    }
    else {
        cout << "NO" << endl;
    }

}