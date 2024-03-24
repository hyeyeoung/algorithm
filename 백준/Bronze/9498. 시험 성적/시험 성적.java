import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        int a = 0;
        Scanner sc = new Scanner(System.in);
        a = sc.nextInt();
        String result = "";
        if(a>= 90 && a <= 100) result = "A";
        else if(a>=80 && a <= 89) result = "B";
        else if(a>=70 && a <= 79) result = "C";
        else if(a>=60 && a <= 69) result = "D";
        else result = "F";

        System.out.print(result);

    }
}