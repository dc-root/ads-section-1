import java.util.Scanner;
import java.lang.Math;

public class AreaCirculo {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        double R = leitor.nextDouble();
        double pi = 3.14159F;
        float A = (float)(pi * (Math.pow(Math.round((R*100.0))/100.0, 2)));

        System.out.printf("A=%.4f\n", (float)A);
        leitor.close();
    }
}