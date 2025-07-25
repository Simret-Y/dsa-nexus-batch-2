class Solution: 
    def selectionSort(self, arr):
        size = len(arr)
        for i in range(size):
            minInd = i
            for j in range(i + 1, size):
                if arr[j] < arr[minInd]:
                    minInd = j
            arr[i], arr[minInd] = arr[minInd], arr[i]
        return arr
