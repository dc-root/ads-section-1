package main.generics;

import java.util.ArrayList;

public class GenericFichario<E> {

        private ArrayList<E> persons;

        public GenericFichario(ArrayList<E> persons) {
                this.persons = persons;
        }

        public void cadastrar() {}

        public void alterar() {}

        public void excluir() {}

        public void consultar() {}

        public void relatorio() {
                System.out.println("\n[RELATÓRIO]");
                System.out.println("------------------------------------------");
                
                persons.stream()
                    .forEach(person -> {
                            System.out.println(person);
                    });

                System.out.println("------------------------------------------");
        }
}
