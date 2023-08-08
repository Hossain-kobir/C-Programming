// #include<bits/stdc++.h>
// using namespace std;
// int main()
// {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0; i<n; i++)
//     {
//         cin>>a[i];
//     }
//     int flag = 0;
//     int cnt[10]={0};
    
//     for(int i=0 ; i<n ; i++)
//     {
//         int val=a[i];
//         cnt [val]++;
//         if(cnt [val]>1)
//         {
//             flag = 1;
//             break;
//             // cout<<"YES";
//             // return 0;
//         }
//     }
//     if (flag == 1 )
//     {
//         cout<<"YES";
//     }
//     else {
//     cout<<"NO";
//     }
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n;
    cin>>n;
    long long int a[n];
    for(long long int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    // for(int i=0; i<n-1; i++)
    // {
    //     for(int j=i+1; j<n; j++)
    //     {
    //      if (a[i]>a[j])
    //      {
    //         int tmp ;
    //         tmp =a[i];
    //         a[i] =a[j];
    //         a[j]=tmp;
    //      }
    //     }
    // }

    sort (a,a+n);
    long long int flag = 0;

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (a[i] == a[j])
            {
                flag = 1;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }

    if (flag == 1)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}