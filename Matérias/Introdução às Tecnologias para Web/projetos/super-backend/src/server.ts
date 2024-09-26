// Importando o Express
import express from 'express';
import { Request, Response, Router } from 'express';

const port = 3000;
const server = express();
const routes = Router();

type UserAccount = {
    name: string;
    email: string;
    password: string;
    birthdate: string;
};

let accountsDatabase: UserAccount[] = []; 

function saveNewAccount(ua: UserAccount) {
    accountsDatabase.push (ua);
    return accountsDatabase.length;
} 

// Definindo rotas

// Rota default 
routes.get ('/', (req: Request, res: Response) => {
    res.statusCode = 403;
    res.send ('Acesso não permitido!');
});

// Rota signUp -> Cadastrar uma nova conta de acesso.
routes.put('/signUp', (req: Request, res: Response) => {
    const pName = req.get('name');
    const pEmail = req.get('email');
    const pPassword = req.get('password');
    const pBirthdate = req.get('birthdate');

    if (pName && pEmail && pPassword && pBirthdate) {
        const newAccount: UserAccount = {
            name: pName,
            email: pEmail,
            password: pPassword,
            birthdate: pBirthdate
        }
        const ID = saveNewAccount(newAccount);
        res.statusCode = 200;
        res.send(`Nova conta adicionada: ${ID}`)

    } else {
        res.statusCode = 400;
        res.send('Parâmetros inválidos ou faltantes.');
    }
});

server.use(routes);

server.listen (port, () => {
    console.log(`Server is running on: ${port}`)
})