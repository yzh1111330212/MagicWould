#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
int shpm[114514]={50,20};
string shpn[114514]={"��ҩ��","��ͨħ��"};
int shopw[114514]={1,3};
int shpg=0;//��ʾ��Ʒ����

char x;//�������
int x1,x2;

int bag[50][2]={},jb=100,xl=100;
string wp[114514]={"��","��ҩ��","��ħ��","��ͨħ��"};//��Ʒ����
bool wpdd[114514]={0,1,0,0};//��Ʒ�Ƿ�ѵ�
void bag2(){
	for(int i=0;i<50;i++){
		if(bag[i][1]==0){
			bag[i][0]=0;
		}
	}
}
void slowly(string a){
	for(int i=0;i<a.size();i++){
		printf("%c",a[i]);
		Sleep(50);
	}
}
void juedou(){
	
}
void qp(){
	cout<<"===================================================================================\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	cout<<"|\n";
	Sleep(9000);
	system("cls");
}
bool daima(bool mode){
	if(mode){
		cout<<"2408b";
		for(int i=0;i<50;i++){
			printf("%03d%02d",bag[i][0],bag[i][1]);
		}
		cout<<' ';
		cout<<jb<<',';
		cout<<xl;
	}else{
		char fx[50];int f,y;
		char ffff;
		cin>>fx;
		cin>>f>>ffff>>y;
		char sxsxs[5]={'2','4','0','8','b'};
		string sb1,sb2;
		for(int i=0;i<5;i++){
			if(fx[i]>sxsxs[i]){
				MessageBox(0,"����:\nSAFE_CODE_VER_ERROR\n�汾����","Error",MB_OK+16);
				return 1;
			}
		}
		jb=f;
		xl=y;
		for(int i=5;i<50;i++){
			bag[i][0]=fx[(i*5-1-2)]+fx[(i*5-1)-1-2]*10+fx[(i*5-1)-2-2]*100-48*3;
			bag[i][1]=fx[(i*5-1)]+fx[(i*5-1)-1]*10-48*2;
		}
	}
	system("pause");
	return 0;
}
void bag1(){
	for(int i=0;i<50;i++){
		if(bag[i][1]==-1){
			cout<<i+1<<'.'<<wp[bag[i][0]]<<"        X����";
		}else{
			cout<<i+1<<'.'<<wp[bag[i][0]]<<"        X"<<bag[i][1];
		}
		cout<<endl;
		
	}
	while(1){
		slowly("ִ�в���?(Y/N)");
		cin>>x;
		if(x=='N'||x=='n'){
			break;
		}
		slowly("�ƶ� ��n�� ����m��  ��x����");
		int n,m,x;
		cin>>n>>m>>x;
		if((bag[n-1][0]!=bag[m-1][0])){
			MessageBox(0,"����:\nGOODS_DIFFERENT\n��Ʒ����ͬ��","Error",MB_OK+16);
		}else if(wpdd[m-1]){
			MessageBox(0,"����:\nGOODS_CANT_STSCK\n��Ʒ���ɶѵ���","Error",MB_OK+16);
		}else{
			bag[n-1][1]-=x;
			bag[m-1][1]+=x;
			bag[m-1][0]=bag[n-1][0];
			slowly("�ɹ���");
		}
	}
	
}
void start(){
	cout<<"*    *                    *                *    *                    **         *\n";
	cout<<"*    *               *                     *    *                     *         *\n";
	cout<<"**  **   ****    *** *   **     ****       *    *   ****   *    *     *     *** *\n";
	cout<<"**  **  *    *  *   *     *    *    *      *    *  *    *  *    *     *    *   **\n";
	cout<<"* ** *       *  *   *     *    *           * ** *  *    *  *    *     *    *    *\n";
	cout<<"* ** *   *****  *   *     *    *           * ** *  *    *  *    *     *    *    *\n";
	cout<<"*    *  *    *   ***      *    *           **  **  *    *  *    *     *    *    *\n";
	cout<<"*    *  *    *   *        *    *           **  **  *    *  *    *     *    *    *\n";
	cout<<"*    *  *   **   ****     *    *    *      *    *  *    *  *   **     *    *   **\n";
	cout<<"*    *   *** *  *    *  *****   ****       *    *   ****    *** *   *****   *** *\n";
	cout<<"                *    *\n";
	cout<<"                 ****\n";
	cout<<endl<<endl<<"                                ħ������\n";
	Sleep(5000);
	system("cls");
	system("color 47");
	cout<<endl<<endl<<endl<<endl<<endl;
	cout<<"             ******      *        *"<<endl;
	cout<<"            *      *    **       **"<<endl;
	cout<<"                   *     *      * *"<<endl;
	cout<<"                 *       *     *  *"<<endl;
	cout<<"               *         *    *   *"<<endl;
	cout<<"             *           *    *******"<<endl;
	cout<<"by          ********     *        *"<<endl;
	cout<<"                  S T U D I O S"<<endl;
	Sleep(2500);
	system("cls");
	cout<<endl<<endl<<endl;
	cout<<"      *����Ϸ�����Դ��ĳͬѧ��ֽ����Ϸ��"<<endl;
	Sleep(1500);
	system("cls");
	
	system("color 07");
}
void shop();
void game(){
	x='1';
	bag2();
	bool mzflag=0;
	for(int i=0;i<50;i++){
		if(bag[i][0]){
			
		}
	}
	while(x!='X'&&x!='x'){
		system("cls");
		slowly("[O]���ɴ���  [S]�̵�  [E]����  [F]����  [X]�˳�   ���:");
		cout<<jb;
		slowly("    Ѫ��:");
		cout<<xl<<endl;
		cout<<" ______________________________________\n";
		cout<<"/      "<<'/'<<"|\\                             \\  \n";
		cout<<"\\______\\|/_____________________________/  \n";
		cin>>x;
		if(x=='O'||x=='o'){
			daima(1);
		}else if(x=='s'||x=='S'){
			shop();
		}else if(x=='E'||x=='e'){
			bag1();
		}else if(x=='f'||x=='F'){
			
		}
	}
}
void shop(){
	bag2();
	if(shpm==0){
		slowly("�����ƺ�ʲôҲû��...\n");
		system("pause");
		return;
	}
	while(1){
		for(int i=0;i<=shpg;i++){
			cout<<i+1<<'.';
			slowly(shpn[i]);
			cout<<"              ";
			cout<<shpm[i]<<endl;
		}
		slowly("�Ƿ���? (Y/N)");
		cin>>x;
		if(x=='N'||x=='n'){
			return;
		}
		slowly("�����뽻�ױ��...");
		cin>>x1;
		slowly("����[B] ����[S]");
		cin>>x;
		if(x=='b'||x=='B'){
			slowly("�����뽻������...");
			cin>>x2;
			if(x2*shpm[x1-1]>jb){
				MessageBox(0,"����:\nMONEY_NOT_ENOUGH\n��Ҳ��㣡","Error",MB_OK+16);
				continue;
			}
			for(int i=0;i<51;i++){
				if(i==50){
					MessageBox(0,"����:\nBAG_SPACES_NOT_ENOUGH\n�����ռ䲻�㣡","Error",MB_OK+16);
				}else if(bag[i][1]==0||(shopw[x1]==bag[i][0]&&wpdd[shopw[x1]])){
					bag[i][0]=shopw[x1];
					bag[i][1]+=x2;
					jb-=x2*shpm[x1-1];
					break;
				}
			}
		}else if(x=='s'||x=='S'){
			slowly("�����뽻������...");
			cin>>x2;
			
		}
	}
}
int main(){
	qp();
	start();
	while(1){  
		slowly("[N]����Ϸ  [O]ʹ�ô���ָ��ϴ����� [������]�˳�");
		cin>>x;
		if(x=='n'||x=='N'){
			for(int i=0;i<50;i++){
				for(int j=0;j<2;j++){
					bag[i][j]=0;
				}
			}
			game();
		}else if(x=='o'||x=='O'){
			if(daima(0)){
				
			}else{
				game();
			}
		}else{
			return 0;
		}
	}
	return 0;
}
