package info.uri;

import java.text.DecimalFormat;
import java.util.Scanner;

public class BEECROWD1002 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double PI = 3.14159, R, A;
        R = sc.nextDouble();
        A = PI*(R*R);
//        System.out.printf("A=%.4f\n",A);
        System.out.println(new DecimalFormat("A=#.0000").format(A));

    }
}
