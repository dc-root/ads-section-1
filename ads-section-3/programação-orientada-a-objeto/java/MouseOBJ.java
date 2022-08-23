public class MouseOBJ {
	String cor;
	Boolean semFio;
	String nomeDaMarca;

	public MouseOBJ(String cor, Boolean isSemFio, String nomeDaMarca) {
		this.cor = cor;
		this.semFio = isSemFio;
		this.nomeDaMarca = nomeDaMarca;
	}

	public String clickEsquerdo() {
		return "click com botão esquerdo";
	}

	public String clickDireito() {
		return "click com botão direito!";
	}

	public String scroll() {
		return "Rolando scroll!";
	}

	public static void main(String[] args) {
		MouseOBJ mouse1 = new MouseOBJ("Preto", true, "Logitech");

		System.out.printf("%s%n", mouse1.cor);
	}
}
