package main;

public class Pessoa {
	// Atributos
    private String name;
	private int age;
	private Boolean isDentroDoCarro;
	private Boolean isLicensed;
	private Boolean isHasCar;

	public Carro carro;

	// Constructors
	public Pessoa(String name, int age, Boolean isLicensed) {
		this.name = name;
		this.age = age;
		this.isLicensed = isLicensed;
		this.isHasCar = false;
		this.isDentroDoCarro = false;
	}

	// Public Methods
	public void showDatas() {
		System.out.printf("O(a) %s tem %d anos%s", name, age, (age >= 18 ? ", tem idade suficiente para para dirigir"+(isLicensed ? ", possui habilitação" : ", porem não possui habilitação") : ", não tem idade suficiente para para dirigir"));
		System.out.printf("%s", (isHasCar ? "\nele(a) possui um carro "+carro.getModel()+" de cor "+carro.getColor()+" e placa "+carro.getLicensePlate() : " e não tem um carro!\n"));
	}

	protected void setWinCar(Carro carro) {
		this.carro = carro;
		this.carro.setWinProprietario(this);

		isHasCar = true;
		System.out.println("Parabéns agora o(a) "+name+" tem um carro "+carro.getModel()+" :)");
		carro.showSpacs();
	}

	public void entrarNoCarro() {
		if(!isHasCar) {
			System.out.println("O(a) "+name+" não tem um carro para entrar!");
			return;
		} else if(isDentroDoCarro) {
			System.out.println("O(a) "+name+" já está dentro do carro!");
			return;
		}

		System.out.println("O(a) "+name+" entrou dentro do carro!");
		setIsDentroDoCarro(true);
	}
	public void sairDoCarro() {
		if(!isHasCar) {
			System.out.println("O(a) "+name+" não tem um carro para sair!");
			System.out.println("e não está dentro de nenhum carro!");
			return;
		} else if(!isDentroDoCarro) {
			System.out.println("O(a) "+name+" já está fora do carro!");
			return;
		} else if(carro.getCarSpeed() > 0) {
			System.out.println("Por favor, primeiro pare o carro e então saia ;-;");
			return;
		}

		setIsDentroDoCarro(false);
		System.out.println("O(a) "+name+" saiu do carro!");
	}
	
	public void dirigirCarro() {
		if (!isHasCar) {
			System.out.println("O(a)"+name+" não tem um carro para dirigir!");
			return;
		} else if(!isDentroDoCarro) {
			System.out.println("O(a) "+name+" não esta dentro do carro para dirigi-lo. Por favor entre no carro!");
			return;
		} else if (age < 18) {
			System.out.println("O(a) "+name+" e menor de 18 anos, por tanto não pode dirigir!");
			return;
		} else if(!isLicensed) {
			System.out.println("O(a) "+name+" não possui habilitação, por tanto não pode dirigir!");
			return;
		} else if(carro.getIsSwitchedOn()) {
			System.out.println("O(a) "+name+" já esta dirigindo o carro");
			System.out.printf("\tO carro está ligado com velocidade de %dkm/h\n", carro.getCarSpeed());
			return;
		}

		carro.ligar();
	}
	public void pararOCarro() {
		if (!isHasCar) {
			System.out.println("O(a) "+name+"não tem um carro parar parar!");
			return;
		} else if(!isDentroDoCarro) {
			System.out.println("O(a) "+name+" não está dentro do carro para parar ele!");
			return;
		}

		while(carro.getCarSpeed() > 0) {
			carro.frear();
		}
	}

	public void desligarCarro() {
		if (!isHasCar) {
			System.out.println("O(a) "+name+" não tem um carro para desligar!");
			return;
		} else if(!isDentroDoCarro) {
			System.out.println("Por favor entre no carro para desliga-lo!");
			return;
		} else if (carro.getCarSpeed() > 0) {
			System.out.println("\tO carro está em movimento, pare o carro para então desliga-lo!");
			return;
		}

		carro.setIsSwitchedOn(false);
		System.out.println("O(a) "+name+" desligou o carro!");
	}

	// Getts
	public String getName() {
		return name;
	}

	// Setts
	private void setIsDentroDoCarro(Boolean isDentroDoCarro) {
		this.isDentroDoCarro = isDentroDoCarro;
	} 
}
