import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int n = 0;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        int res = facto(n);
        System.out.print(res);
    }
    public  static  int facto(int n){
        if(n == 0) return 1;
        else return facto(n-1) * n;
    }
}
