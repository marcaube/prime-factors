#!/usr/bin/ruby

$number = ARGV[0].to_i
$candidate = 2

while $number > 1 do
    while $number % $candidate == 0 do
        puts($candidate)
        $number /= $candidate
    end
    $candidate += 1
end
