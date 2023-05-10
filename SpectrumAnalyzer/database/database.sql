--
-- File generated with SQLiteStudio v3.4.3 on Mon Mar 20 14:10:44 2023
--
-- Text encoding used: System
--
PRAGMA foreign_keys = off;
BEGIN TRANSACTION;

-- Table: chromophores
DROP TABLE IF EXISTS chromophores;

CREATE TABLE IF NOT EXISTS chromophores (
    ID       NUMERIC (3) PRIMARY KEY
                         NOT NULL,
    name     TEXT        NOT NULL,
    solvent  TEXT,
    lamda    NUMERIC     NOT NULL,
    molar_ab NUMERIC     NOT NULL
);

INSERT INTO chromophores (ID, name, solvent, lamda, molar_ab) VALUES ('C001', 'Alkene', 'n-Heptane', 177, 13000);
INSERT INTO chromophores (ID, name, solvent, lamda, molar_ab) VALUES ('C002', 'Alkyne', 'n-Heptane', 178, 10000);
INSERT INTO chromophores (ID, name, solvent, lamda, molar_ab) VALUES ('C003', 'Alkyne', 'n-Heptane', 196, 2000);
INSERT INTO chromophores (ID, name, solvent, lamda, molar_ab) VALUES ('C004', 'Alkyne', 'n-Heptane', 225, 160);
INSERT INTO chromophores (ID, name, solvent, lamda, molar_ab) VALUES ('C005', 'Carbonyle', 'n-Heptane', 186, 1000);

-- Table: pathlength
DROP TABLE IF EXISTS pathlength;

CREATE TABLE IF NOT EXISTS pathlength (
    ID         TEXT    PRIMARY KEY
                       NOT NULL,
    pathlength NUMERIC NOT NULL
);

INSERT INTO pathlength (ID, pathlength) VALUES ('P01', 1);
INSERT INTO pathlength (ID, pathlength) VALUES ('P02', 2);
INSERT INTO pathlength (ID, pathlength) VALUES ('P03', 5);
INSERT INTO pathlength (ID, pathlength) VALUES ('P04', 10);
INSERT INTO pathlength (ID, pathlength) VALUES ('P05', 20);
INSERT INTO pathlength (ID, pathlength) VALUES ('P06', 40);
INSERT INTO pathlength (ID, pathlength) VALUES ('P07', 50);
INSERT INTO pathlength (ID, pathlength) VALUES ('P08', 100);

-- Table: sol_cutoff
DROP TABLE IF EXISTS sol_cutoff;

CREATE TABLE IF NOT EXISTS sol_cutoff (
    ID                 TEXT    PRIMARY KEY
                               NOT NULL,
    Solvent            TEXT    NOT NULL,
    [Lower Wavelength] NUMERIC NOT NULL
);

INSERT INTO sol_cutoff (ID, Solvent, "Lower Wavelength") VALUES ('S05', 'Carbon Tetrachloride', 260);
INSERT INTO sol_cutoff (ID, Solvent, "Lower Wavelength") VALUES ('S04', 'Cyclohexane', 200);
INSERT INTO sol_cutoff (ID, Solvent, "Lower Wavelength") VALUES ('S03', 'Hexane', 200);
INSERT INTO sol_cutoff (ID, Solvent, "Lower Wavelength") VALUES ('S02', 'Ethanol', 220);
INSERT INTO sol_cutoff (ID, Solvent, "Lower Wavelength") VALUES ('S01', 'Water', 180);
INSERT INTO sol_cutoff (ID, Solvent, "Lower Wavelength") VALUES ('S09', 'Cellosolve', 320);
INSERT INTO sol_cutoff (ID, Solvent, "Lower Wavelength") VALUES ('S08', 'Dioxane', 320);
INSERT INTO sol_cutoff (ID, Solvent, "Lower Wavelength") VALUES ('S07', 'Acetone', 330);
INSERT INTO sol_cutoff (ID, Solvent, "Lower Wavelength") VALUES ('S06', 'Diethyl ether', 210);

COMMIT TRANSACTION;
PRAGMA foreign_keys = on;
