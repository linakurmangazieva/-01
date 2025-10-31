def bubble_sort(arr):
    n = len(arr)
    # Проходим по всем элементам массива
    for i in range(n - 1):
        # Последний i элементов на каждой итерации уже на своем месте
        for j in range(0, n - i - 1):
            # Сравниваем соседние элементы
            if arr[j] > arr[j + 1]:
                # Меняем местами, если они стоят в неправильном порядке
                arr[j], arr[j + 1] = arr[j + 1], arr[j]

# Функция для вывода массива
def print_array(arr):
    for num in arr:
        print(num, end=" ")
    print()

# Основная программа
if __name__ == "__main__":
    arr = [64, 34, 25, 12, 22, 11, 90]
    n = len(arr)
    
    print("Исходный массив:")
    print_array(arr)
    
    bubble_sort(arr)
    
    print("Отсортированный массив:")
    print_array(arr)