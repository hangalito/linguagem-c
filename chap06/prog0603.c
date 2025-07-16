void inic(int s[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        s[i] = 0;
}

main()
{
    int v[10];
    int s[20];

    inic(v, 10);
    inic(s, 20);
}
