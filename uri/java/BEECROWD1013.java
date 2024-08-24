package info.uri;

import java.util.Scanner;

public class BEECROWD1013 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a, b, c;
        a = sc.nextInt();
        b = sc.nextInt();
        c = sc.nextInt();
        if(a>b){
            if(a>c){
                System.out.println(a + " eh o maior");
            }
            else {
                System.out.println(c + " eh o maior");
            }
        }
        else {
            if(b>c){
                System.out.println(b + " eh o maior");
            }
            else {
                System.out.println(c + " eh o maior");
            }
        }
    }
}
