import java.util.Scanner;

public class ConversaoTempo {
    public static void formatParserTime(int segundos) {
        int horas=0, minutos=0;

        horas = segundos / 3600;
        segundos -= horas * 3600;
        minutos = segundos / 60;
        segundos -= minutos * 60;

        System.out.printf("%d:%d:%d%n", horas, minutos, segundos);
    }
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        int segundosAteOEvento = leitor.nextInt();

        formatParserTime(segundosAteOEvento);
        leitor.close();
    }
}