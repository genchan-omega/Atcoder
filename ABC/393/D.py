def main():
  N = int(input())
  S = str(input())
  S = S.strip('0')
  one_position = [i for i, digit in enumerate(S) if digit == '1']
  N=len(one_position)
  mid = one_position[N//2]
  ans=0
  next_sum=0
  for i in range(0, mid, 1):
    if(S[i] == '1'):
      next_sum+=1
    else:
      ans += next_sum
  next_sum = 0
  for i in range(len(S)-1, mid, -1):
    if(S[i] == '1'):
      next_sum+=1
    else:
      ans += next_sum
  print(ans)

if __name__ == "__main__":
  main()