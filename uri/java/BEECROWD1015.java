package info.uri;

import java.util.Scanner;

import static java.lang.Math.sqrt;

public class BEECROWD1015 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double x1, y1, x2, y2, x, y, df;
        x1 = sc.nextDouble();
        y1 = sc.nextDouble();
        x2 = sc.nextDouble();
        y2 = sc.nextDouble();
        x = x2 -x1;
        y = y2 -y1;
        df = sqrt((x*x) + (y*y));
        System.out.printf("%.4f\n", df);
    }
}
