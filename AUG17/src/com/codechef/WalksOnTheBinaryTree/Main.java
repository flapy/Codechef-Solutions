package com.codechef.WalksOnTheBinaryTree;
/**
 * Following the strategy
 * "Implement after reading/solving several problems"
 * Yaha Pe Padha Tha http://codeforces.com/blog/entry/53457
 */

import java.math.BigInteger;
import java.util.HashSet;
import java.util.Scanner;

class WalksOnTheBinaryTree {
    private static int n, q;
    private Scanner scanner;

    public WalksOnTheBinaryTree(Scanner scanner) {
        this.scanner = scanner;
        solve();
    }

    private void solve() {
        n = scanner.nextInt();
        q = scanner.nextInt();
        HashSet<BigInteger> hashSet = new HashSet<>();
        hashSet.add(new BigInteger("0"));
        BigInteger bigX = new BigInteger("0");
        while (q-- > 0) {
            char ch = scanner.next().charAt(0);
            if (ch == '!') {
                int c = scanner.nextInt();
                BigInteger bigInteger = new BigInteger("2");
                bigX = bigX.add(bigInteger.pow(c));
                bigX = bigX.mod(bigInteger.pow(n));
                String path = bigX.toString(2);
                path = getBinaryRepresentation(path);
                int pathLen = path.length();
                BigInteger parent = new BigInteger("0");
                for (int i = 0; i < pathLen; i++) {
                    if (path.charAt(i) == '0') {
                        parent = parent.multiply(bigInteger);
                        parent = parent.add(new BigInteger("1"));
                    } else {
                        parent = parent.multiply(bigInteger);
                        parent = parent.add(new BigInteger("2"));
                    }
                    hashSet.add(parent);
                }
            } else {
                System.out.println(hashSet.size());
            }
        }
    }

    private String getBinaryRepresentation(String path) {
        int pathLen = path.length();
        while (pathLen != n) {
            path = "0" + path;
            pathLen++;
        }
        return path;
    }
}

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int noOfTestCases = scanner.nextInt();
        while (noOfTestCases-- > 0) {
            new WalksOnTheBinaryTree(scanner);
        }
    }
}
