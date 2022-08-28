public class Pessoa {
    private String name;
	private int age;
	private Boolean isLicensed;

	public Pessoa(String name, int age, Boolean isLicensed) {
		this.name = name;
		this.age = age;
		this.isLicensed = isLicensed;
	}

	public void showPersonalData() {
		System.out.printf("O %s tem %d anos %s", name, age, (age > 18 ? ", tem idade suficiente para para dirigir"+(isLicensed ? " e possui habilitação" : ", porem não possui habilitação") : "não tem idade suficiente para para dirigir"));
	}

	// 	public void entrarNoCarro() {
	// 	}
	// 	public void sairDoCarro() {
	// 	}
	// 	public void ligarCarro() {
	// 	}
	// 	public void desligarCarro() {
	// 	}	
	// 	public void dirigirCarro() {
	// 	}
}
