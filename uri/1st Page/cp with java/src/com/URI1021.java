import java.util.Scanner;
public class URI1021 {

	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		
		double money = sc.nextDouble();
		int totalMoney = (int)(money*100);
		
		int mn100 = totalMoney/10000;
		int mr100 = totalMoney%10000;
		
		int mn50 = mr100/5000;
		int mr50 = mr100%5000;
		
		int mn20 = mr50/2000;
		int mr20 = mr50%2000;
		
		int mn10 = mr20/1000;
		int mr10 = mr20%1000;
		
		int mn5 = mr10/500;
		int mr5 = mr10%500;
		
		int mn2 = mr5/200;
		int mr2 = mr5%200;
		
		int c100 = mr2/100;
		int cr100 = mr2%100;
		
		int c50 = cr100/50;
		int cr50 = cr100%50;
		
		int c25 = cr50/25;
		int cr25 = cr50%25;
		
		int c10 = cr25/10;
		int cr10 = cr25%10;
		
		int c5 = cr10/5;
		int cr5 = cr10%5;

		
		System.out.println("NOTAS:");
		System.out.println(mn100 + " nota(s) de R$ 100.00");
		System.out.println(mn50 + " nota(s) de R$ 50.00");
		System.out.println(mn20 + " nota(s) de R$ 20.00");
		System.out.println(mn10 + " nota(s) de R$ 10.00");
		System.out.println(mn5 + " nota(s) de R$ 5.00");
		System.out.println(mn2 + " nota(s) de R$ 2.00");
		System.out.println("MOEDAS:");
		System.out.println(c100 + " moeda(s) de R$ 1.00");
		System.out.println(c50 + " moeda(s) de R$ 0.50");
		System.out.println(c25 + " moeda(s) de R$ 0.25");
		System.out.println(c10 + " moeda(s) de R$ 0.10");
		System.out.println(c5 + " moeda(s) de R$ 0.05");
		System.out.println(cr5 + " moeda(s) de R$ 0.01");
	}

}
