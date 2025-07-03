// Problem: Encode and Decode Strings (LeetCode Premium)
// Topic: Arrays & Hashing / String Manipulation
// Approach: Encode using length + delimiter, decode by parsing string using length
// Language: C++
// Notes:
// - Learned this via YouTube since LeetCode Premium was required
// - Realized how critical a delimiter (like "#") is in parsing structured strings
// - Used substr(), stoi(), and to_string() to handle conversions
// - Faced some struggle with the index math (i += x - 1), but understood it after debugging

class Solution {
public:
    // Encodes a list of strings to a single string
    string encode(vector<string> &strs) {
        string a;
        for (string b : strs) {
            a += to_string(b.size()) + "#" + b;  // Encode size, delimiter, then string
        }
        return a;
    }

    // Decodes a single string to a list of strings
    vector<string> decode(string &str) {
        vector<string> a;
        int x;
        string b;

        for (int i = 0; i < str.size(); i++) {
            if (str[i] == '#') {
                x = stoi(b);  // Convert collected digits to length
                a.push_back(str.substr(i + 1, x));  // Extract the original string
                x = 0;
                b.clear();
                i += x - 1;  // Move index past the decoded string
            } else {
                b += str[i];  // Accumulate digits for length
            }
        }
        return a;
    }
};
