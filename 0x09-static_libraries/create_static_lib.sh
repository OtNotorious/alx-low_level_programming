usr/bin/bash
gcc -c -o *.c
ar -rcs liball.a *.o
ranlib liball.a
