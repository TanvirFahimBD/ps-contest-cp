import java.util.Scanner;
public class URI1006 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();
        double avg = ((a*2)+(b*3)+(c*5))/(2+3+5);
        System.out.printf("MEDIA = %.1f",avg);
        System.out.println();
    }
}
