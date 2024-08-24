import java.util.Scanner;
public class URI1014 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int distance = sc.nextInt();
		double flTotal = sc.nextDouble();
		double speed = distance / flTotal;
		System.out.printf("%.3f km/l\n", speed);

	}

}
