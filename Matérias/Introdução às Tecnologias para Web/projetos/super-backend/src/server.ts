import http from "http";

const port = 3000;

function calcularIMC (peso: number, altura: number) {
    return (peso / (altura**2))
}


// Corpo (Header) & Conteúdo (Body)
const server = http.createServer ((req, res) => {

    if (req.url === "/calcCompCircunferencia") {
        res.writeHead(200, {'content-type': 'text/html; charset=utf-8' });
        res.end('<h1>Servico de cálculo do comprimento de uma cincunferência.</h1>');
        
    } else if (req.url === "/calcIMC") {
        const IMC: number = calcularIMC(65, 1.86);
        res.writeHead(200, {'Content-Type': 'text/html; charset=utf-8'});
        res.end(`<h1>Serviço de cálculo de IMC</h1> <p> Seu IMC é: ${IMC.toString()} </p>`);

        
    } else {
        res.writeHead(404, { 'content-type': 'text/html; charset=utf-8' });
        res.end('<h1>Serviço inexistente!</h1>')
    }
});

server.listen ( port, () => {
    console.log(`Servidor rodando na porta ${port}`);
});