package info.uri;

import java.util.Scanner;

public class BEECROWD1018 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int nN, n100, r100, n50, r50, n20, r20, n10, r10, n5, r5, n2, r2, n1;
        nN = sc.nextInt();
        n100 = nN / 100;
        r100 = nN % 100;

        n50 = r100 / 50;
        r50 = r100 % 50;

        n20 = r50 / 20;
        r20 = r50 % 20;

        n10 = r20 / 10;
        r10 = r20 % 10;

        n5 = r10 / 5;
        r5 = r10 % 5;

        n2 = r5 / 2;
        r2 = r5 % 2;

        n1 = r2;

        System.out.println(nN);
        System.out.println(n100 + " nota(s) de R$ 100,00");
        System.out.println(n50 + " nota(s) de R$ 50,00");
        System.out.println(n20 + " nota(s) de R$ 20,00");
        System.out.println(n10 + " nota(s) de R$ 10,00");
        System.out.println(n5 + " nota(s) de R$ 5,00");
        System.out.println(n2 + " nota(s) de R$ 2,00");
        System.out.println(n1 + " nota(s) de R$ 1,00");

    }
}
