#include <vector>    
#include <string>    
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int, string>> people;
        for (int i = 0; i < names.size(); ++i) {
            people.push_back(make_pair(heights[i], names[i]));
        }
        sort(people.begin(), people.end(),
             [](pair<int, string>& a, pair<int, string>& b) {
                 return a.first > b.first;
             });
        vector<string> sortedNames;
        for (const auto& person : people) {
            sortedNames.push_back(person.second);
        }
        return sortedNames;
    }
};
