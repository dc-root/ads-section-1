import java.util.Scanner;

public class InverterNumero {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        int numeroEntrada = read.nextInt(); // 123
        float numeroFinal = 0;

        while(numeroEntrada != 0) {
            numeroFinal = numeroFinal * 10;                     // 0,3 * 10 = 3
            numeroFinal = numeroFinal + (numeroEntrada % 10);   // 123 % 10 = 0,3
            numeroEntrada = numeroEntrada / 10;                 // 123 / 10 = 12,3
        }

        read.close();
        System.out.printf("%d", numeroFinal);
    }
}