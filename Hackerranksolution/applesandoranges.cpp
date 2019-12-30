void countApplesAndOranges(int s, int t, int a, int b, vector<int> apples, vector<int> oranges) {
    int count1 =0;
    int count2 = 0;
    for(int i =0; i< apples.size(); i++)
    {
        apples[i] += a;
        if(apples[i] >= s && apples[i] <= t)
        {
            count1++;
        }
    }
    for( int j = 0; j< oranges.size(); j++)
    {
        oranges[j] += b;
        if(oranges[j] >= s && oranges[j] <= t)
        {
            count2++;
        }
    }
    cout<< count1<< endl;
    cout<< count2 << endl;


}
