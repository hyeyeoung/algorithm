import java.io.*;
import java.util.StringTokenizer;

public class Main {
    static int[] money = new int[11];
    static int n, m;
    public static void main(String[]args){
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        try {
            String s = br.readLine();
            StringTokenizer st = new StringTokenizer(s);

            n = Integer.parseInt(st.nextToken());
            m = Integer.parseInt(st.nextToken());


            for(int i = 0; i<n; i++)
                money[i] = Integer.parseInt(br.readLine());

            int res = ans();
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
            bw.write(String.valueOf(res));
            bw.flush();
            bw.close();

        }catch (IOException e){
            System.out.println();
        }
    }
    public static int ans(){
        int cnt = 0;
        for(int i = n-1; i>=0; i--){
            if(money[i] > m) continue;
            else{
                cnt += (m/money[i]);
                m -= ((m/money[i]) * money[i]);
            }
        }
        return cnt;
    }
}
