//package Week_4.OOPS;

// Base class handling 2D dimensions
class Box {
    protected double length;
    protected double breadth;
    public Box(double length, double breadth) {
        this.length = length;
        this.breadth = breadth;
    }
    public double getArea() {
        return length * breadth;
    }
}
class Box3d extends Box {
    private double height;
    public Box3d(double length, double breadth, double height) {
        super(length, breadth); 
        this.height = height;
    }
    public double getVolume() {
        return getArea() * height;
    }
    public double getSurfaceArea3D() {
        return 2 * ((length * breadth) + (breadth * height) + (height * length));
    }
}

public class MainBoxTest {
    public static void main(String[] args) {
        System.out.println("=== Assignment 4: Inheritance ===");

        double len = 5.0, brd = 4.0, hgt = 3.0;
        Box3d myBox = new Box3d(len, brd, hgt);

        System.out.println("Box Dimensions: Length=" + len + ", Breadth=" + brd + ", Height=" + hgt);
        System.out.println("Base Area of the Box: " + myBox.getArea());
        System.out.println("Total Surface Area of the Box3D: " + myBox.getSurfaceArea3D());
        System.out.println("Volume of the Box3D: " + myBox.getVolume());
    }
}

/* OUTPUT:
=== Assignment 4: Inheritance ===
Box Dimensions: Length=5.0, Breadth=4.0, Height=3.0
Base Area of the Box: 20.0
Total Surface Area of the Box3D: 94.0
Volume of the Box3D: 60.0
 */
