#include <iostream>
#include <string>
#include <map>
#include <set>
#include <vector>
#include <queue>
#include <mutex>
#include <thread>
#include <fstream>
#include <chrono>
#include <unordered_map>

using namespace std;
class User
{
protected:
    string username;
public:
    User(string username):username(username){}
    virtual void login() = 0; 
};
class Buyer : public User {
public:
    Buyer(string name) :User(name){}
    void login() override {
        cout << "Buyer " << username << " logged in.\n";
    }
};

class Seller : public User {
public:
    Seller(string name) :User(name) {}
    void login() override {
        cout << "Seller " << username << " logged in.\n";
    }
};
class Bid {
public:
    string buyerName;
    int amount;
    time_t timestamp;

    bool operator<(const Bid& other) const {
        return amount < other.amount;
    }
};

class Auction {
    string item;      
    int minPrice;     
    bool active = true;
    priority_queue<Bid> bids; 
    mutex mtx;  
public:
    Auction(string item,int minPrice):item(item),minPrice(minPrice),active(true){}
    void placeBid(const Bid& bid) {
        lock_guard<mutex> lock(mtx);
        if (active && bid.amount >= minPrice) {
            bids.push(bid);
        }
    }
    void closeAuction() {
        lock_guard<mutex> lock(mtx);
        active = false;
    }

    Bid declareWinner() {
        if (!bids.empty()) return bids.top();
        return Bid{ "None", 0, 0 }; 
    }
};
unordered_map<string, Auction> liveAuctions;
set<string> activeBidders;
mutex logMutex;
void auctionThread(string auctionID) {
    this_thread::sleep_for(chrono::seconds(10));
    liveAuctions[auctionID].closeAuction();
    Bid winner = liveAuctions[auctionID].declareWinner();
    lock_guard<mutex> lock(logMutex);
    ofstream log("auction_logs.txt", ios::app);
    log << "Auction for " << auctionID << " won by " << winner.buyerName
        << " with bid: " << winner.amount << "\n";
}

int main() {

    Seller s1("Alice");
    s1.login();

    Buyer b1("bob");
    b1.login();
    Buyer b2("carol");
    b2.login();
    Auction a1("Laptop", 100000);
   // liveAuctions["A1001"] = a1;
    liveAuctions.emplace("a456", a1);

    thread t1(auctionThread, "A1001");
    Bid bid1 = { "Bob", 12000, time(0) };
    Bid bid2 = { "Carol", 15000, time(0) };
    liveAuctions["A1001"].placeBid(bid1);
    liveAuctions["A1001"].placeBid(bid2);
    t1.join();

    return 0;
}