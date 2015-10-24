<?php

$number = $argv[1];

for ($candidate = 2; $number > 1; $candidate++) {
    for (; $number % $candidate == 0; $number /= $candidate) {
        echo $candidate . PHP_EOL;
    }
}
