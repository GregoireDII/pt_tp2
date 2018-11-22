char* upper(char *s){
    int i = 0;
 
    //Tant que nous ne sommes pas arrivés a la fin de la chaîne...
    while (s[i] != '\0')
    {   //Si la lettre est une minuscule...
        if (s[i]  >= 97 &&  s[i] <= 122)             
            //Conversion en majuscule
            s[i] = s[i] - 32;
        i++;
    }

    return s;
}