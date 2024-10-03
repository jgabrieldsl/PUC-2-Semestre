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
        return walletsDatabase.find(w => {
            if (w.ownerEmail === email) {
                return;
            }
        })?.balance;
    }

    export const getWalletBalanceHandler:RequestHandler = 
            (req: Request, res: Response) => {
                // GetWalletBalanceHandler
            }
}