import java.util.Scanner;

public class Cedulas {
    public static int CountMinCedule(int valorEmReais, int Cedula) {
        int qntCedulas = (int)valorEmReais / Cedula;
        valorEmReais = valorEmReais % Cedula;

        System.out.printf("%d nota%s de R$ %.2f\n", qntCedulas, (qntCedulas > 1 ? "s" : ""), (float)Cedula);
        return valorEmReais;
    }
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int[] cedulas = { 100, 50, 20, 10, 5, 2, 1 };
        
        int valorEmReais = leitor.nextInt();
        
        System.out.println(valorEmReais);
        for(int i=0, sz=cedulas.length; i<sz; i++) {
            valorEmReais = CountMinCedule(valorEmReais, cedulas[i]);
        }

        leitor.close();
    }
}