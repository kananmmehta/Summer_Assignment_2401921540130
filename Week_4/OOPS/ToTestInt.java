//package Week_4.OOPS;

interface Test {
    int square(int num);
}
class Arithmetic implements Test {
    @Override
    public int square(int num) {
        return num * num;
    }
}
public class ToTestInt {
    public static void main(String[] args) {
        Arithmetic obj = new Arithmetic();
        
        int value = 7;
        int result = obj.square(value);
        
        System.out.println("=== Assignment 1: Interface ===");
        System.out.println("The square of " + value + " is: " + result);
    }
}

/* OUTPUT:
=== Assignment 1: Interface ===
The square of 7 is: 49
*/