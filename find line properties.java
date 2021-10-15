import java.util.Scanner;

public class Main {
    public static void main(String[] args)
 {
        Scanner sc = new Scanner(System.in);
        int x1,y1,x2,y2,x3,y3,x4,y4,m1,m2;
        System.out.println("Enter x and y co ordinates of one end of 1st line");
        x1 = sc.nextInt();
        y1 = sc.nextInt();
       System.out.println("Enter x and y co ordinates of another end of 1st line");
        x2 = sc.nextInt();
        y2 = sc.nextInt();
       System.out.println("Enter x and y co ordinates of one end of 2nd line");
        x3 = sc.nextInt();
        y3 = sc.nextInt();
       System.out.println("Enter x and y co ordinates of another end of 2nd line");
        x4 = sc.nextInt();
        y4 = sc.nextInt();
       m1=(y2-y1)/(x2-x1);
       m2=(y4-y3)/(x4-x3);
       if(m1==m2)
       System.out.println("Both lines are parallel");
       else
       System.out.println("Both lines will intersect");
}
}
