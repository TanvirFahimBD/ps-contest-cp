package info.uri;

import java.util.Scanner;

public class BEECROWD1014 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a;
        double b, av;
        a = sc.nextInt();
        b = sc.nextDouble();
        av = a / b;
        System.out.printf("%.3f km/l\n", av );
    }
}
