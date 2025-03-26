---
title: |
  | Instal·lació de Windows 11 en VirtualBox
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

# Resum

El següent document només conté alguns recordatoris i consells sobre la instal·lació d'un Windows 11 en una VirtualBox.

# 1 Recursos

# 2 Consideracions en la instal·Lació de VirtualBox

En crear i configurar la màquina, hem de revisar el l'ordre d'arrencada de la màquina.

* Convé desmarcar el Disquette.
* Seleccionar TPM (Versió 2.0)
* Activar la EFI

El TPM (Mòdul de Plataforma Segura) és un xip de seguretat que emmagatzema claus criptogràfiques i dades sensibles en un ordinador. Ajuda a protegir el sistema operatiu i a evitar accessos no autoritzats, especialment en funcions com el xifratge de disc o l'autenticació segura.            

![](png/configuracióMV.png){width=70%}

Vegem les característiques de HW necessari.

![](png/Hardware.png){width=70%}

![](png/Hardware2.png){width=70%}

En crear la màquina virtual hem d'especificar en quin disc volem que s'instal·le.

Per poder instal·lar en un **DISC EXTRAÏBLE** només hem d'especificar la carpeta destí en l'aparatat **FOLDER**

![](png/SeleccioCarpetaDesti.png){width=70%}

# 3 Error habitual...

Un error habitual és el següent...

![](png/errorInstalacio.png){width=70%}

**La solució** consisteix en elimimar un fitxer de la carpeta de les instatànies.

![ ](png/unattendedEliminar.png){width=90%}
