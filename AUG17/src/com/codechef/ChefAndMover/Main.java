package com.codechef.ChefAndMover;
/**
 * Following the strategy
 * "Implement after reading/solving several problems"
 * Yaha Pe Padha Tha http://codeforces.com/blog/entry/53457
 */
import java.util.Scanner;

class ChefAndMover {
    private long n, d;
    private long arr[];
    private Scanner scanner;

    public ChefAndMover(Scanner scanner) {
        this.scanner = scanner;
        takeInput();
    }

    public long getMinimumUses() {
        long minimumUses = 0;
        if (!isAnsPossible()) {
            minimumUses = -1;
        } else {
            long avgElement = getSumOfArray() / n;
            for (int i = 0; i < n - d; i++) {
                long diff = Math.abs(arr[i] - avgElement);
                if (arr[i] > avgElement) {
                    arr[i] -= diff;
                    arr[i + (int)d] += diff;
                } else if (arr[i] < avgElement) {
                    arr[i] += diff;
                    arr[i + (int)d] -= diff;
                }
                minimumUses += diff;
            }
            if (!areAllElementsEqual(arr, avgElement)) {
                minimumUses = -1;
            }
        }
        return minimumUses;
    }

    private boolean areAllElementsEqual(long arr[], long element) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] != element) {
                return false;
            }
        }
        return true;
    }

    private boolean isAnsPossible() {
        long arrSum = getSumOfArray();
        return arrSum % n == 0;
    }

    private long getSumOfArray() {
        long arrSum = 0;
        for (int i = 0; i < n; i++) {
            arrSum += arr[i];
        }
        return arrSum;
    }

    private void takeInput() {
        n = scanner.nextLong();
        d = scanner.nextLong();
        arr = new long[(int)n];
        for (int i = 0; i < n; i++) {
            arr[i] = scanner.nextInt();
        }
    }
}

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int noOfTestCases = scanner.nextInt();

        while (noOfTestCases-- > 0) {
            ChefAndMover chefAndMover = new ChefAndMover(scanner);
            System.out.println(chefAndMover.getMinimumUses());
        }
    }
}
