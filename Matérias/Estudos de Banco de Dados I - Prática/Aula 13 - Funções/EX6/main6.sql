-- Criação da Tabela TEMPERATURA e Inserção de Dados
CREATE TABLE TEMPERATURA (
    ID_TEMP NUMBER NOT NULL PRIMARY KEY,
    TEMP_CELSIUS NUMBER NOT NULL
);

INSERT INTO TEMPERATURA (ID_TEMP, TEMP_CELSIUS)
VALUES (1, 25);

INSERT INTO TEMPERATURA (ID_TEMP, TEMP_CELSIUS)
VALUES (2, 30);

INSERT INTO TEMPERATURA (ID_TEMP, TEMP_CELSIUS)
VALUES (3, 20);

-- Sintaxe de Criação da Função para Converter Celsius para Fahrenheit
CREATE OR REPLACE FUNCTION converterCelsiusParaFahrenheit (temperaturaCelsius NUMBER)
RETURN NUMBER IS
    temperaturaFahrenheit NUMBER;
BEGIN
    temperaturaFahrenheit := temperaturaCelsius * 1.8 + 32;
    RETURN temperaturaFahrenheit;
END;

-- Invocação da Função com SELECT para Verificar o Resultado
SELECT TEMP_CELSIUS AS Temperatura_Celsius, converterCelsiusParaFahrenheit(TEMP_CELSIUS) AS Temperatura_Fahrenheit
FROM TEMPERATURA;
