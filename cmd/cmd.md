---
title: |
  | CMD
author: "@tofermos 2024"
lang: "ca-ES"
papersize: A4
linestretch: 1.5
output:
  pdf_document:
    toc: true
    keep_tex: true
    latex_engine: xelatex
  html_document:
    toc: true
    toc_float: true
    toc_depth: 3
    df_print: paged
    number_sections: false
---

  \newpage
  \renewcommand\tablename{Tabla}

---

# Objectiu de la sessió

Aprendre a obrir el símbol del sistema (CMD) i fer servir ordres bàsiques per navegar i gestionar fitxers.

---

# 1. Obrir CMD

* Escriure `cmd` al menú Inici i prémer Enter
* Prem `Win + R`, escriu `cmd` i prem Enter
* Opcional: Botó dret sobre `cmd` i seleccionar "Executar com a administrador"

---

# 2. Ordres bàsiques

| Ordre   | Explicació                                          |
| ------- | --------------------------------------------------- |
| `dir`   | Llista els fitxers i carpetes de la ubicació actual |
| `cd`    | Canvia de directori (exemple: `cd Documents`)       |
| `cd ..` | Pujar un nivell al directori anterior               |
| `cls`   | Neteja la pantalla                                  |
| `exit`  | Tanca la finestra del CMD                           |

---

# 3. Exercici pràctic bàsic

1. Obrir CMD
2. Escriure `cd Desktop`
3. Crear una carpeta amb `mkdir Prova`
4. Entrar-hi amb `cd Prova`
5. Crear un fitxer amb `echo Hola > hola.txt`
6. Veure el contingut amb `dir`
7. Llegir el fitxer amb `type hola.txt`

---

# 4. Altres ordres útils

| Ordre   | Funció                                    |
| ------- | ----------------------------------------- |
| `mkdir` | Crear carpeta nova                        |
| `del`   | Esborrar fitxer (exemple: `del hola.txt`) |
| `rmdir` | Esborrar carpeta (ha d’estar buida)       |
| `copy`  | Copiar fitxer                             |
| `move`  | Moure o reanomenar fitxer                 |

---

# 5. Utilitat actual del CMD

## 1. Control avançat del sistema

Permet accions fora de l'abast de la interfície gràfica: gestió d'usuaris, neteja de sistema, configuració avançada.

## 2. Formació per a entorns professionals

És essencial en camps com administració de sistemes, desenvolupament i ciberseguretat.

## 3. Compatible amb scripts i automatització

S’utilitza en molts processos d’instal·lació i configuració mitjançant `.bat` o integració amb PowerShell.

## 4. Aprenentatge estructurat

Ajuda a entendre la jerarquia del sistema d’arxius i fomenta el pensament lògic i seqüencial.

## 5. Eina educativa accessible

Permet fer pràctiques bàsiques sense necessitat d’instal·lar programari addicional.

