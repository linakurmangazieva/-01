#include <iostream>
using namespace std;

class QuickSort {
public:
    static void quickSort(int array[], int low, int high) {
        if (low < high) {
            int pi = partition(array, low, high);
            quickSort(array, low, pi - 1);
            quickSort(array, pi + 1, high);
        }
    }

private:
    static int partition(int array[], int low, int high) {
        int pivot = array[high];
        int i = (low - 1);
        
        for (int j = low; j < high; j++) {
            if (array[j] <= pivot) {
                i++;
                swap(array[i], array[j]);
            }
        }
        
        swap(array[i + 1], array[high]);
        return i + 1;
    }

    static void printArray(int array[], int size) {
        for (int i = 0; i < size; i++) {
            cout << array[i] << " ";
        }
        cout << endl;
    }

public:
    static void main() {
        int array[] = {10, 7, 8, 9, 1, 5};
        int n = sizeof(array) / sizeof(array[0]);
        
        cout << "Исходный массив:" << endl;
        printArray(array, n);
        
        quickSort(array, 0, n - 1);
        
        cout << "\nОтсортированный массив:" << endl;
        printArray(array, n);
    }
};

int main() {
    QuickSort::main();
    return 0;
}