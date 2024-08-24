import java.util.Scanner;

public class URI1038 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int pr = sc.nextInt();
        int qnt = sc.nextInt();
        if(pr==1){
            System.out.printf("Total: R$ %.2f\n", 4.00*qnt);
        }
        else if(pr==2){
            System.out.printf("Total: R$ %.2f\n", 4.50*qnt);
        }
        else if(pr==3){
            System.out.printf("Total: R$ %.2f\n", 5.00*qnt);
        }
        else if(pr==4){
            System.out.printf("Total: R$ %.2f\n", 2.00*qnt);
        }
        else if(pr==5){
            System.out.printf("Total: R$ %.2f\n", 1.50*qnt);
        }
    }
}
