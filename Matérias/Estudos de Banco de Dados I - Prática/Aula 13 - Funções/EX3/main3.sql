-- Criação da Tabela MOVIMENTO e Inserção de Dados
CREATE TABLE MOVIMENTO (
    ID_MOV NUMBER NOT NULL PRIMARY KEY,
    V0 NUMBER NOT NULL,  -- Velocidade inicial
    A NUMBER NOT NULL,   -- Aceleração
    T NUMBER NOT NULL   -- Tempo
);

INSERT INTO MOVIMENTO (ID_MOV, V0, A, T)
VALUES (1, 10, 2, 5);

INSERT INTO MOVIMENTO (ID_MOV, V0, A, T)
VALUES (2, 15, 3, 4);

-- Sintaxe de Criação da Função para Calcular Velocidade
CREATE OR REPLACE FUNCTION calcularVelocidade (velocidade_inicial NUMBER, aceleracao NUMBER, tempo NUMBER)
RETURN NUMBER IS
    velocidade NUMBER;
BEGIN
    velocidade := velocidade_inicial + aceleracao * tempo;
    RETURN velocidade;
END;

-- Invocação da Função com SELECT para Verificar o Resultado
SELECT V0 AS VelocidadeInicial, A AS Aceleracao, T AS Tempo, calcularVelocidade(V0, A, T) AS VelocidadeFinal
FROM MOVIMENTO;
