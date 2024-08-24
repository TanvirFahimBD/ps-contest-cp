package info.uri;

import java.util.Scanner;

public class BEECROWD1006 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double aw = 2, bw = 3, cw = 5, a, b, c, m;
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        m = ((a*aw)+(b*bw)+(c*cw))/(aw+bw+cw);
        System.out.printf("MEDIA = %.1f\n",m);
    }
}
