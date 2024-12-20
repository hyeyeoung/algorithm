using System;
class hello
{
    private static int sols(int[] arr, int k)
    {
        int i = 0, j = 0; // 투 포인터 선언
        int maxLen = 0;
        Dictionary<int, int> d = new Dictionary<int, int>(); // make dict
        while (i <= j)
        {
            if (0 > i || i >= arr.Length || 0 > j || j >= arr.Length)
                break;
            if (d.ContainsKey(arr[j]))
            {
                d[arr[j]]++;
            }
            else
            {
                d.Add(arr[j], 1);
            }
            //////////////////
            // Console.WriteLine("{0}   {1}\r\n", i, j);
            ///
            if (d[arr[j]] > k)
            {
                while(i < j)
                {
                    d[arr[i]]--;
                    i++;
                    if (arr[i-1] == arr[j])
                    {
                        break;
                    }
                }
            }
            j++;
            if (maxLen < (j - i)) maxLen = (j - i);

        }
        return maxLen;
    }
    static void Main()
    {
        // 같은 정수 k개 이하로 최장 연속 부분 수열
        // 연속 부분 수열은 그냥 연속 된 값을 찾으면 됨
        int n, k;
        string[] tmp = Console.ReadLine().Split(' ');
        n = int.Parse(tmp[0]);
        k = int.Parse(tmp[1]);

        string[] arr_str = Console.ReadLine().Split(' ');
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
        {
            arr[i] = int.Parse(arr_str[i]);
        }
        int x = sols(arr, k);
        Console.WriteLine(x);
    }
}