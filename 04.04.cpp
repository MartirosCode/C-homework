#include <iostream>
using namespace std;

//int power(int base, int exponent) {
    

   // int result = 1;
   // for (int i = 0; i < exponent; i++) {
        //result *= base;
   // }
   // return result;
//}

//int main() {
    //setlocale(LC_ALL, "rus");


    //int base, exponent;
    //cout << "������� ��������� �������: ";
    //cin >> base;
    //cout << "������� ���������� �������: ";
    //cin >> exponent;
    //cout << "��������� ���������� � �������: " << power(base, exponent) << endl;
    
//}

int sumRange(int num1, int num2) {
    int sum = 0;
    int minNum = (num1 < num2) ? num1 : num2;
    int maxNum = (num1 > num2) ? num1 : num2;
    for (int i = minNum; i <= maxNum; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    setlocale(LC_ALL, "rus"); 
    int num1, num2;
    cout << "������� ������ ����� �����: ";
    cin >> num1;
    cout << "������� ������ ����� �����: ";
    cin >> num2;
    cout << "����� ����� � ���������: " << sumRange(num1, num2) << endl;
    return 0;
}