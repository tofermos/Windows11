---
title: |
  | Introducció al sistema de fitxers de Windows 11
author: "@tofermos 2024"
lang: "ca-ES"
papersize: A4
linestretch: 1.5
output:
  html_document:
    toc: true
    toc_float: true
    toc_depth: 3
    df_print: paged
    number_sections: false
  pdf_document:
    toc: true
    keep_tex: true
    latex_engine: xelatex
---

  \newpage
  \renewcommand\tablename{Tabla}

# 1 ESTIÓ DE FITXERS EN WINDOWS 11

## 1.1  Definció de Gestió de fitxers

La gestió dels fitxers és una de les **8 funcions principals de tot SO**. 

  * **Sistema de fitxers**: Administra la creació, lectura, escriptura i eliminació de fitxers.
  * **Organització de fitxers**: Proporciona estructures jeràrquiques per organitzar fitxers i directoris.
  * **Seguretat i permisos**: Gestiona els permisos d'accés als fitxers i directoris per a diferents usuaris.
  
En este tema estudiarem com Windows organitza, emmagatzema i gestiona els fitxers en els dispositius d'emmagatzematge (memòria secundària) com són discos durs, pendrive, CD-DVD, targes SDRAM, cintes backup... El núvol (Google Drive, OneDrive... també s'implementa sobre discos durs).
Quines operacions poden fer-se sobre fitxers i carpetes i qui pot fer-les.


# 2  SISTEMES DE FITXERS EN WINDWS

## 2.1 Tipus de sistems de fitxers

1. **NTFS (New Technology File System)**: És el sistema de fitxers principal utilitzat per Windows 11. Ofereix característiques avançades com la compressió de fitxers, la xifratura, la limitació d'ús de disc (quota) i la tolerància a errors.

2. **FAT32 i exFAT**: Són sistemes de fitxers suportats per compatibilitat amb dispositius i sistemes operatius antics. 
Respecte a NTFS, FAT32 té **2 limitacions importants*
  * Mida màxima de fitxer de 4 GB. Mentre que exFAT no té ja esta'limitació.
  * Tamany màxim de partició 128 PB.
  
> Convé parar atenció a un "error" prou comú. Els pen-drive venen formatats en FAT32 i moltes vegades usem fitxers que superern este tamany. La ISO de Windows 11 sense anar més lluny és el millor exemple. 
Per usar fitxers de tamany superior a 4Gb hem de formatejar ( i perdre tota la informació!) el pendrive escollint NTFS com a format.

## 2.2  Funcionalitats del SF de Windows 11

### 2.2.1 Pròpies de NTFS
Estes característiques les tindrem també en un Windows Server, per exemple.

1. **Compressió de Fitxers**: NTFS permet comprimir fitxers i carpetes per estalviar espai en disc.
2. **Xiframent (Encrypting File System, EFS)**: NTFS proporciona xifrat de fitxers a nivell de sistema de fitxers per protegir les dades.
3. **Quotes de Disc**: Permet establir límits d'ús de disc per a diferents usuaris.
4. **Permisos de Fitxers i Carpetes**: NTFS permet establir permisos detallats d'accés per a fitxers i carpetes, proporcionant un control granular de la seguretat.
5. **Registre de Transaccions (Journaling)**: Registra les operacions de fitxers per ajudar a recuperar-se de fallades del sistema.
6. **Punts de Muntatge**: Permet muntar volums en punts de muntatge dins d'altres volums.

## 2.2.2 Funcionalitats pròpies del sistema operatiu Windows 11 

Són independents del sistema de fitxers.

1. **Integració amb OneDrive**: Windows 11 permet sincronitzar fitxers i carpetes amb OneDrive per al backup automàtic i l'accés remot.
2. **BitLocker**: Proporciona xifrat de disc complet per protegir les dades en cas de pèrdua o robatori del dispositiu. Això és independent del sistema de fitxers, encara que NTFS és el més utilitzat amb BitLocker.
3. **Historial de Fitxers**: Permet fer còpies de seguretat i restaurar versions anteriors dels fitxers. Aquesta funcionalitat pot utilitzar-se amb qualsevol sistema de fitxers suportat per Windows.
4. **Windows Sandbox**: Permet executar aplicacions en un entorn aïllat per provar programari o navegar per llocs web sospitosos sense risc per al sistema principal. Aquesta funcionalitat és part del sistema operatiu.


