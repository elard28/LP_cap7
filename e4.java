import java.util.*;
import java.lang.*;
import java.io.*;

class e4
{
	static int fn(int n)
	{
		n=n+5;
		return 5;
	}

	public static void main(String[] args) 
	{
		int a=2;
		int b=2;

		int x=a+fn(a);
		int y=fn(b)+b;

		System.out.println("x: "+x);
		System.out.println("y: "+y);
	}
}