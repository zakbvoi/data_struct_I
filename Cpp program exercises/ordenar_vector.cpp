void ordenar100() {
    int v[100];
    for (int i=0;i<100;i++) v[i] = rand() % 1000;

    // Bubble sort
    for (int i=0;i<100;i++)
        for (int j=0;j<99;j++)
            if (v[j] > v[j+1])
                swap(v[j], v[j+1]);

    for (int i=0;i<100;i++) cout << v[i] << " ";
}
