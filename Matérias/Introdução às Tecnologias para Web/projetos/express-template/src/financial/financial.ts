import { Request, Response, RequestHandler } from "express";

export namespace FinancialManager {

    export type Wallet = {
        ownerEmail: string;
        balance: number;
    }

    let walletsDatabase: Wallet[] = [];

    const w1: Wallet = {
        ownerEmail: "pedro@example.com",
        balance: 0
    };

    const w2: Wallet = {
        ownerEmail: "joao@example.com",
        balance: 10000
    };

    walletsDatabase.push(w1);
    walletsDatabase.push(w2);

    function getWalletBalance (email: string) : number | undefined {
        return walletsDatabase.find ( w => {
            if (w.ownerEmail === email) {
                return true; // .find precisa determinar se a condição foi atendida com True or False!
            }
        })?.balance;
    }

    export const getWalletBalanceHandler:RequestHandler = (req: Request, res: Response) => {
        const pEmail = req.get('email');
        if (!pEmail) {
            res.statusCode = 400;
            res.send("Parâmetros inválidos ou faltantes.");
            return;
        } else {
            const balance = getWalletBalance(pEmail);
            if (balance !== undefined) {
                res.statusCode = 200;
                res.send(`O saldo da carteira foi encontrado: ${balance}`)
            } else {
                res.statusCode = 400;
                res.send(`Carteira não encontrada para o email ${pEmail}`);
            }
        }
    }
}