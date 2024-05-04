#include <iostream>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    //int rows, cols;
    //cout << "Введите количество строк: ";
    //cin >> rows;
    //cout << "Введите количество столбцов: ";
    //cin >> cols;

    //int** arr = new int* [rows];
    //for (int i = 0; i < rows; i++) {
     //   arr[i] = new int[cols];
   // }

    // Инициализация двумерного массива
 //   for (int i = 0; i < rows; i++) {
        //for (int j = 0; j < cols; j++) {
        //    arr[i][j] = i * cols + j;
      //  }
    //}

    // Вывод исходного массива
   // cout << "Исходный массив:" << endl;
    //for (int i = 0; i < rows; i++) {
   //     for (int j = 0; j < cols; j++) {
       //     cout << arr[i][j] << " ";
     //   }
   //     cout << endl;
   // }

    // Добавление нового элемента в конец массива по индексу
   // int newValue;
   // int rowToAdd, colToAdd;
    //cout << "Введите значение нового элемента: ";
    //cin >> newValue;
    //cout << "Введите индекс строки для добавления: ";
   // cin >> rowToAdd;
   // cout << "Введите индекс столбца для добавления: ";
    //cin >> colToAdd;

    // Проверяем, чтобы индексы не выходили за границы массива
   // if (rowToAdd >= 0 && rowToAdd < rows && colToAdd >= 0 && colToAdd < cols) {
   //     arr[rowToAdd][colToAdd] = newValue;
    //}
    //else {
   //     cout << "Ошибка: Индексы выходят за границы массива." << endl;
   // }

    // Вывод массива после добавления элемента
   // cout << "Массив после добавления элемента:" << endl;
   // for (int i = 0; i < rows; i++) {
   //     for (int j = 0; j < cols; j++) {
   //         cout << arr[i][j] << " ";
   //     }
   //     cout << endl;
   // }

    // Удаление массива после использования
   // for (int i = 0; i < rows; i++) {
   //     delete[] arr[i];
    //}
    //delete[] arr;

    //2
    int row = 3;
    cout << "Введите колличество строк:";
    cin >> row;
    int** arr = new int*[row]; 

    for (int i = 0; i < row; i++) {
        int cols = i + 2;
       
        arr[i] = new int[cols];

        cout << "Введите" << "значение для строки" << i + 1 << ":";
        for (int j = 0; j < cols; j++) {
            cout << "Введите значение для ячейки [" << i << "][" << j << "]: ";
            cin >> arr[i][j];
        }
    }

    // Вывод ступенчатого массива
    cout << "Ступенчатый массив:" << endl;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < i + 2; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Удаление массива после использования
    for (int i = 0; i < row; i++) {
        delete[] arr[i];
    }


}