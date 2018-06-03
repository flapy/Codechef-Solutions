package fakeBinarySearch;

import java.util.Arrays;
import java.util.HashMap;
import java.util.Scanner;

/**
 * Contains Constants used in FakeBinarySearchConstants
 */
class FakeBinarySearchConstants {
    public static final String GREATER_THAN = "GT";
    public static final String LESS_THAN = "LT";
}

/**
 * A utility class for Fake Binary Search
 */
class FakeBinarySearchUtils {

    /**
     * Builds the map in which key is element of the array,
     * and value is index of that element.
     * @param arr Given array
     * @return Map of index
     */
    public static HashMap<Integer, Integer> buildIndexMap(int arr[]) {
        HashMap<Integer, Integer> indexMap = new HashMap<>();
        for (int index = 0; index < arr.length; index++) {
            indexMap.put(arr[index], index);
        }
        return indexMap;
    }
}

/**
 * Contains methods for binary Search
 */
class BinarySearchUtils {

    /**
     * Returns the index of the desired element
     * NOTE: Array should be sorted
     * @param desiredElement Element to be searched
     * @param arr Given array in which binary search needs to be performed
     * @return Index of Desired element
     */
    public static int findIndexOfDesiredElement(int desiredElement, int arr[]) {
        int startIndex = 0;
        int endIndex = arr.length - 1;
        while (startIndex <= endIndex) {
            int midIndex = (startIndex + endIndex) / 2;
            if (arr[midIndex] == desiredElement) {
                return midIndex;
            } else if (arr[midIndex] < desiredElement) {
                startIndex = midIndex + 1;
            } else {
                endIndex = midIndex - 1;
            }
        }
        return -1;
    }
}

/**
 * Finds the minimum number of swaps required.
 */
class FakeBinarySearch {

    /**
     * Computes the minimum swaps required so that the chef's algo can still find the
     * correct solution.
     * @param arr Given Arr
     * @param sortedArr Sorted array
     * @param elementToBeSearched Element to be Searched in arr
     * @param indexOfSearchedElement Index of the Searched Element in arr
     * @return
     */
    public int findMinimumSwaps(int arr[], int sortedArr[], int elementToBeSearched, int indexOfSearchedElement) {
        int startIndex = 0;
        int endIndex = arr.length - 1;
        int minimumNumberOfSwaps = 0;

        // Can't come up with better names in this scenerio :(
        int numberOfValidGreaterThenXElements;
        int numberOfValidLessThenXElements;
        int numberOfInvalidGreaterThenXElements;
        int numberOfInvalidLessThenXElements;
        numberOfValidGreaterThenXElements = numberOfValidLessThenXElements = 0;
        numberOfInvalidGreaterThenXElements = numberOfInvalidLessThenXElements = 0;
        while (startIndex <= endIndex) {
            int midIndex = (startIndex + endIndex) / 2;
            if (midIndex == indexOfSearchedElement) {
                break;
            } else if (midIndex < indexOfSearchedElement) {
                startIndex = midIndex + 1;
                if (isValidElement(arr[midIndex], elementToBeSearched, FakeBinarySearchConstants.LESS_THAN)) {
                    numberOfValidLessThenXElements++;
                } else {
                    numberOfInvalidGreaterThenXElements++;
                }
            } else if (midIndex > indexOfSearchedElement) {
                endIndex = midIndex - 1;
                if (isValidElement(arr[midIndex], elementToBeSearched, FakeBinarySearchConstants.GREATER_THAN)) {
                    numberOfValidGreaterThenXElements++;
                } else {
                    numberOfInvalidLessThenXElements++;
                }
            }
        }

        int indexOfDesiredElementInSortedArray = BinarySearchUtils.findIndexOfDesiredElement(elementToBeSearched, sortedArr) + 1;
        int totalElementsGreaterThenX = arr.length - indexOfDesiredElementInSortedArray;
        int totalEligibleGreaterThenXElements = totalElementsGreaterThenX - numberOfValidGreaterThenXElements;
        int totalElementsLessThenX = indexOfDesiredElementInSortedArray - 1;
        int totalEligibleLessThenXElements = totalElementsLessThenX - numberOfValidLessThenXElements;

        if (totalEligibleGreaterThenXElements < numberOfInvalidLessThenXElements ||
                totalEligibleLessThenXElements < numberOfInvalidGreaterThenXElements) {
            return -1;
        } else {
            if (numberOfInvalidGreaterThenXElements > numberOfInvalidLessThenXElements) {
                minimumNumberOfSwaps += numberOfInvalidLessThenXElements;
                numberOfInvalidGreaterThenXElements -= numberOfInvalidLessThenXElements;

                if (numberOfInvalidGreaterThenXElements <= totalEligibleLessThenXElements) {
                    minimumNumberOfSwaps += numberOfInvalidGreaterThenXElements;
                } else {
                    minimumNumberOfSwaps = -1;
                }
            } else {
                minimumNumberOfSwaps += numberOfInvalidGreaterThenXElements;
                numberOfInvalidLessThenXElements -= numberOfInvalidGreaterThenXElements;
                if (numberOfInvalidLessThenXElements <= totalEligibleGreaterThenXElements) {
                    minimumNumberOfSwaps += numberOfInvalidLessThenXElements;
                } else {
                    minimumNumberOfSwaps = -1;
                }
            }
        }

        return minimumNumberOfSwaps;
    }

    private boolean isValidElement(int midElement, int element, String comparisonOperator) {
        if (comparisonOperator.equals(FakeBinarySearchConstants.LESS_THAN)) {
            return midElement < element;
        } else {
            return midElement > element;
        }
    }
}

/**
 * Interacts with FakeBinarySearch to find minimum swaps.
 */
class Main {

    public static void main(String args[]) {
        int numberOfTestCases;
        Scanner scanner = new Scanner(System.in);
        numberOfTestCases = scanner.nextInt();
        int arr[];
        int sortedArr[];
        FakeBinarySearch fakeBinarySearch = new FakeBinarySearch();
        while (numberOfTestCases-- > 0) {
            int numberOfElements = scanner.nextInt();
            int numberOfQueries = scanner.nextInt();
            arr = new int[numberOfElements];
            sortedArr = new int[numberOfElements];
            for (int i = 0; i < numberOfElements; i++) {
                arr[i] = scanner.nextInt();
                sortedArr[i] = arr[i];
            }
            Arrays.sort(sortedArr);
            HashMap<Integer, Integer> indexMap = FakeBinarySearchUtils.buildIndexMap(arr);
            while (numberOfQueries-- > 0) {
                int elementToBeSearched = scanner.nextInt();
                System.out.println(fakeBinarySearch.findMinimumSwaps(arr, sortedArr, elementToBeSearched, indexMap.get(elementToBeSearched)));
            }
        }
    }
}
