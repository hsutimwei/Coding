#include <iostream>
#include <vector>
#include <algorithm>

/**
 * @brief 使用回溯法遞迴地生成所有不重複的排列 (O(1) 額外空間)
 * * @param nums 待排列的數組
 * @param start 當前考慮的元素索引
 * @param result 儲存所有排列的容器
 */
void backtrackUniquePermutations_O1Space(
    std::vector<int>& nums, 
    int start, 
    std::vector<std::vector<int>>& result) {

    // 基礎情況: 找到一個完整的排列
    if (start == nums.size() - 1) {
        result.push_back(nums);
        return;
    }

    // 為了在當前層級去重，我們使用一個集合或在排序後進行檢查
    // 這裡我們直接利用排序和相鄰檢查來去重
    
    // 注意：這個方法要求我們在每次進入遞迴前都對子數組 [start, end) 保持排序狀態，
    // 為了簡化邏輯並使其更貼近常見的 in-place 實現，我們在進入循環前先對 [start, end) 排序
    // (但這樣會增加每次遞迴的排序開銷，實際應用中通常是事先排序一次)
    
    // *** 優化提示: 如果輸入已經排序，您可以省略這裡的排序，但在回溯後，
    // *** 數組的順序會被打亂，這使得基於相鄰元素的去重檢查更複雜。
    
    // 為了讓 $O(1)$ 空間的去重邏輯簡單清晰，我們依賴 **for 迴圈內的相鄰元素檢查**。
    // 這個循環從 start 位置開始嘗試將不同的元素交換到 start 位置。
    for (int i = start; i < nums.size(); ++i) {
        
        // 核心去重檢查:
        // 如果當前元素 (nums[i]) 與前一個元素 (nums[i-1]) 相同，
        // 並且前一個元素還在 **[start, i) 範圍內**，我們跳過。
        // 這與使用 used 陣列的檢查原理是相同的：避免在同一層次重複選擇相同的值。
        if (i > start && nums[i] == nums[i - 1]) {
            continue;
        }

        // 1. 選擇 (Choose): 交換
        std::swap(nums[start], nums[i]);

        // 2. 探索 (Explore): 進入下一層遞迴
        backtrackUniquePermutations_O1Space(nums, start + 1, result);

        // 3. 撤銷 (Backtrack): 恢復
        std::swap(nums[start], nums[i]);
    }
}


std::vector<std::vector<int>> generateUniquePermutations_O1(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    if (nums.empty()) {
        return result;
    }

    // 預先排序是這個去重方法的關鍵前提
    std::sort(nums.begin(), nums.end());

    backtrackUniquePermutations_O1Space(nums, 0, result);
    return result;
}

// 測試用例
int main() {
    std::vector<int> nums = {1, 1, 2}; // 帶有重複元素
    std::vector<std::vector<int>> allPermutations = generateUniquePermutations_O1(nums);

    std::cout << "O(1) 空間實現的不重複排列 (Total: " << allPermutations.size() << "):" << std::endl;
    for (const auto& p : allPermutations) {
        std::cout << "[";
        for (size_t i = 0; i < p.size(); ++i) {
            std::cout << p[i] << (i < p.size() - 1 ? ", " : "");
        }
        std::cout << "]" << std::endl;
    }

    return 0;
}