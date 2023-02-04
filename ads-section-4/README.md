<h1 align="center">Analise e Desenvolvimento de Sistemas - 4º periodo</h1>

<div align="left" widht="100">
    <img align="right" src="../.github/4.png" width="325" alt="octodex-img" title="octodex">

<br>

```ts
import * as http from 'http';

class Server {
  private port: number;
  
  constructor(port: number) {
    this.port = port;
  }
  
  start() {
    const server = http.createServer((request, response) => {
      response.end('Hello World!');
    });
    
    server.listen(this.port, () => {
      console.log(`Server started on port ${this.port}`);
    });
  }
}

const server = new Server(3000);
server.start();
```
</div>

<br>

<footer align="start">
	<img src="../.github/classroom.png" width="100" align="start">
</footer>
