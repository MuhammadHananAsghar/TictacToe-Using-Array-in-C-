// CREATED BY MUHAMMAD HANAN ASGHAR
#include <iostream>
using namespace std;

class TicTacToe{
  public:
    char arr[10] = {'0','1','2','3','4','5','6','7','8','9'};
  void Board(){
    cout<<"---------"<<endl;
    cout<<"| "<<arr[0]<<" "<<arr[1]<<" "<<arr[2]<<" |"<<endl;
    cout<<"| "<<arr[3]<<" "<<arr[4]<<" "<<arr[5]<<" |"<<endl;
    cout<<"| "<<arr[6]<<" "<<arr[7]<<" "<<arr[8]<<" |"<<endl;
    cout<<"---------"<<endl;
  }
  int checkValidity(){
    int val = 1;
    if((arr[0] == 'O' && arr[1] == 'O' && arr[2] == 'O') || (arr[3] == 'O' && arr[4] == 'O' && arr[5] == 'O') || (arr[6] == 'O' && arr[7] == 'O' && arr[8] == 'O') || (arr[0] == 'O' && arr[4] == 'O' && arr[8] == 'O') || (arr[2] == 'O' && arr[4] == 'O' && arr[6] == 'O') || (arr[0] == 'O' && arr[3] == 'O' && arr[6] == 'O') || (arr[1] == 'O' && arr[4] == 'O' && arr[7] == 'O') || (arr[2] == 'O' && arr[5] == 'O' && arr[8] == 'O')){
      val = 1;
      cout<<endl<<"Player 2 Wins.Congratulations.......!!!!"<<endl;
      return val;
    }else if((arr[0] == 'X' && arr[1] == 'X' && arr[2] == 'X') || (arr[3] == 'X' && arr[4] == 'X' && arr[5] == 'X') || (arr[6] == 'X' && arr[7] == 'X' && arr[8] == 'X') || (arr[0] == 'X' && arr[4] == 'X' && arr[8] == 'X') || (arr[2] == 'X' && arr[4] == 'X' && arr[6] == 'X') || (arr[0] == 'X' && arr[3] == 'X' && arr[6] == 'X') || (arr[1] == 'X' && arr[4] == 'X' && arr[7] == 'X') || (arr[2] == 'X' && arr[5] == 'X' && arr[8] == 'X')){
      cout<<endl<<"Player 1 Wins.Congratulations.......!!!!"<<endl;
      val = 2;
      return val;
    }
    else{
      val = 0;
      return val;
    }
  }
  int Player(int pl_val){
    int value = true;
    while(value == true){
        if(pl_val == 1){
        char opt;
        int pl;
        cout<<"Player "<<pl_val<<" (We Select Letter 'X' for You, So Enter 'X') : ";
        cin>>opt;
        cout<<"Enter Place (Index) Where you Want to Insert : ";
        cin>>pl;
        arr[pl] = opt;
        Board();
      }else{
        char opt;
        int pl;
        cout<<"Player "<<pl_val<<" (We Select Letter 'O' for You, So Enter 'O') : ";
        cin>>opt;
        cout<<"Enter Place (Index) Where you Want to Insert : ";
        cin>>pl;
        arr[pl] = opt;
        Board();
      }
      int rt = checkValidity();
      if(rt == 1){
        value = false;
        return 1;
      }else if(rt == 2){
        value = false;
        return 1;
      }else{
        return -1;
      }
    }
    return 0;
  }
};


int main() {
  TicTacToe h;
  cout<<endl;
  cout<<"|-----------------------------------------------------------|"<<endl;
  cout<<"| Data Structures Project Tic-Tac-Toe (Array Data Structure)|"<<endl;
  cout<<"|-----------------------------------------------------------|"<<endl;
  cout<<endl;
  cout<<"Rules: "<<endl;
  cout<<"1. Only Two Players Can Play."<<endl;
  cout<<"2. Enter Only 1 or 2."<<endl;
  cout<<"3. Is There is Any Three Consective Letters Are Same the Corresponding Player Wins."<<endl;
  h.Board();
  cout<<endl;
  int corr = -1;
  int players_value = 0;
  for(int i=0;i<9;i++){
    cout<<"Enter Player's Turn (Only -> 1 or 2) : ";
    cin>>players_value;
    corr = h.Player(players_value);
    if(corr == 1){
      corr =1;
      break;
    }else{
      continue;
    }
  }
  if(corr == -1){
    cout<<endl<<"Don't Be Sad.Sorry Next Time No One Wins.";
  }
}
