import main.operacoes.*;
import main.modelos.*;

import java.util.Scanner;
import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        ArrayList<Aluno> alunos = new ArrayList<Aluno>();
        ArrayList<Professor> profs = new ArrayList<Professor>();
        ArrayList<Turma> turmas = new ArrayList<Turma>();

        int opcao;
        do {
            System.out.println("\n ###### SISTEM ACADÊMICO ###### ");
            System.out.println("1 - Aluno ");
            System.out.println("2 - Professor ");
            System.out.println("3 - Turmas ");
            System.out.println("0 - Sair ");
            System.out.print("Opção: ");
            opcao = entrada.nextInt();

            switch(opcao) {
                case 1 -> OpAluno.operacaoAluno(alunos);
                case 2 -> OpProfessor.operacaoProfessor(profs);
                case 3 -> OpTurma.operacaoTurma(turmas, profs, alunos);
                default -> {
                    if (opcao != 0) System.out.println("Opção inválida!");
                }
            }
        } while (opcao != 0);
        entrada.close();
    }
}
