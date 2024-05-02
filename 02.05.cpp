#include <iostream>
using namespace std;
int main() {
    //1
   // int** array1 = new int* [2];
   // array1[0] = new int[3] {1, 2, 3};
   // array1[1] = new int[3] {4, 5, 6};

    //int** array2 = new int* [1];
   // array2[0] = new int[3] {7, 8, 9};

    //int** newArray = new int* [3];
    //for (int i = 0; i < 2; ++i) {
        //newArray[i] = array1[i];
    //}
    //newArray[2] = array2[0];

    // Вывод результата
    //for (int i = 0; i < 3; ++i) {
        //for (int j = 0; j < 3; ++j) {
            //cout << newArray[i][j] << " ";
        //}
        //cout << endl;
    //}

    // Освобождение памяти
   // for (int i = 0; i < 2; ++i) {
       // delete[] array1[i];
   // }
   // delete[] array1;
    //delete[] newArray;
    

    //2
    //int** array1 = new int* [3];
   // array1[0] = new int[3] {1, 2, 3};
   // array1[1] = new int[3] {7, 8, 9};
    //array1[2] = new int[3] {10, 11, 12};

    //int** array2 = new int* [1];
    //array2[0] = new int[3] {4, 5, 6};

    //int indexToInsert = 1;

    //int** newArray = new int* [4];
    //for (int i = 0; i < indexToInsert; ++i) {
        //newArray[i] = array1[i];
    //}
    //newArray[indexToInsert] = array2[0];
    //for (int i = indexToInsert + 1; i < 4; ++i) {
       // newArray[i] = array1[i - 1];
    //}

    // Вывод результата
    //for (int i = 0; i < 4; ++i) {
        //for (int j = 0; j < 3; ++j) {
           // cout << newArray[i][j] << " ";
        //}
        //cout << endl;
   //}

    // Освобождение памяти
    //for (int i = 0; i < 3; ++i) {
        //delete[] array1[i];
    //}
    //delete[] array1;
   // delete[] newArray;
    
    //3
    int** array = new int* [3];
    array[0] = new int[3] {1, 2, 3};
    array[1] = new int[3] {4, 5, 6};
    array[2] = new int[3] {7, 8, 9};

    int valueToDelete = 5;

    int indexToDeleteI = -1;
    int indexToDeleteJ = -1;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (array[i][j] == valueToDelete) {
                indexToDeleteI = i;
                indexToDeleteJ = j;
                break;
            }
        }
        if (indexToDeleteI != -1) break;
    }

    if (indexToDeleteI != -1) {
        int** newArray = new int* [3];
        for (int i = 0; i < 3; ++i) {
            newArray[i] = new int[3];
            for (int j = 0; j < 3; ++j) {
                newArray[i][j] = array[i][j];
            }
        }
        delete[] newArray[indexToDeleteI]; // Освобождаем память под нужную строку
        for (int i = indexToDeleteI; i < 2; ++i) {
            newArray[i] = newArray[i + 1];
        }
        // Вывод результата
        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 3; ++j) {
                cout << newArray[i][j] << " ";
            }
            cout << endl;
        }
        // Освобождение памяти
        for (int i = 0; i < 3; ++i) {
            delete[] array[i];
        }
        delete[] array;
        delete[] newArray;
    }
    else {
        cout << "Значение не найдено" << endl;
    }


}