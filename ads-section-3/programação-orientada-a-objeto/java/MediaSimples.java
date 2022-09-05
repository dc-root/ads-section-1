import java.util.Scanner;
import java.lang.Math;

public class MediaSimples {
    public static void main(String[] args) {
        Scanner  leitor = new Scanner(System.in);

        float A = leitor.nextFloat();
        float B = leitor.nextFloat();
        float C = leitor.nextFloat();
        float D = leitor.nextFloat();

        float MEDIA = (float)((A*10.0 /10.0) + (B*10.0 /10.0) + (C*10.0 /10.0) + (D*10.0 /10.0)) / 4;

        System.out.printf("MEDIA = %.5f\n\n\n", MEDIA);
    }
}