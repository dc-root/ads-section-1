package main.ficharios;

import main.modelo.Professor;
import java.util.Scanner;

public class FicharioProfessor {
    // para manutencao nos professores
    // deve herdar de pessoas , acrescentar String registro
    // deve ter os metodos cadastrar, alterar, excluir, consultar e relatorio
    // não permitir exclusão de professores vinculados a turmas
    private Professor profs[];
    private Scanner entrada;

    public FicharioProfessor(Professor profs[]) {
        this.profs = profs;
        this.entrada = new Scanner(System.in);
    }

    public void cadastrar() {
        String nome, telefone, cpf, email;
        int contador=0, registro;

        while (profs[contador] != null){
            contador++;
        }

        if(contador < 40){
            System.out.println(" === Cadastro PROFESSOR ==== ");
            System.out.print("Nome: ");
            nome = entrada.nextLine();
            System.out.print("CPF: ");
            cpf = entrada.nextLine();
            System.out.print("Registro: ");
            registro = entrada.nextInt();
            System.out.print("E-mail: ");
            email = entrada.nextLine();
            System.out.print("Telefone: ");
            telefone = entrada.nextLine();

            Professor professor;
            professor = new Professor(nome, registro, cpf, telefone, email);
            alunos[contador] = aluno;
        } else {
            System.out.println("Cadastros esgotados!");
        }
    }

    public void alterarCadastro() {
        System.out.print("Numero do registro: ");
        int registro = entrada.nextInt();

        for(Professor al: this.profs) {
            if(al.getRegistro() == registro) {
                System.out.println("Nome: ");
                al.setNome(entrada.nextLine());

                System.out.println("Registro: ");
                al.setRegistro(entrada.nextLine());

                System.out.println("CPF: ");
                al.setCpf(entrada.nextLine());

                System.out.println("Telefone: ");
                al.setTelefone(entrada.nextLine());

                System.out.println("Email: ");
                al.setEmail(entrada.nextLine());
            }
        }
    }

}
