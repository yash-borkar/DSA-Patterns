class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int rec1Area = (ax2 - ax1) * (ay2 - ay1);
        int rec2Area = (bx2 - bx1) * (by2 - by1);

        int interSecArea = 0;
        int x1 = max(ax1, bx1), y1 = max(ay1, by1);
        int x2 = min(ax2, bx2), y2 = min(ay2, by2);
        if(x1<x2 && y1<y2) interSecArea = (x2 - x1) * (y2 - y1);

        int totalArea = rec1Area + rec2Area - interSecArea;

        return totalArea;
    }
};