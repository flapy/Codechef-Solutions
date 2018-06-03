package minimumDeletions;

import java.util.HashMap;
import java.util.Scanner;

class Constants {
    public static final int MAXIMUM_VALUE_N = 50000;
}

/**
 * Computes GCD of 2 elements
 */
class GCDUtils {

    public static int findGCD(int a, int b) {
        if (a == 0 || b == 0)
            return 0;

        if (a == b)
            return a;

        if (a > b)
            return findGCD(a - b, b);
        return findGCD(a, b - a);
    }
}

/**
 * Computes all the primes and returns a boolean array of primes
 */
class PrimeUtils {
    public static boolean[] fetchBooleanArrayToDeterminePrime(int n) {

        boolean isPrime[] = new boolean[n + 1];
        for (int i = 2; i <= n; i++) {
            isPrime[i] = true;
        }

        for (int i = 2; i <= Math.sqrt(n); i++) {
            int multiplier = 2;
            while (i * multiplier <= n) {
                isPrime[i * multiplier] = false;
                multiplier++;
            }
        }

        return isPrime;
    }
}

/**
 * Finds the minimum number of elements to be deleted to make
 * gcd of the array as 1.
 */
class MinimumDeletions {

    /**
     * @param arr Input array
     * @return Minimum number of deletions from arr
     */

    public int findMinimumDeletions(int arr[], boolean isPrime[]) {

        HashMap<Integer, Integer> occurrenceMap = new HashMap<>();

        boolean isGCDOne = false;
        for (int element : arr) {
            occurrenceMap.put(element, (occurrenceMap.get(element) == null ? 0 : occurrenceMap.get(element)) + 1);
            if (element == 1) {
                isGCDOne = true;
                break;
            }
        }
        if (isGCDOne)
            return 0;

        int totalDeletedElements = 0;
        for (int element : arr) {
            if (isPrime[element]) {
                int multiplier = 2;
                while (element * multiplier <= Constants.MAXIMUM_VALUE_N) {
                    if (occurrenceMap.containsKey(element * multiplier)) {
                        totalDeletedElements += occurrenceMap.get(element * multiplier);
                        occurrenceMap.remove(element * multiplier);
                    }
                    multiplier++;
                }
            }
        }

        int gcd = 0;
        for (int element : arr) {
            if (occurrenceMap.containsKey(element)) {
                if (gcd == 0)
                    gcd = element;
                else
                    gcd = GCDUtils.findGCD(element, gcd);
            }
        }

        return gcd == 1 ? totalDeletedElements : -1;
    }
}

/**
 * Interacts with MinimumDeletions to find minimum deletions from the array
 * to make the GCD as one.
 */
class Main {
    public static void main(String args[]) {
        int numberOfTestCases;
        Scanner scanner = new Scanner(System.in);
        numberOfTestCases = scanner.nextInt();
        int arr[];
        MinimumDeletions minimumDeletions = new MinimumDeletions();

        boolean isPrime[] = PrimeUtils.fetchBooleanArrayToDeterminePrime(Constants.MAXIMUM_VALUE_N);
        while (numberOfTestCases-- > 0) {
            int numberOfElements;
            numberOfElements = scanner.nextInt();
            arr = new int[numberOfElements];
            for (int i = 0; i < numberOfElements; i++) {
                arr[i] = scanner.nextInt();
            }
            System.out.println(minimumDeletions.findMinimumDeletions(arr, isPrime));
        }
    }
}
