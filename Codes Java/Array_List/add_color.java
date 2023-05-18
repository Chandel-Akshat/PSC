package Array_List;
import java.util.*;

public class add_color {
	public static void main(String[] args) {
		ArrayList a = new ArrayList();
		a.add("red");
		a.add("blue");
		a.add("white");
		Scanner input= new Scanner(System.in);
		int n = input.nextInt();
		for(int i = 0 ; i< a.size() ; i++) {
			System.out.print(a.get(i)+"  ");
		}
		System.out.println();
		System.out.println(a.get(n));
		a.remove(2);
		for(int i = 0 ; i< a.size() ; i++) {
			System.out.print(a.get(i)+"  ");
		}
		ArrayList b = new ArrayList();
		b.add("red");
		b.add("white");
		b.add("blue");
		boolean flag = true;
		for(int i = 0 ; i< a.size() ; i++) {
			if(a.get(i)!=b.get(i)) {
				flag=false;
				break;
			}
		}
		System.out.println();
		if(flag==false) {
			System.out.println("a and b array list are not equal");
		}
		else {
			System.out.println("a and b are equal");
		}
		ArrayList c = new ArrayList(b);
		for(int i = 0 ; i< c.size() ; i++) {
			System.out.print(c.get(i)+"  ");
		}
	}
}
