package changeTheSigns;

import java.util.Scanner;

/**
 * Change the sign of some of the elements to make the sum smaller
 */
public class ChangeTheSigns {

    /**
     * Returns a sequence with Changed signs.
     *
     * @param arr Array given by the user.
     * @return Sequence with min sum.
     */
    public int[] findSequenceWithMinSum(int arr[]) {

        int finalSequenceWithMinSum[] = new int[arr.length];
        long minSumOfSequence = Long.MAX_VALUE;
        for (int i = 0; i < Math.pow(2, arr.length); i++) {
            long sumOfSequence = 0;
            for (int j = 0; j < arr.length; j++) {
                if ((i & 1 << j) != 0) {
                    arr[j] *= -1;
                }
                sumOfSequence += (long) arr[j];
            }
            if (sumOfSequence < minSumOfSequence) {
                if (isValidContiguousSum(arr)) {
                    minSumOfSequence = sumOfSequence;
                    for (int index = 0; index < arr.length; index++)
                        finalSequenceWithMinSum[index] = arr[index];
                }
            }
            resetArrayValuesToDefaultValue(arr);
        }
        return finalSequenceWithMinSum;
    }

    /**
     * Find if the contiguous sum of all the sequence for
     * the array is greater than 1
     *
     * @param arr Given Array
     * @return Boolean Value
     */
    private boolean isValidContiguousSum(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            long contiguousSubsequenceSum = arr[i];
            for (int j = i + 1; j < arr.length; j++) {
                contiguousSubsequenceSum += (long) arr[j];
                if (contiguousSubsequenceSum < 1) {
                    return false;
                }
            }
        }
        return true;
    }

    private void resetArrayValuesToDefaultValue(int arr[]) {
        for (int i = 0; i < arr.length; i++) {
            if (arr[i] < 0) {
                arr[i] *= -1;
            }
        }
    }
}

/**
 * Interacts with ChangeTheSigns to change the signs of the sequence.
 */
class Main {

    public static void main(String args[]) {

        Scanner scanner = new Scanner(System.in);
        int numberOfTestCases = scanner.nextInt();
        int arr[];
        ChangeTheSigns changeTheSigns = new ChangeTheSigns();
        while (numberOfTestCases-- > 0) {
            int numberOfElements = scanner.nextInt();
            arr = new int[numberOfElements];
            for (int i = 0; i < numberOfElements; i++) {
                arr[i] = scanner.nextInt();
            }

            arr = changeTheSigns.findSequenceWithMinSum(arr);
            for (int element : arr) {
                System.out.print(element + " ");
            }
            System.out.println();
        }
    }
}