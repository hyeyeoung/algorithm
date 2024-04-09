import java.util.Scanner;
import java.util.HashMap;

public class Main {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        HashMap <String,String> h = new HashMap<String,String>();
        int m = sc.nextInt();
        int n = sc.nextInt();

        for(int i = 0; i<m; i++){
            String tmp = sc.next();
            h.put(tmp," ");
        }
        int cnt = 0;
        for(int i = 0; i<n; i++){
            String tmp = sc.next();
            if(h.containsKey(tmp)) cnt++;
        }
        System.out.print(cnt);
    }
}
