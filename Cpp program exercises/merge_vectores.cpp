void mergeVectores() {
    int A[50], B[50], C[100];

    for (int i=0;i<50;i++) cin >> A[i];
    for (int i=0;i<50;i++) cin >> B[i];

    sort(A, A+50);
    sort(B, B+50);

    int i=0,j=0,k=0;

    while (i<50 && j<50) {
        if (A[i] < B[j]) C[k++] = A[i++];
        else C[k++] = B[j++];
    }

    while (i<50) C[k++] = A[i++];
    while (j<50) C[k++] = B[j++];

    for (int t=0;t<100;t++) cout << C[t] << " ";
}
