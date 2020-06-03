#include<bits/stdc++.h>
using namespace std;

void cal(string s,string choosen,int pointcount,int pos)
{
    if(pos>=s.length() || s==""){
        return;
    }

    if(pointcount>3){
        return;
    }

    if(pointcount == 3){
        string remain = s.substr(pos);
        if(remain.length()<=3){
            string printchoosen;
            printchoosen = choosen;
            printchoosen+=remain;
            cout<<printchoosen<<endl;
            return;
        }
        else{
            return;
        }
    }

    else{
        for(int i=pos;i<pos+3;i++){
            if(i>=s.length()){
                return;
            }
            choosen+=s[i];
            choosen+='.';
            cal(s,choosen,pointcount+1,i+1);
            choosen.erase(choosen.length()-1,1);
        }
        return;
    }
    return;
}

int main()
{
    int nooftestcases;
    cin>>nooftestcases;

    while(nooftestcases--){
        string s;
        cin>>s;
        cal(s,"",0,0);
    }
}
