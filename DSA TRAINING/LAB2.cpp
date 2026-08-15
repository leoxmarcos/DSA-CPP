// //Valid Phone no
// #include<iostream>
// using namespace std;
// int main()
// {
//     int N,X;
//     cin>>N>>X;
//     int total=N*X;

//     if(total>=10000 && total<=99999)
//      cout<<"YES"<<endl;

//      else {
//         cout<<"NO"<<endl;
//      }

// }

// given string s determine if it contain both the character
// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;

//     bool hasAmpersand = false;
//     bool hasHash = false;

//     // Use for loop to check if string contains both '&' and '#'
//     for (int i = 0; i < s.length(); i++)
//     {
//         if (s[i] == '&')
//             hasAmpersand = true;
//         if (s[i] == '#')
//             hasHash = true;
//     }

//     // Check if both characters exist AND length is even
//     if (hasAmpersand && hasHash && s.length() % 2 == 0)
//     // if (s[i] == '&' && s[i] == '#' && s.length() % 2 == 0)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }


// #include <iostream>
// #include <string>
// using namespace std;
// int main()
// {
//     string s;
//     cin >> s;

//     // Check if string contains both '&' and '#' AND has even length
//     if (s.find('&') != string::npos && s.find('#') != string::npos && s.length() % 2 == 0)
//     {
//         cout << "YES" << endl;
//     }
//     else
//     {
//         cout << "NO" << endl;
//     }

//     return 0;
// }