import java.util.Scanner;
import java.lang.Math;

public class Esfera {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        double R = (double)entrada.nextFloat();
        System.out.printf("VOLUME = %.3f\n", (4.0/3.0) * 3.14159 * Math.pow(R, 3));
        entrada.close();

    }
}