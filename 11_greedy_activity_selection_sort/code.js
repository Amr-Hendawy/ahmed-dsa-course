// 07 greedy - Activity Selection Problem

function activitySelectionSort(start, end) {
  results = [0];

  j = 0;
  for (var i = 0; i < start.length; i++) {
    if (start[i] >= end[j]) {
      results.push(i);
      j = i;
    }
  }
  return results;
}

s = [9, 10, 11, 12, 13, 15];
e = [11, 11, 12, 14, 15, 16];

console.log(activitySelectionSort(s, e));

// O(n)