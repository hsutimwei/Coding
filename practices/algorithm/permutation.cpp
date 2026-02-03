#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdint>
using namespace std;

const int64_t INF{9223372036854775807};

int64_t n;

/**
 * @brief 使用回溯法遞迴地生成所有排列
 * * @param nums 待排列的數組
 * @param start 當前考慮的元素索引
 * @param result 儲存所有排列的容器
 */
void backtrackPermutations(vector<int>& nums, int start, vector<vector<int>>& result) {

    // 基礎情況 (Base Case): 
    // 當 start 達到數組末尾，表示我們找到了一個完整的排列。
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    // 遞迴步驟 (Recursive Step):
    // 從當前 start 位置到數組末尾進行迭代。
    for (int i = start; i < nums.size(); ++i) {
        // 1. 選擇 (Choose): 
        // 將 nums[i] 換到當前 start 位置。
        swap(nums[start], nums[i]);

        // 2. 探索 (Explore): 
        // 進入下一層遞迴，處理下一個位置 (start + 1)。
        backtrackPermutations(nums, start + 1, result);

        // 3. 撤銷 (Unchoose / Backtrack):
        // 恢復數組到交換前的狀態。
        // 這是回溯法的關鍵，確保下次循環能從正確的狀態開始。
        swap(nums[start], nums[i]); 
    }
}

/**
 * @brief 主函數，用於呼叫回溯法並返回所有排列
 * * @param nums 待排列的數組
 * @return vector<vector<int>> 包含所有排列的容器
 */
vector<vector<int>> generatePermutations(vector<int>& nums) {
    vector<vector<int>> result;
    backtrackPermutations(nums, 0, result);
    return result;
}

// 測試用例
int main() {
    vector<int> nums = {1, 2, 3};
    vector<vector<int>> allPermutations = generatePermutations(nums);

    cout << "所有排列 (Total: " << allPermutations.size() << "):" << endl;
    for (const auto& p : allPermutations) {
        cout << "[";
        for (size_t i = 0; i < p.size(); ++i) {
            cout << p[i] << (i < p.size() - 1 ? ", " : "");
        }
        cout << "]" << endl;
    }
    
    // 預期輸出:
    // [1, 2, 3]
    // [1, 3, 2]
    // [2, 1, 3]
    // [2, 3, 1]
    // [3, 2, 1]
    // [3, 1, 2]

    return 0;
}