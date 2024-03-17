#include <iostream>
using namespace std;
int main() {

    setlocale(LC_ALL, "rus");
    //1
    const int size = 20;
    int arr[size];
    int min, max;

    // ���������� ������� ���������� �������
    for (int i = 0; i < size; i++) {
        arr[i] = rand() % 100; // ���������� ��������� ����� �� 0 �� 99
    }

    // ���������� ������������ � ������������� ���������
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

    // ����� ����������
    cout << "������: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "����������� �������: " << min << endl;
    cout << "������������ �������: " << max << endl;

    //2
    const int SIZE = 10;
    int ar[SIZE];
    int lowerBound, sum = 0;

    cout << "������� ������ �������: ";
    cin >> lowerBound;

    // ���������� ������� ���������� �������
    for (int i = 0; i < SIZE; i++) {
        ar[i] = rand() % 100; // ���������� ��������� ����� �� 0 �� 99
    }

    // ������� ����� ��������� �������, ������� lowerBound
    for (int i = 0; i < SIZE; i++) {
        if (ar[i] < lowerBound) {
            sum += ar[i];
        }
    }

    // ����� ����������
    cout << "������: ";
    for (int i = 0; i < SIZE; i++) {
        cout << ar[i] << " ";
    }
    cout << endl;

    cout << "����� ��������� ������ " << lowerBound << ": " << sum << endl;
    //3
    const int months = 12;
    double profits[months];

    // ���� ������� �� ������ �����
    for (int i = 0; i < months; ++i) {
        cout << "������� ������� �� " << i + 1 << "-� �����: ";
        cin >> profits[i];
    }

    int startMonth, endMonth;
    cout << "������� ��������� � �������� ������ ���������: ";
    cin >> startMonth >> endMonth;

    double maxProfit = profits[startMonth - 1];
    double minProfit = profits[startMonth - 1];
    int maxMonth = startMonth;
    int minMonth = startMonth;

    // ����� ������������ � ����������� ������� � ��������� ���������
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

    cout << "����� � ������������ ��������: " << maxMonth << endl;
    cout << "����� � ����������� ��������: " << minMonth << endl;

}