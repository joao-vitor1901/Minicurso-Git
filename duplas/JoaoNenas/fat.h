#define NOME_FAT "_Joao_"

 long fatorial(int n) {
     long r = 1;
    for (int i = 2; i <= n; i++) r *= i;
    return n < 0 ? -1 : r;
}