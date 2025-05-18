#include <iostream>
#include <string>
#include <list>
using namespace std;
struct YoutubeChannel{
    string name;
    int subscriberCount;

    YoutubeChannel(string Name, int SubscriberCount){
        name = Name;
        subscriberCount = SubscriberCount;
    }
    bool operator==(const YoutubeChannel& Channel ) const{
        return this->name==Channel.name;
    }
};

ostream& operator<<(ostream &COUT,YoutubeChannel &YTChannel){
    COUT << "Name: "<<YTChannel.name<<endl;
    COUT << "Subscribers: "<<YTChannel.subscriberCount<<endl;
    return COUT;
}
struct MyCollection{
    list<YoutubeChannel>myChannels;

    void operator+=(YoutubeChannel& channel){
        this->myChannels.push_back(channel);
    }
    void operator-=(YoutubeChannel& channel){
        this->myChannels.remove(channel);
    }
};
ostream& operator<<(ostream& COUT,MyCollection& myCollection){
    for (YoutubeChannel ytChannel: myCollection.myChannels){
        COUT<<ytChannel<<endl;
    }
    return COUT;
}
int main(){

    YoutubeChannel MrBeast = YoutubeChannel("Mrbeast",250000000);

    cout << MrBeast ;
    operator<<(cout,MrBeast);

    MyCollection myCollection;
    myCollection += MrBeast;
    myCollection -= MrBeast;

    cout<<myCollection;
    return 0;
}