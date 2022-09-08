import main.operacoes.OpAluno;

import java.util.Scanner;

// completar os menus
// todos devem ter os metodos cadastrar, alterar, excluir, consultar e relatorio

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        int operacaoGeral, operacaoCadastro;
        do {
            System.out.println("\n === SISTEM ACADÊMICO === ");
            System.out.println("1 - Aluno ");
            System.out.println("2 - Professor ");
            System.out.println("3 - Turmas ");
            System.out.println("4 - Sair ");
            System.out.print("Opção: ");
            operacaoGeral = entrada.nextInt();

            switch (operacaoGeral) {
                case 1:
                    OpAluno.operacaoAluno();
                    break;
                case 2:
                    // OpProf.operacaoProfessor();
                    break;
                case 3:
                    // OpTurmas.operacaoTurmas();
                    break;
                default:
                    if (operacaoGeral != 4) {
                        System.out.println("Opção inválida.");
                    }
            }
        } while ( operacaoGeral != 4);
    }
}
