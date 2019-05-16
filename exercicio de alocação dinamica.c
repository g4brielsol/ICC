void main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    
    int **v, i, j, maior, maior;
    v = (int**)calloc(n, sizeof(int*));
    
    for(i=0; i < n; i++)
    {
        v[i] = (int*)calloc(m, sizeof(int));
    }
    
}

resolução do monitor

int main()
{
    int const n=4, m=4;
    int **M;
    int maior[] = {0, 0};
    int menor[] = {0, 0};
    M = (int **)malloc(n*sizeof(int));
    
    for (int i=0; i< n; i++)
    {
        M[i] = (int*)malloc(m*sizeof(int));
        for(int j=0; j< m; j++)
        {
            M[i][j] = rand(%20); // numero de 0 a 19
            printf("%d ", M[i][j]);
        }
        printf("\n");
    }
    
    
    
    for (int i=0; i< n; i++)
    {
        for(int j=0; j < m; j++)
        {
            if(M[i][j] > M[maior[0]][maior[1]])
            {
                maior[0] = i;
                maior[1] = j;
            }
            
            if(M[i][j] < M[menor[0]][menor[1]])
            {
                menor[0] = i;
                menor[1] = j;
            }
            
        }
    }
    
    printf ("Maior: M[%d][%d]\n", maior[0], maior[1]);
    printf ("Menor: M[%d][%d]\n", menor[0], menor[1]);
    
    for (int i=0; i < 0; i++)
    {
        free(M[i]);
    }
    
    free(M);
    return 0;

}