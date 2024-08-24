import java.util.Scanner;
public class URI1008 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num = sc.nextInt();
        int wh = sc.nextInt();
        double sh = sc.nextDouble();
        double slr = wh * sh;
        System.out.println("NUMBER = "+num);
        System.out.printf("SALARY = U$ %.2f\n",slr);
    }
}
