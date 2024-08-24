import java.util.Scanner;
import java.math.*;
public class URI1015 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		double x1 = sc.nextDouble();
		double y1 = sc.nextDouble();
		double x2 = sc.nextDouble();
		double y2 = sc.nextDouble();
		double diff1 = x2 - x1;
		double diff2 = y2 - y1;
		double distance = Math.sqrt((diff1*diff1)+(diff2*diff2));
		System.out.printf("%.4f\n", distance);
				
	}

}
