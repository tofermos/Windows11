#include <stdio.h>

int main() {
    // Tipus numèrics en C
    char c = 'A';                    // Enter de 8 bits (1 byte)
    short s = 32767;                 // Enter curt de 16 bits (2 bytes)
    int i = 2147483647;              // Enter de 32 bits (4 bytes)
    long l = 9223372036854775807L;   // Enter llarg de 64 bits (8 bytes)
    long long ll = 9223372036854775807LL; // Enter molt llarg de 64 bits (8 bytes)
    float f = 3.14f;                 // Punt flotant de precisió simple (4 bytes)
    double d = 3.141592653589793;    // Punt flotant de doble precisió (8 bytes)
    long double ld = 3.141592653589793238L; // Punt flotant de precisió estesa (12-16 bytes, depèn del sistema)

    // Mostrar el tamany de cada tipus
    printf("Tamany de char: %zu bytes\n", sizeof(c));
    printf("Tamany de short: %zu bytes\n", sizeof(s));
    printf("Tamany de int: %zu bytes\n", sizeof(i));
    printf("Tamany de long: %zu bytes\n", sizeof(l));
    printf("Tamany de long long: %zu bytes\n", sizeof(ll));
    printf("Tamany de float: %zu bytes\n", sizeof(f));
    printf("Tamany de double: %zu bytes\n", sizeof(d));
    printf("Tamany de long double: %zu bytes\n", sizeof(ld));

    return 0;
}
