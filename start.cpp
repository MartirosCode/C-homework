#include <iostream>
using namespace std;
int main()
{   //1
    double R1, R2, R3;
    std::cout << "������� ������������� R1: ";
    std::cin >> R1;
    std::cout << "������� ������������� R2: ";
    std::cin >> R2;
    std::cout << "������� ������������� R3: ";
    std::cin >> R3;

    double R0 = 1 / (1 / R1 + 1 / R2 + 1 / R3);
    std::cout << "�������� ������������� R0: " << R0;
//2
    const double PI = 3.14159;
    double L;
    cout << "������� ����� ����������: ";
    cin >> L;

    double R = L / (2 * PI);
    double S = PI * pow(R, 2);

    cout << "������ �����: " << R << endl;
    cout << "������� �����: " << S << endl;
   //3
    double V, T, A;
    cout << "V = ";
    cin >> V;
    cout << "T = ";
    cin >> T;
    cout << "A = ";
    cin >> A;
    double S = V * T + (A * T * T) / 2;
    cout << "S = " << S << "\n";
    return 0;
}