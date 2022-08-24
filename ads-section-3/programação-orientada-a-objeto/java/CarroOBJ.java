public class Carro {
	private String modelo;
	private String placa;
	private int velocidade;
	private boolean ligado;

	public Carro(String modelo, String placa) {
		this.modelo = modelo;
		this.placa = placa;

		this.velocidade = 0;
		this.ligado = false;
	}
	
	public void ligar() {
		if(ligado) {
			System.out.printf("O carro já está ligado!\n");
			return;
		}
		System.out.printf("Ligando o carro...\n");
		ligado = true;
	}

	public void desligar() {
		if(!ligado) {
			System.out.printf("O carro já esta desligado!\n");
			return;
		} else if(velocidade > 0) {
			System.out.printf("Pare o carro antes de desliga-lo!\n");
			return;
		}
		ligado = false;
		System.out.printf("Desligando o carro...\n");
	}

	public void acelerar() {
		if(!ligado) {
			ligar();

		} else if(velocidade == 100) {
			System.out.printf("Você chegou na velocidade maxima!\n");
			return;
		}
		velocidade += 20;
		System.out.printf("Velocidade em %dkm/h\n", velocidade);
	}
	
	public void frear() {
		if(!ligado) {
			System.out.printf("O carro não esta ligado!\n");
			return;
		}

		velocidade -= 20;
		if(velocidade == 0) {
			System.out.printf("O carro está parado!\n");
			return;
		}
		System.out.printf("Velocidade em %dkm/h\n", velocidade);
	}

	public void mostrarEspecificacao() {
		System.out.printf("O carro %s de placa %s, esta %s%n", modelo, placa, (ligado ? "ligado"+(velocidade == 0 ? " e parado" : ", com velocidade de "+velocidade+"km/h") : "desligado"));
	}

	public static void  main(String[] args) {
		Carro carro = new Carro("Honda Civic", "BR20E4");


		carro.ligar();
		
		carro.acelerar();
		carro.acelerar();
		carro.acelerar();
		carro.acelerar();
		carro.acelerar();
		carro.acelerar();

		carro.desligar();
		carro.mostrarEspecificacao();

		carro.frear();
		carro.mostrarEspecificacao();

		carro.frear();
		carro.frear();
		carro.frear();
		carro.frear();

		carro.mostrarEspecificacao();

		carro.desligar();
		carro.mostrarEspecificacao();
	}
}