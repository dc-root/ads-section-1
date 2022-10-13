package main.ficharios;

import java.util.Scanner;
import java.util.ArrayList;

import main.ficharios.FicharioInterface;

public class FicharioGenerics<E> implements FicharioInterface {
    protected ArrayList<E> entity;
    private Scanner entrada;

    protected FicharioGenerico(ArrayList<E> entity) {
        this.entity = entity;
        this.entrada = new Scanner(System.in);
    }

    protected void cadastrar(E unknown) {
        try {
            if(entity.contains(unknown)) {
                System.out.println("\n> warning: Já existe esse cpf cadastrado no sistem!");
                return;
            }

            entity.add(unknown);
            System.out.println("\n> Success: cadastrado realizado com sucesso!");
        } catch (Exception e) {
            System.out.println("\n>Error: não foi possivel execultar: 'cadastrar()'");
        }
    }

    protected void alterar(int index, E unknown) {
        try {
            entity.set(index, unknown);
            System.out.println("\nAlteração realizada com sucesso!");
        } catch (Exception e) {
            System.out.println("\n>Error: não foi possivel execultar: 'alterar()' ");
        }
    }

    protected void remover(E unknown) {
        try {
            System.out.print("Você realmente deseja excluir? (yes/no): ");
            String option = entrada.nextLine();

            switch(option) {
                case "y", "Y", "YES", "yes" -> {
                    if(entity.remove(unknown)) {
                        System.out.println("\n> Success: removido com sucesso!");
                    } else {
                        System.out.println("\n> warnin: houve algum erro ao realizar remoção!");
                        return;
                    }
                }
                case "n", "N", "NO", "no" -> { return; }
                default -> {
                    System.out.println("\n> warning: opção invalida!");
                }
            }
        } catch (Exception e) {
            System.out.println("\n>Error: não foi possivel execultar: 'remover()'");
        }
    }
}
