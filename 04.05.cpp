#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    //int rows, cols;
    //cout << "������� ���������� �����: ";
    //cin >> rows;
    //cout << "������� ���������� ��������: ";
    //cin >> cols;

    //int** arr = new int* [rows];
    //for (int i = 0; i < rows; i++) {
     //   arr[i] = new int[cols];
   // }

    // ������������� ���������� �������
 //   for (int i = 0; i < rows; i++) {
        //for (int j = 0; j < cols; j++) {
        //    arr[i][j] = i * cols + j;
      //  }
    //}

    // ����� ��������� �������
   // cout << "�������� ������:" << endl;
    //for (int i = 0; i < rows; i++) {
   //     for (int j = 0; j < cols; j++) {
       //     cout << arr[i][j] << " ";
     //   }
   //     cout << endl;
   // }

    // ���������� ������ �������� � ����� ������� �� �������
   // int newValue;
   // int rowToAdd, colToAdd;
    //cout << "������� �������� ������ ��������: ";
    //cin >> newValue;
    //cout << "������� ������ ������ ��� ����������: ";
   // cin >> rowToAdd;
   // cout << "������� ������ ������� ��� ����������: ";
    //cin >> colToAdd;

    // ���������, ����� ������� �� �������� �� ������� �������
   // if (rowToAdd >= 0 && rowToAdd < rows && colToAdd >= 0 && colToAdd < cols) {
   //     arr[rowToAdd][colToAdd] = newValue;
    //}
    //else {
   //     cout << "������: ������� ������� �� ������� �������." << endl;
   // }

    // ����� ������� ����� ���������� ��������
   // cout << "������ ����� ���������� ��������:" << endl;
   // for (int i = 0; i < rows; i++) {
   //     for (int j = 0; j < cols; j++) {
   //         cout << arr[i][j] << " ";
   //     }
   //     cout << endl;
   // }

    // �������� ������� ����� �������������
   // for (int i = 0; i < rows; i++) {
   //     delete[] arr[i];
    //}
    //delete[] arr;

    //2
    int row = 3;
    cout << "������� ����������� �����:";
    cin >> row;
    int** arr = new int*[row]; 

    for (int i = 0; i < row; i++) {
        int cols = i + 2;
       
        arr[i] = new int[cols];

        cout << "�������" << "�������� ��� ������" << i + 1 << ":";
        for (int j = 0; j < cols; j++) {
            cout << "������� �������� ��� ������ [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // ����� ������������ �������
    cout << "����������� ������:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < i + 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // �������� ������� ����� �������������
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }


}