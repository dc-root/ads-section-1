import java.util.Scanner;
import java.lang.Math;

class Coordenada {
    public float x;
    public float y;

    public Coordenada(float x, float y) {
        this.x = x;
        this.y = y;
    }
}

public class DistanciaEntreDoisPontos {
    public static float calcDistancia(Coordenada P1, Coordenada P2) {
        return (float)Math.sqrt(Math.pow((P2.x - P1.x), 2) + Math.pow((P2.y - P1.y), 2));
    }

    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);

        float X1 = leitor.nextFloat();
        float Y1 = leitor.nextFloat();
        float X2 = leitor.nextFloat();
        float Y2 = leitor.nextFloat();
        leitor.close();

        Coordenada P1 = new Coordenada(X1, Y1);
        Coordenada P2 = new Coordenada(X2, Y2);

        float distancia = (float)(Math.round(calcDistancia(P1, P2) * 10000.0) / 10000.0);
        System.out.println(distancia);
    }
}