using System;
namespace ConsoleApp1
{class Program
    {
        static void Main(String[] args)
        {
            String [] read = Console.ReadLine().Split(' ');
            int n = int.Parse(read[0]);
            int m = int.Parse(read[1]); 
            char [,] arr = new char[n, m];

            for(int i = 0; i < n; i++)
            {
                String tmp = Console.ReadLine();
                for(int j = 0; j < m; j++)
                {
                    arr[i, j] = tmp[j];
                }
            }
            int cnt = 0;
            for(int i = 0; i < n; i++){
                for(int j = 0; j < m; j++){
                    bool ok1 = false;
                    for(int k1 = 0; k1 < n; k1++){
                        if(arr[k1, j] == 'X'){
                            ok1 = true;
                            break;
                        }
                    }
                    
                    bool ok2 = false;
                    for(int k2 = 0; k2 < m; k2++){
                        if(arr[i, k2] == 'X'){
                            ok2 = true;
                            break;
                        }
                    }
                    
                    if(!ok1 && !ok2) {
                        cnt++;
                        arr[i, j] = 'X';
                    }
                }
            }

            for(int i = 0; i<n; i++){
                bool ok = false;
                for(int j = 0; j<m;j++) {
                    if(arr[i, j] == 'X'){
                        ok = true;
                        break;
                    }
                }
                if(!ok) cnt++;
            }

            for(int i = 0; i < m; i++){
                bool ok = false;
                for(int j = 0; j<n; j++){
                    if(arr[j, i] == 'X'){
                        ok = true;
                        break;
                    }
                }
                if(!ok) cnt++;
            }
            Console.Write(cnt.ToString()+'\n');
        }
    }
}