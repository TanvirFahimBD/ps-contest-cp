import java.util.Scanner;
public class URI1020 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int inDay = sc.nextInt();
		int year = inDay / 365;
		int yearR = inDay % 365;
		int month = yearR / 30;
		int monthR = yearR % 30;
		System.out.println(year + " ano(s)");
		System.out.println(month + " mes(es)");
		System.out.println(monthR + " dia(s)");
	}

}
