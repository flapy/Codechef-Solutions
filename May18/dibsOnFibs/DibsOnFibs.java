package dibsOnFibs;

import java.util.Arrays;
import java.util.Scanner;

/**
 * Stores constants used across Dibs on Fibs.
 */
class Constants {
    public static final long MOD = 1000000007;
}

/**
 * A utility class to find out Fibonacci numbers
 */
class FibonacciUtils {
    public static final long fibonacci[] = new long[100005];

    static {
        fibonacci[0] = fibonacci[1] = 1;
    }

    /**
     * Finds nth Fibonacci number with 0, 1 as its initial fibonacci numbers
     *
     * @param n Nth fibonacci to be calculated
     * @return Nth fibonacci number
     */
    public static long findNthFibonacciNumber(long n) {

        if (fibonacci[(int) n] != 0) {
            return fibonacci[(int) n];
        }

        long mid = (long) (n / 2);
        if (n % 2 == 0) {
            return fibonacci[(int) n] = ((findNthFibonacciNumber(mid) * findNthFibonacciNumber(mid) % Constants.MOD) +
                    (findNthFibonacciNumber(mid - 1) * findNthFibonacciNumber(mid - 1)) % Constants.MOD) % Constants.MOD;
        } else {
            return fibonacci[(int) n] = ((findNthFibonacciNumber(mid) * findNthFibonacciNumber(mid + 1) % Constants.MOD) +
                    ((findNthFibonacciNumber(mid - 1) * findNthFibonacciNumber(mid) ) % Constants.MOD)) % Constants.MOD;
        }
    }

    /**
     * Computed fibonacci number with a as first fibonacci number
     * and b as second fibonacci number.
     *
     * @param a First Fibonacci Number
     * @param b Second Fibonacci Number
     * @param n Nth Fibonacci to Be calculated
     * @return Nth Fibonacci
     */
    public static long findNthFibonacciNumber(long a, long b, long n) {
        if (n == 1)
            return a;
        if (n == 2)
            return b;

        return (((a * findNthFibonacciNumber(n - 3)) % Constants.MOD)
                + ((b * findNthFibonacciNumber(n - 2)) % Constants.MOD))
                % Constants.MOD;
    }
}

/**
 * Kind of Hard to explain what it does, it simply solves the problem
 */
class DibsOnFibs {

    /**
     * Solve the problem
     */
    public long solve(long firstArray[], long secondArray[], long n) {
        Arrays.sort(secondArray);
        long baseElement = secondArray[0];

        long sum = 0;
        for (long element : secondArray) {
            sum = (sum + ((element - baseElement) * (long) FibonacciUtils.findNthFibonacciNumber(0, 1, n) % Constants.MOD)
                    % Constants.MOD) % Constants.MOD;
        }

        long ans = 0;
        for (long element : firstArray) {
            ans = ((ans + (((long) FibonacciUtils.findNthFibonacciNumber(element, baseElement, n) * firstArray.length) % Constants.MOD))
                    % Constants.MOD + sum) % Constants.MOD;
        }
        return ans;
    }
}

class Main {

    public static void main(String args[]) {
        long numberOfTestCases;
        Scanner scanner = new Scanner(System.in);
        numberOfTestCases = scanner.nextLong();
        DibsOnFibs dibsOnFibs = new DibsOnFibs();
        long firstArray[];
        long secondArray[];
        while (numberOfTestCases-- > 0) {
            int numberOfElements, n;
            numberOfElements = scanner.nextInt();
            n = scanner.nextInt();

            firstArray = new long[numberOfElements];
            secondArray = new long[numberOfElements];

            for (int i = 0; i < numberOfElements; i++) {
                firstArray[i] = scanner.nextInt();
            }

            for (int i = 0; i < numberOfElements; i++) {
                secondArray[i] = scanner.nextInt();
            }

            System.out.println(dibsOnFibs.solve(firstArray, secondArray, n));
        }
    }
}