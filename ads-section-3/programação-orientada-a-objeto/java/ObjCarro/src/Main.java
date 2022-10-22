import main.*;

public class Main {
    public static void  main(String[] args) {
		Motor motor = new Motor(100);
		Carro carro1 = new Carro("Honda Civic", "BR20E4", "Preto", motor);

		Pessoa pessoa1 = new Pessoa("Fernanda", 25, true);
		
		pessoa1.showDatas();
		pessoa1.sairDoCarro();

		// TESTES
		// pessoa1.entrarNoCarro();
		// pessoa1.dirigirCarro();

		// pessoa1.carro.acelerar();
		// pessoa1.carro.acelerar();

		// pessoa1.entrarNoCarro();

		// pessoa1.sairDoCarro();
		// pessoa1.dirigirCarro();

		// pessoa1.carro.acelerar();
		// pessoa1.carro.acelerar();
		// pessoa1.carro.acelerar();
		// pessoa1.carro.acelerar();

		// pessoa1.pararOCarro();
		// pessoa1.carro.frear();
		// pessoa1.desligarCarro();

		// pessoa1.carro.acelerar();

		// pessoa1.showPersonalData();
	}
}
