#include <iostream>

using namespace std;

// Задание 1
bool isLuckyNumber(int number) {
    int digits[6];
    for (int i = 0; i < 6; i++) {
        digits[5 - i] = number % 10;
        number /= 10;
    }

    int sumFirstHalf = digits[0] + digits[1] + digits[2];
    int sumSecondHalf = digits[3] + digits[4] + digits[5];

    return sumFirstHalf == sumSecondHalf;
}

// Задание 2
int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;  // Возвращаем индекс, если нашли ключ
        }
    }
    return -1;  // Возвращаем -1, если ключ не найден
}


