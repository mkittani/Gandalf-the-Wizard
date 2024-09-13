// GREEDY ALGORITHM
// #include <bits/stdc++.h>
// using namespace std;
// int main(){
//     int total_weight,n;
//     cin >> total_weight;
//     cin >> n;
//     float weight[n],value[n],arr[n];
//     for(int i=0;i<n;i++){
//         cin>>weight[i]>>value[i];
//         arr[i]=value[i]/weight[i];
//     }
//     float min=arr[0];
//     int index;
//     for(int i=0;i<n;i++)
//         if(arr[i]<min){
//             min=arr[i];
//             index=i;
//         }
//     cout<<(total_weight/weight[index])*value[index];
// }

// DIVIDE AND CONQUER ALGORITHM
/*
#include <bits/stdc++.h>
using namespace std;

int findMinIndex(float arr[], int start, int end) {
    if (start == end) 
        return start;

    int mid = start + (end - start) / 2;

    int startIndex = findMinIndex(arr, start, mid);
    int endIndex = findMinIndex(arr, mid + 1, end);

    return (arr[startIndex] < arr[endIndex]) ? startIndex : endIndex;
}

int main() {
    int total_weight, n;
    cin >> total_weight;
    cin >> n;
    float weight[n], value[n], arr[n];

    for (int i = 0; i < n; i++) {
        cin >> weight[i] >> value[i];
        arr[i] = value[i] / weight[i];
    }

    int minIndex = findMinIndex(arr, 0, n - 1);

    cout << (total_weight / weight[minIndex]) * value[minIndex];
}
*/

// DP ALGORITHM
/*
#include <bits/stdc++.h>
using namespace std;
int main() {
    int total_weight, n;
    cin >> total_weight;
    cin >> n;
    vector<float> weight(n), value(n);

    for (int i = 0; i < n; i++) 
        cin >> weight[i] >> value[i];

    vector<float> v(total_weight + 1, FLT_MAX);
    v[0] = 0;

    for (int i = 1; i <= total_weight; ++i)
        for (int j = 0; j < n; ++j)
            if (i >= weight[j])
                v[i] = min(v[i], v[i - weight[j]] + value[j]);

    cout << v[total_weight] << endl;
    return 0;
}
*/
