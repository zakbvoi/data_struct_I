double promedio(double a, double b, double c) {
    return (a+b+c)/3;
}

string estado(double p) {
    if (p > 6) return "Aprobado";
    if (p >= 4) return "Verificacion Suplementaria";
    return "Reprobado";
}
