import java.util.Arrays;
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a, b, c;
        Scanner sc = new Scanner(System.in);
        while(true){
            a = sc.nextInt();
            b = sc.nextInt();
            c = sc.nextInt();
            if(a==0 && b==0 && c==0) break;

            int arrA[] = {a,b,c};
            Arrays.sort(arrA);
            if(arrA[0]+arrA[1] <= arrA[2]){
                System.out.println("Invalid");
            }
            else if(arrA[0] == arrA[1] && arrA[1] == arrA[2] && arrA[2] == arrA[0]){
                System.out.println("Equilateral");
            }
            else if(arrA[0] != arrA[1] && arrA[1] != arrA[2] && arrA[2] != arrA[0]){
                System.out.println("Scalene");
            }
            else{
                System.out.println("Isosceles");
            }
        }
    }
}