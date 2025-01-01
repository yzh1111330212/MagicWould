#include<bits/stdc++.h>
#include<windows.h>
using namespace std;
char x;
int bag[50][2]={},jb=100,xl=100;
string wp[114514]={"无","炼药锅"};
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
		cout<<"2407d";
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
		char sxsxs[5]={'2','4','0','7','b'};
		string sb1,sb2;
		for(int i=0;i<5;i++){
			if(fx[i]>sxsxs[i]){
				MessageBox(0,"版本错误！","Error",0);
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
		if(bag[i][1]==0){
			bag[i][0]=0;
		}
		if(bag[i][1]==-1){
			cout<<i+1<<'.'<<wp[bag[i][0]]<<"        X无限";
		}else{
			cout<<i+1<<'.'<<wp[bag[i][0]]<<"        X"<<bag[i][1];
		}
		cout<<endl;
		
	}
	while(1){
		cout<<"执行操作?(Y/N)";
		char sbbbb;
		cin>>sbbbb;
		if(sbbbb=='N'||sbbbb=='n'){
			break;
		}
		cout<<"移动 第n个 至第m格  移x个。";
		int n,m,x;
		cin>>n>>m>>x;
		if((bag[n-1][0]!=bag[m-1][0])){
			cout<<"物品错误。";
		}else{
			bag[n-1][1]-=x;
			bag[m-1][1]+=x;
			bag[m-1][0]=bag[n-1][0];
			cout<<"成功！";
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
	cout<<endl<<endl<<"                                魔法世界\n";
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
	cout<<"      *此游戏灵感来源于某同学的纸质游戏。"<<endl;
	Sleep(1500);
	system("cls");
	
	system("color 07");
}
void game(){
	x='1';
	while(x!='X'&&x!='x'){
		system("cls");
		cout<<"[O]生成代码  [S]商店  [E]背包  [F]决斗  [X]退出   金币:"<<jb<<"  血量:"<<xl<<endl;
		cout<<" ______________________________________\n";
		cout<<"/      "<<'/'<<"|\\                             \\  \n";
		cout<<"\\______\\|/_____________________________/  \n";
		cin>>x;
		if(x=='O'||x=='o'){
			daima(1);
		}else if(x=='s'||x=='S'){
			
		}else if(x=='E'||x=='e'){
			bag1();
		}else if(x=='f'||x=='F'){
			
		}
	}
}
void shop(){
	
}
int main(){
	qp();
	start();
	while(1){
		cout<<"[N]新游戏  [O]使用代码恢复上次内容 [其他键]退出";
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
