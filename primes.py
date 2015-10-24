#!/usr/bin/env python

import sys

number = int(sys.argv[1])
candidate = 2

while (number > 1):
    while (number % candidate == 0):
        print candidate
        number /= candidate
    candidate += 1
