class Solution {
  public String solution(int a, int b) {
      String answer = "";
      String[] week = { "THU", "FRI", "SAT", "SUN", "MON", "TUE", "WED" };
      int[] month = { 0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
      int sum = 0;
      
      if (a > 1)
          for (int i = 1; i < a; i++)
              sum += month[i];
      
      sum += b;
      answer = week[sum % 7];
      
      return answer;
  }
}
