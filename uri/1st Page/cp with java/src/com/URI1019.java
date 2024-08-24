import java.util.Scanner;
public class URI1019 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int time = sc.nextInt();
		int hr = time / 3600;
		int hrR = time % 3600;
		int min = hrR / 60;
		int minR = hrR % 60;
		System.out.println(hr+":"+min+":"+minR);
		
	}

}
