#include <iostream>
using namespace std;
int main() {
    setlocale(LC_ALL, "rus");
    //1
    int a;
    int sum = 0;

    cout << "������� �������� a: ";
    cin >> a;

    if (a < 1 || a > 500) {  // �������� ����������� ��������� ��� a
        cout << "�������� a ������ ���� � ��������� �� 1 �� 500" << endl;
    }
    else {
        for (int i = a; i <= 500; i++) {
            sum += i;  // ���������� �����
        }
        cout << "����� ����� ����� �� " << a << " �� 500 �����: " << sum << endl;
    }

    //2
    int x, y, i;
    float power;
    power = 1;

    cout << "������� �������� X:\n";
    cin >> x;

    cout << "������� �������� Y:\n";
    cin >> y;
    if (y == 0)
    {
        power = 1;
    }
    else
    {
        i = 1;
        while (i <= abs(y))
        {
            power = power * x;
            i = i + 1;
        }
        if (y < 0)
        {
            power = 1 / power;
        }
    }
    cout << "Result = " << power;

    //3
    float result;
    result = 0;
    for (int i = 1; i <= 1000; i++)
    {
        result = result + i;
    }
    result = result / 1000;
    cout << "Result = " << result;

    //4
    int b, s, l;

    s = 1;

    cin >> b;

    for (l = b; l <= 20; l++)

    {



        s = s * l;

    }



    cout << " proizvedenie = " << s;
}
  