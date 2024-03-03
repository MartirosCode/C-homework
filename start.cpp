#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    //1
    int number;
    cout << "Введите шестизначное число: ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        cout << "Ошибка! Введите шестизначное число." << endl;
    }
    else {
        int sum_first_half = 0, sum_second_half = 0;
        int temp = number;

        for (int i = 0; i < 3; i++) {
            sum_first_half += temp % 10;
            temp /= 10;
        }

        for (int i = 0; i < 3; i++) {
            sum_second_half += temp % 10;
            temp /= 10;
        }

        if (sum_first_half == sum_second_half) {
            cout << "Введенное число - счастливое!" << endl;
        }
        else {
            cout << "Введенное число не является счастливым." << endl;
        }
    }


    //2
    int num;
    cout << "Введите четырехзначное число: ";
    cin >> num;

    if (num < 1000 || num > 9999) {
        cout << "Ошибка! Введите четырехзначное число." << endl;
    }
    else {
        int firstTwoDigits = num / 100; // Получаем первые две цифры
        int lastTwoDigits = num % 100;  // Получаем последние две цифры
        int swappedNumber = lastTwoDigits * 100 + firstTwoDigits; // Меняем местами и складываем

        cout << "Число с поменянными цифрами: " << swappedNumber << endl;
    }
    //3
    int numbers[7];
    cout << "Введите 7 целых чисел:" << endl;

    // Ввод чисел
    for (int i = 0; i < 7; i++) {
        cin >> numbers[i];
    }

    // Находим максимальное число
    int maxNumber = numbers[0];
    for (int i = 1; i < 7; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    // Вывод результата
    cout << "Максимальное число: " << maxNumber << endl;

    return 0;
