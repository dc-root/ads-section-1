import java.lang.Math;

class MinhaClasse<T extends Number> {
        T numClasse;

        public MinhaClasse(T numClasse) {
                this.numClasse = numClasse;
        }

        public Double aoQuadrado() {
                return numClasse.intValue() * numClasse.doubleValue();
        }

        boolean saoIguais(MinhaClasse<?> obj) {
                if(Math.abs(numClasse.doubleValue()) == Math.abs(obj.numClasse.doubleValue())) {
                        return  true;
                }

                return false;
        }
}


public class GenericsExample {
        public static void main(String[] args) throws Exception {
                MinhaClasse<Integer> inteiro = new MinhaClasse<>(15);
                MinhaClasse<Integer> inteiro2 = new MinhaClasse<>(15);

                System.out.println(inteiro.numClasse.intValue()+"²"+" = "+inteiro.aoQuadrado());
                System.out.println(inteiro.saoIguais(inteiro2) ? "Numeros iguais!" : "Numeros diferente!");
        }
}
