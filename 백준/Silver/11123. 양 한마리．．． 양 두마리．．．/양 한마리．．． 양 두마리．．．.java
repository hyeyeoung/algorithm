import java.util.Arrays;
import java.util.Scanner;

public class Main {
    static char [][] arr = new char[101][101]; // 전역
    static  boolean[][] ok = new boolean[101][101];
    static int h, w;
    static int dx[] = {1,-1,0,0};
    static int dy[] = {0,0,1,-1};

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();

        int tci = 0;
        while (tci < tc){
            h = sc.nextInt(); w = sc.nextInt();
            // 메모리 초기화
            for(int i = 0; i < h; i++){
                Arrays.fill(arr[i], ' ');
                Arrays.fill(ok[i], false);
            }

            for(int i = 0; i<h; i++){
                String tmp = sc.next();
                for(int j = 0; j<w; j++){
                    arr[i][j] = tmp.charAt(j);
                }
            }
            int result = 0;
            for(int i = 0; i<h; i++){
                for(int j = 0; j<w; j++){
                    if(!ok[i][j] && arr[i][j] == '#'){
                        ans(i,j);
                        result++;
                    }
                }
            }
            System.out.println(result);
            tci++;
        }
    }
    public static void ans(int x, int y){
        ok[x][y] = true;
        for(int i = 0; i<4; i++){
            int nx = x+dx[i], ny = y+dy[i];
            if(nx >= 0 && nx < h && ny >= 0 && ny < w){
                if (!ok[nx][ny] && arr[nx][ny] == '#') {
                    ans(nx, ny);
                }
            }
        }
    }
}