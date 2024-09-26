"use strict";
var __importDefault = (this && this.__importDefault) || function (mod) {
    return (mod && mod.__esModule) ? mod : { "default": mod };
};
Object.defineProperty(exports, "__esModule", { value: true });
// Importando o Express
const express_1 = __importDefault(require("express"));
const express_2 = require("express");
const port = 3000;
const server = (0, express_1.default)();
const routes = (0, express_2.Router)();
let accountsDatabase = [];
function saveNewAccount(ua) {
    accountsDatabase.push(ua);
    return accountsDatabase.length;
}
// Definindo rotas
// Rota default 
routes.get('/', (req, res) => {
    res.statusCode = 403;
    res.send('Acesso não permitido!');
});
// Rota signUp -> Cadastrar uma nova conta de acesso.
routes.put('/signUp', (req, res) => {
    const pName = req.get('name');
    const pEmail = req.get('email');
    const pPassword = req.get('password');
    const pBirthdate = req.get('birthdate');
    if (pName && pEmail && pPassword && pBirthdate) {
        const newAccount = {
            name: pName,
            email: pEmail,
            password: pPassword,
            birthdate: pBirthdate
        };
        const ID = saveNewAccount(newAccount);
        res.statusCode = 200;
        res.send(`Nova conta adicionada: ${ID}`);
    }
    else {
        res.statusCode = 400;
        res.send('Parâmetros inválidos ou faltantes.');
    }
});
server.use(routes);
server.listen(port, () => {
    console.log(`Server is running on: ${port}`);
});
