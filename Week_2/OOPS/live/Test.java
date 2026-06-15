package Week_2.OOPS.live;

import Week_2.OOPS.music.Playable;
import Week_2.OOPS.music.string.Veena;
import Week_2.OOPS.music.wind.Saxophone;

public class Test {
    public static void main(String[] args) {
        
        // a. Create an instance of Veena and call play() method
        Veena veenaInstance = new Veena();
        veenaInstance.play();
        
        // b. Create an instance of Saxophone and call play() method
        Saxophone saxInstance = new Saxophone();
        saxInstance.play();
        
        System.out.println("\n--- Demonstrating Polymorphism ---");
        
        // c. Place the above instances in a variable of type Playable and then call play()
        Playable playableVariable;
        
        // Assigning Veena instance to the interface variable
        playableVariable = veenaInstance;
        playableVariable.play();
        
        // Assigning Saxophone instance to the same interface variable
        playableVariable = saxInstance;
        playableVariable.play();
    }
}