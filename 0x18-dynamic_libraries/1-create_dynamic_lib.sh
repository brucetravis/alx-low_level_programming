#!/bin/bash

gcc -c -Wall -Werror -fpic *.c

gcc -shard -o liball.so *.o

rm -f *.o
