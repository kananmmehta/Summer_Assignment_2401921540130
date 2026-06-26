//package Week_4.OOPS;

class Point {
    private int x;
    private int y;
    public Point() {
        this.x = 0;
        this.y = 0;
    }
    public Point(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public void setX(int x) {
        this.x = x;
    }
    public void setY(int y) {
        this.y = y;
    }
    public void setXY(int x, int y) {
        this.x = x;
        this.y = y;
    }
    public void printCoordinates() {
        System.out.println("Point Coordinates: (" + x + ", " + y + ")");
    }
}

public class MainPointTest {
    public static void main(String[] args) {
        System.out.println("=== Assignment 3: Point Class ===");

        // default constructor
        Point p1 = new Point();
        p1.printCoordinates();

        // parameterized constructor
        Point p2 = new Point(10, 20);
        p2.printCoordinates();

        p2.setX(15);
        p2.setY(25);
        p2.printCoordinates();

        p2.setXY(50, 100);
        p2.printCoordinates();
    }
}

/* OUTPUT:
=== Assignment 3: Point Class ===
Point Coordinates: (0, 0)
Point Coordinates: (10, 20)
Point Coordinates: (15, 25)
Point Coordinates: (50, 100)
 */