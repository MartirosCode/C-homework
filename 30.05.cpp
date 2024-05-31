#include <iostream>
#include <string>
#include <ctime>
#include <windows.h>

using namespace std;

const string PATH = "tasks.txt";

int getFileSize(const string path) {
    ifstream in(path);
    int count = 0;
    if (in.is_open()) {
        string str;
        while (getline(in, str)) {
            count++;
        }
    }
    in.close();
    return count;
}

void readFile(string*& arr, int& size) {
    size = getFileSize(PATH);
    arr = new string[size];
    if (size > 0) {
        ifstream in(PATH);
        if (in.is_open()) {
            int index = 0;
            string str;
            while (getline(in, str)) {
                arr[index++] = str;
            }
        }
    }
}

void showTasks(string* arr, int size) {
    for (int i = 0; i < size; i++) {
        cout << i + 1 << ". " << arr[i] << endl;
    }
}

void addTask(string*& arr, int& size, string str) {
    string* buf = new string[size + 1];
    for (int i = 0; i < size; i++) {
        buf[i] = arr[i];
    }
    buf[size++] = str;
    delete[] arr;
    arr = buf;
}

int main() {
    srand(time(NULL));
    setlocale(LC_ALL, "rus");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    int size;
    int choice;
    string* tasks;

    readFile(tasks, size);

    while (true) {
        showTasks(tasks, size);
        cout << "Сделайте выбор: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
        case 1: {
            string str;
            cout << "Введите задачу: ";
            getline(cin, str);
            addTask(tasks, size, str);
            cout << "Задача добавлена" << endl;
            Sleep(1000);
            system("cls");
            break;
        }
        case 0:
            cout << "Выход" << endl;
            break;
        default:
            break;
        }
    }

    delete[] tasks;
    tasks = nullptr;

    return 0;
}