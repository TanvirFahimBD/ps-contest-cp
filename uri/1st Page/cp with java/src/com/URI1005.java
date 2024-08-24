import java.util.Scanner;
public class URI1005 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = ((a*3.5)+(b*7.5))/(3.5+7.5);
        System.out.printf("MEDIA = %.5f",c);
        System.out.println();
    }
}
