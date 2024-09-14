// Not Accepted

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t>0){

        int i, numOfReviewer, upvote = 0, downvote= 0;
        string  typeOfReviewer;
        cin >> numOfReviewer;
        for(i=1; i<=numOfReviewer; i++){
            cin >> typeOfReviewer;
            if(typeOfReviewer == "1"){
                upvote++;
            }
            else if(typeOfReviewer == "2"){
                downvote++;
            }
            else if(typeOfReviewer == "3" && upvote>downvote){
                upvote++;
            }
             else if(typeOfReviewer == "3" && upvote<downvote){
                downvote++;
            }
             else if(typeOfReviewer == "3" && upvote == downvote){
                upvote++;
            }
        }
        cout << upvote << endl;
        t--;
    }

    return 0;
}
