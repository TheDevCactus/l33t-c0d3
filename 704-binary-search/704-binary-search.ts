// [5]

function search(nums: number[], target: number): number {
    let l = 0, h = nums.length - 1;
    if (nums[h] === target) {
        return h;
    }
    if (nums[l] === target) {
        return l;
    }
    while (l < h - 1) {
        let center = Math.ceil(l + ((h - l) / 2));
        if (nums[center] === target) {
            return center;
        }
        if (nums[center] > target) {
            h = center;
            continue;
        }
        l = center;
    }
    return -1;
};