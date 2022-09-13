package main.operacoes;

import main.ficharios.FicharioProfessor;
import main.modelos.Professor;

import java.util.Scanner;
import java.util.ArrayList;

public class OpProfessor {
    public static void operacaoProfessor(ArrayList<Professor> profs) {
        Scanner entrada = new Scanner(System.in);
        FicharioProfessor ficharioProfessor = new FicharioProfessor(profs);
        int opcao;
        do {
            System.out.println("\n ##### PROFESSOR ##### ");
            System.out.println("1 - Cadastrar Professor ");
            System.out.println("2 - Alterar Professor ");
            System.out.println("3 - Excluir Professor ");
            System.out.println("4 - Consultar Professor ");
            System.out.println("5 - Relatório do Professor ");
            System.out.println("0 - Voltar ao menu principal");
            System.out.print("Opção: ");
            opcao = entrada.nextInt();

            switch (opcao) {
                case 1 -> ficharioProfessor.cadastrar();
                case 2 -> ficharioProfessor.alterar();
                case 3 -> ficharioProfessor.excluir();
                case 4 -> ficharioProfessor.consultar();
                case 5 -> ficharioProfessor.relatorio();
                default -> {
                    if (opcao != 0) System.out.println("Opção inválida.");
                }
            }
        } while (opcao != 0);
        entrada.close(); 
    }
}