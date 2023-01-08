class DataStream {
public:
int ko=0,val=0,c=0;
    DataStream(int value, int k) {
        ko=k;
        val=value;
    }
    
    bool consec(int num) {
        if(num==val)
            c++;
        else
            c=0;
        return (c>=ko);
    }
};
