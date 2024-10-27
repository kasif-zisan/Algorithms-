'''
  Floor -> Largest element such that arr[ind] <= x
  Ceiling -> Smallest element such that arr[ind] >= x
'''
ans = -1
def floor(arr :list[int], x :int) ->int:
  low = 0
  high = len(arr) - 1
  while low<=high:
    mid = (low+high) // 2
    if arr[mid] <= x:
      low = mid + 1
      ans = arr[mid]
    else:
      high = mid - 1
  return ans

def ceiling(arr :list[int], x :int) ->int:
  low = 0
  high = len(arr) - 1
  while low<=high:
    mid = (low+high) // 2
    if arr[mid] >= x:
      high = mid - 1
      ans = arr[mid]
    else:
      low = mid + 1
  return ans

def main():
  arr = [10, 20, 30, 40, 50]
  x = 25
  print("floor: ", floor(arr, x))
  print("ceiling: ", ceiling(arr, x))
  
if __name__ == '__main__':
  main()