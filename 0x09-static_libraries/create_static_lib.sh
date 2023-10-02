#!/bin/bash
gcc -c $(find . -namei "*.c")
ar rc liball.a *.o
