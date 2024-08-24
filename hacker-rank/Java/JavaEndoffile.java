package info.hackerrank;

import java.util.Scanner;

public class JavaEndoffile {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int i = 1;
        while (true){
            if(scan.hasNext()){
            String s = scan.nextLine();
            System.out.println(i+" "+s);
                i++;
            }
            else {
                break;
            }
        }
            scan.close();
    }
}
