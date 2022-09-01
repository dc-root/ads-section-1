import java.util.Scanner;

public class NumeroPrimo  {
    public static boolean isPrimeNumber(int value) {
        for(int i=1, cont=0; i<=value; i++) {
            if(value % i == 0) {
                cont++;
            }

            if(cont>2 || value == 1) {
                return false;
            }
        }

        return true;
    }

    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int numero = leitor.nextInt();
        leitor.close();

        if(isPrimeNumber(numero)) {
            System.out.print("eh um numero primo");
        } else {
            System.out.print("nao eh um numero primo");
        }
    }
}
