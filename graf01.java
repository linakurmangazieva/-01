import java.util.*;

public class SimpleGraph {
    public static void main(String[] args) {
        // Создаем граф с 5 вершинами (0, 1, 2, 3, 4)
        List<Integer>[] graph = new ArrayList[5];
        
        // Инициализируем списки для каждой вершины
        for (int i = 0; i < 5; i++) {
            graph[i] = new ArrayList<>();
        }
        
        // Добавляем ребра между вершинами
        // Ребро между 0 и 1
        graph[0].add(1);
        graph[1].add(0);
        
        // Ребро между 0 и 2
        graph[0].add(2);
        graph[2].add(0);
        
        // Ребро между 1 и 3
        graph[1].add(3);
        graph[3].add(1);
        
        // Ребро между 2 и 4
        graph[2].add(4);
        graph[4].add(2);
        
        // Ребро между 3 и 4
        graph[3].add(4);
        graph[4].add(3);
        
        // Выводим граф
        System.out.println("Наш граф:");
        for (int i = 0; i < 5; i++) {
            System.out.println("Вершина " + i + " соединена с: " + graph[i]);
        }
        
        // Проверяем соединения для вершины 0
        System.out.println("\nВершина 0 соединена с: " + graph[0]);
    }
}