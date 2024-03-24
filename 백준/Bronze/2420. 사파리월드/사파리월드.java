import java.util.Scanner;
import java.math.MathContext;

public class Main {
    public static void main(String[] args) {
        long a = 0, b = 0;
        Scanner sc = new Scanner(System.in);
        a = sc.nextLong();
        b = sc.nextLong();
        long result = Math.abs(a-b);

        System.out.print(result);

    }
}