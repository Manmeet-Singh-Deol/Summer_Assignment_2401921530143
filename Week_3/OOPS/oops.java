import java.util.Random;

// Abstract base class representing a rail coach
abstract class Compartment {
    // Abstract method to be implemented by derived classes
    public abstract String notice();
}

// Derived class for First Class Compartment
class FirstClass extends Compartment {
    @Override
    public String notice() {
        return "First Class: Premium booking required. Silence is appreciated.";
    }
}

// Derived class for Ladies Compartment
class Ladies extends Compartment {
    @Override
    public String notice() {
        return "Ladies Class: Reserved exclusively for female passengers.";
    }
}

// Derived class for General Compartment
class General extends Compartment {
    @Override
    public String notice() {
        return "General Class: Open seating. Standard ticket holders only.";
    }
}

// Derived class for Luggage Compartment
class Luggage extends Compartment {
    @Override
    public String notice() {
        return "Luggage Class: Cargo only. Passengers are not allowed to ride here.";
    }
}

// Test class to demonstrate polymorphic behavior
public class TestCompartment {
    public static void main(String[] args) {
        // Declare an array of Compartment of size 10
        Compartment[] coaches = new Compartment[10];
        Random random = new Random();

        // Populate the array with random compartments
        for (int i = 0; i < coaches.length; i++) {
            // nextInt(4) returns 0 to 3, adding 1 shifts the range to 1 to 4
            int randomType = random.nextInt(4) + 1;

            switch (randomType) {
                case 1:
                    coaches[i] = new FirstClass();
                    break;
                case 2:
                    coaches[i] = new Ladies();
                    break;
                case 3:
                    coaches[i] = new General();
                    break;
                case 4:
                    coaches[i] = new Luggage();
                    break;
            }
        }

        // Iterate through the array to check polymorphic behavior
        System.out.println("--- Train Composition and Notices ---");
        for (int i = 0; i < coaches.length; i++) {
            // The exact execution of the notice() method is determined at runtime
            System.out.println("Coach " + (i + 1) + " -> " + coaches[i].notice());
        }
    }
}
