#include <iostream>
using namespace std;

void selectionSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        
        // Меняем местами элементы
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int testArray[] = {64, 25, 12, 22, 11};
    int n = sizeof(testArray) / sizeof(testArray[0]);
    
    cout << "Исходный массив: ";
    printArray(testArray, n);
    
    selectionSort(testArray, n);
    
    cout << "Отсортированный массив: ";
    printArray(testArray, n);
    
    return 0;
}