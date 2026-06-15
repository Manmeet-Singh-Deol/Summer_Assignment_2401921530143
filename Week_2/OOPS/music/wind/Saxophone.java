package Week_2.OOPS.music.wind;

import Week_2.OOPS.music.Playable;

public class Saxophone implements Playable {
    @Override
    public void play() {
        System.out.println("Playing the Saxophone: Smooth, soulful wind melodies.");
    }
}