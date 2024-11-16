class Solution{
public:
	int search(string p, string s)

{
int np = p.size(), ns = s.size();

    if (np>ns) return 0;

    vector<int>pf(256, 0),sf(256, 0);
    int count = 0;

    for (int i = 0; i< np;i++)
    {
        pf[p[i]]++;
        sf[s[i]]++;
    }

    if (pf ==sf) count++;

    for (int i =0, j =np; j < ns;i++,j++)
    {
        sf[s[j]]++;
        sf[s[i]]--;

        if(pf ==sf)
            count++;
    }

    return count;
}

};
