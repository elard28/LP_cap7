import java.util.*;
import java.lang.*;
import java.io.*;

class e2
{
	public static int fun(ref k) 
	{
		k.var += 4;
		return 3 * k.var - 1;
	}

	public static void main (String[] args)
	{
		ref i=new ref(10); 
		ref j=new ref(10); 
		int sum1, sum2;
		sum1 = (i.var / 2) + fun(i);
		sum2 = fun(j) + (j.var / 2);

		System.out.println("sum1: "+sum1);
		System.out.println("sum2: "+sum2);
	}
}