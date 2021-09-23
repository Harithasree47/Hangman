// hangman.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include<iostream>
#include<vector>
#include<string>
using namespace std;
void print(vector<char>& v) {
    int i;
    for (i = 0; i < 50; i++) {
        cout << " ";
    }
    cout << "** Hangman **"<<endl;
    for (i = 0; i < 50; i++) {
        cout << " ";
    }
    cout << "**************"<<endl;
    for (i = 0; i < 50; i++) {
        cout << " ";
    }
    cout << ".............."<<endl;
    for (i = 0; i < 50; i++) {
        cout << " ";
    }
    for (i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;
    for (i = 0; i < 50; i++) {
        cout << " ";
    }
    cout << ".............." << endl;
    for (i = 0; i < 50; i++) {
        cout << " ";
    }
    cout << "**************"<<endl;
    cout << endl;
}

int main()
{
    srand(time(NULL));
    vector<string>v{ "abruptly","absurd","abyss","affix","askew","avenue","awkward","axiom","azure","bagpipes","bandwagon",
"banjo","bayou","beekeeper","blitz","blizzard","boggle","bookworm","boxcar","boxful","buckaroo","buffalo","buffoon","buxom",
"buzzard","buzzing","buzzwords","caliph","cobweb","cockiness","croquet","crypt","curacao","cycle","daiquiri","dirndl",
"disavow","dizzying","duplex","dwarves","embezzle","equip","espionage","euouae","exodus","faking","fishhook","fixable",
"fjord","flapjack","flopping","fluffiness","flyby","foxglove","frazzled","frizzled","fuchsia","funny","gabby","galaxy",
"galvanize","gazebo","giaour","gizmo","glowworm","glyph","gnarly","gnostic","gossip","grogginess","haiku","haphazard",
"hyphen","iatrogenic","icebox","injury","ivory","ivy","jackpot","jaundice","jawbreaker","jaywalk","jazziest","jazzy",
"jelly","jigsaw","jinx","jiujitsu","jockey","jogging","joking","jovial","joyful","juicy","jukebox","jumbo","kayak","kazoo",
"keyhole","khaki","kilobyte","kiosk","kitsch","kiwifruit","klutz","knapsack","larynx","lengths","lucky","luxury","lymph",
"marquis","matrix","megahertz","microwave","mnemonic","mystify","naphtha","nightclub","nowadays","numbskull","nymph","onyx",
"ovary","xidize","oxygen","pajama","peekaboo","phlegm","pixel","pizazz","pneumonia","polka","pshaw","psyche","puppy",
"puzzling","quartz","queue","quips","quixotic","quiz","quizzes","quorum","razzmatazz","rhubarb","rhythm","rickshaw",
"schnapps","scratch","shiv","snazzy","sphinx","spritz","squawk","staff","strength","strengths","stretch","stronghold",
"stymied","subway","swivel","syndrome","thriftless","thumbscrew","topaz","transcript","transgress","transplant",
"triphthong","twelfth","twelfths","unknown","unworthy","unzip","uptown","vaporize","vixen","vodka","voodoo","vortex",
"voyeurism","walkway","waltz","wave","wavy","waxy","wellspring","wheezy","whiskey","whizzing","whomever","wimpy","witchcraft"
,"wizard","woozy","wristwatch","wyvern","xylophone","yachtsman","yippee","yoked","youthful","yummy","zephyr","zigzag",
"zigzagging","zilch","zipper","zodiac","zombie" };
    string rand_str;
    int i,j,flag,remain;
    char ch;
    rand_str= v[rand() % v.size()];
    //cout << rand_str;
    int size = rand_str.length();
    vector<char>input_str(size,'_');
    print(input_str);
    remain = size;
    for (i = 0; i < size + 2; i++) {
        
        cout << "enter a character";
        cin >> ch;
        flag = 0;
        for (j = 0; j < size; j++) {
            if (rand_str[j] == ch) {
                input_str[j] = ch;
                remain-=1;
                flag = 1;
            }
        }
        print(input_str);
        if (flag == 0) {
            cout << ch << "  is a wrong guess" << endl;
            cout << " you have only " << size - i + 1 << " more guesses " << endl;
        }
        else {
            cout << " you are correct " << endl;
            cout << " you have to guess " << remain << "  more words to win" << endl;
        }
        if (remain == 0) {
            cout << "you won the game";
            return 0;
        }
    }
    cout << "you loss the game and the answer is  " << rand_str;

}

