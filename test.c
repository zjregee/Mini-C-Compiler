int a, b, c;
float m, n;
char p, q;

int fibo(int a) {
    if (a == 1 || a == 2)
        return 1;
    return fibo(a-1)+fibo(a-2);
}

int main() {
    int m, n, i;
    char pp, qq;
    pp = '1';
    qq = 'd';
    m = read();
    i = 1;

    for(int z = 0; z <= 10; z = z + 1) {
        write(z);
        break;
    }
    while(i <= m) {
        n = fibo(i);
        write(n);
        i = i + 1;
        continue;
    }
    return 1;
}