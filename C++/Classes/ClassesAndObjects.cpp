

// Write your Student class here
class Student{ 
    int scores[5];
    public:
    void input();
    int calculateTotalScore(){
        int i,total=0;
        for(i=0;i<5;i++)
        {total+=scores[i];}
        return total;
    };

};
void Student::input(){
    int j;
    for(j=0;j<5;j++){
        cin>>scores[j];
    };
}

