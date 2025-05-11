# Titanium architecture and guide lines

> [!NOTE]
> This document is written in Italian because it's easier for me to work on it, but you can always try to translate it

## Introduzione

In questo documento viene discussa l'architettura di Titanium. L'obbiettivo è mantenere un architettura modulare e facilmente estensibile, per questo il progetto è stato diviso in diversi moduli ospitati in diverse GitHub repo.

## Regole generali

1. **Separazione dei ruoli**
    - Ogni modulo deve avere un ruolo ben definito;
    - Ogni modulo deve essere indipendente dagli altri, nascondendo l'implementazione e lasciando visibile un interfaccia mantenibile.
2. **Gestione degli errori**
    - Ogni errore viene gestito usando `throw`;
    - La struttura del testo di errore deve essere chiara, seguendo generalmente la seguente:
  
    ```bat
    <Operation> failed on <target>: <cause>. <optional hint>
    ```

## Moduli del progetto

Per facilitare l'espansione futura del progetto, Titanium è diviso in 5 moduli:

1. **Titanium (core):**
    - Application, Event system, Game objects ecc.
    - *Dipende da Argon, Neon e Oxygen*
2. **Platinum (editor):**
    - Creare e modificare progetti Titanium
    - *Dipende da Titanium, Neon, Argon e Oxygen*
3. **Argon (renderer):**
    - rendering 3D, 2D e GUI
    - *Dipende da Vulkan e Oxygen*
4. **Neon (platform abstraction):**
    - Astrae la creazione di finestre e l'input handling
    - *Dipende da Oxygen e GLFW*
5. **Oxygen (utilities)**
    - Raccoglie tutte le funzioni utili per semplificare e rendere coesa la programmazione degli altri moduli
  