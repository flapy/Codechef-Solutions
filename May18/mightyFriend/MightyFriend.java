package mightyFriend;

import java.util.Arrays;
import java.util.Comparator;
import java.util.Scanner;

/**
 * Stores the Information about an element like the index
 * and its corresponding value.
 */
class ElementInfo {
    private int index;
    private int value;

    public int getIndex() {
        return index;
    }

    public void setIndex(int index) {
        this.index = index;
    }

    public int getValue() {
        return value;
    }

    public void setValue(int value) {
        this.value = value;
    }
}

/**
 * Simple array converter to convert into other array of objects.
 */
class ArrayConverter {

    /**
     * Convert integer array to ElementInfo {@link ElementInfo} array
     *
     * @param arr Input arr to be converted
     * @return arr of {@link ElementInfo}
     */
    public static ElementInfo[] convertToElementInfoArr(int arr[]) {
        ElementInfo elementInfoArr[] = new ElementInfo[arr.length];
        int index = 0;
        for (int element : arr) {
            ElementInfo elementInfo = new ElementInfo();
            elementInfo.setIndex(index);
            elementInfo.setValue(element);
            elementInfoArr[index++] = elementInfo;
        }
        return elementInfoArr;
    }
}

/**
 * Finds if Tomu can win the game.
 */
class MightyFriend {

    /**
     * Finds the score of each player after performing a maximum of k array swaps
     * and then returns if tomu can win the game.
     *
     * @param arr           Input Array
     * @param numberOfSwaps Max. number of swaps allowed on array.
     * @return A boolean value denoting tomu's result.
     */
    public String findWinner(int arr[], int numberOfSwaps) {

        ElementInfo elementInfoArr[] = ArrayConverter.convertToElementInfoArr(arr);
        int motuScore = 0;
        int tomuScore = 0;

        swapArrayElements(elementInfoArr, numberOfSwaps, arr);

        for (int i = 0; i < arr.length; i++) {
            if (i % 2 == 1) {
                tomuScore += arr[i];
            } else {
                motuScore += arr[i];
            }
        }
        return tomuScore > motuScore ? "YES" : "NO";
    }

    private void swapArrayElements(ElementInfo[] elementInfoArr, int numberOfSwaps, int arr[]) {
        Arrays.sort(elementInfoArr, Comparator.comparing(ElementInfo::getValue));

        int startIndex = 0;
        int endIndex = arr.length - 1;

        while (numberOfSwaps-- > 0) {
            while (startIndex < endIndex) {
                if (elementInfoArr[startIndex].getIndex() % 2 == 1 && elementInfoArr[endIndex].getIndex() % 2 == 0) {
                    // Motu has higher value than tomu so swap.
                    arr[elementInfoArr[startIndex].getIndex()] = elementInfoArr[endIndex].getValue();
                    arr[elementInfoArr[endIndex].getIndex()] = elementInfoArr[startIndex].getValue();
                    startIndex++;
                    endIndex--;
                    break;
                } else if (elementInfoArr[startIndex].getIndex() % 2 == 0 && elementInfoArr[endIndex].getIndex() % 2 == 0) {
                    // In this case both values belong to Motu thus increase startIndex so as to create opportunity
                    // for Motu to swap with Tomu.
                    startIndex++;
                } else if (elementInfoArr[startIndex].getIndex() % 2 == 1 && elementInfoArr[endIndex].getIndex() % 2 == 1) {
                    // In this case both values belong to Tomu thus increase endIndex so as to create opportunity
                    // for Motu to swap with Tomu.
                    endIndex--;
                } else {
                    // Tomu has higher value than motu, decreasing endIndex will give Tomu an opportunity to swap with Motu.
                    endIndex--;
                }
            }
        }

    }
}

/**
 * Calls MightyFriend to determine if Tomu can win
 */
class Main {
    public static void main(String args[]) {
        int numberOfTestCases;
        Scanner scanner = new Scanner(System.in);
        numberOfTestCases = scanner.nextInt();
        int arr[];

        MightyFriend mightyFriend = new MightyFriend();

        while (numberOfTestCases-- > 0) {
            int numberOfElements, numberOfSwaps;
            numberOfElements = scanner.nextInt();
            numberOfSwaps = scanner.nextInt();
            arr = new int[numberOfElements];
            for (int i = 0; i < numberOfElements; i++) {
                arr[i] = scanner.nextInt();
            }
            System.out.println(mightyFriend.findWinner(arr, numberOfSwaps));
        }
    }
}
