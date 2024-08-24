package info.uri;

import java.util.Scanner;

public class BEECROWD1008 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n, t;
        double m, sl;
        n = sc.nextInt();
        t = sc.nextInt();
        m = sc.nextDouble();
        sl = t * m;
        System.out.println("NUMBER = " + n);
        System.out.printf("SALARY = U$ %.2f\n", sl);
    }
}
