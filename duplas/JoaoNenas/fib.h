//Emerson Santana
#define NOME_FIB "Emerson Santana"

int fibonacci(int n){
    int fibonacci[n],i,j;

    fibonacci[0]=0;
    fibonacci[1]=1;

    for(i=2;i<n;i++) {
        fibonacci[i]=fibonacci[i-1]+fibonacci[i-2];
    }

    return fibonacci[n-1];
}