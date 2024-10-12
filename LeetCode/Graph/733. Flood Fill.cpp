class Solution {
public:
    int rows;
    int cols;
    int startColor;
    vector<int> dx;
    vector<int> dy;

    bool isValid(int i, int j) {
        return (i>=0 && i<rows && j>=0 && j<cols);
    }

    void fill(vector<vector<int>>& image, int cr, int cc, int color) {
        if(!isValid(cr, cc) || image[cr][cc] != startColor) {
            return ;
        }
        image[cr][cc] = color;
        for(int i=0; i<4; i++) {
            int nr = cr+dx[i];
            int nc = cc+dy[i];
            fill(image , nr, nc, color);
        }
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        dx = {-1, 0, 1, 0};
        dy = {0, -1, 0, 1};
        rows = image.size();
        cols = image[0].size();
        startColor = image[sr][sc];
        if (startColor == color) {
            return image;
        }
        fill(image, sr, sc, color);
        return image;
    }
};