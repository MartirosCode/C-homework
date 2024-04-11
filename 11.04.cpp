#include <iostream>

using namespace std;

void convertNumber(int num, int base) {
    int result[100];
    int i = 0;

    while (num > 0) {
        int remainder = num % base;
        result[i] = remainder;
        num /= base;
        i++;
    }

    cout << "Converted number: ";
    for (int j = i - 1; j >= 0; j--) {
        char ch = result[j] < 10 ? result[j] + '0' : result[j] + 'A' - 10;
        cout << ch;
    }
    cout << endl;
}

int main() {
    convertNumber(27, 16);  // 1B
    convertNumber(13, 5);   // 23
    convertNumber(35, 18);  // 1H

  
}