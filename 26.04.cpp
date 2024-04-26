#include <iostream>

using namespace std;

int main() {

    setlocale(LC_ALL, "rus");

    int size = 5; 

    int* dynamicArray = new int[size]; 

    
    for (int i = 0; i < size; i++) {
        dynamicArray[i] = i * 10;
    }

    
    int* ptr = dynamicArray;

    
    for (int i = 0; i < size; i++) {
        cout << "Ёлемент " << i << ": " << ptr[i] << endl;
    }

   
    delete[] dynamicArray;

   
}