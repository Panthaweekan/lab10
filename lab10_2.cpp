#include<iostream>
using namespace std;

//Write the function printO() here
	int printO(int y,int x)
	{
				if(y <= 0 || x <= 0)
				{
					cout << "Invalid input\n";

				}else{

					for(int countY = 0 ; countY < y ; countY++)
					{
						for(int countX = 0 ; countX < x ;countX++)
						{
							cout << 'O';
						}
					cout << "\n";
					}
			
				}
				
				return 0;
	}
	

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