# 3 SEGURETAT I PERMISOS

Els permisos que apareixen en la secció de "Seguretat" i les "Propietats avançades" d'un fitxer o carpeta en Windows 11 són permisos d'accés basats en llistes de control d'accés (ACL, per les seves sigles en anglès) i llistes de control d'accés discrecional (DACL). Aquests permisos defineixen quines accions poden realitzar diferents usuaris i grups en un fitxer o carpeta.

### 3.1 Tipus de Permisos

Els permisos en Windows es divideixen en permisos bàsics i permisos avançats (més precisió o detall):

#### 3.1.1 Permisos Bàsics
Són els més comuns i es poden assignar fàcilment a través de l'Explorador (interfície) o des de l'interface *cmd* o des del PowerShell. 

1. **R Lectura (Read)**: Permet veure el contingut del fitxer o carpeta i les propietats.
2. **W Escriptura (Write)**: Permet modificar el contingut del fitxer o carpeta.
3. **RX Lectura i execució (Read & execute)**: Permet veure el contingut i executar fitxers executables.
4. **RX Llistat del contingut de la carpeta (List folder contents)**: Permet veure els noms dels fitxers i subcarpetes dins d'una carpeta.
5. **M Modificació (Modify)**: Permet modificar i eliminar el fitxer o carpeta.
6. **F Control total (Full control)**: Proporciona tots els permisos disponibles, incloent la capacitat de canviar els permisos i prendre la propietat.


> Control total
Per defecte l'usuari o grup propietari té este permís que inclou la resta (canvi de permisos, propietari i contingut)

![](png/permisosBasics.png)

#### 3.1.2 Permisos Avançats
Ofereixen un control més granular i es poden configurar a través de la finestra de "Permisos avançats".

![](png/permisosAvançats.png)

1. **Permisos de fitxer específics**:
   - **Permet l'accés**: Permet que es realitzen accions específiques (per exemple, crear fitxers o carpetes).
   - **Eliminar**: Permet eliminar el fitxer o carpeta.
   - **Llegir permisos**: Permet veure els permisos que s'han assignat al fitxer o carpeta.
   - **Canviar permisos**: Permet modificar els permisos que s'han assignat al fitxer o carpeta.
   - **Pren la propietat**: Permet canviar el propietari del fitxer o carpeta.

**Configuració de Permisos Avançats**



Per configurar aquests permisos avançats:

1. **Accés a les Propietats Avançades**:
   - Feu clic amb el botó dret en el fitxer o carpeta.
   - Seleccioneu "Propietats".
   - Aneu a la pestanya "Seguretat".
   - Feu clic a "Avançat".

2. **Configuració de Permisos**:
   - A la finestra de "Configuració avançada de seguretat", veureu una llista dels permisos actuals.
   - Feu clic a "Afegeix" per afegir un nou permís o seleccioneu un permís existent i feu clic a "Edita" per modificar-lo.

3. **Assignació de Permisos**:
   - A la finestra "Entrada de permisos", podeu seleccionar un principal (usuari o grup) i especificar els permisos que voleu assignar.
   - Aquí, podeu seleccionar els permisos bàsics o fer clic a "Mostra permisos avançats" per veure i configurar permisos més específics.



1. **Afegeix un Permís**:
   - A la finestra de "Configuració avançada de seguretat", feu clic a "Afegeix".
   - A la finestra de "Entrada de permisos", feu clic a "Selecciona un principal".
   - Introduïu el nom de l'usuari o grup al qual voleu assignar permisos i feu clic a "Acceptar".

2. **Configura els Permisos**:
   - Seleccioneu els permisos bàsics (Lectura, Escriptura, etc.) o feu clic a "Mostra permisos avançats" per seleccionar permisos específics com "Eliminar" o "Pren la propietat".
   - Feu clic a "Acceptar" per guardar els canvis.

Els permisos avançats permeten una gestió detallada de la seguretat i l'accés als fitxers i carpetes, assegurant que només els usuaris autoritzats puguin realitzar determinades accions. Aquesta funcionalitat és essencial per mantenir la seguretat i la integritat de les dades en entorns multiusuari.


