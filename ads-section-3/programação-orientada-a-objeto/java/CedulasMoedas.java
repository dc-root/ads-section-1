import java.util.Scanner;
import java.lang.Math;

public class CedulasMoedas {
    public static float CountMinCedule(float valorEmReais, int Cedula) {
        int qntCedulas = (int)(valorEmReais / Cedula);
        valorEmReais = valorEmReais % Cedula;

        System.out.printf("%d nota(s) de R$ %.2f\n", qntCedulas, (float)Cedula);
        return valorEmReais;
    }

    public static float CountMinCoin(float valorEmReais, float Moeda) {
        int qntMoedas = (int)(valorEmReais / Moeda);
        valorEmReais = (float)(Math.round((valorEmReais % Moeda) * 100.00)/100.00);

        System.out.printf("%d moeda(s) de R$ %.2f\n", qntMoedas, Moeda);
        return valorEmReais;
    }

    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        float valorMonetario = leitor.nextFloat();

        int[] cedulas = { 100, 50, 20, 10, 5, 2 };
        float[] modedas = { 1, 0.50F, 0.25F, 0.10F, 0.05F, 0.01F };

        System.out.println("NOTAS:");
        for(int i=0, sz=cedulas.length; i<sz; i++) {
            valorMonetario = CountMinCedule(valorMonetario, cedulas[i]);
        }

        System.out.println("MOEDAS:");
        for(int i=0, sz=modedas.length; i<sz; i++) {
            valorMonetario = CountMinCoin(valorMonetario, modedas[i]);
        }

        leitor.close();
    }
}