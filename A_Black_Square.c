#include <stdio.h>
#include <string.h>

int main()
{
    int a[5];
    for (int i = 1; i <= 4; i++)
        scanf("%d", &a[i]);
    char s[100];
    scanf("%s", s);
    int sum = 0;
    for (int i = 0; i < strlen(s); i++)
        sum += a[s[i] - '0'];
    printf("%d\n", sum);
    return 0;
}

// #include<iostream>
 
// using namespace std;
 
// int main(){
//     int a[5];
//     for (int i = 1; i <= 4; i ++)
//         cin >> a[i];
//     string s;
//     cin >> s;
//     int sum = 0;
//     for (int i = 0 ;i < s.size(); i ++)
//         sum += a[s[i]-'0'];
//     cout << sum << endl;
//     return 0;
// }
