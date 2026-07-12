/**
 * @param {number[]} candidates
 * @param {number} target
 * @return {number[][]}
 */
var combinationSum2 = function(candidates, target) {
    candidates.sort((a,b) => a-b);
    let ans = [];
    function rec(candidates,target,ans,temp,sum,idx)
    {
        if(sum === target)
        {
            ans.push([...temp]);
            return;
        }

        if(sum > target || idx >= candidates.length)
        return;

        for(let i = idx;i < candidates.length; i++)
        {
            if(i > idx && candidates[i] === candidates[i-1])
            continue;
            sum += candidates[i];
            temp.push(candidates[i]);
            rec(candidates,target,ans,temp,sum,i+1);
            sum -= candidates[i];
            temp.pop();

        }
    }

    rec(candidates,target,ans,[],0,0);
    return ans;
};
