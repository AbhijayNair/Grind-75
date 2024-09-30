class Solution {
public:
    vector<vector<int>> fill(vector<vector<int>>& image, int r, int c, int o, int n){
        if (r < 0 || r == image.size() || c < 0 || c == image[0].size())
            return image;
        if (image[r][c] != o || image[r][c] == n)
            return image;
        image[r][c] = n;
        vector<pair<int, int>> neighbors = {{r+1, c}, {r-1, c}, {r, c+1}, {r, c-1}};
        for(auto p: neighbors){
            fill(image, p.first, p.second, o, n);
        }
        return image;
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        return fill(image, sr, sc, image[sr][sc], color);
    }
};