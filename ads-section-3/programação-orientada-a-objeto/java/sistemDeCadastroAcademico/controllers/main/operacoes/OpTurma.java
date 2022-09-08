package main.operacoes;

import main.modelos.Turma;
import main.ficharios.FicharioTurma;

import util.java.Scanner;
import util.java.ArrayList;

public class OpTurma {
    public static void operacaoTurma() {
        Scanner entrada = new Scanner(System.in);

        ArrayList<Turma> turmas = new ArrayList<Turma>();
        FicharioTurma ficharioTurma = new FicharioTurma(turmas);

        int opCadastroTurma;

        System.out.println("\n === TURMAS === ");
        System.out.println("1 - Cadastrar Turma ");
        System.out.println("2 - Alterar Turma ");
        System.out.println("3 - Excluir Turma ");
        System.out.println("4 - Consultar Turma ");
        System.out.println("5 - Relatório da Turma ");
        System.out.println("6 - Matricular alunos ");
        System.out.println("7 - Desmatricular alunos ");
        System.out.println("0 - Voltar ao menu principal");
        System.out.println("Opção: ");
        opCadastroTurma = entrada.nextInt();
        entrada.skip("\n");

        switch (opCadastroTurma) {
            case 1:
                // ficharioTurma.cadastrar();
                break;
            case 2:
                // ficharioTurma.alterar();
                break;
            case 3:
                // ficharioTurma.excluir();
                break;
            case 4:
                // ficharioTurma.consultar();
                break;
            case 5:
                // ficharioTurma.relatorio();
                break;
            case 6:
                // ficharioTurma.matricularAluno();
                break;
            case 7:
                // ficharioTurma.demstricularAluno();
                break;
            default:
                if (opCadastroTurma != 0) {
                    System.out.println("Opção inválida.");
                }
        }
    }
}