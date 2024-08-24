package info.hackerrank;

import java.text.NumberFormat;
import java.util.Locale;
import java.util.Scanner;

public class JavaCurrencyFormatter {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double m = sc.nextDouble();
        NumberFormat us = NumberFormat.getCurrencyInstance(Locale.US);
        System.out.println("US: " + us.format(m));
        Locale IND = new Locale("en", "IN");
//        Locale IND = new Locale("hi", "IN");
        NumberFormat in = NumberFormat.getCurrencyInstance(IND);
        System.out.println("India: " + in.format(m));
        NumberFormat ch = NumberFormat.getCurrencyInstance(Locale.CHINA);
        System.out.println("China: " + ch.format(m));
        NumberFormat fr = NumberFormat.getCurrencyInstance(Locale.FRANCE);
        System.out.println("France: " + fr.format(m));
    }
}
