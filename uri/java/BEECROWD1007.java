package info.uri;

import java.util.Scanner;

public class BEECROWD1007 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c, d, df;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        d = sc.nextInt();
        df = ((a*b)-(c*d));
        System.out.println("DIFERENCA = "+df);
    }
}
