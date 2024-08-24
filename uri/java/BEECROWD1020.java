package info.uri;

import java.util.Scanner;

public class BEECROWD1020 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int d, y, yr, m, mr, ds;
        d = sc.nextInt();
        y = d/365;
        yr = d%365;

        m = yr/30;
        mr = yr%30;

        ds = mr;
        System.out.println(y + " ano(s)");
        System.out.println(m + " mes(es)");
        System.out.println(ds + " dia(s)");
    }
}
