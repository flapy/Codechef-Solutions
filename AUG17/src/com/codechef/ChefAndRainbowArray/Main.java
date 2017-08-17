package com.codechef.ChefAndRainbowArray;
/**
 * Following the strategy
 * "Implement after reading/solving several problems"
 * Yaha Pe Padha Tha http://codeforces.com/blog/entry/53457
 */
import java.util.HashMap;
import java.util.Scanner;

class ChefAndRainbowArray {
    private int n;
    private int arr[];
    private Scanner scanner;
    private int rainbowStructure[];

    public ChefAndRainbowArray(Scanner scanner) {

        this.scanner = scanner;
        populateRainbowStructure();
        takeInput();
    }

    public boolean isRainbowArray() {

        int idx = 0;
        HashMap<Integer, Integer> occurrenceMap = new HashMap <>();
        for (int i = 0; i < rainbowStructure.length; i++) {
            int element = rainbowStructure[i];
            int occurrence = 0;

            while (idx < n && arr[idx] == element) {
                occurrence++;
                idx++;
            }
            if (occurrence > 0) {
                if (occurrenceMap.containsKey(element)) {
                    if (occurrenceMap.get(element) != occurrence) {
                        return false;
                    }
                }
                occurrenceMap.put(element, occurrence);
            } else {
                return false;
            }
        }
        return idx == n;
    }

    private void populateRainbowStructure() {

        rainbowStructure = new int[]{1, 2, 3, 4, 5, 6, 7, 6, 5, 4, 3, 2, 1};
    }

    private void takeInput() {
        n = scanner.nextInt();
         arr = new int[n + 2];
         for (int i = 0; i < n; i++) {
             arr[i] = scanner.nextInt();
         }
    }
}

class Main {

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int noOfTestCases = scanner.nextInt();

        while (noOfTestCases-- > 0) {
            ChefAndRainbowArray chefAndRainbowArray = new ChefAndRainbowArray(scanner);
             if (chefAndRainbowArray.isRainbowArray()) {
                 System.out.println("yes");
             } else {
                 System.out.println("no");
             }
        }
    }
}
