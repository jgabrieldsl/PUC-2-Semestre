CREATE SEQUENCE SEQ_PESSOA START WITH 1 INCREMENT BY 1;
CREATE SEQUENCE SEQ_PROCESSO START WITH 1 INCREMENT BY 1;
CREATE SEQUENCE SEQ_ADVOGADO START WITH 1 INCREMENT BY 1;
CREATE SEQUENCE SEQ_TRIBUNAL START WITH 1 INCREMENT BY 1;
CREATE SEQUENCE SEQ_VARA START WITH 1 INCREMENT BY 1;
CREATE SEQUENCE SEQ_AUDIENCIA START WITH 1 INCREMENT BY 1;
CREATE SEQUENCE SEQ_CUSTA START WITH 1 INCREMENT BY 1;
CREATE SEQUENCE SEQ_CONTA_A_PAGAR START WITH 1 INCREMENT BY 1;
CREATE SEQUENCE SEQ_CONTA_A_RECEBER START WITH 1 INCREMENT BY 1;
CREATE SEQUENCE SEQ_TELEFONE START WITH 1 INCREMENT BY 1;

CREATE TABLE PESSOA (
    ID_PESSOA NUMBER PRIMARY KEY,
    FK_TELEFONE_TELEFONE_PK NUMBER,
    CPF_CNPJ VARCHAR2(20),
    CEP VARCHAR2(10),
    NUMERO NUMBER,
    EMAIL VARCHAR2(50)
);

CREATE TABLE PROCESSO (
    ID_PROCESSO NUMBER PRIMARY KEY,
    DESCRICAO VARCHAR2(255),
    DATA_ABERTURA DATE,
    SITUACAO VARCHAR2(50),
    FK_ADVOGADO_ID_ADVOGADO NUMBER,
    FK_VARA_ID_VARA NUMBER
);

CREATE TABLE ADVOGADO (
    ID_ADVOGADO NUMBER PRIMARY KEY,
    FK_TELEFONE_TELEFONE_PK NUMBER,
    NOME VARCHAR2(100),
    OAB VARCHAR2(20),
    EMAIL VARCHAR2(50)
);

CREATE TABLE TRIBUNAL (
    ID_TRIBUNAL NUMBER PRIMARY KEY,
    NOME VARCHAR2(100),
    CEP VARCHAR2(10),
    NUMERO NUMBER
);

CREATE TABLE VARA (
    ID_VARA NUMBER PRIMARY KEY,
    NOME VARCHAR2(100),
    FK_TRIBUNAL_ID_TRIBUNAL NUMBER
);

CREATE TABLE AUDIENCIA (
    ID_AUDIENCIA NUMBER PRIMARY KEY,
    FK_PROCESSO_ID_PROCESSO NUMBER,
    DATA DATE,
    RECOMENDACAO VARCHAR2(255)
);

CREATE TABLE CUSTA (
    ID_CUSTA NUMBER PRIMARY KEY,
    DESCRICAO VARCHAR2(255),
    VALOR NUMBER,
    FK_PROCESSO_ID_PROCESSO NUMBER
);

CREATE TABLE CONTA_A_PAGAR (
    ID_CONTA_PAGAR NUMBER PRIMARY KEY,
    DESCRICAO VARCHAR2(255),
    VALOR NUMBER,
    VENCIMENTO DATE,
    FK_CUSTA_ID_CUSTA NUMBER
);

CREATE TABLE CONTA_A_RECEBER (
    ID_CONTA_RECEBER NUMBER PRIMARY KEY,
    DESCRICAO VARCHAR2(255),
    VALOR NUMBER,
    VENCIMENTO DATE,
    FK_PROCESSO_ID_PROCESSO NUMBER
);

CREATE TABLE PESSOA_PROCESSO_PARTICIPA (
    PAPEL VARCHAR2(50),
    FK_PESSOA_ID_PESSOA NUMBER,
    FK_PROCESSO_ID_PROCESSO NUMBER,
    PRIMARY KEY (FK_PESSOA_ID_PESSOA, FK_PROCESSO_ID_PROCESSO)
);

CREATE TABLE TELEFONE (
    TELEFONE_PK NUMBER PRIMARY KEY,
    TELEFONE1 VARCHAR2(15),
    TELEFONE2 VARCHAR2(15)
);

ALTER TABLE PESSOA ADD CONSTRAINT FK_PESSOA_TELEFONE
    FOREIGN KEY (FK_TELEFONE_TELEFONE_PK)
    REFERENCES TELEFONE (TELEFONE_PK)
    ON DELETE CASCADE;

ALTER TABLE PROCESSO ADD CONSTRAINT FK_PROCESSO_ADVOGADO
    FOREIGN KEY (FK_ADVOGADO_ID_ADVOGADO)
    REFERENCES ADVOGADO (ID_ADVOGADO)

ALTER TABLE PROCESSO ADD CONSTRAINT FK_PROCESSO_VARA
    FOREIGN KEY (FK_VARA_ID_VARA)
    REFERENCES VARA (ID_VARA)

ALTER TABLE ADVOGADO ADD CONSTRAINT FK_ADVOGADO_TELEFONE
    FOREIGN KEY (FK_TELEFONE_TELEFONE_PK)
    REFERENCES TELEFONE (TELEFONE_PK)
    ON DELETE CASCADE;

ALTER TABLE VARA ADD CONSTRAINT FK_VARA_TRIBUNAL
    FOREIGN KEY (FK_TRIBUNAL_ID_TRIBUNAL)
    REFERENCES TRIBUNAL (ID_TRIBUNAL)

ALTER TABLE AUDIENCIA ADD CONSTRAINT FK_AUDIENCIA_PROCESSO
    FOREIGN KEY (FK_PROCESSO_ID_PROCESSO)
    REFERENCES PROCESSO (ID_PROCESSO)

ALTER TABLE CUSTA ADD CONSTRAINT FK_CUSTA_PROCESSO
    FOREIGN KEY (FK_PROCESSO_ID_PROCESSO)
    REFERENCES PROCESSO (ID_PROCESSO)

ALTER TABLE CONTA_A_PAGAR ADD CONSTRAINT FK_CONTA_A_PAGAR_CUSTA
    FOREIGN KEY (FK_CUSTA_ID_CUSTA)
    REFERENCES CUSTA (ID_CUSTA)

ALTER TABLE CONTA_A_RECEBER ADD CONSTRAINT FK_CONTA_A_RECEBER_PROCESSO
    FOREIGN KEY (FK_PROCESSO_ID_PROCESSO)
    REFERENCES PROCESSO (ID_PROCESSO)

ALTER TABLE PESSOA_PROCESSO_PARTICIPA ADD CONSTRAINT FK_PESSOA_PROCESSO_PARTICIPA_PESSOA
    FOREIGN KEY (FK_PESSOA_ID_PESSOA)
    REFERENCES PESSOA (ID_PESSOA);

ALTER TABLE PESSOA_PROCESSO_PARTICIPA ADD CONSTRAINT FK_PESSOA_PROCESSO_PARTICIPA_PROCESSO
    FOREIGN KEY (FK_PROCESSO_ID_PROCESSO)
    REFERENCES PROCESSO (ID_PROCESSO);

