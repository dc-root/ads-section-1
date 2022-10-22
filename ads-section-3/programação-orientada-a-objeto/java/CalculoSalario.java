import java.util.Scanner;

public class CalculoSalario {

    public static float CalcSalario(int numHoras, float valorPorHora) {
        return (float)(valorPorHora * numHoras);
    }

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        int numeroDoFuncionario = entrada.nextInt();
        int numeroDeHorasTrabalhadas = entrada.nextInt();
        float valorPorHoras = entrada.nextFloat();
        
        
        float salario = CalcSalario(numeroDeHorasTrabalhadas, valorPorHoras);

        System.out.println("NUMERO = "+numeroDoFuncionario);
        System.out.printf("SALARIO = R$ %.2f\n\n", salario);

        entrada.close();
    }
}
