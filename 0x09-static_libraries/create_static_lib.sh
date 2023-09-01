#!/bin/bash
gcc -c *.c
ra -rc  liball.a *.o
rablib liball.a
