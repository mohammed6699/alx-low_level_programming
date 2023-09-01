#!/bin/bash
gcc -c *.c
ar rcs liball.a *.o
nm libmy.a
