import java.util.Scanner;
import java.util.List;
import java.util.Arrays;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

class Dicionarios {
    public List<String> impressoesPositivas = Arrays.asList("excelente", "bom", "otimo", "adoro", "amo");
    public List<String> impressoesNegativas = Arrays.asList("ruim", "pessimo", "odeio", "droga", "fraco");

    public int contPositivas=0;
    public int contNegativas=0;
}

public class Analise {
    public static void main(String[] args) {
        // LEITURAS
        Scanner leitor = new Scanner(System.in);
        Dicionarios dicionarios = new Dicionarios();

        int qnt_tweet = leitor.nextInt();
        String[] tweets = new String[qnt_tweet];
        clearBuffer(leitor);

        for(int i=0; i < qnt_tweet; i++) {
            tweets[i] = leitor.nextLine();
        }

        Pattern patterWord = Pattern.compile("[a-zA-Zà-úÀ-Ú]+");
        int positivo=0,  negativo=0, neutro=0;
        Boolean inVerificacao=false;

        // VALIDAÇÕES e REGRAS
        for(String tweet: tweets) {
            Matcher word = patterWord.matcher(tweet);

            while(word.find()) {
                if(word.group().equals("não") || word.group().equals("nao") && !inVerificacao) {
                    inVerificacao = true;
                }

                if(dicionarios.impressoesPositivas.contains(word.group())) {
                    if(inVerificacao) {
                        dicionarios.contNegativas++;
                        inVerificacao = false;
                    } else {
                        dicionarios.contPositivas++;
                        inVerificacao = false;
                    }
                } else if (dicionarios.impressoesNegativas.contains(word.group())) {
                    if(inVerificacao) {
                        dicionarios.contPositivas++;
                        inVerificacao = false;
                    } else {
                        dicionarios.contNegativas++;
                        inVerificacao = false;  
                    }
                }
            }

            if(dicionarios.contNegativas > dicionarios.contPositivas) {
                negativo++;
            } else if (dicionarios.contPositivas > dicionarios.contNegativas) {
                positivo++;
            } else {
                neutro++;
            }

            dicionarios.contNegativas=0;
            dicionarios.contPositivas=0;
        }

        // SAIDA
        if(negativo > positivo) {
            System.out.println("negativo: "+negativo);

            System.out.println("positivo: "+positivo);
            System.out.println("neutro: "+neutro);

        } else if (positivo > negativo) {
            System.out.println("positivo: "+positivo);

            System.out.println("negativo: "+negativo);
            System.out.println("neutro: "+neutro);

        } else {
            System.out.println("neutro: "+neutro);
            System.out.println("positivo: "+positivo);
            System.out.println("negativo: "+negativo);
        }

        leitor.close();
    }

    public static void clearBuffer(Scanner scanner) {
        if (scanner.hasNextLine()) {
            scanner.nextLine();
        }
    }
}