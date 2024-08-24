package com;

import java.util.Scanner;

import static java.lang.Math.sqrt;

public class URI1036 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();
        double rt = (b * b) - (4 * a * c);
        if(a==0 || rt<0){
            System.out.println("Impossivel calcular");
        }
        else{
            double r1 = (-b + sqrt(rt))/(2*a);
            double r2 = (-b - sqrt(rt))/(2*a);
            System.out.printf("R1 = %.5f\n",r1);
            System.out.printf("R2 = %.5f\n",r2);
        }
    }
}
