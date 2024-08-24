package info.uri;

import java.util.Scanner;

public class BEECROWD1017 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t, s;
        double av;
        t = sc.nextInt();
        s = sc.nextInt();
        av =(t*s)/12.0;
        System.out.printf("%.3f\n", av);
    }
}
