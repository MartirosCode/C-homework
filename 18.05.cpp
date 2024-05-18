#include <iostream>
using namespace std;
// Функция для обмена элементов в массиве
void swap(int& a, int& b) {
    int temp = a;
    a = b;
    b = temp;
}

// Функция для разделения массива на части относительно опорного элемента
int partition(int arr[], int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}

// Функция реализации QuickSort
void quickSort(int arr[], int low, int high) {
    if (low < high) {
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi - 1); // Рекурсивный вызов для левой части
        quickSort(arr, pi + 1, high); // Рекурсивный вызов для правой части
    }
}

int main() {
    setlocale(LC_ALL, "rus");
    int arr[] = { 10, 7, 8, 9, 1, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Исходный массив: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    quickSort(arr, 0, n - 1);

    cout << "Отсортированный массив: ";
    for (int i = 0; i < n; i++) {
       cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}