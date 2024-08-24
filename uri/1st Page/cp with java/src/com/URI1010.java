import java.util.Scanner;
public class URI1010 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int cd1 = sc.nextInt();
        int unt1 = sc.nextInt();
        double prc1 = sc.nextDouble();
        int cd2 = sc.nextInt();
        int unt2 = sc.nextInt();
        double prc2 = sc.nextDouble();
        double pr1 = unt1 * prc1;
        double pr2 = unt2 * prc2;
        double total = pr1 + pr2;
        System.out.printf("VALOR A PAGAR: R$ %.2f\n",total);
    }
}
