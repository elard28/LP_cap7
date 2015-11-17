using System;

public class e2
{
	public static int fun(ref int k) 
	{
		k += 4;
		return 3 * k - 1;
	}

	public static void Main()
	{
		int i = 10, j = 10, sum1, sum2;
		sum1 = (i / 2) + fun(ref i); //46
		sum2 = fun(ref j) + (j / 2); //48

		Console.WriteLine("sum1: "+sum1);
		Console.WriteLine("sum2: "+sum2);
	}
}