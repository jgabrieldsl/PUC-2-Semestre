-- Criação da Tabela PESSOA e Inserção de Dados
CREATE TABLE PESSOA (
    ID NUMBER NOT NULL PRIMARY KEY,
    NOME VARCHAR2(100),
    PESO_KG NUMBER NOT NULL,
    ALTURA_M NUMBER NOT NULL
);

INSERT INTO PESSOA (ID, NOME, PESO_KG, ALTURA_M)
VALUES (1, 'João Gabriel', 65, 1.90);

INSERT INTO PESSOA (ID, NOME, PESO_KG, ALTURA_M)
VALUES (2, 'Renata Arantes', 55, 1.55);

-- Sintaxe de Criação da Função IMC
CREATE OR REPLACE FUNCTION calcularIMC (peso NUMBER, altura NUMBER)
RETURN NUMBER IS
    imc NUMBER;
BEGIN
    imc := peso / (altura * altura);
    RETURN imc;
END;

-- Invocação da Função com SELECT para Verificar o Resultado
SELECT NOME, PESO_KG, ALTURA_M, round(calcularIMC(PESO_KG, ALTURA_M), 2) AS IMC FROM PESSOA;
