int copiarHastaEspacio(char *origen, char *destino, int limite) {
    int i = 0;

    while (i < limite && origen[i] != ' ') {
        destino[i] = origen[i];
        i++;
    }

    destino[i] = '\0';  
    return i;  
}
