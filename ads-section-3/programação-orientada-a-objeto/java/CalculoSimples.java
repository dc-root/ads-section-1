import java.util.Scanner;

public class CalculoSimples {
    public static float calcValorAPagar(int quantidade, float valorUnitario) {
        return (quantidade * valorUnitario);
    }

    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        int codigo=0;
        int qntPecas=0;
        float valorUnitario;
        float total=0;

        for(int i=0; i<2; i++) {
            codigo = leitor.nextInt();
            qntPecas = leitor.nextInt();
            valorUnitario = leitor.nextFloat();

            total += calcValorAPagar(qntPecas, valorUnitario);
        }

        leitor.close();
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", (float)total);
    }
}