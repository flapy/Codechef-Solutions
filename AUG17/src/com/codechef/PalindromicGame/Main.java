package com.codechef.PalindromicGame;
/**
 * Following the strategy
 * "Implement after reading/solving several problems"
 * Yaha Pe Padha Tha http://codeforces.com/blog/entry/53457
 */
import java.util.Scanner;

class PalindromicGame {
    private String s, t;
    private int [] mapS, mapT;
    private Scanner scanner;
    public PalindromicGame(Scanner scanner) {
        this.scanner = scanner;
        takeInput();
        mapS = new int[s.length()];
        mapT = new int[s.length()];
    }

    public String getWinner() {
        String winner = "";
        mapS = findOccurrenceOfEachChar(s);
        mapT = findOccurrenceOfEachChar(t);
        for (int i = 0; i < 26; i++) {
            if (mapS[i] >= 2 && mapT[i] == 0) {
                winner = "A";
            }
        }
        if (!winner.isEmpty()) {
            return winner;
        }
        if (charExistsInOneArray(mapS,mapT)) {
            if (charExistsInOneArray(mapT,mapS)) {
                winner = "B";
            } else {
                winner = "A";
            }
        } else {
            winner = "B";
        }
        return winner;
    }

    private boolean charExistsInOneArray(int arrA[], int arrB[]) {
        for (int i = 0; i < 26; i++) {
            if (arrA[i] > 0 && arrB[i] == 0) {
                return true;
            }
        }
        return false;
    }
    private int[] findOccurrenceOfEachChar(String str) {
        int occurrenceMap[] = new int[26];
        int len = str.length();
        for (int i = 0; i < len; i++) {
            occurrenceMap[str.charAt(i) - 'a']++;
        }
        return occurrenceMap;
    }
    private void takeInput() {
        s = scanner.next();
        t = scanner.next();
    }
}

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int noOfTestCases = scanner.nextInt();

        while (noOfTestCases-- > 0) {
            PalindromicGame palindromicGame = new PalindromicGame(scanner);
            System.out.println(palindromicGame.getWinner());
        }
    }
}
