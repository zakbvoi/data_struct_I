string unidades[] = {"","I","II","III","IV","V","VI","VII","VIII","IX"};
string decenas[]  = {"","X","XX","XXX","XL","L","LX","LXX","LXXX","XC"};
string centenas[] = {"","C","CC","CCC","CD","D","DC","DCC","DCCC","CM"};

string convertir3(int n){
    return centenas[n/100] + decenas[(n/10)%10] + unidades[n%10];
}
