import java.util.Scanner;

public class Main{
    public static void main(String[] args) {
        int arr[] = new int[15];
        int n = 0;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        arr[0] = 1; arr[1] = 1; arr[2] = 2;

        for(int i = 3; i<=n; i++){
            arr[i] = arr[i-1] * i;
        }
        System.out.print(arr[n]);
    }
}
