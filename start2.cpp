#include <iostream>
using namespace std;
//1
int main() {
    setlocale(LC_ALL, "rus");
    int inputSeconds;
    cout << "������� ���������� ������: ";
    cin >> inputSeconds;

    int hours = inputSeconds / 3600;
    int minutes = (inputSeconds % 3600) / 60;
    int seconds = inputSeconds % 60;

    cout << "����: " << hours << ", ������: " << minutes << ", �������: " << seconds << endl;
    //2
    double inputNumber;

    cout << "������� ������� �����: ";

    cin >> inputNumber;


    int dollars = inputNumber;

    int cents = (inputNumber - dollars) * 100;


    cout << "� �������� �������: " << dollars << " �������� � " << cents << " ������" << endl;

    //3
    int inputDays;

    cout << "������� ���������� ����: ";

    cin >> inputDays;


    int weeks = inputDays / 7; // ��������� ���������� ������

    int remainingDays = inputDays % 7; // ������� ���������� ���


    cout << "������ ������: " << weeks << endl;

    cout << "���������� ����: " << remainingDays << endl;

    return 0;
}
