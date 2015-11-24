import java.util.*;
import java.lang.*;
import java.io.*;

class e4
{
	static int fn(ref n)
	{
		n.var+=5;
		return 5;
	}

	public static void main(String[] args) 
	{
		ref a=new ref(2);
		ref b=new ref(2);

		int x=a.var+fn(a);
		int y=fn(b)+b.var;

		System.out.println("x: "+x); //12
		System.out.println("y: "+y); //12
	}
}