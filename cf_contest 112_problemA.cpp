import java.util.*;


public class JavaApplication10 {

  
    public static void main(String[] args) {
       Scanner in=new Scanner(System.in);
       String a =in.next();
       String b=in.next();
       int n;
     a=a.toLowerCase();
     b=b.toLowerCase();
     n=a.compareTo(b);
     
     if(n==0)
            System.out.print("0");
     else if (n>0)
               System.out.print("1");
    else
             System.out.print("-1");
     }
    
}