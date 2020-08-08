/******************************************************************************
Cipher Schools assignment for round 1

Name : Nidhi Warde
Subject : Data Structure
Email : 17ucs099@lnmiit.ac.in
contact Number : 7427892747

Question : Determine whether each sequence of brackets is balanced or not.
Time Complexity: O(n)
Auxiliary Space: O(n) for stack.

Logic :
Stack contains the opening parenthsis.
While traversing a string, whenever an opening parenthis is encountered, 
it is pushed in stack and whenever a closing parenthis is encountered, 
it needs to be matched with corresponding opening parenthis.
So if stack is empty (no opening parenthesis available for matching) or 
the top element of stack (recently encountered unmatched opening parenthis) doesn't matches
currently encountered closing parenthis, then the string is not balanced.
Else if the top element of stack matches currently encountered closing parenthis, 
then that top matched opening parenthesis is popped from stack.

After traversing entire string, if stack is empty (no unmatched opening parenthesis), 
then string is balanced. 
Else string is not balanced.

If k denotes the length of longest string among n strings, then 
Time Complexity: O(nk) for traversing the string.
Auxiliary Space: O(nk) for stack.
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
