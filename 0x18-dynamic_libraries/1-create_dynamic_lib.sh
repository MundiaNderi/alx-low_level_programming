#!/usr/bin/bash
gcc *.c -c -fPIC -Wall -Werror -Wextra -pedantic *.c -shared -o liball.so
