#!/bin/bash
gcc -Wall -Wetra -Werror -pedantic -c *.C
ar rc liball.a *.0
