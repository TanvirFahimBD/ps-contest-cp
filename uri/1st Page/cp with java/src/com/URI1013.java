import java.util.Scanner;
import static java.lang.Math.abs;

public class URI1013 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int mab = (a+b+abs(a-b))/2;
        int m = (mab + c + abs(mab - c))/2;
        System.out.println(m+" eh o maior");
    }
}
