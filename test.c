#include <unistd.h>

int main(void) {
    write(1,"Imprime Ole Ole 123", 16);
    write(1,"nova lin\nea", 11);
    return 0;
}
