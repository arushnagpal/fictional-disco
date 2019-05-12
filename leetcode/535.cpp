class Solution {
public:
    map<int,string> urlmap;
    // Encodes a URL to a shortened URL.
    int i=0;
    string encode(string longUrl) {
        urlmap[i]=longUrl;
        return "http://tinyurl.com/" + i++;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        string val = shortUrl.substr(19);
        return urlmap[atoi(val.c_str())];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));