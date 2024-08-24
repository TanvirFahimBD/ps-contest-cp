package info.uri;

import java.util.Scanner;

public class BEECROWD1010 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1, nu1, n2, nu2;
        double p1, p2, vp;
        n1 = sc.nextInt();
        nu1 = sc.nextInt();
        p1 = sc.nextDouble();
        n2 = sc.nextInt();
        nu2 = sc.nextInt();
        p2 = sc.nextDouble();
        vp = ((nu1 * p1)+(nu2 * p2));
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", vp);

    }
}
