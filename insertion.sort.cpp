#include <iostream>
using namespace std;

void insertionSort(int array[], int size) {
    for (int i = 1; i < size; i++) {
        int key = array[i];
        int j = i - 1;
        
        while (j >= 0 && array[j] > key) {
            array[j + 1] = array[j];
            j = j - 1;
        }
        array[j + 1] = key;
    }
}

void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int main() {
    int array[] = {12, 11, 13, 5, 6};
    int n = sizeof(array) / sizeof(array[0]);
    
    cout << "Исходный массив:" << endl;
    printArray(array, n);
    
    insertionSort(array, n);
    
    cout << "Отсортированный массив:" << endl;
    printArray(array, n);
    
    return 0;
}