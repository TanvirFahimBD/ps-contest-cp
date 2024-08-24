import java.util.Scanner;
public class URI1018 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int money = sc.nextInt();
		int mn100 = money/100;
		int mr100 = money%100;
		
		int mn50 = mr100/50;
		int mr50 = mr100%50;
		
		int mn20 = mr50/20;
		int mr20 = mr50%20;
		
		int mn10 = mr20/10;
		int mr10 = mr20%10;
		
		int mn5 = mr10/5;
		int mr5 = mr10%5;
		
		int mn2 = mr5/2;
		int mr2 = mr5%2;
		
		System.out.println(money);
		System.out.println(mn100 + " nota(s) de R$ 100,00");
		System.out.println(mn50 + " nota(s) de R$ 50,00");
		System.out.println(mn20 + " nota(s) de R$ 20,00");
		System.out.println(mn10 + " nota(s) de R$ 10,00");
		System.out.println(mn5 + " nota(s) de R$ 5,00");
		System.out.println(mn2 + " nota(s) de R$ 2,00");
		System.out.println(mr2 + " nota(s) de R$ 1,00");
	}

}
