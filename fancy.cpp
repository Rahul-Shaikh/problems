#include<iostream>

using namespace std;

int main(){
    char a[101];
    int i=0,j,flag=0,t;
    scanf("%d", &t);
    while (getchar() != '\n');
    while(t--){
        i=0;
        flag=0;
        scanf("%[^\n]s", a);
        while (getchar() != '\n');
        while(a[i]!='\0'){
        if(i==0){
            if(a[i]=='n'&&a[i+1]=='o'&&a[i+2]=='t'&&(a[i+3]==' '||a[i+3]=='\0')){
                
                cout << "Real Fancy" << endl;
                flag=1;
                
                break;
            }
        }
        else if(a[i]=='n'&&a[i+1]=='o'&&a[i+2]=='t'&&a[i+3]==' '&&a[i-1]==' '){
            cout<<"Real Fancy"<<endl;
                flag=1;
                
                break;
        }
        else if(a[i]=='n'&&a[i+1]=='o'&&a[i+2]=='t'&&a[i+3]=='\0'&&a[i-1]==' '){
            cout<<"Real Fancy"<<endl;
                flag=1;
                
                break;
        }
        i++;
    }
    if(flag==0){
        cout<<"regularly fancy"<<endl;
    }
    }
    cout<<endl;

    return 0;
}