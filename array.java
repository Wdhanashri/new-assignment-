import java.util.ArrayList;  // Import the ArrayList class

public class DynamicArrayExample {
    public static void main(String[] args) {
        
        ArrayList<Integer> dynamicArray = new ArrayList<>();
        
      
        dynamicArray.add(10);
        dynamicArray.add(20);
        dynamicArray.add(30);
        dynamicArray.add(40);
        dynamicArray.add(50);
        
    
        System.out.println("Contents of the dynamic array: ");
        
      
        for (int i = 0; i < dynamicArray.size(); i++) {
            System.out.println("Element at index " + i + ": " + dynamicArray.get(i));
        }
        
      
        System.out.println("\nUsing for-each loop:");
        for (int element : dynamicArray) {
            System.out.println(element);
        }
    }
}
