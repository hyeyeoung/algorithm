using System;
using System.Collections;
namespace ConsoleApp1
{class Program
    {
        static void Main(String[] args)
        {
            // ArrayList, Array, List 차이
            // Array : 정적 고정
            // List : 동적, 타입지정 필수
            // ArrayList: 동적, 타입지정 필수 x, 성능 이슈
            int g = 1;
            while(true)
            {
                int n = int.Parse(Console.ReadLine()); // n 입력
                if(n == 0)
                {
                    break; // 종료
                }
                string []Name = new string[n]; // 이름 배열 선언
                int x = 0; // N 확인 변수
                List<Tuple<int, int>> arr = new List<Tuple<int,int>>();
                for(int i = 0; i < n; i++)
                {
                    string [] tmp = Console.ReadLine().Split(' '); 
                    Name[i] = tmp[0]; // 첫 입력은 항상 이름
                    
                    for(int j = 1; j < n; j++)
                    {
                        if(tmp[j] == "N")
                        {
                            int idx = (i - j) % n;
                            if(idx < 0)
                                idx += n;
                            arr.Add(new Tuple<int, int>(idx, i));
                            x++;
                        }
                    } // for2 : index 연산
                } // for1 : 입력 받기
                Console.WriteLine($"Group {g}"); 
                if(x == 0)
                {
                    Console.WriteLine("Nobody was nasty");
                }
                else{
                    foreach(Tuple<int, int> kvp in arr){
                        Console.WriteLine($"{Name[kvp.Item1]} was nasty about {Name[kvp.Item2]}");
                    }
                }
                Console.WriteLine();
                g++;
            }
        }
    }
}