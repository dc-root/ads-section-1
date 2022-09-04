import java.util.Scanner;

public class Consumo {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int X = leitor.nextInt();
        float Y = leitor.nextFloat();
        leitor.close();

        System.out.printf("%.3f km/l\n\n", (float)(X / Y));
    }
}