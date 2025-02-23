def main():
  N = int(input())
  S = [input().strip() for _ in range(N)]
  S.sort(key=len)
  result = "".join(S)
  print(result)

if __name__ == "__main__":
  main()