/******************************************************************************
Cipher Schools assignment for round 1

Name : Nidhi Warde
Subject : Data Structure
Email : 17ucs099@lnmiit.ac.in
contact Number : 7427892747

Question : Determine whether each sequence of brackets is balanced or not.
Time Complexity: O(n)
Auxiliary Space: O(n) for stack.

*******************************************************************************/

#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string A;
        cin>>A;
        stack<int> s;
        int i;
        for(i = 0 ; i < A.length() ; i++)
        {
            char c = A[i];
            if(c == '{' || c=='(' || c == '[')
                s.push(c);
            else
            {
                if(s.empty())
                    break;
                if((s.top() == '(' && c == ')') || (s.top() == '[' && c == ']') || (s.top() == '{' && c == '}'))
                    s.pop();
                else
                    break;
            }
        }
        if(s.empty() && i == A.length())
            cout<<"YES\n";
        else
            cout<<"NO\n";
    }

    return 0;
}
