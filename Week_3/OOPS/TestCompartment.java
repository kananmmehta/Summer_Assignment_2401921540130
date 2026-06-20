import java.util.Random;

// The base abstract class
abstract class Compartment {
    public abstract String notice();
}

// Subclasses
class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "FirstClass: Luxury seating. Authorized ticket holders only.";
    }
}

class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies: Reserved exclusively for female passengers.";
    }
}

class General extends Compartment {
    @Override
    public String notice() {
        return "General: Open seating. Standard unreserved ticket required.";
    }
}

class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Luggage: Cargo and baggage only. Passengers not allowed.";
    }
}

// The main class matching the filename
public class TestCompartment {
    public static void main(String[] args) {
        Compartment[] trainCoaches = new Compartment[10];
        Random random = new Random();

        for (int i = 0; i < trainCoaches.length; i++) {
            int randomType = random.nextInt(4) + 1; 

            switch (randomType) {
                case 1: trainCoaches[i] = new FirstClass(); break;
                case 2: trainCoaches[i] = new Ladies(); break;
                case 3: trainCoaches[i] = new General(); break;
                case 4: trainCoaches[i] = new Luggage(); break;
            }
        }

        System.out.println("=== Generating Train Coach Layout ===");
        for (int i = 0; i < trainCoaches.length; i++) {
            System.out.println("Coach " + (i + 1) + " Notice -> " + trainCoaches[i].notice());
        }
    }
}
