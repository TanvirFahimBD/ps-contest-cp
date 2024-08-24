package info.uri;

import java.util.Scanner;

public class BEECROWD1012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a, b, c, tr, cr, tp, s, r, pi = 3.14159;
        a = sc.nextDouble();
        b = sc.nextDouble();
        c = sc.nextDouble();
        tr = (1/2.0) * a * c;
        cr = pi * c * c;
        tp = (1/2.0) * (a+b) * c;
        s = b * b;
        r = a * b;
        System.out.printf("TRIANGULO: %.3f\n", tr);
        System.out.printf("CIRCULO: %.3f\n", cr);
        System.out.printf("TRAPEZIO: %.3f\n", tp);
        System.out.printf("QUADRADO: %.3f\n", s);
        System.out.printf("RETANGULO: %.3f\n", r);
    }
}
