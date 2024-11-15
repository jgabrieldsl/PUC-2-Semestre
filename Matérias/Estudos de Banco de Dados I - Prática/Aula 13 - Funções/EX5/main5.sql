-- Criação da Tabela AVALIACAO e Inserção de Dados
CREATE TABLE AVALIACAO (
    ID_AVALIACAO NUMBER NOT NULL PRIMARY KEY,
    NOTA1 NUMBER NOT NULL,
    NOTA2 NUMBER NOT NULL 
);

INSERT INTO AVALIACAO (ID_AVALIACAO, NOTA1, NOTA2)
VALUES (1, 8, 10);

INSERT INTO AVALIACAO (ID_AVALIACAO, NOTA1, NOTA2)
VALUES (2, 10, 9.5);

-- Sintaxe de Criação da Função para Calcular a Média
CREATE OR REPLACE FUNCTION calcularMedia (nota1 NUMBER, nota2 NUMBER)
RETURN NUMBER IS
    media NUMBER;
BEGIN
    media := (nota1 + nota2) / 2;
    RETURN media;
END;

-- Invocação da Função com SELECT para Verificar o Resultado
SELECT NOTA1, NOTA2, calcularMedia(NOTA1, NOTA2) AS Media
FROM AVALIACAO;
