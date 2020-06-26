#include<bits/stdc++.h>
using namespace std;

int select_max_index(vector<int> values , vector<int> weights , int capacity)
{
    int index = -1;
    double max = 0.0;
    for(int i = 0 ; i < values.size() ; i++)
    {
        if(weights[i] > 0 && ((double)values[i]/weights[i])>max)
        {
            max = (double)values[i]/weights[i];
            index = i;
        }
    }
    return index;
}

double get_optimal_value(int capacity , vector<int> weights , vector<int> values)
{
    double value = 0.0;
    if(capacity == 0)
        return 0;
    for(int i = 0 ; i < weights.size() ; i++)
    {
        int max_index = select_max_index(values , weights , capacity);
        if(max_index >= 0)
        {
           int available_weights = min(capacity , weights[max_index]);
           value = value + (double)available_weights * (double)values[max_index]/weights[max_index];
           weights[max_index] = weights[max_index] - available_weights;
           capacity = capacity - available_weights ;
        }
        if(capacity == 0)
            break;
    }
    return value;
}

int main() {
  int n;
  int capacity;
  cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout << optimal_value << endl;
  return 0;
}
