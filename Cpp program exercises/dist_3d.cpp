void distancia3D() {
    double x1,y1,z1,x2,y2,z2;
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;

    double d = sqrt(pow(x2-x1,2) + pow(y2-y1,2) + pow(z2-z1,2));
    cout << "Distancia = " << d << endl;
}
