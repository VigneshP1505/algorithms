#include <iostream>
#include <stack>

using namespace std;

bool isValid(string s){
    stack<char> stack;
    for (auto c = 0; c < s.size(); ++c)
    {
        char ch = s.at(c);
        if (ch == ')' || ch == ']' || ch == '}')
        {
            if (stack.empty())
                return false;
            char top = stack.top();
            if ((ch == ']' && top != '[') || (ch == ')' && top != '(') || (ch == '}' && top != '{'))
                return false;
            else 
                stack.pop();
            continue;
        }
        stack.push(ch);
    }
    return stack.empty();
}

int main()
{
    cout << isValid("{(({[)}))}");
}