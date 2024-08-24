import java.util.Scanner;
public class URI1017 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int time = sc.nextInt();
		int avgSpeed = sc.nextInt();
		double needLt = (time * avgSpeed) / 12.0;
		System.out.printf("%.3f\n", needLt);
	}

}
