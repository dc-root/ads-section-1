import java.util.Scanner;

public class Intervalo {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        float num = leitor.nextFloat();

        if(num >= 0 && num <= 25) {
            System.out.printf("Intervalo [0,25]");
        } else if (num > 25 && num <= 50){
            System.out.printf("Intervalo (25,50]");
        } else if(num > 50 && num <= 75) {
            System.out.printf("Intervalo (50,75]");
        } else if(num > 75 && num <= 100) {
            System.out.printf("Intervalo (75,100]");
        } else {
            System.out.printf("Fora de intervalo");
        }

        leitor.close();
    }
}