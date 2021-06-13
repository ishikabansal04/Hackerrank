
/*
 * Create classes Rectangle and RectangleArea
 */
 class Rectangle{
    public:
    int width;
    int height;
    void display(){
        cout<<width<<" "<<height<<endl;
    }
 };
 class RectangleArea:public Rectangle{
    public:
    void read_input(){
        int w,h;
        cin>>w>>h;
       this->width=w;
       this->height=h;
    }
    void display(){
        cout<<width*height;
    }
 };

