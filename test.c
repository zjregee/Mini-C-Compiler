int a, b, c;
float m, n;
char p, q;
int d[2];
int e[2][3];
int f[2][3][4];

int fibo(int a) {
    if (a == 1 || a == 2)
        return 1;
    return fibo(a-1)+fibo(a-2);
}

int main() {
    int g[5][6];
    int n, i;
    int h[3] = {1, 2, 3};
    int m[2][3] = {{1,2,3},{4,5,6}};
    char pp, qq;
    pp = '1';
    qq = 'd';
    m = read();
    i = 1;

    for(int z = 0; z <= 10; z++) {
        write(z);
        break;
    }
    while(i <= m) {
        n = fibo(i);
        write(n);
        i = i + 1;
        continue;
    }

    d = {2, 3};
    e = {{2,3,4},{5,6,7}};
    return 1;
}