#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Создаем граф с 5 вершинами (0, 1, 2, 3, 4)
    vector<vector<int>> graph(5);
    
    // Добавляем ребра между вершинами
    // Ребро между 0 и 1
    graph[0].push_back(1);
    graph[1].push_back(0);
    
    // Ребро между 0 и 2
    graph[0].push_back(2);
    graph[2].push_back(0);
    
    // Ребро между 1 и 3
    graph[1].push_back(3);
    graph[3].push_back(1);
    
    // Ребро между 2 и 4
    graph[2].push_back(4);
    graph[4].push_back(2);
    
    // Ребро между 3 и 4
    graph[3].push_back(4);
    graph[4].push_back(3);
    
    // Выводим граф
    cout << "Наш граф:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << "Вершина " << i << " соединена с: ";
        for (int neighbor : graph[i]) {
            cout << neighbor << " ";
        }
        cout << endl;
    }
    
    // Проверяем соединения для вершины 0
    cout << "\nВершина 0 соединена с: ";
    for (int neighbor : graph[0]) {
        cout << neighbor << " ";
    }
    cout << endl;
    
    return 0;
}