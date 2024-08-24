import java.util.Scanner;
public class URI1009 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String nm = sc.nextLine();
        double slr = sc.nextDouble();
        double sl = sc.nextDouble();
        double slp = (sl*0.15);
        double total = slr + slp;
        System.out.printf("TOTAL = R$ %.2f\n",total);
    }
}
