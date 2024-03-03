#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    //1
    int number;
    cout << "������� ������������ �����: ";
    cin >> number;

    if (number < 100000 || number > 999999) {
        cout << "������! ������� ������������ �����." << endl;
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
            cout << "��������� ����� - ����������!" << endl;
        }
        else {
            cout << "��������� ����� �� �������� ����������." << endl;
        }
    }


    //2
    int num;
    cout << "������� �������������� �����: ";
    cin >> num;

    if (num < 1000 || num > 9999) {
        cout << "������! ������� �������������� �����." << endl;
    }
    else {
        int firstTwoDigits = num / 100; // �������� ������ ��� �����
        int lastTwoDigits = num % 100;  // �������� ��������� ��� �����
        int swappedNumber = lastTwoDigits * 100 + firstTwoDigits; // ������ ������� � ����������

        cout << "����� � ����������� �������: " << swappedNumber << endl;
    }
    //3
    int numbers[7];
    cout << "������� 7 ����� �����:" << endl;

    // ���� �����
    for (int i = 0; i < 7; i++) {
        cin >> numbers[i];
    }

    // ������� ������������ �����
    int maxNumber = numbers[0];
    for (int i = 1; i < 7; i++) {
        if (numbers[i] > maxNumber) {
            maxNumber = numbers[i];
        }
    }

    // ����� ����������
    cout << "������������ �����: " << maxNumber << endl;

    return 0;
