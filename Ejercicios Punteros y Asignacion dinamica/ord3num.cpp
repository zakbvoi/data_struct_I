void ordenar(int &A, int &B, int &C) {
    if (A > B) swap(A, B);
    if (B > C) swap(B, C);
    if (A > B) swap(A, B);
}
