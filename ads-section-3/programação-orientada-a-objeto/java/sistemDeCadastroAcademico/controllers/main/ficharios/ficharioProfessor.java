package main.ficharios;

import main.modelo.Professor;

import java.util.Scanner;
import java.util.ArrayList;

public class FicharioProfessor {
    // para manutencao nos professores
    // deve herdar de pessoas , acrescentar String registro
    // deve ter os metodos cadastrar, alterar, excluir, consultar e relatorio
    // não permitir exclusão de professores vinculados a turmas
    private ArrayList<Professor> profs;
    private Scanner entrada;

    public FicharioProfessor(Professor<Professor> profs) {
        this.profs = profs;
        this.entrada = new Scanner(System.in);
    }

    public void cadastrar() {
        String nome, telefone, cpf, email;
        int registro;
        ArrayList<String> disciplinas = new ArrayList<String>();

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

        System.out.println("Disciplinas(0 para sair): ");
        while(Scanner.hasNextLine()) {
            disciplinas.add(Scanner.nextLine());
        }

        Professor professor = new Professor(nome, registro, cpf, telefone, email, disciplinas);

        if (this.profs.contains(professor)) {
            System.out.println("Professor já cadastrado!");
        } else {
            try {
                this.profs.add(professor);
            } catch(Exception e) {
                throw new Error("Não foi possivel cadastrar o professor!");
            }
            System.out.println("Professor cadastrado com sucesso!");
        }
    }

    public void alterarCadastro() {
        System.out.print("Numero do registro: ");
        int registro = entrada.nextInt();

        Professor professoraSerAlterado = this.profs.stream()
            .filter(professor -> professor.getRegistro()
                .equals(registro)
            ).orElse(null);

        if(professoraSerAlterado != null) {
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

            do {
                for(ArraList<String> disciplina: disciplinas) {
                    System.out.printf("\n%d. %s", disciplinas.indexOf(disciplina), disciplina);
                    System.out.println(disciplina.size()+1+". sair");
                }
                System.out.println("Insira a opção a ser alterada: ");
                int index = entrada.nexInt();
                disciplinas.set(index, entrada.nextLine());
            } while(index != disciplina.size()+1);
        } else {
             System.out.println("Número de registro não encontrado!");
        }
    }

    public void relatorio() {
        System.out.println("[RELATÓRIO DE PROFESSORES]");
        System.out.println("---------------------");
        for (Professor prof: profs) {
            System.out.println(prof);
            System.out.println("---------------------");
        }
    }
}