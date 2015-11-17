using System;

public class e6
{
	static int fn(ref int n)
	{
		n=n+5;
		return 5;
	}

	public static void Main()
	{
		int a=2;
		int b=2;

		int x=a+fn(ref a); //7
		int y=fn(ref b)+b; //12

		Console.WriteLine("x: "+x);
		Console.WriteLine("y: "+y);
	}
}