#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        int n; 
        cin >> n;
        int count = 0;
        for (int i = 0; i<n; i++){
            int nx, ny, nr;
            cin >> nx >> ny >> nr;

            int dist1 = (x1 - nx)*(x1 - nx) + (y1 - ny)*(y1 - ny);
            int dist2 = (x2 - nx)*(x2 - nx) + (y2 - ny)*(y2 - ny);

            int rc = nr*nr;

            if(rc > dist1 && rc > dist2) continue;
            else if(rc > dist1) count++;
            else if(rc > dist2) count++;
        }
        cout << count<<'\n';
    }
}