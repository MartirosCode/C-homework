#include <iostream>

using namespace std;

int main() {
    const int maxLength = 50;
    string inputFileName = "input.txt";
    string outputFileName = "output.txt";

    FILE* inputFile = fopen(inputFileName.c_str(), "r");
    FILE* outputFile = fopen(outputFileName.c_str(), "w");

    if (inputFile && outputFile) {
        char line[256]; // Максимальная длина строки в файле
        while (fgets(line, sizeof(line), inputFile)) {
            if (strlen(line) <= maxLength) {
                fputs(line, outputFile);
            }
        }

        fclose(inputFile);
        fclose(outputFile);
        cout << "Successfully copied lines to " << outputFileName << endl;
    }
    else {
        cerr << "Error opening files" << endl;
    }

   
}