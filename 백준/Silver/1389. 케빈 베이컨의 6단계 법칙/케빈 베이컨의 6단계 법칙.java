import java.util.Arrays;
import java.util.Scanner;

public class Main{

    public static void main(String[]args){
        int[][] arr = new int[101][101];
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int m = sc.nextInt();

        for(int i = 1; i<=n; i++) Arrays.fill(arr[i],9999);
        for(int i = 1; i<=m; i++){
            int a = sc.nextInt();
            int b = sc.nextInt();
            arr[a][b] = arr[b][a] = 1;
        }
        // 최단경로 알고리즘
        for(int k= 1; k<=n; k++){
            for(int i = 1; i<=n; i++){
                for(int j = 1; j<=n; j++) arr[i][j] = Min(arr[i][j], arr[i][k]+arr[k][j]);
            }
        }
        int MIN = 10000000;
        int node = -1;

        for(int i = 1; i<=n; i++){
            int sum = 0;
            for(int j = 1; j<=n ;j++) sum += arr[i][j];
            if(MIN > sum){
                MIN = sum;
                node = i;
            }
        }
        System.out.print(node);
    }
    public static int Min(int a, int b){
        if(a>b) return b;
        else return a;
    }
}