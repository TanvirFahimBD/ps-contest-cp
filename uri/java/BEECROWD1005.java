package info.uri;

import java.util.Scanner;

public class BEECROWD1005 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double aw = 3.5, bw = 7.5, a, b, m;
        a = sc.nextDouble();
        b = sc.nextDouble();
        m = ((a*aw)+(b*bw))/(aw+bw);
        System.out.printf("MEDIA = %.5f\n",m);
    }
}
