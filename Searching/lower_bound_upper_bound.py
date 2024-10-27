'''
  Lower Bound -> Smallest index such that arr[ind] >= x
  Upper Bound -> Smallest index such that arr[ind] > x
'''
def lower_bound(arr :list[int], low_x :int) -> int:
  low = 0
  high = len(arr) - 1
  ans = len(arr)
  while low <= high:
    mid = (low+high) // 2
    if arr[mid] >= low_x:
      high = mid - 1
      ans = mid
    else:
      low = mid + 1
  return ans

def upper_bound(arr :list[int], up_x :int) -> int:
  low = 0
  high = len(arr) - 1
  k = len(arr)
  while low <= high:
    mid = (low+high) // 2
    if arr[mid] > up_x:
      high = mid - 1
      ans = mid
    else:
      low = mid + 1
  return ans    

def main():
  arr = [1, 2, 8, 10, 11, 12, 19]
  low_x = 5
  up_x = 13
  lb = lower_bound(arr, low_x)
  ub = upper_bound(arr, up_x)
  print("Lower Bound: ", lb)
  print("Upper Bound: ", ub)
  
if __name__ == '__main__':
  main()