package main.operacoes;

import main.ficharios.FicharioAluno;
import main.modelos.Aluno;

import java.util.Scanner;

public class OpAluno {
    public static void operacaoAluno(Aluno alunos[]) {
        FicharioAluno ficharioAluno = new FicharioAluno(alunos);
        int operacaoCadastro;
        Scanner entrada = new Scanner(System.in);

        do {
            System.out.println(" === ALUNO === ");
            System.out.println("1 - Cadastrar Aluno ");         // check
            System.out.println("2 - Alterar Aluno ");           // checking..
            System.out.println("3 - Excluir Aluno ");
            System.out.println("4 - Consultar Aluno ");
            System.out.println("5 - Relatório do Aluno ");      // check
            System.out.println("6 - Voltar ao menu principal"); // check
            System.out.println("Opção: ");
            operacaoCadastro = entrada.nextInt();
            entrada.skip("\n");

            switch (operacaoCadastro) {
                case 1:
                    ficharioAluno.cadastrar();
                    break;
                case 2:
                    ficharioAluno.alterarCadastro();
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