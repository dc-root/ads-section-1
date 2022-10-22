import java.util.Scanner;

class Stack {
    public int index;
    public Object[] stack;

    public Stack() {
        this.index = -1;
        this.stack = new Object[100];
    }

    public boolean isEmpty() {
        if(this.index == -1) {
            return true;
        }
        return false;
    }

    public int size() {
        if(isEmpty()) {
            return 0;
        }

        return this.index++;
    }

    public void push(Object character) {
        if(this.index < this.stack.length -1) {
            this.stack[++index] = character;
        }
    }

    public Object pop() {
        if(isEmpty()) {
            return null;
        }

        return this.stack[this.index--];
    }
}

public class AvaliacaoLexicoeSintatico {
    public static void main(String[] args) {
        Scanner leitor = new Scanner(System.in);
        Stack stackCharacters = new Stack();

        Error ERR_SYNTAX = new Error("Erro de Sintaxe!");
        // Error ERR_LEXICON = Error("Erro Léxico!");

        String MathExpression = leitor.nextLine();
        leitor.close();

        for(char ch: MathExpression.toCharArray()) {
            if(!Character.toString(ch).matches("[a-zA-Z0-9]()")) {
                throw ERR_SYNTAX;
            }
            // else if () {

            // }
            stackCharacters.push(ch);
        }
    }
}