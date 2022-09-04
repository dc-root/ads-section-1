package main;

public class Carro {
	private String model;
	private String licensePlate;
	private String color;
	private int carSpeed;
	private boolean isSwitchedOn;
	private Motor motor;

	private Pessoa proprietario;

	public Carro(String model, String licensePlate, String color, Motor motor) {
		this.model = model;
		this.licensePlate = licensePlate;
		this.color = color;
		
		this.carSpeed = 0;
		this.isSwitchedOn = false;
		this.motor = motor;
	}

	public void showSpacs() {
		System.out.printf("\tO carro %s de placa %s e cor %s, esta %s%n", model, licensePlate, color, (isSwitchedOn ? "ligado"+(carSpeed == 0 ? " e parado!" : ", com velocidade de "+carSpeed+"km/h!") : "desligado!"));
	}

	protected void setWinProprietario(Pessoa proprietario) {
		this.proprietario = proprietario;
	}
	
	public void ligar() {
		if(isSwitchedOn) {
			System.out.printf("\tO carro já está ligado!\n");
			return;
		}
		System.out.println("O(a) "+proprietario.getName()+" está ligando o carro...");
		isSwitchedOn = true;
		System.out.println("\tCarro ligado!");
	}

	public void desligar() {
		if(!isSwitchedOn) {
			System.out.printf("\tO carro já está desligado!\n");
			return;
		} else if(carSpeed > 0) {
			System.out.printf("\tO carro está ligado com velocidade de %dkm/h, pare o carro antes de desliga-lo!\n", carSpeed);
			return;
		}
		System.out.printf("O(a) "+proprietario.getName()+" está desligando o carro...\n");
		isSwitchedOn = false;
		System.out.println("\tCarro desligado!");
	}

	public void acelerar() {
		if(!isSwitchedOn) {
			System.out.println("\tO carro está desligado para acelerar"); 
			return;
		} else if(carSpeed == motor.getVelocidadeMaxima()) {
			System.out.printf("\tO carro já chegou em sua velocidade maxima!\n");
			return;
		}
		carSpeed += motor.getPotencia();
		System.out.printf("\t%s\n", (carSpeed == motor.getVelocidadeMaxima() ? "O carro chegou em sua velocidade maxima!" : "velocidade almentada para "+carSpeed+"km/h"));
	}
	
	public void frear() {
		if(!isSwitchedOn) {
			System.out.printf("\tO carro não esta ligado e nem em movimento para frear!\n");
			return;
		} else if(carSpeed == 0) {
			System.out.printf("\tO carro já está parado!\n");
			return;
		}
		
		carSpeed -= motor.getPotencia();
		System.out.printf("\t%s\n", (carSpeed == 0 ? "Você parou o carro!" : "velocidade reduzida para "+carSpeed+"km/h"));
	}

	// Getts
	public String getModel() {
		return model;
	}
	public String getLicensePlate() {
		return licensePlate;
	}
	public String getColor() {
		return color;
	}
	public int getCarSpeed() {
		return carSpeed;
	}
	public Boolean getIsSwitchedOn() {
		return isSwitchedOn;
	}

	// Setts
	public void setCarSpeed(int carSpeed) {
		this.carSpeed = carSpeed;
	}
	public void setIsSwitchedOn(Boolean isSwitchedOn) {
		this.isSwitchedOn = isSwitchedOn;
	}
}