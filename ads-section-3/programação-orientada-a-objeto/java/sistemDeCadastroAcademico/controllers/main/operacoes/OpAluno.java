package main.operacoes;

import main.ficharios.FicharioAluno;
import main.modelos.Aluno;

import java.util.Scanner;
import java.util.ArrayList;

public class OpAluno {
    public static void operacaoAluno() {
        Scanner entrada = new Scanner(System.in);

        ArrayList<Aluno> alunos = new ArrayList<Aluno>();
        FicharioAluno ficharioAluno = new FicharioAluno(alunos);

        int operacaoCadastro;

        do {
            System.out.println("\n === ALUNO === ");
            System.out.println("1 - Cadastrar Aluno ");
            System.out.println("2 - Alterar Aluno ");
            System.out.println("3 - Excluir Aluno ");
            System.out.println("4 - Consultar Aluno ");
            System.out.println("5 - Relatório do Aluno ");
            System.out.println("6 - Voltar ao menu principal");
            System.out.print("Opção: ");
            operacaoCadastro = entrada.nextInt();

            switch (operacaoCadastro) {
                case 1:
                    ficharioAluno.cadastrar();
                    break;
                case 2:
                    ficharioAluno.alterar();
                    break;
                case 3:
                    ficharioAluno.excluir();
                    break;
                case 4:
                    ficharioAluno.consultar();
                    break;
                case 5:
                    ficharioAluno.relatorio();
                    break;
                default:
                    if (operacaoCadastro != 6) {
                        System.out.println("Opção inválida.");
                    }
            }
        } while (operacaoCadastro != 6);
    }
}