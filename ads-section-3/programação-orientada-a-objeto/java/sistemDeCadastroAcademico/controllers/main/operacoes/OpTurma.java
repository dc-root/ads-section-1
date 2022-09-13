package main.operacoes;

import main.modelos.*;
import main.ficharios.FicharioTurma;

import java.util.ArrayList;
import java.util.Scanner;

public class OpTurma {
    public static void operacaoTurma(
        ArrayList<Turma> turmas,
        ArrayList<Professor> profs,
        ArrayList<Aluno> alunos
    ) {
        Scanner entrada = new Scanner(System.in);
        
        // FicharioTurma ficharioTurma = new FicharioTurma(turmas, profs, alunos);
        FicharioTurma ficharioTurma = new FicharioTurma(turmas);
        int opcao;
        do {
            System.out.println("\n ##### TURMAS ##### ");
            System.out.println("1 - Cadastrar Turma ");
            System.out.println("2 - Alterar Turma ");
            System.out.println("3 - Excluir Turma ");
            System.out.println("4 - Consultar Turma ");
            System.out.println("5 - Relatório da Turma ");
            System.out.println("6 - Matricular alunos ");
            System.out.println("7 - Desmatricular alunos ");
            System.out.println("0 - Voltar ao menu principal");
            System.out.print("Opção: ");
            opcao = entrada.nextInt();

            switch (opcao) {
                case 1 -> ficharioTurma.cadastrar();
                case 2 -> ficharioTurma.alterar();
                case 3 -> ficharioTurma.excluir();
                // case 4 -> ficharioTurma.consultar();
                case 5 -> ficharioTurma.relatorio();
                // case 6 -> ficharioTurma.matricularAluno();
                // case 7 -> ficharioTurma.desmatricularAluno();
                default -> {
                    if (opcao != 0) System.out.println("Opção inválida.");
                }
            }
        } while(opcao != 0);
        entrada.close();
    }
}