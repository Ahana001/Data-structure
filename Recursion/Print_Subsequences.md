#  Print Subsequences

A subsequence is a sequence that can be derived from the given sequence by deleting zero or more elements without changing the order of the remaining elements.

```c
void subSequence(int i, string &s, string sequence, vector<string> &result){
    if (i == s.size()){
        if (sequence == ""){
            result.push_back("'Empty String'");
        }else{
            result.push_back(sequence);
        }
        return;
    }
    sequence += s[i];
    subSequence(i + 1, s, sequence, result);
    sequence.pop_back();
    subSequence(i + 1, s, sequence, result);
}

vector<string> generateSubsequences(string s){
    vector<string> result;
    subSequence(0, s, "", result);
    return result;
}
```
