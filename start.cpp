#include <iostream>
using namespace std;
int main() {

    setlocale(LC_ALL, "rus");
    //1
    const int size = 20;
    int arr[size];
    int min, max;

    // Заполнение массива случайными числами
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // генерируем случайное число от 0 до 99
    }

    // Нахождение минимального и максимального элементов
    min = arr[0];
    max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // Вывод результата
    cout << "Массив: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Минимальный элемент: " << min << endl;
    cout << "Максимальный элемент: " << max << endl;

    //2
    const int SIZE = 10;
    int ar[SIZE];
    int lowerBound, sum = 0;

    cout << "Введите нижнюю границу: ";
    cin >> lowerBound;

    // Заполнение массива случайными числами
    for (int i = 0; i < SIZE; i++) {
        ar[i] = rand() % 100; // генерируем случайное число от 0 до 99
    }

    // Подсчет суммы элементов массива, меньших lowerBound
    for (int i = 0; i < SIZE; i++) {
        if (ar[i] < lowerBound) {
            sum += ar[i];
        }
    }

    // Вывод результата
    cout << "Массив: ";
    for (int i = 0; i < SIZE; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;

    cout << "Сумма элементов меньше " << lowerBound << ": " << sum << endl;
    //3
    const int months = 12;
    double profits[months];

    // Ввод прибыли за каждый месяц
    for (int i = 0; i < months; ++i) {
        cout << "Введите прибыль за " << i + 1 << "-й месяц: ";
        cin >> profits[i];
    }

    int startMonth, endMonth;
    cout << "Введите начальный и конечный месяцы диапазона: ";
    cin >> startMonth >> endMonth;

    double maxProfit = profits[startMonth - 1];
    double minProfit = profits[startMonth - 1];
    int maxMonth = startMonth;
    int minMonth = startMonth;

    // Поиск максимальной и минимальной прибыли в указанном диапазоне
    for (int i = startMonth; i <= endMonth; ++i) {
        if (profits[i - 1] > maxProfit) {
            maxProfit = profits[i - 1];
            maxMonth = i;
        }
        if (profits[i - 1] < minProfit) {
            minProfit = profits[i - 1];
            minMonth = i;
        }
    }

    cout << "Месяц с максимальной прибылью: " << maxMonth << endl;
    cout << "Месяц с минимальной прибылью: " << minMonth << endl;

}