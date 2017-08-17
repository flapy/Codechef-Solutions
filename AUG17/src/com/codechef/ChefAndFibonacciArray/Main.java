package com.codechef.ChefAndFibonacciArray;
/**
 * Following the strategy
 * "Implement after reading/solving several problems"
 * Yaha Pe Padha Tha http://codeforces.com/blog/entry/53457
 */
import java.util.HashSet;
import java.util.Scanner;
import java.util.Vector;

class ChefAndFibonacciArray {
    private Scanner scanner;
    private Vector<Integer> vector;
    private HashSet<Vector<Integer>> fibonacciArrays;

    public ChefAndFibonacciArray(Scanner scanner) {
        this.scanner = scanner;
        vector = new Vector<>();
        fibonacciArrays = new HashSet<>();
        takeInput();
    }

    // DP Lagegi :(
    private void countFibonacciArrays(Vector<Integer> vector) {
        if (fibonacciArrays.contains(vector)) {
            return;
        }
        fibonacciArrays.add(vector);
        int arrSize = vector.size();
        for (int i = 0; i < arrSize - 1; i++) {
            if (vector.get(i) > 0 && vector.get(i + 1) > 0) {
                Vector<Integer> fibonacciArray = (Vector<Integer>) vector.clone();
                fibonacciArray.set(i, vector.get(i) - 1);
                fibonacciArray.set(i + 1, vector.get(i + 1) - 1);
                if (i == arrSize - 2) {
                    fibonacciArray.add(1);
                } else {
                    fibonacciArray.set(i + 2, vector.get(i + 2) + 1);
                }
                countFibonacciArrays(fibonacciArray);
            }
        }
    }

    public int getCountOfFibonacciArrays() {
        countFibonacciArrays(vector);
        return fibonacciArrays.size();
    }

    private void takeInput() {
        int n = scanner.nextInt();
        int ai;
        for (int i = 0; i < n; i++) {
            ai = scanner.nextInt();
            vector.add(ai);
        }
    }
}

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int noOfTestCases = scanner.nextInt();
        while (noOfTestCases-- > 0) {
            ChefAndFibonacciArray chefAndFibonacciArray = new ChefAndFibonacciArray(scanner);
            System.out.println(chefAndFibonacciArray.getCountOfFibonacciArrays());
        }
    }
}
