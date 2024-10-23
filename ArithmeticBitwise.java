import java.util.Scanner;


class ArithmeticOperations {

    
    public int add(int a, int b) {
        return a + b;
    }

    
    public int subtract(int a, int b) {
        return a - b;
    }

   
    public int multiply(int a, int b) {
        return a * b;
    }

    
    public int divide(int a, int b) {
        if (b != 0) {
            return a / b;
        } else {
            System.out.println("Error! Division by zero.");
            return 0;
        }
    }
}

class BitwiseOperations {

    
    public int and(int a, int b) {
        return a & b;
    }

   
    public int or(int a, int b) {
        return a | b;
    }

   
    public int xor(int a, int b) {
        return a ^ b;
    }

  
    public int leftShift(int a, int shift) {
        return a << shift;
    }

    
    public int rightShift(int a, int shift) {
        return a >> shift;
    }
}

public class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

       
        ArithmeticOperations arithmetic = new ArithmeticOperations();
        BitwiseOperations bitwise = new BitwiseOperations();

       
        System.out.println("Enter two numbers for arithmetic operations:");
        int num1 = scanner.nextInt();
        int num2 = scanner.nextInt();

     
        System.out.println("Arithmetic Operations:");
        System.out.println("Addition: " + arithmetic.add(num1, num2));
        System.out.println("Subtraction: " + arithmetic.subtract(num1, num2));
        System.out.println("Multiplication: " + arithmetic.multiply(num1, num2));
        System.out.println("Division: " + arithmetic.divide(num1, num2));

       
        System.out.println("\nEnter two numbers for bitwise operations:");
        int bit1 = scanner.nextInt();
        int bit2 = scanner.nextInt();

       
        System.out.println("Bitwise Operations:");
        System.out.println("AND: " + bitwise.and(bit1, bit2));
        System.out.println("OR: " + bitwise.or(bit1, bit2));
        System.out.println("XOR: " + bitwise.xor(bit1, bit2));

       
        System.out.println("\nEnter a number and shift value for bitwise shift operations:");
        int num3 = scanner.nextInt();
        int shift = scanner.nextInt();

        System.out.println("Left Shift: " + bitwise.leftShift(num3, shift));
        System.out.println("Right Shift: " + bitwise.rightShift(num3, shift));
    }
}
