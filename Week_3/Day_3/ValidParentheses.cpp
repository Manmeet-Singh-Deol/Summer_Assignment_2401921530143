class Solution {
public:
    bool isValid(string s) {
        stack <char> sk;
        for(char x:s)
        {
            if(x=='('||x=='{'||x=='[')
            {
                sk.push(x);
            }
            else
            {
                if (sk.empty()) return false;
                int top=sk.top();
            
                if((x==')' && top!='(') ||
                    (x==']' && top!='[') ||
                    (x=='}' && top!='{'))
                {
                    return false;

                }
                sk.pop();
            }
            
        }
        return sk.empty();
    }
};
