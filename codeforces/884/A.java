import java.util.Scanner;
public class P884A {
    public static void main(String[] args) {
        Scanner scr = new Scanner(System.in);
        int n,t;
        n = scr.nextInt();
        t = scr.nextInt();
        int work,read=0,mone=0;
        boolean got = false;
        for(int i=0;i<n;i++){
            work = scr.nextInt();
            if(got) continue;
            read+=86400-work;
            if(read>=t){
                mone = i+1;
                got = true;
            }
        }
        System.out.println(mone);
    }
}
