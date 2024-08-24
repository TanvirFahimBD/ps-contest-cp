import java.util.Scanner;
public class URI1012 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double pi = 3.14159;
        double a = sc.nextDouble();
        double b = sc.nextDouble();
        double c = sc.nextDouble();
        double tr = (1/2.0) * a * c;
        double cr =  pi * (c * c);
        double tp = ((a+b)/2) * c;
        double wa = b * b;
        double rc = a * b;
        System.out.printf("TRIANGULO: %.3f\n",tr);
        System.out.printf("CIRCULO: %.3f\n",cr);
        System.out.printf("TRAPEZIO: %.3f\n",tp);
        System.out.printf("QUADRADO: %.3f\n",wa);
        System.out.printf("RETANGULO: %.3f\n",rc);
    }
}
