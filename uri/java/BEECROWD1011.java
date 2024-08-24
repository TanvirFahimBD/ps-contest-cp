package info.uri;

import java.util.Scanner;

public class BEECROWD1011 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double r, v, pi = 3.14159;
        r = sc.nextDouble();
        v = (4/3.0)*(pi)*(r*r*r);
        System.out.printf("VOLUME = %.3f\n", v);
    }
}
