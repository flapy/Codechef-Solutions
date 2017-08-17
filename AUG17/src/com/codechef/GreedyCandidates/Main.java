package com.codechef.GreedyCandidates;
/**
 * Following the strategy
 * "Implement after reading/solving several problems"
 * Yaha Pe Padha Tha http://codeforces.com/blog/entry/53457
 */
import java.util.HashSet;
import java.util.Scanner;

class Company {
    private int offeredSalary;
    private int maxJobOffers;

    public int getOfferedSalary() {
        return offeredSalary;
    }

    public void setOfferedSalary(int offeredSalary) {
        this.offeredSalary = offeredSalary;
    }

    public int getMaxJobOffers() {
        return maxJobOffers;
    }

    public void setMaxJobOffers(int maxJobOffers) {
        this.maxJobOffers = maxJobOffers;
    }
}
class GreedyCandidates {
    private Scanner scanner;
    private int noOfCandidates;
    private int noOfCompanies;
    private int arrOfMinSalary[];
    private String qual[]; // What type of name is this? Blame the ProblemSetter
    private Company arrOfCompany[];

    public GreedyCandidates(Scanner scanner) {
        this.scanner = scanner;
        takeInput();
    }

    public void computeAndDisplayPostPlacementDetails() {

        long totalSalary = 0;
        int candidatesWithJob = 0;
        HashSet<Integer> uniqueSetOfCompanies = new HashSet<>();
        for (int i = 0; i < noOfCandidates; i++) {
            int maxOfferedSalary = arrOfMinSalary[i];
            int idxOfChosenCompany = -1;
            for (int j = 0; j < noOfCompanies; j++) {
                Company company = arrOfCompany[j];
                if (qual[i].charAt(j) == '1') {
                    if (company.getOfferedSalary() >= maxOfferedSalary &&
                            company.getMaxJobOffers() > 0) {
                        maxOfferedSalary = company.getOfferedSalary();
                        idxOfChosenCompany = j;
                    }
                }
            }
            if (idxOfChosenCompany != -1) {
                Company company = arrOfCompany[idxOfChosenCompany];
                company.setMaxJobOffers(company.getMaxJobOffers() - 1);
                arrOfCompany[idxOfChosenCompany] = company;
                uniqueSetOfCompanies.add(idxOfChosenCompany);
                totalSalary += company.getOfferedSalary();
                candidatesWithJob++;
            }
        }
        System.out.println(candidatesWithJob + " " + totalSalary + " " +
                                        (noOfCompanies - uniqueSetOfCompanies.size()));
    }

    private void takeInput() {
        noOfCandidates = scanner.nextInt();
        noOfCompanies = scanner.nextInt();
        arrOfCompany = new Company[noOfCompanies];
        arrOfMinSalary = new int[noOfCandidates];
        for (int i = 0; i < noOfCandidates; i++) {
            arrOfMinSalary[i] = scanner.nextInt();
        }
        for (int i = 0; i < noOfCompanies; i++) {
            Company company = new Company();
            company.setOfferedSalary(scanner.nextInt());
            company.setMaxJobOffers(scanner.nextInt());
            arrOfCompany[i] = company;
        }
        qual = new String [noOfCandidates];
        for (int i = 0; i < noOfCandidates; i++) {
            qual[i] = scanner.next();
        }
    }
}

public class Main {
    public static void main(String args[]) {
        Scanner scanner = new Scanner(System.in);
        int noOfTestCases = scanner.nextInt();

        while (noOfTestCases-- > 0) {
            GreedyCandidates greedyCandidates = new GreedyCandidates(scanner);
            greedyCandidates.computeAndDisplayPostPlacementDetails();
        }
    }
}
