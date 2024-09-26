// Importando o Express
import express from 'express';
import { Request, Response, Router } from 'express';

const port = 3000;
const server = express();
const routes = Router();

// Definindo rotas

// Rota default 
routes.post ('/', (req: Request, res: Response) => {
    res.send ('Olá!');
});

server.use(routes);

server.listen (port, () => {
    console.log(`Server is running on: ${port}`)
});