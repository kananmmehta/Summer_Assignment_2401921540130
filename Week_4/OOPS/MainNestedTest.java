//package Week_4.OOPS;

class Outer {
    public void display() {
        System.out.println("Display function inside the Outer class.");
    }
    class Inner {
        public void display() {
            System.out.println("Display function inside the Inner class.");
        }
    }
}

public class MainNestedTest {
    public static void main(String[] args) {
        System.out.println("=== Assignment 2: Inner & Outer Classes ===");
        Outer outerObj = new Outer();
        outerObj.display();
        Outer.Inner innerObj = outerObj.new Inner();
        innerObj.display();
    }
}

/* OUTPUT:
=== Assignment 2: Inner & Outer Classes ===
Display function inside the Outer class.
Display function inside the Inner class.
 */
