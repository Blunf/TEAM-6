#include <bits/stdc++.h>

using namespace std;

int n;

void printBar(int cnt){
    for(int i=0; i<cnt*4; i++){
        cout<<"_";
    }
    return;
}
void secondRecur(int cnt){
    if(cnt==-1) return;
    printBar(cnt);
    cout<<"��� �亯�Ͽ���.\n";
    cnt--;
    secondRecur(cnt);
    return;
}

void recur(int cnt){
    if(!n) {
        printBar(cnt);
        cout<<"\"����Լ��� ������?\"\n";
        printBar(cnt);
        cout<<"\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n";
        secondRecur(cnt);
        return;
    }
    n--;
    printBar(cnt);
    cout<<"\"����Լ��� ������?\"\n";
    printBar(cnt);
    cout<<"\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n";
    printBar(cnt);
    cout<<"���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n";
    printBar(cnt);
    cout<<"���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n";
    recur(cnt+1);
    return;
}

int main(){
    cin>>n;
    cout<<"��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������."<<'\n';
    recur(0);

    return 0;
}