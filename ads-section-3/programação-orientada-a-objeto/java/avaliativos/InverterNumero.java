import java.util.Scanner;

public class InverterNumero {
    public static void main(String[] args) {
        Scanner read = new Scanner(System.in);

        int numeroEntrada = read.nextInt();
        int numeroFinal = 0;

        while(numeroEntrada != 0) {
            numeroFinal = numeroFinal * 10;
            numeroFinal = numeroFinal + (numeroEntrada % 10);
            numeroEntrada = numeroEntrada / 10;
        }

        read.close();
        System.out.printf("%d", numeroFinal);
    }
}
