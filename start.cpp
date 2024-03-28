#include <iostream>
using namespace std;
//void cocktailSort(int arr[], int n) {
   // bool swapped = true;
   // int start = 0;
   // int end = n - 1;

   // while (swapped) {
       // swapped = false;

       // for (int i = start; i < end; ++i) {
         //   if (arr[i] > arr[i + 1]) {
        //        swap(arr[i], arr[i + 1]);
       //         swapped = true;
      //      }
      //  }

       // if (!swapped) {
       //     break;
       // }

      //  swapped = false;
       // --end;

       // for (int i = end - 1; i >= start; --i) {
         //   if (arr[i] > arr[i + 1]) {
          //      swap(arr[i], arr[i + 1]);
         //       swapped = true;
         //   }
      //  }

      //  ++start;
    //}
//}

void countingSort(int arr[], int n) {
    int max = *max_element(arr, arr + n);
    int min = *min_element(arr, arr + n);
    int range = max - min + 1;

    int count[range] = { 0 };
    int output[n];

    for (int i = 0; i < n; ++i) {
        count[arr[i] - min]++;
    }

    for (int i = 1; i < range; ++i) {
        count[i] += count[i - 1];
    }

    for (int i = n - 1; i >= 0; --i) {
        output[count[arr[i] - min] - 1] = arr[i];
        count[arr[i] - min]--;
    }

    for (int i = 0; i < n; ++i) {
        arr[i] = output[i];
    }
}
