using System;
namespace ConsoleApp1
{class Program
    {
        static void Main(String[] args)
        {
            // n개의 달걀, 잠재 고객은 m명 i번째 고객은 p 이하로 산다고 밝힘..
            // 한 고객에게 두 개 이상의 달걀은 x
            string []tmp = Console.ReadLine().Split(" ");
            int n = int.Parse(tmp[0]);
            int m = int.Parse(tmp[1]);

            int []arr = new int[m];
            for(int i = 0; i < m; i++)
            {
                string egg = Console.ReadLine();
                arr[i] = int.Parse(egg);
            }
            // arr.Sort();
            Array.Sort(arr);
            int x = 0;
            int salePrice = 0;

            for(int i = 0; i < m; i++){
                int restPerson = (m - i);
                if(restPerson > n)
                {
                    restPerson = n;
                }
                if(salePrice < (restPerson * arr[i]))
                {
                    x = arr[i];
                    salePrice = (restPerson * arr[i]);
                }
            }
            Console.WriteLine(x.ToString() + " " + salePrice.ToString());
        }
    }
}