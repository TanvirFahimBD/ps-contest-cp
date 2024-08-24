package info.uri;

import java.util.Scanner;

public class BEECROWD1021 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double nN;
        int n, n100, r100, n50, r50, n20, r20, n10, r10, n5, r5, n2, r2;
        nN = sc.nextDouble();

        n = (int)(nN * 100);

        n100 = n / 10000;
        r100 = n % 10000;

        n50 = r100 / 5000;
        r50 = r100 % 5000;

        n20 = r50 / 2000;
        r20 = r50 % 2000;

        n10 = r20 / 1000;
        r10 = r20 % 1000;

        n5 = r10 / 500;
        r5 = r10 % 500;

        n2 = r5 / 200;
        r2 = r5 % 200;

        int p100, pr100, p50, pr50, p25, pr25, p10, pr10, p5, pr5, p1;

        p100 = r2/100;
        pr100 = r2%100;

        p50 = pr100/50;
        pr50 = pr100%50;

        p25 = pr50/25;
        pr25 = pr50%25;

        p10 = pr25/10;
        pr10 = pr25%10;

        p5 = pr10/5;
        pr5 = pr10%5;

        p1 = pr5;

        System.out.println("NOTAS:");
        System.out.println(n100 + " nota(s) de R$ 100.00");
        System.out.println(n50 + " nota(s) de R$ 50.00");
        System.out.println(n20 + " nota(s) de R$ 20.00");
        System.out.println(n10 + " nota(s) de R$ 10.00");
        System.out.println(n5 + " nota(s) de R$ 5.00");
        System.out.println(n2 + " nota(s) de R$ 2.00");

        System.out.println("MOEDAS:");
        System.out.println( p100 + " moeda(s) de R$ 1.00");
        System.out.println( p50 + " moeda(s) de R$ 0.50");
        System.out.println( p25 + " moeda(s) de R$ 0.25");
        System.out.println( p10 + " moeda(s) de R$ 0.10");
        System.out.println( p5 + " moeda(s) de R$ 0.05");
        System.out.println( p1 + " moeda(s) de R$ 0.01");
    }
}
