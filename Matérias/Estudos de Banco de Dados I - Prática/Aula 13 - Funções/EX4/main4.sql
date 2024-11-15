-- Criação da Tabela RODA e Inserção de Dados
CREATE TABLE RODA (
    ID_RODA NUMBER NOT NULL PRIMARY KEY,
    RAIO NUMBER NOT NULL
);

INSERT INTO RODA (ID_RODA, RAIO)
VALUES (1, 2);

INSERT INTO RODA (ID_RODA, RAIO)
VALUES (2, 3);

-- Sintaxe de Criação da Função para Calcular Comprimento
CREATE OR REPLACE FUNCTION calcularComprimento (raio_roda NUMBER)
RETURN NUMBER IS
    comprimento NUMBER;
BEGIN
    comprimento := 2 * 3.14 * raio_roda;
    RETURN comprimento;
END;

-- Invocação da Função com SELECT para Verificar o Resultado
SELECT RAIO AS Raio_Roda, calcularComprimento(RAIO) AS Comprimento
FROM RODA;
