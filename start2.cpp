#include <iostream>
using namespace std;
//1
int main() {
    setlocale(LC_ALL, "rus");
    int inputSeconds;
    cout << "Введите количество секунд: ";
    cin >> inputSeconds;

    int hours = inputSeconds / 3600;
    int minutes = (inputSeconds % 3600) / 60;
    int seconds = inputSeconds % 60;

    cout << "Часы: " << hours << ", Минуты: " << minutes << ", Секунды: " << seconds << endl;
    //2
    double inputNumber;

    cout << "Введите дробное число: ";

    cin >> inputNumber;


    int dollars = inputNumber;

    int cents = (inputNumber - dollars) * 100;


    cout << "В денежном формате: " << dollars << " долларов и " << cents << " центов" << endl;

    //3
    int inputDays;

    cout << "Введите количество дней: ";

    cin >> inputDays;


    int weeks = inputDays / 7; // Вычисляем количество недель

    int remainingDays = inputDays % 7; // Находим оставшиеся дни


    cout << "Полных недель: " << weeks << endl;

    cout << "Оставшихся дней: " << remainingDays << endl;

    return 0;
}
