package info.uri;

import java.util.Scanner;

public class BEECROWD1019 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t, h, hr, m, mr, s;
        t = sc.nextInt();
        h = t/3600;
        hr = t%3600;

        m = hr/60;
        mr = hr%60;
        s = mr;
        System.out.println(h +":" + m + ":" + s);
    }
}
