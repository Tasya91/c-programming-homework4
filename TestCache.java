/**
 * Тестовая программа для демонстрации работы класса Cache
 */
public class TestCache {
    public static void main(String[] args) {
        System.out.println("=== Тестирование класса Cache ===");
        
        
        Cache<Integer> intCache = new Cache<>(3);
        
        System.out.println("\n1. Тестирование добавления элементов:");
        System.out.println("Создан кэш: " + intCache);
        
        intCache.add(10);
        System.out.println("Добавлен 10: " + intCache);
        
        intCache.add(20);
        System.out.println("Добавлен 20: " + intCache);
        
        intCache.add(30);
        System.out.println("Добавлен 30: " + intCache);
        
        
        intCache.add(40);
        System.out.println("Добавлен 40 (должен удалить 10): " + intCache);
        
        System.out.println("\n2. Тестирование метода exists():");
        System.out.println("Элемент 20 существует: " + intCache.exists(20));
        System.out.println("Элемент 10 существует: " + intCache.exists(10));
        System.out.println("Элемент 50 существует: " + intCache.exists(50));
        
        System.out.println("\n3. Тестирование метода remove():");
        System.out.println("Удаление элемента 20: " + intCache.remove(20));
        System.out.println("После удаления: " + intCache);
        System.out.println("Удаление несуществующего элемента 100: " + intCache.remove(100));
        
        System.out.println("\n4. Тестирование методов getFirst() и getLast():");
        intCache.add(50);
        intCache.add(60);
        System.out.println("Текущее состояние: " + intCache);
        System.out.println("Первый элемент: " + intCache.getFirst());
        System.out.println("Последний элемент: " + intCache.getLast());
        
        System.out.println("\n5. Тестирование метода getItemByIndex():");
        System.out.println("Элемент с индексом 0: " + intCache.getItemByIndex(0));
        System.out.println("Элемент с индексом 1: " + intCache.getItemByIndex(1));
        System.out.println("Элемент с индексом 2: " + intCache.getItemByIndex(2));
        System.out.println("Элемент с индексом 3 (некорректный): " + intCache.getItemByIndex(3));
        System.out.println("Элемент с индексом -1 (некорректный): " + intCache.getItemByIndex(-1));
        
        System.out.println("\n6. Тестирование с пустым кэшем:");
        Cache<String> emptyCache = new Cache<>(2);
        System.out.println("Пустой кэш: " + emptyCache);
        System.out.println("getFirst() для пустого кэша: " + emptyCache.getFirst());
        System.out.println("getLast() для пустого кэша: " + emptyCache.getLast());
        System.out.println("getItemByIndex(0) для пустого кэша: " + emptyCache.getItemByIndex(0));
        
        System.out.println("\n7. Тестирование со строками:");
        Cache<String> stringCache = new Cache<>(2);
        stringCache.add("Hello");
        stringCache.add("World");
        stringCache.add("Java");
        System.out.println("Строковый кэш: " + stringCache);
        System.out.println("Первый элемент: " + stringCache.getFirst());
        System.out.println("Последний элемент: " + stringCache.getLast());
        
        System.out.println("\n=== Тестирование завершено ===");
    }
}