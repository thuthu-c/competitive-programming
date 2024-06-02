#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

struct Point {
    int x, y;
};

bool onSegment(Point p, Point q, Point r) {
    if (q.x <= max(p.x, r.x) && q.x >= min(p.x, r.x) &&
        q.y <= max(p.y, r.y) && q.y >= min(p.y, r.y))
        return true;
    return false;
}

int orientation(Point p, Point q, Point r) {
    int val = (q.y - p.y) * (r.x - q.x) - (q.x - p.x) * (r.y - q.y);

    if (val == 0) return 0;

    return (val > 0) ? 1 : 2;
}

bool doIntersect(Point p1, Point q1, Point p2, Point q2) {
    int o1 = orientation(p1, q1, p2);
    int o2 = orientation(p1, q1, q2);
    int o3 = orientation(p2, q2, p1);
    int o4 = orientation(p2, q2, q1);

    if (o1 != o2 && o3 != o4)
        return true;

    if (o1 == 0 && onSegment(p1, p2, q1)) return true;
    if (o2 == 0 && onSegment(p1, q2, q1)) return true;
    if (o3 == 0 && onSegment(p2, p1, q2)) return true;
    if (o4 == 0 && onSegment(p2, q1, q2)) return true;

    return false;
}

bool isFairGame(vector<Point>& points) {
    int n = points.size();

    // Check for intersection of any pair of lines
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (doIntersect(points[i], points[i + n], points[j], points[j + n]))
                return false;
        }
    }

    return true;
}

int main() {
    int W, H, N;
    cin >> W >> H >> N;

    vector<Point> points(2 * N);

    // Read points
    for (int i = 0; i < N; ++i) {
        cin >> points[i].x >> points[i].y >> points[i + N].x >> points[i + N].y;
    }

    // Check if the game is fair
    cout << (isFairGame(points) ? "Y" : "N") << endl;

    return 0;
}
