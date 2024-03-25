import java.util.Scanner;
import java.math.BigInteger;

public class Main {
    public  static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        int n = 0;
        BigInteger []arr = new BigInteger[10001];

        n = sc.nextInt();
        arr[0] = BigInteger.valueOf(0);
        arr[1] = BigInteger.valueOf(1);
        arr[2] = BigInteger.valueOf(1);

        for(int i = 3; i <= n; i++){
            arr[i] = arr[i-1].add(arr[i-2]);
        }

        System.out.print(arr[n]);
    }
}
