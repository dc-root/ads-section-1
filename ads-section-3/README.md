<h1 align="center">Analise e Desenvolvimento de Sistemas - 3º periodo</h1>

<div align="left" widht="100">
    <img align="right" src="../.github/mcefeeline.png" width="325" alt="octodex-img" title="octodex">

<br>

```java
public class Person {
    private String name;
    private String message;

    public Person(
        String name,
        String message
    ) {
		this.name = name;
		this.message = message;
    }

    public String showYourself() {
        return this.message+"\n\tmy name is "+this.name;
    }

    public static void main(String[] args) {
        Person githubMascot = new Person("Octocat", "Hello people! :]");
        System.out.printf(githubMascot.showYourself());
    }
}
```
</div>

<br>

<footer align="start">
	<img src="../.github/classroom.png" width="100" align="start">
</footer>
