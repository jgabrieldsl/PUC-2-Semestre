import {Request, RequestHandler, Response} from "express";
import OracleDB  from "oracledb";

/* Nampespace que contém tudo sobre "contas de usuários" */
export namespace AccountsHandler {
    /* Tipo UserAccount */
    export type UserAccount = {
        ID: number | undefined
        completeName:string;
        email:string;
        password:string | undefined;
    };

    async function login (email:string, password:string) {

        //OracleDB.outFormat = OracleDB.OUT_FORMAT_OBJECT;

        // Abrir conexão com o banco de dados
        let connection = await OracleDB.getConnection({
            user: "sys",
            password: "123",
            connectString: "localhost:1521/XE"
        });

        // Fazer o select (Nunca concatenar dados sensíveis no comando SQL)
        const accounts = await connection.execute(
            'SELECT * FROM ACCOUNTS WHERE EMAIL = :email AND PASSWORD = :password',
            [email, password]
        );
        
        // Fechar Conexão
        await connection.close();

        // Retornar os dados
        console.dir(accounts.rows);
    }

    export const loginHandler: RequestHandler = async (req: Request, res: Response) => {
        const pEmail = req.get('email');
        const pPassword = req.get('password');
        if (pEmail && pPassword) {
            await login(pEmail, pPassword);
            res.statusCode = 200;
            res.send("Login efetuado com sucesso.");
        } else {
            res.statusCode = 400;
            res.send("Parâmetros inválidos ou faltantes.");
        }

    };
}