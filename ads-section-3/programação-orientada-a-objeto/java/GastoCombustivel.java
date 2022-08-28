import java.util.Scanner;

public class GastoCombustivel {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int tempoGasto = leitor.nextInt();
        float velocidadeMedia = leitor.nextFloat();
        float QntLitrosNecessarios = (velocidadeMedia * tempoGasto) / 12;

        System.out.printf("%.3f%n", QntLitrosNecessarios);

        leitor.close();
    }     
}