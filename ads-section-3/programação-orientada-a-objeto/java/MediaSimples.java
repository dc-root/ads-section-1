import java.util.Scanner;
import java.lang.Math;

public class MediaSimples {
    public static void main(String[] args) {
        Scanner  leitor = new Scanner(System.in);

        float A = leitor.nextInt();
        float B = leitor.nextInt();
        float C = leitor.nextInt();
        float D = leitor.nextInt();

        float MEDIA = (float)((Math.round(A*10.0)/10.0) + (Math.round(B*10.0)/10.0) + (Math.round(C*10.0)/10.0) + (Math.round(D*10.0)/10.0) / 4);

        System.out.println("MEDIA = "+MEDIA);
    }
}