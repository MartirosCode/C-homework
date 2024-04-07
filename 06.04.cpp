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


int main() {
    // Пример использования для задания 1
    std::cout << "123321 is lucky number: " << isLuckyNumber(123321) << std::endl;  // Выведет 1 (true)
    std::cout << "123456 is lucky number: " << isLuckyNumber(123456) << std::endl;  // Выведет 0 (false)

    // Пример использования для задания 2
    int numbers[] = { 3, 12, 4, 7, 9, 1 };
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int searchKey = 4;
    std::cout << "Index of key 4: " << linearSearch(numbers, size, searchKey) << std::endl;  // Выведет 2 (индекс элемента 4)
    return 0;
}