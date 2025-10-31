import java.util.Arrays;

public class HeapSortAlternative {
    
    private static void heapify(int[] arr, int heapSize, int rootIndex) {
        int largest = rootIndex;
        int leftChild = 2 * rootIndex + 1;
        int rightChild = 2 * rootIndex + 2;
        
        // Если левый потомок больше корня
        if (leftChild < heapSize && arr[leftChild] > arr[largest]) {
            largest = leftChild;
        }
        
        // Если правый потомок больше, чем самый большой элемент на данный момент
        if (rightChild < heapSize && arr[rightChild] > arr[largest]) {
            largest = rightChild;
        }
        
        // Если самый большой элемент не корень
        if (largest != rootIndex) {
            swap(arr, rootIndex, largest);
            
            // Рекурсивно преобразуем в кучу затронутое поддерево
            heapify(arr, heapSize, largest);
        }
    }
    
    private static void swap(int[] arr, int i, int j) {
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    
    public static void sort(int[] arr) {
        int n = arr.length;
        
        // Построение кучи (перегруппируем массив)
        for (int i = n / 2 - 1; i >= 0; i--) {
            heapify(arr, n, i);
        }
        
        // Один за другим извлекаем элементы из кучи
        for (int i = n - 1; i >= 0; i--) {
            // Перемещаем текущий корень в конец
            swap(arr, 0, i);
            
            // Вызываем процедуру heapify на уменьшенной куче
            heapify(arr, i, 0);
        }
    }
    
    public static void main(String[] args) {
        int[] arr = {12, 11, 13, 5, 6, 7};
        
        System.out.println("Исходный массив: " + Arrays.toString(arr));
        
        sort(arr);
        
        System.out.println("Отсортированный массив: " + Arrays.toString(arr));
    }
}