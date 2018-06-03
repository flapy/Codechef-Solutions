package xorAgain;

import java.util.Scanner;

/**
 * Finds the XOR of the given array as per the function.
 */
public class XorAgain {

    /**
     * Computes the XOR of the given array,
     * As per the given function if you observe the pattern for n = 3 it is like
     * (A1 + A1) XOR (A2+ A2) XOR (A3 + A3)
     * this is happening because XOR of two similar numbers is 0.
     *
     * @param arr Takes the array given by the user
     * @return computed XOR of of array
     */
    public int findXor(int arr[]) {
        int computedXorOfArr = 0;
        for (int element : arr) {
            computedXorOfArr ^= (2 * element);
        }
        return computedXorOfArr;
    }
}

/**
 * xorAgain.Main class responsible to take inout from the user and then call xorAgain.XorAgain
 * to find XOR of the input array.
 */
class Main {
    public static void main(String args[]) {
        int noOfTestCases;
        Scanner scanner = new Scanner(System.in);
        noOfTestCases = scanner.nextInt();
        int arr[];
        XorAgain xorAgain = new XorAgain();
        while (noOfTestCases-- > 0) {
            int n = scanner.nextInt();
            arr = new int[n];
            for (int i = 0; i < n; i++) {
                arr[i] = scanner.nextInt();
            }
            System.out.println(xorAgain.findXor(arr));
        }
    }

}
