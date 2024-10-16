import java.util.Scanner;

class mainClass {
    public long minimumSteps(String s) {
        int n = s.length();
        long swap = 0;
        int black = 0;
        for (int i = 0; i < n; i++) {
            if (s.charAt(i) == '0') { // move this to the right
                swap += black;
            } else {
                black++;
            }
        }
        return swap;
    }

    public static void main(String[] args) {
        mainClass solution = new mainClass();
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter string of 0's and 1's: ");
        String s = scanner.nextLine();
        System.out.println("Minimum steps: " + solution.minimumSteps(s));
        scanner.close();
    }
}
