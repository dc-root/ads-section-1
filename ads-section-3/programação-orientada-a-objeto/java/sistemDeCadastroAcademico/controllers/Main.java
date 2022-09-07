import main.modelos.Aluno;
import main.operacoes.OpAluno;

import java.util.Scanner;
// completar os menus
// todos devem ter os metodos cadastrar, alterar, excluir, consultar e relatorio

public class Main {
    public static void main(String[] args){
        Scanner entrada = new Scanner(System.in);
        Aluno alunos[] = new Aluno[40];
        // Professor profs[] = new Professor[20];
        // Turmas turmas[] = new Turmas[5];

        int operacaoGeral;
        do {
            System.out.println(" === SISTEM ACADÊMICO === ");
            System.out.println("1 - Aluno ");
            System.out.println("2 - Professor ");
            System.out.println("3 - Turmas ");
            System.out.println("4 - Sair ");
            operacaoGeral = entrada.nextInt();
            entrada.skip("\n");

            switch (operacaoGeral) {
                case 1:
                    OpAluno.operacaoAluno(alunos);
                    break;
                case 2:
                    // OpProf.operacaoProfessor(profs);
                    break;
                case 3:
                    // OpTurmas.operacaoTurmas(turmas);
                    break;
                default:
                    if (operacaoGeral != 4) {
                        System.out.println("Opção inválida.");
                    }
            }
        } while ( operacaoGeral != 4);
    }
}
