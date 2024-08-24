package info.uri;

import java.util.Scanner;

public class BEECROWD1009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String n;
        double s, sl, ts;
        n = sc.nextLine();
        s = sc.nextDouble();
        sl = sc.nextDouble();
        ts = s + ((sl)*.15);
        System.out.printf("TOTAL = R$ %.2f\n", ts);
    }
}
