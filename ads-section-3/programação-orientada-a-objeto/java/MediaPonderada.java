import java.util.Scanner;

class NotaPeso {
    public float nota;
    public double peso;

    public NotaPeso(float nota, double peso) {
        this.nota = nota;
        this.peso = peso;
    }
}

public class MediaPonderada {
    public static float mediaAritimeticaPonderada(NotaPeso notaA, NotaPeso notaB) {
        return (float)(((notaA.nota * notaA.peso) + (notaB.nota * notaB.peso)) / (notaA.peso + notaB.peso));
    }

    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        double peso1 = 3.5;
        double peso2 = 7.5;

        float A = (float)leitor.nextFloat();
        float B = (float)leitor.nextFloat();
        
        float MediaPonderada = mediaAritimeticaPonderada(new NotaPeso(A, peso1), new NotaPeso(B, peso2));

        System.out.printf("MEDIA = %.5f\n", (float)MediaPonderada);
        leitor.close();
    }
}