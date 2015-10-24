class Primes {
    public static void main(String[] args) {
        int number = Integer.parseInt(args[0]);

        for (int candidate = 2; number > 1; candidate++) {
            for (; number % candidate == 0; number /= candidate) {
                System.out.println(candidate);
            }
        }
    }
}
