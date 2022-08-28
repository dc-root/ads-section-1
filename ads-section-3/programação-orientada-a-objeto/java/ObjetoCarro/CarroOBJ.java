public class CarroOBJ {
	private String model;
	private String licensePlate;
	private int carSpeed;
	private boolean isSwitchedOn;

	Pessoa Motorista = new Pessoa("Pedro", 25, true);

	public CarroOBJ(String model, String licensePlate) {
		this.model = model;
		this.licensePlate = licensePlate;

		this.carSpeed = 0;
		this.isSwitchedOn = false;
	}
	
	public void ligar() {
		if(isSwitchedOn) {
			System.out.printf("O carro já está isSwitchedOn!\n");
			return;
		}
		System.out.printf("Ligando o carro...\n");
		isSwitchedOn = true;
	}

	public void desligar() {
		if(!isSwitchedOn) {
			System.out.printf("O carro já esta desisSwitchedOn!\n");
			return;
		} else if(carSpeed > 0) {
			System.out.printf("Pare o carro antes de desliga-lo!\n");
			return;
		}
		isSwitchedOn = false;
		System.out.printf("Desligando o carro...\n");
	}

	public void acelerar() {
		if(!isSwitchedOn) {
			ligar();

		} else if(carSpeed == 100) {
			System.out.printf("Você chegou na carSpeed maxima!\n");
			return;
		}
		carSpeed += 20;
		System.out.printf("carSpeed em %dkm/h\n", carSpeed);
	}
	
	public void frear() {
		if(!isSwitchedOn) {
			System.out.printf("O carro não esta isSwitchedOn!\n");
			return;
		}

		carSpeed -= 20;
		if(carSpeed == 0) {
			System.out.printf("O carro está parado!\n");
			return;
		}
		System.out.printf("carSpeed em %dkm/h\n", carSpeed);
	}

	public void showSpacs() {
		System.out.printf("O carro %s de licensePlate %s, esta %s%n", model, licensePlate, (isSwitchedOn ? "isSwitchedOn"+(carSpeed == 0 ? " e parado" : ", com carSpeed de "+carSpeed+"km/h") : "desisSwitchedOn"));

		Motorista.showPersonalData();
	}

	public static void  main(String[] args) {
		CarroOBJ carro = new CarroOBJ("Honda Civic", "BR20E4");

		carro.showSpacs();
	}
}