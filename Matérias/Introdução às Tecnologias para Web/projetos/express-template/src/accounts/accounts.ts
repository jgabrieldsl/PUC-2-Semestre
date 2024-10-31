import {Request, RequestHandler, Response} from "express";

/*
    Nampespace que contém tudo sobre "contas de usuários"
*/
export namespace AccountsManager {
    
    /**
     * Tipo UserAccount
     */
    export type UserAccount = {
        name:string;
        email:string;
        password:string;
        birthdate:string;
    };

    // Array que representa uma coleção de contas. (Serve como banco de dados temporário para armazenar as contas de usuários)
    let accountsDatabase: UserAccount[] = [];

    /**
     * Salva uma conta no banco de dados. 
     * @param ua conta de usuário do tipo @type {UserAccount}
     * @returns @type { number } o código da conta cadastrada como posição no array.
     */
    
    function saveNewAccount(ua: UserAccount) : number{
        accountsDatabase.push(ua);
        return accountsDatabase.length;
    }

    /**
     * Função para tratar a rota HTTP /signUp. 
     * @param req Requisição http tratada pela classe @type { Request } do express
     * @param res Resposta http a ser enviada para o cliente @type { Response }
     */

    function checkAccount (email: string, password: string) : UserAccount | undefined {
        return accountsDatabase.find (a => {
            if (a.email === email && a.password === password) {
                return true;
            }
            return false;
        })
    }

    export const loginHandler: RequestHandler = (req: Request, res: Response) => {
        const pEmail = req.get('email');
        const pPassword = req.get('password');
        if (pEmail && pPassword) {
            const account = checkAccount(pEmail, pPassword);
            if (account) {
                res.statusCode = 200;
                res.send("Login efetuado com sucesso");
            } else {
                res.statusCode = 401;
                res.send("Email ou senha inválidos");
            }
        }

    };

    export const signUpHandler: RequestHandler = (req: Request, res: Response) => {
        // Passo 1 - Receber os parametros para criar a conta
        const pName = req.get('name');
        const pEmail = req.get('email');
        const pPassword = req.get('password');
        const pBirthdate = req.get('birthdate');
        
        if(pName && pEmail && pPassword && pBirthdate){
            // prosseguir com o cadastro... 
            const newAccount: UserAccount = {
                name: pName,
                email: pEmail, 
                password: pPassword,
                birthdate: pBirthdate
            }

            const ID = saveNewAccount(newAccount);
            
            res.statusCode = 200; 
            res.send(`Nova conta adicionada. Código: ${ID}`);

        } else {
            res.statusCode = 400;
            res.send("Parâmetros inválidos ou faltantes.");
        }
    }

}
