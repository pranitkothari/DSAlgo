void PrintBin(int num , string& s)
{
    cout<<"PrintBin( "<<num<< " "<< ", \"" << s << "\"" <<") "<<endl;
    
    if(num == 0)
    {
        cout<<s<<endl;
    }
    else
    {
        string s1;
        s1.push_back('0');
        s1.push_back('1');
        
        for(auto c : s1)
        {
            s.push_back(c);
            PrintBin(num-1, s);
            s.erase(s.end() - 1);
        }
        
    }
}

int main(){

    string s;
    PrintBin(2, s);
}
