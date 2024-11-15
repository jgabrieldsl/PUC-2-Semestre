-- Criação da tabela PRODUTO e inserção de dados
CREATE TABLE PRODUTO (
    COD_PROD NUMBER NOT NULL PRIMARY KEY,
    DESC_PROD VARCHAR2(250),
    VALOR_PROD NUMBER NOT NULL
);

INSERT INTO PRODUTO (COD_PROD, DESC_PROD, VALOR_PROD)
VALUES (1, 'Prodcut One', 2000);

INSERT INTO PRODUTO (COD_PROD, DESC_PROD, VALOR_PROD)
VALUES (2, 'Product Two', 1000);

-- Sintaxe de Criação da Função
CREATE OR REPLACE FUNCTION convertRealtoDolar (valorProduto NUMBER)
RETURN NUMBER IS
    newPrice NUMBER;
BEGIN
    newPrice := valorProduto * 5.25;
    RETURN newPrice;
END;

-- Invocação da Função
UPDATE PRODUTO
SET VALOR_PROD = convertRealtoDolar(VALOR_PROD);

-- Comando SELECT para Verificar o Resultado
SELECT * FROM PRODUTO;

-- Resultado
