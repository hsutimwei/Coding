#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

/**
 * @brief 使用回溯法遞迴地生成所有不重複的排列
 * * @param nums 待排列的數組 (已排序)
 * @param used 追蹤哪些元素已被使用
 * @param currentPermutation 正在構建的當前排列
 * @param result 儲存所有排列的容器
 */
void backtrackUniquePermutations(
    const std::vector<int>& nums, 
    std::vector<bool>& used,
    std::vector<int>& currentPermutation,
    std::vector<std::vector<int>>& result) {

    // 基礎情況 (Base Case): 
    // 當當前排列的長度等於原數組長度，表示找到了一個完整的排列。
    if (currentPermutation.size() == nums.size()) {
        result.push_back(currentPermutation);
        return;
    }

    // 遞迴步驟 (Recursive Step):
    for (size_t i = 0; i < nums.size(); ++i) {
        // 1. 檢查元素是否已被使用
        if (used[i]) {
            continue;
        }

        // 2. 關鍵的去重檢查：
        // 如果當前元素 (nums[i]) 與前一個元素 (nums[i-1]) 相同，
        // 並且前一個元素 (nums[i-1]) 已經**被回溯 (used[i-1] == false)**，
        // 則跳過 nums[i]。
        // 
        // 由於數組已排序，相同的元素會相鄰。如果 nums[i-1] 已經被探索過並被標記為 '未使用'，
        // 意味著以 nums[i-1] 開頭的排列分支已經完成。
        // 我們不希望再以相同的 nums[i] 開啟另一個完全相同排列的分支。
        if (i > 0 && nums[i] == nums[i - 1] && !used[i - 1]) {
            continue;
        }

        // 3. 選擇 (Choose):
        used[i] = true;                   // 標記為已使用
        currentPermutation.push_back(nums[i]); // 添加到當前排列

        // 4. 探索 (Explore):
        backtrackUniquePermutations(nums, used, currentPermutation, result);

        // 5. 撤銷 (Unchoose / Backtrack):
        currentPermutation.pop_back();    // 從當前排列中移除
        used[i] = false;                  // 標記為未使用，供其他分支使用
    }
}

/**
 * @brief 主函數，處理排序和初始化
 * * @param nums 待排列的數組
 * @return std::vector<std::vector<int>> 包含所有不重複排列的容器
 */
std::vector<std::vector<int>> generateUniquePermutations(std::vector<int>& nums) {
    std::vector<std::vector<int>> result;
    if (nums.empty()) {
        return result;
    }

    // 排序是去重的關鍵前提
    std::sort(nums.begin(), nums.end());

    std::vector<bool> used(nums.size(), false);
    std::vector<int> currentPermutation;
    
    backtrackUniquePermutations(nums, used, currentPermutation, result);
    return result;
}

// 測試用例
int main() {
    std::vector<int> nums = {1, 1, 2}; // 帶有重複元素 '1'
    std::vector<std::vector<int>> allPermutations = generateUniquePermutations(nums);

    std::cout << "所有不重複排列 (Total: " << allPermutations.size() << "):" << std::endl;
    for (const auto& p : allPermutations) {
        std::cout << "[";
        for (size_t i = 0; i < p.size(); ++i) {
            std::cout << p[i] << (i < p.size() - 1 ? ", " : "");
        }
        std::cout << "]" << std::endl;
    }
    
    // 預期輸出 (總共 3 個):
    // [1, 1, 2]
    // [1, 2, 1]
    // [2, 1, 1]

    return 0;
}