package live;

import music.Playable;
import music.string.*;
import music.wind.*;

public class Test {
    public static void main(String[] args) {
        
        // a. Create an instance of Veena and call play() method
        System.out.println("--- Step A ---");
        Veena myVeena = new Veena();
        myVeena.play();

        // b. Create an instance of Saxophone and call play() method
        System.out.println("\n--- Step B ---");
        Saxophone mySaxophone = new Saxophone();
        mySaxophone.play();

        // c. Place the above instances in a variable of type Playable and call play()
        System.out.println("\n--- Step C (Polymorphism) ---");
        Playable instrument;

        // Pointing the Playable variable to the Veena instance
        instrument = myVeena; 
        instrument.play();

        // Pointing the exact same Playable variable to the Saxophone instance
        instrument = mySaxophone; 
        instrument.play();
    }
}
