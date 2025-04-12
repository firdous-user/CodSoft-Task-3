#include<iostream>
#include<vector>
using namespace std;
class Todo{
private:
	vector<string> data;
	string value;
	string temp;
	int rem;
public:
	void add(){
		cout <<"Enter the data:";
		cin >> value;
		data.push_back(value);
		cout <<"Task is added...." <<endl;
	}
	
	void done(){
		int f = 0;
		cout <<"Enter which work is done:";
		cin >> temp;
		for(int i=0;i<data.size();i++){
			if(temp == data[i]){
				f = 1;
				data[i] = data[i] + "[Done]";
			}
		}
		if(f != 1){
			cout <<"Data Missing!" << endl;
		}
		
		cout <<"Task is updated...." <<endl;
	}
	
	void display(){
		cout <<"Todo list is:" <<endl;
		for(int i=0;i<data.size();i++){
			cout << i+1 <<". " << data[i] <<endl;
		}
	}
	
	void remove(){
		cout <<"Enter the index of the task which you want to remove:";
		cin >> rem;
		
		if(rem > data.size()){
			cout <<"Please enter under the range!" <<endl;
		}else{
			data.erase(data.begin() + rem-1);
		}
		cout <<"Task is removed...." <<endl;
	}
};

int main(){
	Todo t;
	int ch;
	
	do{
		cout <<"1. ADD TASK  2. MARK TASK  3. REMOVE TASK  4. DISPLAY TASK  5.EXIT" <<endl;
    	cin >> ch;
    	
    	switch(ch){
    		case 1:
    			t.add();
    			break;
    		case 2:
    			t.done();
    			break;
    		case 3:
    			t.remove();
    			break;
    		case 4:
    			t.display();
    			break;
    		case 5:
    			return 0;
    		default:
    			cout <<"Plaease enter correct key";
		}
	}while(true);
}

