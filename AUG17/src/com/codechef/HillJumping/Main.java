package com.codechef.HillJumping;
/**
 * Following the strategy
 * "Implement after reading/solving several problems"
 * Yaha Pe Padha Tha http://codeforces.com/blog/entry/53457
 */
import java.util.Scanner;

class HillJumping {
    private static int n, q;
    private int queryType;
    private static long arr[];
    private int startIndex, noOfJumps;
    private int leftIndex, rightIndex;
    private long factor;
    private static Scanner scanner;

    static {
        scanner = new Scanner(System.in);
        n = scanner.nextInt();
        q = scanner.nextInt();
        arr = new long[n + 1];
        for (int i = 1; i <= n; i++) {
            arr[i] = scanner.nextLong();
        }
    }

    // Fenwick Tree Lagega Yaha To
    public void solve() {
        if (queryType == 1) {
            int lastHillIdx = startIndex;
            int j;
            int jumps = 0;
            for (int i = startIndex; i < n; i++) {
                j = i + 1;
                jumps++;
                while (j <= n && arr[i] >= arr[j]) {
                    j++;
                }
                if (j > n || j - i > 100) {
                    break;
                } else {
                    lastHillIdx = j;
                }
                i = j - 1;
                if (jumps == noOfJumps) {
                    break;
                }
            }
            System.out.println(lastHillIdx);
        } else {
            for (int i = leftIndex; i <= rightIndex; i++) {
                arr[i] += factor;
            }
        }
    }

    public void scanQuery() {
        queryType = scanner.nextInt();
        switch (queryType) {
            case 1:
                startIndex = scanner.nextInt();
                noOfJumps = scanner.nextInt();
                break;
            case 2:
                leftIndex = scanner.nextInt();
                rightIndex = scanner.nextInt();
                factor = scanner.nextLong();
                break;
        }
    }

    public int getQueries() {
        return q;
    }
}

public class Main {
    public static void main(String args[]) {
        HillJumping hillJumping = new HillJumping();
        int q = hillJumping.getQueries();
        while (q-- > 0) {
            hillJumping = new HillJumping();
            hillJumping.scanQuery();
            hillJumping.solve();
        }
    }
}
